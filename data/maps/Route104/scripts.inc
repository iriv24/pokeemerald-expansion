# 1 "data/maps/Route104/scripts.pory"

# 2 "data/maps/Route104/scripts.pory"
@ NOTE: Route 104's sail to Dewford script references local IDs from Dewford's map.
# 3 "data/maps/Route104/scripts.pory"
@  These are labeled in DewfordTown/scripts.inc
# 4 "data/maps/Route104/scripts.pory"
.set LOCALID_DAWN, 34
# 5 "data/maps/Route104/scripts.pory"

# 6 "data/maps/Route104/scripts.pory"
Route104_MapScripts::
# 7 "data/maps/Route104/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route104_OnFrame
# 8 "data/maps/Route104/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route104_OnTransition
# 9 "data/maps/Route104/scripts.pory"
	.byte 0
# 10 "data/maps/Route104/scripts.pory"

# 11 "data/maps/Route104/scripts.pory"
Route104_OnFrame:
# 12 "data/maps/Route104/scripts.pory"
	map_script_2 VAR_BOARD_BRINEY_BOAT_STATE, 1, Route104_EventScript_StartSailToDewford
# 13 "data/maps/Route104/scripts.pory"
	.2byte 0
# 14 "data/maps/Route104/scripts.pory"

# 15 "data/maps/Route104/scripts.pory"
Route104_EventScript_StartSailToDewford::
# 16 "data/maps/Route104/scripts.pory"
	lockall
# 17 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_SailToDewford
# 18 "data/maps/Route104/scripts.pory"
	end
# 19 "data/maps/Route104/scripts.pory"

# 20 "data/maps/Route104/scripts.pory"
Route104_OnTransition:
# 21 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_ShowOrHideWhiteHerbFlorist
# 22 "data/maps/Route104/scripts.pory"
	end
# 23 "data/maps/Route104/scripts.pory"

# 24 "data/maps/Route104/scripts.pory"
Route104_EventScript_ShowOrHideWhiteHerbFlorist::
# 25 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_MET_PRETTY_PETAL_SHOP_OWNER, Route104_EventScript_HideWhiteHerbFlorist
# 26 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, Route104_EventScript_HideWhiteHerbFlorist
# 27 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_104_WHITE_HERB_FLORIST
# 28 "data/maps/Route104/scripts.pory"
	return
# 29 "data/maps/Route104/scripts.pory"

# 30 "data/maps/Route104/scripts.pory"
Route104_EventScript_HideWhiteHerbFlorist::
# 31 "data/maps/Route104/scripts.pory"
	setflag FLAG_HIDE_ROUTE_104_WHITE_HERB_FLORIST
# 32 "data/maps/Route104/scripts.pory"
	return
# 33 "data/maps/Route104/scripts.pory"

# 34 "data/maps/Route104/scripts.pory"
Route104_EventScript_ExpertF::
# 35 "data/maps/Route104/scripts.pory"
	lock
# 36 "data/maps/Route104/scripts.pory"
	faceplayer
# 37 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_RECEIVED_CHESTO_BERRY_ROUTE_104, Route104_EventScript_ReceivedBerry
# 38 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_PlantBerriesInSoilTakeThis, MSGBOX_DEFAULT
# 39 "data/maps/Route104/scripts.pory"
	giveitem ITEM_CHESTO_BERRY
# 40 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 41 "data/maps/Route104/scripts.pory"
	setflag FLAG_RECEIVED_CHESTO_BERRY_ROUTE_104
# 42 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TrainersOftenMakeMonHoldBerries, MSGBOX_DEFAULT
# 43 "data/maps/Route104/scripts.pory"
	release
# 44 "data/maps/Route104/scripts.pory"
	end
# 45 "data/maps/Route104/scripts.pory"

# 46 "data/maps/Route104/scripts.pory"
Route104_EventScript_ReceivedBerry::
# 47 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TrainersOftenMakeMonHoldBerries, MSGBOX_DEFAULT
# 48 "data/maps/Route104/scripts.pory"
	release
# 49 "data/maps/Route104/scripts.pory"
	end
# 50 "data/maps/Route104/scripts.pory"

# 51 "data/maps/Route104/scripts.pory"
Route104_EventScript_WhiteHerbFlorist::
# 52 "data/maps/Route104/scripts.pory"
	lock
# 53 "data/maps/Route104/scripts.pory"
	faceplayer
# 54 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_RECEIVED_WHITE_HERB, Route104_EventScript_ReceivedWhiteHerb
# 55 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_DontNeedThisTakeIt, MSGBOX_DEFAULT
# 56 "data/maps/Route104/scripts.pory"
	giveitem ITEM_WHITE_HERB
# 57 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 58 "data/maps/Route104/scripts.pory"
	setflag FLAG_RECEIVED_WHITE_HERB
# 59 "data/maps/Route104/scripts.pory"
	release
# 60 "data/maps/Route104/scripts.pory"
	end
# 61 "data/maps/Route104/scripts.pory"

# 62 "data/maps/Route104/scripts.pory"
Route104_EventScript_ReceivedWhiteHerb::
# 63 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_FlowerShopSellingSaplings, MSGBOX_DEFAULT
# 64 "data/maps/Route104/scripts.pory"
	release
# 65 "data/maps/Route104/scripts.pory"
	end
# 66 "data/maps/Route104/scripts.pory"

# 67 "data/maps/Route104/scripts.pory"
Route104_EventScript_Girl1::
# 68 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrineyLivesInSeasideCottage, MSGBOX_NPC
# 69 "data/maps/Route104/scripts.pory"
	end
# 70 "data/maps/Route104/scripts.pory"

# 71 "data/maps/Route104/scripts.pory"
Route104_EventScript_BugCatcher::
# 72 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WhatsItLikeAtBottomOfSea, MSGBOX_SIGN
# 73 "data/maps/Route104/scripts.pory"
	end
# 74 "data/maps/Route104/scripts.pory"

# 75 "data/maps/Route104/scripts.pory"
Route104_EventScript_BrineysCottageSign::
# 76 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MrBrineysCottage, MSGBOX_SIGN
# 77 "data/maps/Route104/scripts.pory"
	end
# 78 "data/maps/Route104/scripts.pory"

# 79 "data/maps/Route104/scripts.pory"
Route104_EventScript_RouteSignPetalburg::
# 80 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RouteSignPetalburg, MSGBOX_SIGN
# 81 "data/maps/Route104/scripts.pory"
	end
# 82 "data/maps/Route104/scripts.pory"

# 83 "data/maps/Route104/scripts.pory"
Route104_EventScript_RouteSignRustboro::
# 84 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RouteSignRustboro, MSGBOX_SIGN
# 85 "data/maps/Route104/scripts.pory"
	end
# 86 "data/maps/Route104/scripts.pory"

# 87 "data/maps/Route104/scripts.pory"
Route104_EventScript_FlowerShopSign::
# 88 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_PrettyPetalFlowShop, MSGBOX_SIGN
# 89 "data/maps/Route104/scripts.pory"
	end
# 90 "data/maps/Route104/scripts.pory"

# 91 "data/maps/Route104/scripts.pory"
Route104_EventScript_TrainerTipsDoubleBattles::
# 92 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TrainerTipsDoubleBattles, MSGBOX_SIGN
# 93 "data/maps/Route104/scripts.pory"
	end
# 94 "data/maps/Route104/scripts.pory"

# 95 "data/maps/Route104/scripts.pory"
Route104_EventScript_Boy1::
# 96 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_ThrowBallAtWeakenedPokemon, MSGBOX_NPC
# 97 "data/maps/Route104/scripts.pory"
	end
# 98 "data/maps/Route104/scripts.pory"

# 99 "data/maps/Route104/scripts.pory"
Route104_EventScript_HexManiac::
# 100 "data/maps/Route104/scripts.pory"
	lock
# 101 "data/maps/Route104/scripts.pory"
	faceplayer
# 102 "data/maps/Route104/scripts.pory"
	checkitem ITEM_HEX_ORB
# 103 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route104_EventScript_HexManiac_ReceivedOrb
# 104 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TakeHexOrb, MSGBOX_DEFAULT
# 105 "data/maps/Route104/scripts.pory"
	giveitem ITEM_HEX_ORB
# 106 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 107 "data/maps/Route104/scripts.pory"
	release
# 108 "data/maps/Route104/scripts.pory"
	end
# 109 "data/maps/Route104/scripts.pory"

# 110 "data/maps/Route104/scripts.pory"
Route104_EventScript_HexManiac_ReceivedOrb::
# 111 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_OnlyThrowBallAtWildPokemon, MSGBOX_DEFAULT
# 112 "data/maps/Route104/scripts.pory"
	release
# 113 "data/maps/Route104/scripts.pory"
	end
# 114 "data/maps/Route104/scripts.pory"

# 115 "data/maps/Route104/scripts.pory"
Route104_EventScript_Boy2::
# 116 "data/maps/Route104/scripts.pory"
	lock
# 117 "data/maps/Route104/scripts.pory"
	faceplayer
# 118 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_BULLET_SEED, Route104_EventScript_ReceivedBulletSeed
# 119 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_LikeFillingMouthWithSeedsTakeThis, MSGBOX_DEFAULT
# 120 "data/maps/Route104/scripts.pory"
	giveitem ITEM_TM_BUG_BITE
# 121 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 122 "data/maps/Route104/scripts.pory"
	setflag FLAG_RECEIVED_TM_BULLET_SEED
# 123 "data/maps/Route104/scripts.pory"
	release
# 124 "data/maps/Route104/scripts.pory"
	end
# 125 "data/maps/Route104/scripts.pory"

# 126 "data/maps/Route104/scripts.pory"
Route104_EventScript_ReceivedBulletSeed::
# 127 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TMsAreOneTimeUse, MSGBOX_DEFAULT
# 128 "data/maps/Route104/scripts.pory"
	release
# 129 "data/maps/Route104/scripts.pory"
	end
# 130 "data/maps/Route104/scripts.pory"

# 131 "data/maps/Route104/scripts.pory"
Route104_EventScript_Girl2::
# 132 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_ImNotATrainer, MSGBOX_NPC
# 133 "data/maps/Route104/scripts.pory"
	end
# 134 "data/maps/Route104/scripts.pory"

# 135 "data/maps/Route104/scripts.pory"
Route104_EventScript_SailToDewford::
# 136 "data/maps/Route104/scripts.pory"
	setobjectsubpriority LOCALID_BRINEY_R104, MAP_ROUTE104, 0
# 137 "data/maps/Route104/scripts.pory"
	setobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_ROUTE104, 0
# 138 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_BRINEY_R104, Route104_Movement_BrineyBoardBoat
# 139 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 140 "data/maps/Route104/scripts.pory"
	removeobject LOCALID_BRINEY_R104
# 141 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerBoardBoat
# 142 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 143 "data/maps/Route104/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_ROUTE104
# 144 "data/maps/Route104/scripts.pory"
	call Common_EventScript_PlayBrineysBoatMusic
# 145 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_ENABLE_NORMAN_MATCH_CALL, Route104_EventScript_SailToDewfordNoCall
# 146 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_ENABLE_NORMAN_MATCH_CALL, Route104_EventScript_SailToDewfordDadCalls
# 147 "data/maps/Route104/scripts.pory"
	end
# 148 "data/maps/Route104/scripts.pory"

# 149 "data/maps/Route104/scripts.pory"
Route104_EventScript_SailToDewfordNoCall::
# 150 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_BOAT_R104, Route104_Movement_SailToDewford
# 151 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_SailToDewford
# 152 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 153 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_ArriveInDewford
# 154 "data/maps/Route104/scripts.pory"

# 155 "data/maps/Route104/scripts.pory"
Route104_EventScript_SailToDewfordDadCalls::
# 156 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_BOAT_R104, Route104_Movement_SailToDewfordBeforeDadCalls
# 157 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_SailToDewfordBeforeDadCalls
# 158 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 159 "data/maps/Route104/scripts.pory"
	pokenavcall Route104_Text_DadPokenavCall
# 160 "data/maps/Route104/scripts.pory"
	waitmessage
# 161 "data/maps/Route104/scripts.pory"
	delay 30
# 162 "data/maps/Route104/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 163 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RegisteredDadInPokenav, MSGBOX_DEFAULT
# 164 "data/maps/Route104/scripts.pory"
	waitfanfare
# 165 "data/maps/Route104/scripts.pory"
	closemessage
# 166 "data/maps/Route104/scripts.pory"
	delay 30
# 167 "data/maps/Route104/scripts.pory"
	setflag FLAG_ENABLE_NORMAN_MATCH_CALL
# 168 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_SailToDewfordAfterDadCalls
# 169 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_BOAT_R104, Route104_Movement_SailToDewfordAfterDadCalls, MAP_ROUTE104
# 170 "data/maps/Route104/scripts.pory"
	waitmovement LOCALID_BOAT_R104, MAP_ROUTE104
# 171 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 172 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_ArriveInDewford
# 173 "data/maps/Route104/scripts.pory"

# 174 "data/maps/Route104/scripts.pory"
Route104_EventScript_ArriveInDewford::
# 175 "data/maps/Route104/scripts.pory"
	delay 50
# 176 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerExitBoat
# 177 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 178 "data/maps/Route104/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 179 "data/maps/Route104/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN
# 180 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerMoveForBriney
# 181 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 182 "data/maps/Route104/scripts.pory"
	setobjectxyperm LOCALID_BRINEY_DEWFORD, 12, 8
# 183 "data/maps/Route104/scripts.pory"
	addobject LOCALID_BRINEY_DEWFORD
# 184 "data/maps/Route104/scripts.pory"
	setobjectsubpriority LOCALID_BRINEY_DEWFORD, MAP_DEWFORD_TOWN, 0
# 185 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN
# 186 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_BRINEY_DEWFORD, Route104_Movement_BrineyExitBoat
# 187 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 188 "data/maps/Route104/scripts.pory"
	addobject LOCALID_BOAT_DEWFORD
# 189 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
# 190 "data/maps/Route104/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 191 "data/maps/Route104/scripts.pory"
	setflag FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT
# 192 "data/maps/Route104/scripts.pory"
	hideobjectat LOCALID_BOAT_R104, MAP_ROUTE104
# 193 "data/maps/Route104/scripts.pory"
	copyvar VAR_BRINEY_LOCATION, VAR_0x8008
# 194 "data/maps/Route104/scripts.pory"
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_ROUTE104
# 195 "data/maps/Route104/scripts.pory"
	resetobjectsubpriority LOCALID_BRINEY_DEWFORD, MAP_DEWFORD_TOWN
# 196 "data/maps/Route104/scripts.pory"
	copyobjectxytoperm LOCALID_BRINEY_DEWFORD
# 197 "data/maps/Route104/scripts.pory"
	setvar VAR_BOARD_BRINEY_BOAT_STATE, 0
# 198 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_DELIVERED_STEVEN_LETTER, Route104_EventScript_DeliverLetterReminder
# 199 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_DELIVERED_STEVEN_LETTER, Route104_EventScript_LandedInDewford
# 200 "data/maps/Route104/scripts.pory"
	end
# 201 "data/maps/Route104/scripts.pory"

# 202 "data/maps/Route104/scripts.pory"
Route104_EventScript_DeliverLetterReminder::
# 203 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_LandedInDewfordDeliverLetter, MSGBOX_DEFAULT
# 204 "data/maps/Route104/scripts.pory"
	releaseall
# 205 "data/maps/Route104/scripts.pory"
	end
# 206 "data/maps/Route104/scripts.pory"

# 207 "data/maps/Route104/scripts.pory"
Route104_EventScript_LandedInDewford::
# 208 "data/maps/Route104/scripts.pory"
	msgbox DewfordTown_Text_BrineyLandedInDewford, MSGBOX_DEFAULT
# 209 "data/maps/Route104/scripts.pory"
	releaseall
# 210 "data/maps/Route104/scripts.pory"
	end
# 211 "data/maps/Route104/scripts.pory"

# 212 "data/maps/Route104/scripts.pory"
Route104_Movement_SailToDewfordBeforeDadCalls:
# 213 "data/maps/Route104/scripts.pory"
	walk_down
# 214 "data/maps/Route104/scripts.pory"
	walk_down
# 215 "data/maps/Route104/scripts.pory"
	walk_down
# 216 "data/maps/Route104/scripts.pory"
	walk_down
# 217 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 218 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 219 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 220 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 221 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 222 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 223 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 224 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 225 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 226 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 227 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 228 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 229 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 230 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 231 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 232 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 233 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 234 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 235 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 236 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 237 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 238 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 239 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 240 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 241 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 242 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 243 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 244 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 245 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 246 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 247 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 248 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 249 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 250 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 251 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 252 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 253 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 254 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 255 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 256 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 257 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 258 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 259 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 260 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 261 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 262 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 263 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 264 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 265 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 266 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 267 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 268 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 269 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 270 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 271 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 272 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 273 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 274 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 275 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 276 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 277 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 278 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 279 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 280 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 281 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 282 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 283 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 284 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 285 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 286 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 287 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 288 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 289 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 290 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 291 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 292 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 293 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 294 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 295 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 296 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 297 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 298 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 299 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 300 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 301 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 302 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 303 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 304 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 305 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 306 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 307 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 308 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 309 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 310 "data/maps/Route104/scripts.pory"
	step_end
# 311 "data/maps/Route104/scripts.pory"

# 312 "data/maps/Route104/scripts.pory"
Route104_Movement_SailToDewfordAfterDadCalls:
# 313 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 314 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 315 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 316 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 317 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 318 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 319 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 320 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 321 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 322 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 323 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 324 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 325 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 326 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 327 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 328 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 329 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 330 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 331 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 332 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 333 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 334 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 335 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 336 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 337 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 338 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 339 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 340 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 341 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 342 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 343 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 344 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 345 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 346 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 347 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 348 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 349 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 350 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 351 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 352 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 353 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 354 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 355 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 356 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 357 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 358 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 359 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 360 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 361 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 362 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 363 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 364 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 365 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 366 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 367 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 368 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 369 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 370 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 371 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 372 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 373 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 374 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 375 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 376 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 377 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 378 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 379 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 380 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 381 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 382 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 383 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 384 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 385 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 386 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 387 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 388 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 389 "data/maps/Route104/scripts.pory"
	walk_right
# 390 "data/maps/Route104/scripts.pory"
	walk_right
# 391 "data/maps/Route104/scripts.pory"
	walk_down
# 392 "data/maps/Route104/scripts.pory"
	walk_down
# 393 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 394 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 395 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 396 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 397 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 398 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 399 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 400 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 401 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 402 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 403 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 404 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 405 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 406 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 407 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 408 "data/maps/Route104/scripts.pory"
	walk_down
# 409 "data/maps/Route104/scripts.pory"
	walk_down
# 410 "data/maps/Route104/scripts.pory"
	step_end
# 411 "data/maps/Route104/scripts.pory"

# 412 "data/maps/Route104/scripts.pory"
Route104_Movement_SailToDewford:
# 413 "data/maps/Route104/scripts.pory"
	walk_down
# 414 "data/maps/Route104/scripts.pory"
	walk_down
# 415 "data/maps/Route104/scripts.pory"
	walk_down
# 416 "data/maps/Route104/scripts.pory"
	walk_down
# 417 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 418 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 419 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 420 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 421 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 422 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 423 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 424 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 425 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 426 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 427 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 428 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 429 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 430 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 431 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 432 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 433 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 434 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 435 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 436 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 437 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 438 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 439 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 440 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 441 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 442 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 443 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 444 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 445 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 446 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 447 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 448 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 449 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 450 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 451 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 452 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 453 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 454 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 455 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 456 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 457 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 458 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 459 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 460 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 461 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 462 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 463 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 464 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 465 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 466 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 467 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 468 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 469 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 470 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 471 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 472 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 473 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 474 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 475 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 476 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 477 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 478 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 479 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 480 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 481 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 482 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 483 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 484 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 485 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 486 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 487 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 488 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 489 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 490 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 491 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 492 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 493 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 494 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 495 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 496 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 497 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 498 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 499 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 500 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 501 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 502 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 503 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 504 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 505 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 506 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 507 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 508 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 509 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 510 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 511 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 512 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 513 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 514 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 515 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 516 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 517 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 518 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 519 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 520 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 521 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 522 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 523 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 524 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 525 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 526 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 527 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 528 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 529 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 530 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 531 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 532 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 533 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 534 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 535 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 536 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 537 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 538 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 539 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 540 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 541 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 542 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 543 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 544 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 545 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 546 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 547 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 548 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 549 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 550 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 551 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 552 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 553 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 554 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 555 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 556 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 557 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 558 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 559 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 560 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 561 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 562 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 563 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 564 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 565 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 566 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 567 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 568 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 569 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 570 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 571 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 572 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 573 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 574 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 575 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 576 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 577 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 578 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 579 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 580 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 581 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 582 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 583 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 584 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 585 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 586 "data/maps/Route104/scripts.pory"
	walk_right
# 587 "data/maps/Route104/scripts.pory"
	walk_right
# 588 "data/maps/Route104/scripts.pory"
	walk_down
# 589 "data/maps/Route104/scripts.pory"
	walk_down
# 590 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 591 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 592 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 593 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 594 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 595 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 596 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 597 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 598 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 599 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 600 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 601 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 602 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 603 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 604 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 605 "data/maps/Route104/scripts.pory"
	walk_down
# 606 "data/maps/Route104/scripts.pory"
	walk_down
# 607 "data/maps/Route104/scripts.pory"
	step_end
# 608 "data/maps/Route104/scripts.pory"

# 609 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerBoardBoat:
# 610 "data/maps/Route104/scripts.pory"
	walk_left
# 611 "data/maps/Route104/scripts.pory"
	walk_down
# 612 "data/maps/Route104/scripts.pory"
	walk_down
# 613 "data/maps/Route104/scripts.pory"
	step_end
# 614 "data/maps/Route104/scripts.pory"

# 615 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerExitBoat:
# 616 "data/maps/Route104/scripts.pory"
	walk_down
# 617 "data/maps/Route104/scripts.pory"
	step_end
# 618 "data/maps/Route104/scripts.pory"

# 619 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerMoveForBriney:
# 620 "data/maps/Route104/scripts.pory"
	walk_down
# 621 "data/maps/Route104/scripts.pory"
	walk_left
# 622 "data/maps/Route104/scripts.pory"
	walk_in_place_faster_right
# 623 "data/maps/Route104/scripts.pory"
	step_end
# 624 "data/maps/Route104/scripts.pory"

# 625 "data/maps/Route104/scripts.pory"
Route104_Movement_BrineyBoardBoat:
# 626 "data/maps/Route104/scripts.pory"
	walk_down
# 627 "data/maps/Route104/scripts.pory"
	walk_down
# 628 "data/maps/Route104/scripts.pory"
	step_end
# 629 "data/maps/Route104/scripts.pory"

# 630 "data/maps/Route104/scripts.pory"
Route104_Movement_BrineyExitBoat:
# 631 "data/maps/Route104/scripts.pory"
	walk_down
# 632 "data/maps/Route104/scripts.pory"
	walk_in_place_faster_left
# 633 "data/maps/Route104/scripts.pory"
	step_end
# 634 "data/maps/Route104/scripts.pory"

# 635 "data/maps/Route104/scripts.pory"
Route104_EventScript_Ivan::
# 636 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_IVAN, Route104_Text_IvanIntro, Route104_Text_IvanDefeat
# 637 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_IvanPostBattle, MSGBOX_AUTOCLOSE
# 638 "data/maps/Route104/scripts.pory"
	end
# 639 "data/maps/Route104/scripts.pory"

# 640 "data/maps/Route104/scripts.pory"
Route104_EventScript_Billy::
# 641 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_BILLY, Route104_Text_BillyIntro, Route104_Text_BillyDefeat
# 642 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BillyPostBattle, MSGBOX_AUTOCLOSE
# 643 "data/maps/Route104/scripts.pory"
	end
# 644 "data/maps/Route104/scripts.pory"

# 645 "data/maps/Route104/scripts.pory"
Route104_EventScript_Haley::
# 646 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_HALEY_1, Route104_Text_HaleyIntro, Route104_Text_HaleyDefeat, Route104_EventScript_TryRegisterHaleyAfterBattle
# 647 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 648 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route104_EventScript_RematchHaley
# 649 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8004, TRAINER_HALEY_1
# 650 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 651 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route104_EventScript_TryRegisterHaley
# 652 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyPostBattle, MSGBOX_DEFAULT
# 653 "data/maps/Route104/scripts.pory"
	release
# 654 "data/maps/Route104/scripts.pory"
	end
# 655 "data/maps/Route104/scripts.pory"

# 656 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterHaleyAfterBattle::
# 657 "data/maps/Route104/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 658 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 659 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterHaleyAfterBattle
# 660 "data/maps/Route104/scripts.pory"
	release
# 661 "data/maps/Route104/scripts.pory"
	end
# 662 "data/maps/Route104/scripts.pory"

# 663 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterHaleyAfterBattle::
# 664 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyRegister2, MSGBOX_DEFAULT
# 665 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_HALEY_1
# 666 "data/maps/Route104/scripts.pory"
	release
# 667 "data/maps/Route104/scripts.pory"
	end
# 668 "data/maps/Route104/scripts.pory"

# 669 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterHaley::
# 670 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterHaley
# 671 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyPostBattle, MSGBOX_DEFAULT
# 672 "data/maps/Route104/scripts.pory"
	release
# 673 "data/maps/Route104/scripts.pory"
	end
# 674 "data/maps/Route104/scripts.pory"

# 675 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterHaley::
# 676 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyRegister1, MSGBOX_DEFAULT
# 677 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_HALEY_1
# 678 "data/maps/Route104/scripts.pory"
	release
# 679 "data/maps/Route104/scripts.pory"
	end
# 680 "data/maps/Route104/scripts.pory"

# 681 "data/maps/Route104/scripts.pory"
Route104_EventScript_RematchHaley::
# 682 "data/maps/Route104/scripts.pory"
	trainerbattle_rematch TRAINER_HALEY_1, Route104_Text_HaleyRematchIntro, Route104_Text_HaleyRematchDefeat
# 683 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyPostRematch, MSGBOX_AUTOCLOSE
# 684 "data/maps/Route104/scripts.pory"
	end
# 685 "data/maps/Route104/scripts.pory"

# 686 "data/maps/Route104/scripts.pory"
Route104_EventScript_Winston::
# 687 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_WINSTON_1, Route104_Text_WinstonIntro, Route104_Text_WinstonDefeat, Route104_EventScript_TryRegisterWinstonAfterBattle
# 688 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 689 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route104_EventScript_RematchWinston
# 690 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8004, TRAINER_WINSTON_1
# 691 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 692 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route104_EventScript_TryRegisterWinston
# 693 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonPostBattle, MSGBOX_DEFAULT
# 694 "data/maps/Route104/scripts.pory"
	release
# 695 "data/maps/Route104/scripts.pory"
	end
# 696 "data/maps/Route104/scripts.pory"

# 697 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterWinstonAfterBattle::
# 698 "data/maps/Route104/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 699 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 700 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterWinstonAfterBattle
# 701 "data/maps/Route104/scripts.pory"
	release
# 702 "data/maps/Route104/scripts.pory"
	end
# 703 "data/maps/Route104/scripts.pory"

# 704 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterWinstonAfterBattle::
# 705 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonRegister2, MSGBOX_DEFAULT
# 706 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_WINSTON_1
# 707 "data/maps/Route104/scripts.pory"
	release
# 708 "data/maps/Route104/scripts.pory"
	end
# 709 "data/maps/Route104/scripts.pory"

# 710 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterWinston::
# 711 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterWinston
# 712 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonPostBattle, MSGBOX_DEFAULT
# 713 "data/maps/Route104/scripts.pory"
	release
# 714 "data/maps/Route104/scripts.pory"
	end
# 715 "data/maps/Route104/scripts.pory"

# 716 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterWinston::
# 717 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonRegister1, MSGBOX_DEFAULT
# 718 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_WINSTON_1
# 719 "data/maps/Route104/scripts.pory"
	release
# 720 "data/maps/Route104/scripts.pory"
	end
# 721 "data/maps/Route104/scripts.pory"

# 722 "data/maps/Route104/scripts.pory"
Route104_EventScript_RematchWinston::
# 723 "data/maps/Route104/scripts.pory"
	trainerbattle_rematch TRAINER_WINSTON_1, Route104_Text_WinstonRematchIntro, Route104_Text_WinstonRematchDefeat
# 724 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonPostRematch, MSGBOX_AUTOCLOSE
# 725 "data/maps/Route104/scripts.pory"
	end
# 726 "data/maps/Route104/scripts.pory"

# 727 "data/maps/Route104/scripts.pory"
Route104_EventScript_Cindy::
# 728 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_CINDY_1, Route104_Text_CindyIntro, Route104_Text_CindyDefeat, Route104_EventScript_TryRegisterCindyAfterBattle
# 729 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 730 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route104_EventScript_RematchCindy
# 731 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8004, TRAINER_CINDY_1
# 732 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 733 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route104_EventScript_TryRegisterCindy
# 734 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyPostBattle, MSGBOX_DEFAULT
# 735 "data/maps/Route104/scripts.pory"
	release
# 736 "data/maps/Route104/scripts.pory"
	end
# 737 "data/maps/Route104/scripts.pory"

# 738 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterCindyAfterBattle::
# 739 "data/maps/Route104/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 740 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 741 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterCindyAfterBattle
# 742 "data/maps/Route104/scripts.pory"
	release
# 743 "data/maps/Route104/scripts.pory"
	end
# 744 "data/maps/Route104/scripts.pory"

# 745 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterCindyAfterBattle::
# 746 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyRegister2, MSGBOX_DEFAULT
# 747 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_CINDY_1
# 748 "data/maps/Route104/scripts.pory"
	release
# 749 "data/maps/Route104/scripts.pory"
	end
# 750 "data/maps/Route104/scripts.pory"

# 751 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterCindy::
# 752 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterCindy
# 753 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyPostBattle, MSGBOX_DEFAULT
# 754 "data/maps/Route104/scripts.pory"
	release
# 755 "data/maps/Route104/scripts.pory"
	end
# 756 "data/maps/Route104/scripts.pory"

# 757 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterCindy::
# 758 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyRegister1, MSGBOX_DEFAULT
# 759 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_CINDY_1
# 760 "data/maps/Route104/scripts.pory"
	release
# 761 "data/maps/Route104/scripts.pory"
	end
# 762 "data/maps/Route104/scripts.pory"

# 763 "data/maps/Route104/scripts.pory"
Route104_EventScript_RematchCindy::
# 764 "data/maps/Route104/scripts.pory"
	trainerbattle_rematch TRAINER_CINDY_1, Route104_Text_CindyRematchIntro, Route104_Text_CindyRematchDefeat
# 765 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyPostRematch, MSGBOX_AUTOCLOSE
# 766 "data/maps/Route104/scripts.pory"
	end
# 767 "data/maps/Route104/scripts.pory"

# 768 "data/maps/Route104/scripts.pory"
Route104_EventScript_Gina::
# 769 "data/maps/Route104/scripts.pory"
	trainerbattle_double TRAINER_GINA_AND_MIA_1, Route104_Text_GinaIntro, Route104_Text_GinaDefeat, Route104_Text_GinaNotEnoughMons
# 770 "data/maps/Route104/scripts.pory"
	special GetPlayerBigGuyGirlString
# 771 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_GinaPostBattle, MSGBOX_DEFAULT
# 772 "data/maps/Route104/scripts.pory"
	release
# 773 "data/maps/Route104/scripts.pory"
	end
# 774 "data/maps/Route104/scripts.pory"

# 775 "data/maps/Route104/scripts.pory"
Route104_EventScript_Mia::
# 776 "data/maps/Route104/scripts.pory"
	trainerbattle_double TRAINER_GINA_AND_MIA_1, Route104_Text_MiaIntro, Route104_Text_MiaDefeat, Route104_Text_MiaNotEnoughMons
# 777 "data/maps/Route104/scripts.pory"
	special GetPlayerBigGuyGirlString
# 778 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MiaPostBattle, MSGBOX_DEFAULT
# 779 "data/maps/Route104/scripts.pory"
	release
# 780 "data/maps/Route104/scripts.pory"
	end
# 781 "data/maps/Route104/scripts.pory"

# 782 "data/maps/Route104/scripts.pory"
Route104_EventScript_Darian::
# 783 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_DARIAN, Route104_Text_DarianIntro, Route104_Text_DarianDefeat
# 784 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_DarianPostBattle, MSGBOX_AUTOCLOSE
# 785 "data/maps/Route104/scripts.pory"
	end
# 786 "data/maps/Route104/scripts.pory"

# 787 "data/maps/Route104/scripts.pory"
Route104_Text_BrineyLivesInSeasideCottage:
# 788 "data/maps/Route104/scripts.pory"
	.string "That seaside cottage is where\n"
# 789 "data/maps/Route104/scripts.pory"
	.string "Mr. Briney lives.\p"
# 790 "data/maps/Route104/scripts.pory"
	.string "He was once a mighty sailor who never\n"
# 791 "data/maps/Route104/scripts.pory"
	.string "feared the sea, however stormy.$"
# 792 "data/maps/Route104/scripts.pory"

# 793 "data/maps/Route104/scripts.pory"
Route104_Text_WhatsItLikeAtBottomOfSea:
# 794 "data/maps/Route104/scripts.pory"
	.string "The sea, huh?\p"
# 795 "data/maps/Route104/scripts.pory"
	.string "I wonder what it's like at the bottom\n"
# 796 "data/maps/Route104/scripts.pory"
	.string "of the sea?$"
# 797 "data/maps/Route104/scripts.pory"

# 798 "data/maps/Route104/scripts.pory"
Route104_Text_ThrowBallAtWeakenedPokemon:
# 799 "data/maps/Route104/scripts.pory"
	.string "If you're going to throw a Poké Ball,\n"
# 800 "data/maps/Route104/scripts.pory"
	.string "weaken the wild Pokémon first.\p"
# 801 "data/maps/Route104/scripts.pory"
	.string "It will be easier to catch if it's been\n"
# 802 "data/maps/Route104/scripts.pory"
	.string "poisoned, burned, or lulled to sleep.$"
# 803 "data/maps/Route104/scripts.pory"

# 804 "data/maps/Route104/scripts.pory"
Route104_Text_OnlyThrowBallAtWildPokemon:
# 805 "data/maps/Route104/scripts.pory"
	.string "You're a thief if you try to steal\n"
# 806 "data/maps/Route104/scripts.pory"
	.string "someone else's Pokémon.\p"
# 807 "data/maps/Route104/scripts.pory"
	.string "You should throw Poké Balls only at\n"
# 808 "data/maps/Route104/scripts.pory"
	.string "wild Pokémon.$"
# 809 "data/maps/Route104/scripts.pory"

# 810 "data/maps/Route104/scripts.pory"
Route104_Text_ImNotATrainer:
# 811 "data/maps/Route104/scripts.pory"
	.string "Oh, no, I'm not a trainer.\p"
# 812 "data/maps/Route104/scripts.pory"
	.string "But that's right, if trainers lock eyes,\n"
# 813 "data/maps/Route104/scripts.pory"
	.string "it's a challenge to battle.\p"
# 814 "data/maps/Route104/scripts.pory"
	.string "If you don't want to battle, stay out\n"
# 815 "data/maps/Route104/scripts.pory"
	.string "of their sight.$"
# 816 "data/maps/Route104/scripts.pory"

# 817 "data/maps/Route104/scripts.pory"
Route104_Text_LikeFillingMouthWithSeedsTakeThis:
# 818 "data/maps/Route104/scripts.pory"
	.string "My Pokémon like eating seeds and\n"
# 819 "data/maps/Route104/scripts.pory"
	.string "Berries with this move.\p"
# 820 "data/maps/Route104/scripts.pory"
	.string "You can have this, so you try it out!$"
# 821 "data/maps/Route104/scripts.pory"

# 822 "data/maps/Route104/scripts.pory"
Route104_Text_TMsAreOneTimeUse:
# 823 "data/maps/Route104/scripts.pory"
	.string "And guess what!\n"
# 824 "data/maps/Route104/scripts.pory"
	.string "Now, you can use a TM, as many\l"
# 825 "data/maps/Route104/scripts.pory"
	.string "times as you want! Isn't that great?$"
# 826 "data/maps/Route104/scripts.pory"

# 827 "data/maps/Route104/scripts.pory"
Route104_Text_DontNeedThisTakeIt:
# 828 "data/maps/Route104/scripts.pory"
	.string "This Flower Shop started selling\n"
# 829 "data/maps/Route104/scripts.pory"
	.string "saplings recently.\p"
# 830 "data/maps/Route104/scripts.pory"
	.string "It made me so happy, I went overboard\n"
# 831 "data/maps/Route104/scripts.pory"
	.string "shopping.\p"
# 832 "data/maps/Route104/scripts.pory"
	.string "I don't need this White Herb anymore.\n"
# 833 "data/maps/Route104/scripts.pory"
	.string "Would you take it, please?$"
# 834 "data/maps/Route104/scripts.pory"

# 835 "data/maps/Route104/scripts.pory"
Route104_Text_FlowerShopSellingSaplings:
# 836 "data/maps/Route104/scripts.pory"
	.string "This Fower Shop started selling\n"
# 837 "data/maps/Route104/scripts.pory"
	.string "saplings recently.\p"
# 838 "data/maps/Route104/scripts.pory"
	.string "It made me so happy, I went overboard\n"
# 839 "data/maps/Route104/scripts.pory"
	.string "shopping. Where should I put them?$"
# 840 "data/maps/Route104/scripts.pory"

# 841 "data/maps/Route104/scripts.pory"
Route104_Text_MrBrineysCottage:
# 842 "data/maps/Route104/scripts.pory"
	.string "MR. BRINEY'S COTTAGE$"
# 843 "data/maps/Route104/scripts.pory"

# 844 "data/maps/Route104/scripts.pory"
Route104_Text_RouteSignPetalburg:
# 845 "data/maps/Route104/scripts.pory"
	.string "ROUTE 1O4\n"
# 846 "data/maps/Route104/scripts.pory"
	.string "{RIGHT_ARROW} PETALBURG CITY$"
# 847 "data/maps/Route104/scripts.pory"

# 848 "data/maps/Route104/scripts.pory"
Route104_Text_RouteSignRustboro:
# 849 "data/maps/Route104/scripts.pory"
	.string "ROUTE 1O4\n"
# 850 "data/maps/Route104/scripts.pory"
	.string "{UP_ARROW} RUSTBORO CITY$"
# 851 "data/maps/Route104/scripts.pory"

# 852 "data/maps/Route104/scripts.pory"
Route104_Text_PrettyPetalFlowShop:
# 853 "data/maps/Route104/scripts.pory"
	.string "PRETTY PETAL FLOWER SHOP$"
# 854 "data/maps/Route104/scripts.pory"

# 855 "data/maps/Route104/scripts.pory"
Route104_Text_TrainerTipsDoubleBattles:
# 856 "data/maps/Route104/scripts.pory"
	.string "Trainer Tips\p"
# 857 "data/maps/Route104/scripts.pory"
	.string "You can rearrange your Pokémon party\n"
# 858 "data/maps/Route104/scripts.pory"
	.string "more efficiently by using the “Select”\l"
# 859 "data/maps/Route104/scripts.pory"
	.string "button or the “R” button while\l"
# 860 "data/maps/Route104/scripts.pory"
	.string "hovering over a Pokémon in\l"
# 861 "data/maps/Route104/scripts.pory"
	.string "the party menu.$"
# 862 "data/maps/Route104/scripts.pory"

# 863 "data/maps/Route104/scripts.pory"
Route104_Text_MayWeShouldRegister:
# 864 "data/maps/Route104/scripts.pory"
	.string "May: Oh, hi, {PLAYER}{KUN}!\p"
# 865 "data/maps/Route104/scripts.pory"
	.string "Devon upgraded your PokéNav with\n"
# 866 "data/maps/Route104/scripts.pory"
	.string "the Match Call system, huh?\p"
# 867 "data/maps/Route104/scripts.pory"
	.string "We should register each other so we\n"
# 868 "data/maps/Route104/scripts.pory"
	.string "can get in contact anytime.$"
# 869 "data/maps/Route104/scripts.pory"

# 870 "data/maps/Route104/scripts.pory"
Route104_Text_RegisteredMay:
# 871 "data/maps/Route104/scripts.pory"
	.string "{PLAYER} registered May\n"
# 872 "data/maps/Route104/scripts.pory"
	.string "in the PokéNav.$"
# 873 "data/maps/Route104/scripts.pory"

# 874 "data/maps/Route104/scripts.pory"
Route104_Text_MayHowsYourPokedex:
# 875 "data/maps/Route104/scripts.pory"
	.string "May: Oh, by the way, {PLAYER}{KUN},\n"
# 876 "data/maps/Route104/scripts.pory"
	.string "how's your Pokédex coming along?$"
# 877 "data/maps/Route104/scripts.pory"

# 878 "data/maps/Route104/scripts.pory"
Route104_Text_MayMinesDecentLetsBattle:
# 879 "data/maps/Route104/scripts.pory"
	.string "Mine's looking pretty decent.\n"
# 880 "data/maps/Route104/scripts.pory"
	.string "So…\l"
# 881 "data/maps/Route104/scripts.pory"
	.string "How about a little battle?$"
# 882 "data/maps/Route104/scripts.pory"

# 883 "data/maps/Route104/scripts.pory"
Route104_Text_MayHaventRaisedPokemon:
# 884 "data/maps/Route104/scripts.pory"
	.string "May: Oh, what's the matter?\p"
# 885 "data/maps/Route104/scripts.pory"
	.string "Haven't you caught or raised your\n"
# 886 "data/maps/Route104/scripts.pory"
	.string "Pokémon very much?\p"
# 887 "data/maps/Route104/scripts.pory"
	.string "That's not very good for a trainer!$"
# 888 "data/maps/Route104/scripts.pory"

# 889 "data/maps/Route104/scripts.pory"
Route104_Text_MayLetsBattle:
# 890 "data/maps/Route104/scripts.pory"
	.string "May: So, what do you think?\n"
# 891 "data/maps/Route104/scripts.pory"
	.string "How about a little battle here?$"
# 892 "data/maps/Route104/scripts.pory"

# 893 "data/maps/Route104/scripts.pory"
Route104_Text_MayIntro:
# 894 "data/maps/Route104/scripts.pory"
	.string "May: You just became a trainer,\n"
# 895 "data/maps/Route104/scripts.pory"
	.string "{PLAYER}{KUN}. I'm not going to lose!$"
# 896 "data/maps/Route104/scripts.pory"

# 897 "data/maps/Route104/scripts.pory"
Route104_Text_MayDefeat:
# 898 "data/maps/Route104/scripts.pory"
	.string "Yikes!\n"
# 899 "data/maps/Route104/scripts.pory"
	.string "You're better than I expected!$"
# 900 "data/maps/Route104/scripts.pory"

# 901 "data/maps/Route104/scripts.pory"
Route104_Text_MayPostBattle:
# 902 "data/maps/Route104/scripts.pory"
	.string "May: I can tell you've gotten pretty\n"
# 903 "data/maps/Route104/scripts.pory"
	.string "good with the way you handle Pokémon.\p"
# 904 "data/maps/Route104/scripts.pory"
	.string "But instead of only making them\n"
# 905 "data/maps/Route104/scripts.pory"
	.string "battle, you should be like Mr. Briney.\p"
# 906 "data/maps/Route104/scripts.pory"
	.string "It's important to become friends with\n"
# 907 "data/maps/Route104/scripts.pory"
	.string "Pokémon, too.$"
# 908 "data/maps/Route104/scripts.pory"

# 909 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanWeShouldRegister:
# 910 "data/maps/Route104/scripts.pory"
	.string "Brendan: Oh, hey, {PLAYER}!\p"
# 911 "data/maps/Route104/scripts.pory"
	.string "Cool, you had Devon install the Match\n"
# 912 "data/maps/Route104/scripts.pory"
	.string "Call system on your PokéNav!\p"
# 913 "data/maps/Route104/scripts.pory"
	.string "Let's register each other in our\n"
# 914 "data/maps/Route104/scripts.pory"
	.string "PokéNavs so we can keep in touch.$"
# 915 "data/maps/Route104/scripts.pory"

# 916 "data/maps/Route104/scripts.pory"
Route104_Text_RegisteredBrendan:
# 917 "data/maps/Route104/scripts.pory"
	.string "{PLAYER} registered Brendan\n"
# 918 "data/maps/Route104/scripts.pory"
	.string "in the PokéNav.$"
# 919 "data/maps/Route104/scripts.pory"

# 920 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanHowsYourPokedex:
# 921 "data/maps/Route104/scripts.pory"
	.string "Brendan: {PLAYER}, how's your Pokédex?\n"
# 922 "data/maps/Route104/scripts.pory"
	.string "Have you filled in any pages yet?$"
# 923 "data/maps/Route104/scripts.pory"

# 924 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanDoingGreatLetsBattle:
# 925 "data/maps/Route104/scripts.pory"
	.string "Me, I'm doing great!\p"
# 926 "data/maps/Route104/scripts.pory"
	.string "Want to check out how good I am with\n"
# 927 "data/maps/Route104/scripts.pory"
	.string "a battle?$"
# 928 "data/maps/Route104/scripts.pory"

# 929 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanNoConfidence:
# 930 "data/maps/Route104/scripts.pory"
	.string "Brendan: What's the matter? Don't have\n"
# 931 "data/maps/Route104/scripts.pory"
	.string "any confidence in your Pokémon?$"
# 932 "data/maps/Route104/scripts.pory"

# 933 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanLetsBattle:
# 934 "data/maps/Route104/scripts.pory"
	.string "Brendan: What's up?\n"
# 935 "data/maps/Route104/scripts.pory"
	.string "Want to have a battle with me?$"
# 936 "data/maps/Route104/scripts.pory"

# 937 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanIntro:
# 938 "data/maps/Route104/scripts.pory"
	.string "Brendan: I know you just became\n"
# 939 "data/maps/Route104/scripts.pory"
	.string "a trainer, but I won't go easy!$"
# 940 "data/maps/Route104/scripts.pory"

# 941 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanDefeat:
# 942 "data/maps/Route104/scripts.pory"
	.string "Hmm…\n"
# 943 "data/maps/Route104/scripts.pory"
	.string "You're pretty good.$"
# 944 "data/maps/Route104/scripts.pory"

# 945 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanPostBattle:
# 946 "data/maps/Route104/scripts.pory"
	.string "Brendan: You've gotten pretty decent\n"
# 947 "data/maps/Route104/scripts.pory"
	.string "at handling Pokémon.\p"
# 948 "data/maps/Route104/scripts.pory"
	.string "But, you know, you shouldn't just be\n"
# 949 "data/maps/Route104/scripts.pory"
	.string "making Pokémon battle.\p"
# 950 "data/maps/Route104/scripts.pory"
	.string "Like Mr. Briney, it's important to\n"
# 951 "data/maps/Route104/scripts.pory"
	.string "become friends with your Pokémon.$"
# 952 "data/maps/Route104/scripts.pory"

# 953 "data/maps/Route104/scripts.pory"
Route104_Text_TakeHexOrb:
# 954 "data/maps/Route104/scripts.pory"
	.string "Looks like you missed this somehow,\n"
# 955 "data/maps/Route104/scripts.pory"
	.string "here take it.$"

Route104_EventScript_DawnTrigger1::
# 959 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8008, 1
# 960 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_DawnScene
	end


Route104_EventScript_DawnTrigger2::
# 966 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8008, 2
# 967 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_DawnScene
	end


Route104_EventScript_DawnScene::
# 973 "data/maps/Route104/scripts.pory"
	lockall
# 974 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_PlayDawnMusic
# 975 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_DAWN, Common_Movement_WalkInPlaceFasterDown
# 976 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 977 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_DAWN, Common_Movement_ExclamationMark
# 978 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 979 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_DAWN, Common_Movement_Delay48
# 980 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 981 "data/maps/Route104/scripts.pory"
	delay 30
# 982 "data/maps/Route104/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route104_EventScript_DawnApproachPlayer1
# 983 "data/maps/Route104/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route104_EventScript_DawnApproachPlayer2
# 984 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_DawnRivalBattle
# 985 "data/maps/Route104/scripts.pory"
	releaseall
	end


Route104_EventScript_DawnRivalBattle::
# 990 "data/maps/Route104/scripts.pory"
	msgbox Dawn_Greeting
# 991 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_DAWN_ROUTE_104, Dawn_Defeated
# 992 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_DawnDefeated
	end


Route104_EventScript_DawnDefeated::
# 997 "data/maps/Route104/scripts.pory"
	msgbox Dawn_TakeThis
# 998 "data/maps/Route104/scripts.pory"
	giveitemfast ITEM_ASPEAR_BERRY, 10
# 999 "data/maps/Route104/scripts.pory"
	giveitemfast ITEM_PERSIM_BERRY, 10
# 1000 "data/maps/Route104/scripts.pory"
	giveitemfast ITEM_PECHA_BERRY, 10
# 1001 "data/maps/Route104/scripts.pory"
	giveitemfast ITEM_RAWST_BERRY, 10
# 1002 "data/maps/Route104/scripts.pory"
	giveitemfast ITEM_CHERI_BERRY, 10
# 1003 "data/maps/Route104/scripts.pory"
	giveitemfast ITEM_CHESTO_BERRY, 10
# 1004 "data/maps/Route104/scripts.pory"
	giveitemfast ITEM_CHOPLE_BERRY, 10
# 1005 "data/maps/Route104/scripts.pory"
	giveitemfast ITEM_COLBUR_BERRY, 10
# 1006 "data/maps/Route104/scripts.pory"
	giveitemfast ITEM_WACAN_BERRY, 10
# 1007 "data/maps/Route104/scripts.pory"
	giveitemfast ITEM_CHARTI_BERRY, 10
# 1008 "data/maps/Route104/scripts.pory"
	giveitemfast ITEM_CHILAN_BERRY, 10
# 1009 "data/maps/Route104/scripts.pory"
	giveitemfast ITEM_HABAN_BERRY, 10
# 1010 "data/maps/Route104/scripts.pory"
	giveitemfast ITEM_ROSELI_BERRY, 10
# 1011 "data/maps/Route104/scripts.pory"
	giveitemfast ITEM_SHUCA_BERRY, 10
# 1012 "data/maps/Route104/scripts.pory"
	giveitemfast ITEM_BABIRI_BERRY, 10
# 1013 "data/maps/Route104/scripts.pory"
	giveitemfast ITEM_KASIB_BERRY, 10
# 1014 "data/maps/Route104/scripts.pory"
	giveitemfast ITEM_COBA_BERRY, 10
# 1015 "data/maps/Route104/scripts.pory"
	giveitemfast ITEM_KEBIA_BERRY, 10
# 1016 "data/maps/Route104/scripts.pory"
	giveitemfast ITEM_OCCA_BERRY, 10
# 1017 "data/maps/Route104/scripts.pory"
	giveitemfast ITEM_PASSHO_BERRY, 10
# 1018 "data/maps/Route104/scripts.pory"
	giveitemfast ITEM_PAYAPA_BERRY, 10
# 1019 "data/maps/Route104/scripts.pory"
	giveitemfast ITEM_RINDO_BERRY, 10
# 1020 "data/maps/Route104/scripts.pory"
	giveitemfast ITEM_YACHE_BERRY, 10
# 1021 "data/maps/Route104/scripts.pory"
	giveitemfast ITEM_TANGA_BERRY, 10
# 1022 "data/maps/Route104/scripts.pory"
	giveitemfast ITEM_HARBOR_MAIL
# 1023 "data/maps/Route104/scripts.pory"
	giveitemfast ITEM_WISE_GLASSES
# 1024 "data/maps/Route104/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1025 "data/maps/Route104/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_ReceivedSeveralItems, MSGBOX_DEFAULT
# 1026 "data/maps/Route104/scripts.pory"
	waitfanfare
# 1027 "data/maps/Route104/scripts.pory"
	msgbox DawnGoodbye
# 1028 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_DawnExit
	end


Route104_EventScript_DawnApproachPlayer1::
# 1035 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_DAWN, Route104_Movement_DawnApproachPlayer1
# 1036 "data/maps/Route104/scripts.pory"
	waitmovement 0
	return


Route104_Movement_DawnApproachPlayer1::
# 1042 "data/maps/Route104/scripts.pory"
	walk_down
# 1043 "data/maps/Route104/scripts.pory"
	walk_left
# 1044 "data/maps/Route104/scripts.pory"
	walk_in_place_faster_down
# 1045 "data/maps/Route104/scripts.pory"
	step_end
	return


Route104_EventScript_DawnApproachPlayer2::
# 1049 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_DAWN, Route104_Movement_DawnApproachPlayer2
# 1050 "data/maps/Route104/scripts.pory"
	waitmovement 0
	return


Route104_Movement_DawnApproachPlayer2::
# 1055 "data/maps/Route104/scripts.pory"
	walk_down
# 1056 "data/maps/Route104/scripts.pory"
	step_end
	return


Route104_EventScript_DawnExit::
# 1060 "data/maps/Route104/scripts.pory"
	closemessage
# 1061 "data/maps/Route104/scripts.pory"
	delay 45
# 1062 "data/maps/Route104/scripts.pory"
	call_if_eq VAR_0x8008, 1, ApplyMovementDawn
# 1063 "data/maps/Route104/scripts.pory"
	call_if_eq VAR_0x8008, 2, ApplyMovementDawn
# 1064 "data/maps/Route104/scripts.pory"
	removeobject LOCALID_DAWN
# 1065 "data/maps/Route104/scripts.pory"
	setflag FLAG_DAWN_104
# 1066 "data/maps/Route104/scripts.pory"
	savebgm MUS_DUMMY
# 1067 "data/maps/Route104/scripts.pory"
	fadedefaultbgm
# 1068 "data/maps/Route104/scripts.pory"
	releaseall
	end


ApplyMovementDawn::
# 1073 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_DAWN, Route104_EventScript_DawnExit1
# 1074 "data/maps/Route104/scripts.pory"
	waitmovement 0
	return


Route104_EventScript_DawnExit1::
# 1079 "data/maps/Route104/scripts.pory"
	walk_up
# 1080 "data/maps/Route104/scripts.pory"
	walk_up
# 1081 "data/maps/Route104/scripts.pory"
	walk_up
# 1082 "data/maps/Route104/scripts.pory"
	walk_up
# 1083 "data/maps/Route104/scripts.pory"
	walk_up
# 1084 "data/maps/Route104/scripts.pory"
	walk_up
# 1085 "data/maps/Route104/scripts.pory"
	walk_up
# 1086 "data/maps/Route104/scripts.pory"
	step_end
	return


Route104_EventScript_PlayDawnMusic::
# 1090 "data/maps/Route104/scripts.pory"
	playbgm MUS_DP_DAWN, TRUE
	return


Dawn_Greeting::
# 1094 "data/maps/Route104/scripts.pory"
	.string "Hey there! Are you {PLAYER}, by\n"
	.string "chance?\p"
	.string "You are? Great! My name is Dawn, I'm\n"
	.string "a friend of {RIVAL}'s.\p"
	.string "They actually just passed through here\n"
	.string "and told me to be on the lookout for a\l"
	.string "trainer named {PLAYER}.\p"
	.string "{RIVAL} seems to think you have a lot\n"
	.string "of potential, and that you're someone I\l"
	.string "should keep my eye on while I'm making\l"
	.string "my way through the Hoenn region.\p"
	.string "I want to be the judge of that, though,\n"
	.string "so what do you say we have a battle!$"

Dawn_Defeated::
# 1110 "data/maps/Route104/scripts.pory"
	.string "Looks like {RIVAL} was right!$"

Dawn_TakeThis::
# 1115 "data/maps/Route104/scripts.pory"
	.string "That was a great battle! I'll definitely\n"
	.string "be seeing you again, {PLAYER}, so I can\l"
	.string "test my strength!\p"
	.string "Also, here, I have some extra Items\n"
	.string "taking up space in my Bag that you can\l"
	.string "have, hopefully they'll be helpful.$"

DawnGoodbye::
# 1124 "data/maps/Route104/scripts.pory"
	.string "I gave you a bunch of Berries that can\n"
	.string "reduce the damage of super effective\l"
	.string "moves, and a handy pair of Wise Glasses\l"
	.string "that can raise a Pokémon's Special\l"
	.string "Attack. Be sure to check them out!\p"
	.string "Alright, I'm off. Nice to meet you\n"
	.string "{PLAYER}, I'm sure we'll see each other\l"
	.string "again soon!$"
