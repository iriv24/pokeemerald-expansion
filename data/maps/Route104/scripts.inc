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
Route104_EventScript_Woman::
# 100 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_OnlyThrowBallAtWildPokemon, MSGBOX_NPC
# 101 "data/maps/Route104/scripts.pory"
	end
# 102 "data/maps/Route104/scripts.pory"

# 103 "data/maps/Route104/scripts.pory"
Route104_EventScript_Boy2::
# 104 "data/maps/Route104/scripts.pory"
	lock
# 105 "data/maps/Route104/scripts.pory"
	faceplayer
# 106 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_BULLET_SEED, Route104_EventScript_ReceivedBulletSeed
# 107 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_LikeFillingMouthWithSeedsTakeThis, MSGBOX_DEFAULT
# 108 "data/maps/Route104/scripts.pory"
	giveitem ITEM_TM_BULLET_SEED
# 109 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 110 "data/maps/Route104/scripts.pory"
	setflag FLAG_RECEIVED_TM_BULLET_SEED
# 111 "data/maps/Route104/scripts.pory"
	release
# 112 "data/maps/Route104/scripts.pory"
	end
# 113 "data/maps/Route104/scripts.pory"

# 114 "data/maps/Route104/scripts.pory"
Route104_EventScript_ReceivedBulletSeed::
# 115 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TMsAreOneTimeUse, MSGBOX_DEFAULT
# 116 "data/maps/Route104/scripts.pory"
	release
# 117 "data/maps/Route104/scripts.pory"
	end
# 118 "data/maps/Route104/scripts.pory"

# 119 "data/maps/Route104/scripts.pory"
Route104_EventScript_Girl2::
# 120 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_ImNotATrainer, MSGBOX_NPC
# 121 "data/maps/Route104/scripts.pory"
	end
# 122 "data/maps/Route104/scripts.pory"

# 123 "data/maps/Route104/scripts.pory"
Route104_EventScript_SailToDewford::
# 124 "data/maps/Route104/scripts.pory"
	setobjectsubpriority LOCALID_BRINEY_R104, MAP_ROUTE104, 0
# 125 "data/maps/Route104/scripts.pory"
	setobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_ROUTE104, 0
# 126 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_BRINEY_R104, Route104_Movement_BrineyBoardBoat
# 127 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 128 "data/maps/Route104/scripts.pory"
	removeobject LOCALID_BRINEY_R104
# 129 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerBoardBoat
# 130 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 131 "data/maps/Route104/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_ROUTE104
# 132 "data/maps/Route104/scripts.pory"
	call Common_EventScript_PlayBrineysBoatMusic
# 133 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_ENABLE_NORMAN_MATCH_CALL, Route104_EventScript_SailToDewfordNoCall
# 134 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_ENABLE_NORMAN_MATCH_CALL, Route104_EventScript_SailToDewfordDadCalls
# 135 "data/maps/Route104/scripts.pory"
	end
# 136 "data/maps/Route104/scripts.pory"

# 137 "data/maps/Route104/scripts.pory"
Route104_EventScript_SailToDewfordNoCall::
# 138 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_BOAT_R104, Route104_Movement_SailToDewford
# 139 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_SailToDewford
# 140 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 141 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_ArriveInDewford
# 142 "data/maps/Route104/scripts.pory"

# 143 "data/maps/Route104/scripts.pory"
Route104_EventScript_SailToDewfordDadCalls::
# 144 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_BOAT_R104, Route104_Movement_SailToDewfordBeforeDadCalls
# 145 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_SailToDewfordBeforeDadCalls
# 146 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 147 "data/maps/Route104/scripts.pory"
	pokenavcall Route104_Text_DadPokenavCall
# 148 "data/maps/Route104/scripts.pory"
	waitmessage
# 149 "data/maps/Route104/scripts.pory"
	delay 30
# 150 "data/maps/Route104/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 151 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RegisteredDadInPokenav, MSGBOX_DEFAULT
# 152 "data/maps/Route104/scripts.pory"
	waitfanfare
# 153 "data/maps/Route104/scripts.pory"
	closemessage
# 154 "data/maps/Route104/scripts.pory"
	delay 30
# 155 "data/maps/Route104/scripts.pory"
	setflag FLAG_ENABLE_NORMAN_MATCH_CALL
# 156 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_SailToDewfordAfterDadCalls
# 157 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_BOAT_R104, Route104_Movement_SailToDewfordAfterDadCalls, MAP_ROUTE104
# 158 "data/maps/Route104/scripts.pory"
	waitmovement LOCALID_BOAT_R104, MAP_ROUTE104
# 159 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 160 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_ArriveInDewford
# 161 "data/maps/Route104/scripts.pory"

# 162 "data/maps/Route104/scripts.pory"
Route104_EventScript_ArriveInDewford::
# 163 "data/maps/Route104/scripts.pory"
	delay 50
# 164 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerExitBoat
# 165 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 166 "data/maps/Route104/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 167 "data/maps/Route104/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN
# 168 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerMoveForBriney
# 169 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 170 "data/maps/Route104/scripts.pory"
	setobjectxyperm LOCALID_BRINEY_DEWFORD, 12, 8
# 171 "data/maps/Route104/scripts.pory"
	addobject LOCALID_BRINEY_DEWFORD
# 172 "data/maps/Route104/scripts.pory"
	setobjectsubpriority LOCALID_BRINEY_DEWFORD, MAP_DEWFORD_TOWN, 0
# 173 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN
# 174 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_BRINEY_DEWFORD, Route104_Movement_BrineyExitBoat
# 175 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 176 "data/maps/Route104/scripts.pory"
	addobject LOCALID_BOAT_DEWFORD
# 177 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
# 178 "data/maps/Route104/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 179 "data/maps/Route104/scripts.pory"
	setflag FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT
# 180 "data/maps/Route104/scripts.pory"
	hideobjectat LOCALID_BOAT_R104, MAP_ROUTE104
# 181 "data/maps/Route104/scripts.pory"
	copyvar VAR_BRINEY_LOCATION, VAR_0x8008
# 182 "data/maps/Route104/scripts.pory"
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_ROUTE104
# 183 "data/maps/Route104/scripts.pory"
	resetobjectsubpriority LOCALID_BRINEY_DEWFORD, MAP_DEWFORD_TOWN
# 184 "data/maps/Route104/scripts.pory"
	copyobjectxytoperm LOCALID_BRINEY_DEWFORD
# 185 "data/maps/Route104/scripts.pory"
	setvar VAR_BOARD_BRINEY_BOAT_STATE, 0
# 186 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_DELIVERED_STEVEN_LETTER, Route104_EventScript_DeliverLetterReminder
# 187 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_DELIVERED_STEVEN_LETTER, Route104_EventScript_LandedInDewford
# 188 "data/maps/Route104/scripts.pory"
	end
# 189 "data/maps/Route104/scripts.pory"

# 190 "data/maps/Route104/scripts.pory"
Route104_EventScript_DeliverLetterReminder::
# 191 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_LandedInDewfordDeliverLetter, MSGBOX_DEFAULT
# 192 "data/maps/Route104/scripts.pory"
	releaseall
# 193 "data/maps/Route104/scripts.pory"
	end
# 194 "data/maps/Route104/scripts.pory"

# 195 "data/maps/Route104/scripts.pory"
Route104_EventScript_LandedInDewford::
# 196 "data/maps/Route104/scripts.pory"
	msgbox DewfordTown_Text_BrineyLandedInDewford, MSGBOX_DEFAULT
# 197 "data/maps/Route104/scripts.pory"
	releaseall
# 198 "data/maps/Route104/scripts.pory"
	end
# 199 "data/maps/Route104/scripts.pory"

# 200 "data/maps/Route104/scripts.pory"
Route104_Movement_SailToDewfordBeforeDadCalls:
# 201 "data/maps/Route104/scripts.pory"
	walk_down
# 202 "data/maps/Route104/scripts.pory"
	walk_down
# 203 "data/maps/Route104/scripts.pory"
	walk_down
# 204 "data/maps/Route104/scripts.pory"
	walk_down
# 205 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 206 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 207 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 208 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 209 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 210 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 211 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 212 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 213 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 214 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 215 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 216 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 217 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 218 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 219 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 220 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 221 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 222 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 223 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 224 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 225 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 226 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 227 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 228 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 229 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 230 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 231 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 232 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 233 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 234 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 235 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 236 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 237 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 238 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 239 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 240 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 241 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 242 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 243 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 244 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 245 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 246 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 247 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 248 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 249 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 250 "data/maps/Route104/scripts.pory"
	walk_faster_down
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
	step_end
# 299 "data/maps/Route104/scripts.pory"

# 300 "data/maps/Route104/scripts.pory"
Route104_Movement_SailToDewfordAfterDadCalls:
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
	walk_faster_down
# 311 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 312 "data/maps/Route104/scripts.pory"
	walk_faster_down
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
	walk_fast_down
# 326 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 327 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 328 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 329 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 330 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 331 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 332 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 333 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 334 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 335 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 336 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 337 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 338 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 339 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 340 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 341 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 342 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 343 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 344 "data/maps/Route104/scripts.pory"
	walk_faster_right
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
	walk_fast_right
# 374 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 375 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 376 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 377 "data/maps/Route104/scripts.pory"
	walk_right
# 378 "data/maps/Route104/scripts.pory"
	walk_right
# 379 "data/maps/Route104/scripts.pory"
	walk_down
# 380 "data/maps/Route104/scripts.pory"
	walk_down
# 381 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 382 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 383 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 384 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 385 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 386 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 387 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 388 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 389 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 390 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 391 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 392 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 393 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 394 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 395 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 396 "data/maps/Route104/scripts.pory"
	walk_down
# 397 "data/maps/Route104/scripts.pory"
	walk_down
# 398 "data/maps/Route104/scripts.pory"
	step_end
# 399 "data/maps/Route104/scripts.pory"

# 400 "data/maps/Route104/scripts.pory"
Route104_Movement_SailToDewford:
# 401 "data/maps/Route104/scripts.pory"
	walk_down
# 402 "data/maps/Route104/scripts.pory"
	walk_down
# 403 "data/maps/Route104/scripts.pory"
	walk_down
# 404 "data/maps/Route104/scripts.pory"
	walk_down
# 405 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 406 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 407 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 408 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 409 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 410 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 411 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 412 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 413 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 414 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 415 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 416 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 417 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 418 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 419 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 420 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 421 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 422 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 423 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 424 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 425 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 426 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 427 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 428 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 429 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 430 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 431 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 432 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 433 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 434 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 435 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 436 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 437 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 438 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 439 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 440 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 441 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 442 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 443 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 444 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 445 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 446 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 447 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 448 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 449 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 450 "data/maps/Route104/scripts.pory"
	walk_faster_down
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
	walk_fast_down
# 523 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 524 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 525 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 526 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 527 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 528 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 529 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 530 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 531 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 532 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 533 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 534 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 535 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 536 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 537 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 538 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 539 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 540 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 541 "data/maps/Route104/scripts.pory"
	walk_faster_right
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
	walk_fast_right
# 571 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 572 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 573 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 574 "data/maps/Route104/scripts.pory"
	walk_right
# 575 "data/maps/Route104/scripts.pory"
	walk_right
# 576 "data/maps/Route104/scripts.pory"
	walk_down
# 577 "data/maps/Route104/scripts.pory"
	walk_down
# 578 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 579 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 580 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 581 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 582 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 583 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 584 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 585 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 586 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 587 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 588 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 589 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 590 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 591 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 592 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 593 "data/maps/Route104/scripts.pory"
	walk_down
# 594 "data/maps/Route104/scripts.pory"
	walk_down
# 595 "data/maps/Route104/scripts.pory"
	step_end
# 596 "data/maps/Route104/scripts.pory"

# 597 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerBoardBoat:
# 598 "data/maps/Route104/scripts.pory"
	walk_left
# 599 "data/maps/Route104/scripts.pory"
	walk_down
# 600 "data/maps/Route104/scripts.pory"
	walk_down
# 601 "data/maps/Route104/scripts.pory"
	step_end
# 602 "data/maps/Route104/scripts.pory"

# 603 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerExitBoat:
# 604 "data/maps/Route104/scripts.pory"
	walk_down
# 605 "data/maps/Route104/scripts.pory"
	step_end
# 606 "data/maps/Route104/scripts.pory"

# 607 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerMoveForBriney:
# 608 "data/maps/Route104/scripts.pory"
	walk_down
# 609 "data/maps/Route104/scripts.pory"
	walk_left
# 610 "data/maps/Route104/scripts.pory"
	walk_in_place_faster_right
# 611 "data/maps/Route104/scripts.pory"
	step_end
# 612 "data/maps/Route104/scripts.pory"

# 613 "data/maps/Route104/scripts.pory"
Route104_Movement_BrineyBoardBoat:
# 614 "data/maps/Route104/scripts.pory"
	walk_down
# 615 "data/maps/Route104/scripts.pory"
	walk_down
# 616 "data/maps/Route104/scripts.pory"
	step_end
# 617 "data/maps/Route104/scripts.pory"

# 618 "data/maps/Route104/scripts.pory"
Route104_Movement_BrineyExitBoat:
# 619 "data/maps/Route104/scripts.pory"
	walk_down
# 620 "data/maps/Route104/scripts.pory"
	walk_in_place_faster_left
# 621 "data/maps/Route104/scripts.pory"
	step_end
# 622 "data/maps/Route104/scripts.pory"

# 623 "data/maps/Route104/scripts.pory"
Route104_EventScript_Ivan::
# 624 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_IVAN, Route104_Text_IvanIntro, Route104_Text_IvanDefeat
# 625 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_IvanPostBattle, MSGBOX_AUTOCLOSE
# 626 "data/maps/Route104/scripts.pory"
	end
# 627 "data/maps/Route104/scripts.pory"

# 628 "data/maps/Route104/scripts.pory"
Route104_EventScript_Billy::
# 629 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_BILLY, Route104_Text_BillyIntro, Route104_Text_BillyDefeat
# 630 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BillyPostBattle, MSGBOX_AUTOCLOSE
# 631 "data/maps/Route104/scripts.pory"
	end
# 632 "data/maps/Route104/scripts.pory"

# 633 "data/maps/Route104/scripts.pory"
Route104_EventScript_Haley::
# 634 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_HALEY_1, Route104_Text_HaleyIntro, Route104_Text_HaleyDefeat, Route104_EventScript_TryRegisterHaleyAfterBattle
# 635 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 636 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route104_EventScript_RematchHaley
# 637 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8004, TRAINER_HALEY_1
# 638 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 639 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route104_EventScript_TryRegisterHaley
# 640 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyPostBattle, MSGBOX_DEFAULT
# 641 "data/maps/Route104/scripts.pory"
	release
# 642 "data/maps/Route104/scripts.pory"
	end
# 643 "data/maps/Route104/scripts.pory"

# 644 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterHaleyAfterBattle::
# 645 "data/maps/Route104/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 646 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 647 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterHaleyAfterBattle
# 648 "data/maps/Route104/scripts.pory"
	release
# 649 "data/maps/Route104/scripts.pory"
	end
# 650 "data/maps/Route104/scripts.pory"

# 651 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterHaleyAfterBattle::
# 652 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyRegister2, MSGBOX_DEFAULT
# 653 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_HALEY_1
# 654 "data/maps/Route104/scripts.pory"
	release
# 655 "data/maps/Route104/scripts.pory"
	end
# 656 "data/maps/Route104/scripts.pory"

# 657 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterHaley::
# 658 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterHaley
# 659 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyPostBattle, MSGBOX_DEFAULT
# 660 "data/maps/Route104/scripts.pory"
	release
# 661 "data/maps/Route104/scripts.pory"
	end
# 662 "data/maps/Route104/scripts.pory"

# 663 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterHaley::
# 664 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyRegister1, MSGBOX_DEFAULT
# 665 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_HALEY_1
# 666 "data/maps/Route104/scripts.pory"
	release
# 667 "data/maps/Route104/scripts.pory"
	end
# 668 "data/maps/Route104/scripts.pory"

# 669 "data/maps/Route104/scripts.pory"
Route104_EventScript_RematchHaley::
# 670 "data/maps/Route104/scripts.pory"
	trainerbattle_rematch TRAINER_HALEY_1, Route104_Text_HaleyRematchIntro, Route104_Text_HaleyRematchDefeat
# 671 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyPostRematch, MSGBOX_AUTOCLOSE
# 672 "data/maps/Route104/scripts.pory"
	end
# 673 "data/maps/Route104/scripts.pory"

# 674 "data/maps/Route104/scripts.pory"
Route104_EventScript_Winston::
# 675 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_WINSTON_1, Route104_Text_WinstonIntro, Route104_Text_WinstonDefeat, Route104_EventScript_TryRegisterWinstonAfterBattle
# 676 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 677 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route104_EventScript_RematchWinston
# 678 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8004, TRAINER_WINSTON_1
# 679 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 680 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route104_EventScript_TryRegisterWinston
# 681 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonPostBattle, MSGBOX_DEFAULT
# 682 "data/maps/Route104/scripts.pory"
	release
# 683 "data/maps/Route104/scripts.pory"
	end
# 684 "data/maps/Route104/scripts.pory"

# 685 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterWinstonAfterBattle::
# 686 "data/maps/Route104/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 687 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 688 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterWinstonAfterBattle
# 689 "data/maps/Route104/scripts.pory"
	release
# 690 "data/maps/Route104/scripts.pory"
	end
# 691 "data/maps/Route104/scripts.pory"

# 692 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterWinstonAfterBattle::
# 693 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonRegister2, MSGBOX_DEFAULT
# 694 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_WINSTON_1
# 695 "data/maps/Route104/scripts.pory"
	release
# 696 "data/maps/Route104/scripts.pory"
	end
# 697 "data/maps/Route104/scripts.pory"

# 698 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterWinston::
# 699 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterWinston
# 700 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonPostBattle, MSGBOX_DEFAULT
# 701 "data/maps/Route104/scripts.pory"
	release
# 702 "data/maps/Route104/scripts.pory"
	end
# 703 "data/maps/Route104/scripts.pory"

# 704 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterWinston::
# 705 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonRegister1, MSGBOX_DEFAULT
# 706 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_WINSTON_1
# 707 "data/maps/Route104/scripts.pory"
	release
# 708 "data/maps/Route104/scripts.pory"
	end
# 709 "data/maps/Route104/scripts.pory"

# 710 "data/maps/Route104/scripts.pory"
Route104_EventScript_RematchWinston::
# 711 "data/maps/Route104/scripts.pory"
	trainerbattle_rematch TRAINER_WINSTON_1, Route104_Text_WinstonRematchIntro, Route104_Text_WinstonRematchDefeat
# 712 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonPostRematch, MSGBOX_AUTOCLOSE
# 713 "data/maps/Route104/scripts.pory"
	end
# 714 "data/maps/Route104/scripts.pory"

# 715 "data/maps/Route104/scripts.pory"
Route104_EventScript_Cindy::
# 716 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_CINDY_1, Route104_Text_CindyIntro, Route104_Text_CindyDefeat, Route104_EventScript_TryRegisterCindyAfterBattle
# 717 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 718 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route104_EventScript_RematchCindy
# 719 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8004, TRAINER_CINDY_1
# 720 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 721 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route104_EventScript_TryRegisterCindy
# 722 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyPostBattle, MSGBOX_DEFAULT
# 723 "data/maps/Route104/scripts.pory"
	release
# 724 "data/maps/Route104/scripts.pory"
	end
# 725 "data/maps/Route104/scripts.pory"

# 726 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterCindyAfterBattle::
# 727 "data/maps/Route104/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 728 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 729 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterCindyAfterBattle
# 730 "data/maps/Route104/scripts.pory"
	release
# 731 "data/maps/Route104/scripts.pory"
	end
# 732 "data/maps/Route104/scripts.pory"

# 733 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterCindyAfterBattle::
# 734 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyRegister2, MSGBOX_DEFAULT
# 735 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_CINDY_1
# 736 "data/maps/Route104/scripts.pory"
	release
# 737 "data/maps/Route104/scripts.pory"
	end
# 738 "data/maps/Route104/scripts.pory"

# 739 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterCindy::
# 740 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterCindy
# 741 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyPostBattle, MSGBOX_DEFAULT
# 742 "data/maps/Route104/scripts.pory"
	release
# 743 "data/maps/Route104/scripts.pory"
	end
# 744 "data/maps/Route104/scripts.pory"

# 745 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterCindy::
# 746 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyRegister1, MSGBOX_DEFAULT
# 747 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_CINDY_1
# 748 "data/maps/Route104/scripts.pory"
	release
# 749 "data/maps/Route104/scripts.pory"
	end
# 750 "data/maps/Route104/scripts.pory"

# 751 "data/maps/Route104/scripts.pory"
Route104_EventScript_RematchCindy::
# 752 "data/maps/Route104/scripts.pory"
	trainerbattle_rematch TRAINER_CINDY_1, Route104_Text_CindyRematchIntro, Route104_Text_CindyRematchDefeat
# 753 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyPostRematch, MSGBOX_AUTOCLOSE
# 754 "data/maps/Route104/scripts.pory"
	end
# 755 "data/maps/Route104/scripts.pory"

# 756 "data/maps/Route104/scripts.pory"
Route104_EventScript_Gina::
# 757 "data/maps/Route104/scripts.pory"
	trainerbattle_double TRAINER_GINA_AND_MIA_1, Route104_Text_GinaIntro, Route104_Text_GinaDefeat, Route104_Text_GinaNotEnoughMons
# 758 "data/maps/Route104/scripts.pory"
	special GetPlayerBigGuyGirlString
# 759 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_GinaPostBattle, MSGBOX_DEFAULT
# 760 "data/maps/Route104/scripts.pory"
	release
# 761 "data/maps/Route104/scripts.pory"
	end
# 762 "data/maps/Route104/scripts.pory"

# 763 "data/maps/Route104/scripts.pory"
Route104_EventScript_Mia::
# 764 "data/maps/Route104/scripts.pory"
	trainerbattle_double TRAINER_GINA_AND_MIA_1, Route104_Text_MiaIntro, Route104_Text_MiaDefeat, Route104_Text_MiaNotEnoughMons
# 765 "data/maps/Route104/scripts.pory"
	special GetPlayerBigGuyGirlString
# 766 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MiaPostBattle, MSGBOX_DEFAULT
# 767 "data/maps/Route104/scripts.pory"
	release
# 768 "data/maps/Route104/scripts.pory"
	end
# 769 "data/maps/Route104/scripts.pory"

# 770 "data/maps/Route104/scripts.pory"
Route104_EventScript_Darian::
# 771 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_DARIAN, Route104_Text_DarianIntro, Route104_Text_DarianDefeat
# 772 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_DarianPostBattle, MSGBOX_AUTOCLOSE
# 773 "data/maps/Route104/scripts.pory"
	end
# 774 "data/maps/Route104/scripts.pory"

# 775 "data/maps/Route104/scripts.pory"
Route104_Text_BrineyLivesInSeasideCottage:
# 776 "data/maps/Route104/scripts.pory"
	.string "That seaside cottage is where\n"
# 777 "data/maps/Route104/scripts.pory"
	.string "Mr. Briney lives.\p"
# 778 "data/maps/Route104/scripts.pory"
	.string "He was once a mighty sailor who never\n"
# 779 "data/maps/Route104/scripts.pory"
	.string "feared the sea, however stormy.$"
# 780 "data/maps/Route104/scripts.pory"

# 781 "data/maps/Route104/scripts.pory"
Route104_Text_WhatsItLikeAtBottomOfSea:
# 782 "data/maps/Route104/scripts.pory"
	.string "The sea, huh?\p"
# 783 "data/maps/Route104/scripts.pory"
	.string "I wonder what it's like at the bottom\n"
# 784 "data/maps/Route104/scripts.pory"
	.string "of the sea?$"
# 785 "data/maps/Route104/scripts.pory"

# 786 "data/maps/Route104/scripts.pory"
Route104_Text_ThrowBallAtWeakenedPokemon:
# 787 "data/maps/Route104/scripts.pory"
	.string "If you're going to throw a Poké Ball,\n"
# 788 "data/maps/Route104/scripts.pory"
	.string "weaken the wild Pokémon first.\p"
# 789 "data/maps/Route104/scripts.pory"
	.string "It will be easier to catch if it's been\n"
# 790 "data/maps/Route104/scripts.pory"
	.string "poisoned, burned, or lulled to sleep.$"
# 791 "data/maps/Route104/scripts.pory"

# 792 "data/maps/Route104/scripts.pory"
Route104_Text_OnlyThrowBallAtWildPokemon:
# 793 "data/maps/Route104/scripts.pory"
	.string "You're a thief if you try to steal\n"
# 794 "data/maps/Route104/scripts.pory"
	.string "someone else's Pokémon.\p"
# 795 "data/maps/Route104/scripts.pory"
	.string "You should throw Poké Balls only at\n"
# 796 "data/maps/Route104/scripts.pory"
	.string "wild Pokémon.$"
# 797 "data/maps/Route104/scripts.pory"

# 798 "data/maps/Route104/scripts.pory"
Route104_Text_ImNotATrainer:
# 799 "data/maps/Route104/scripts.pory"
	.string "Oh, no, I'm not a trainer.\p"
# 800 "data/maps/Route104/scripts.pory"
	.string "But that's right, if trainers lock eyes,\n"
# 801 "data/maps/Route104/scripts.pory"
	.string "it's a challenge to battle.\p"
# 802 "data/maps/Route104/scripts.pory"
	.string "If you don't want to battle, stay out\n"
# 803 "data/maps/Route104/scripts.pory"
	.string "of their sight.$"
# 804 "data/maps/Route104/scripts.pory"

# 805 "data/maps/Route104/scripts.pory"
Route104_Text_LikeFillingMouthWithSeedsTakeThis:
# 806 "data/maps/Route104/scripts.pory"
	.string "I like filling my mouth with seeds,\n"
# 807 "data/maps/Route104/scripts.pory"
	.string "then spitting them out fast!\p"
# 808 "data/maps/Route104/scripts.pory"
	.string "You can have this, so you try it out!\p"
# 809 "data/maps/Route104/scripts.pory"
	.string "Use it on a Pokémon, and it will learn\n"
# 810 "data/maps/Route104/scripts.pory"
	.string "a move for firing seeds rapidly.$"
# 811 "data/maps/Route104/scripts.pory"

# 812 "data/maps/Route104/scripts.pory"
Route104_Text_TMsAreOneTimeUse:
# 813 "data/maps/Route104/scripts.pory"
	.string "And guess what!\n"
# 814 "data/maps/Route104/scripts.pory"
	.string "Now, you can use a TM, as many\l"
# 815 "data/maps/Route104/scripts.pory"
	.string "times as you want! Isn't that great?$"
# 816 "data/maps/Route104/scripts.pory"

# 817 "data/maps/Route104/scripts.pory"
Route104_Text_DontNeedThisTakeIt:
# 818 "data/maps/Route104/scripts.pory"
	.string "This Flower Shop started selling\n"
# 819 "data/maps/Route104/scripts.pory"
	.string "saplings recently.\p"
# 820 "data/maps/Route104/scripts.pory"
	.string "It made me so happy, I went overboard\n"
# 821 "data/maps/Route104/scripts.pory"
	.string "shopping.\p"
# 822 "data/maps/Route104/scripts.pory"
	.string "I don't need this White Herb anymore.\n"
# 823 "data/maps/Route104/scripts.pory"
	.string "Would you take it, please?$"
# 824 "data/maps/Route104/scripts.pory"

# 825 "data/maps/Route104/scripts.pory"
Route104_Text_FlowerShopSellingSaplings:
# 826 "data/maps/Route104/scripts.pory"
	.string "This Fower Shop started selling\n"
# 827 "data/maps/Route104/scripts.pory"
	.string "saplings recently.\p"
# 828 "data/maps/Route104/scripts.pory"
	.string "It made me so happy, I went overboard\n"
# 829 "data/maps/Route104/scripts.pory"
	.string "shopping. Where should I put them?$"
# 830 "data/maps/Route104/scripts.pory"

# 831 "data/maps/Route104/scripts.pory"
Route104_Text_MrBrineysCottage:
# 832 "data/maps/Route104/scripts.pory"
	.string "MR. BRINEY'S COTTAGE$"
# 833 "data/maps/Route104/scripts.pory"

# 834 "data/maps/Route104/scripts.pory"
Route104_Text_RouteSignPetalburg:
# 835 "data/maps/Route104/scripts.pory"
	.string "ROUTE 1O4\n"
# 836 "data/maps/Route104/scripts.pory"
	.string "{RIGHT_ARROW} PETALBURG CITY$"
# 837 "data/maps/Route104/scripts.pory"

# 838 "data/maps/Route104/scripts.pory"
Route104_Text_RouteSignRustboro:
# 839 "data/maps/Route104/scripts.pory"
	.string "ROUTE 1O4\n"
# 840 "data/maps/Route104/scripts.pory"
	.string "{UP_ARROW} RUSTBORO CITY$"
# 841 "data/maps/Route104/scripts.pory"

# 842 "data/maps/Route104/scripts.pory"
Route104_Text_PrettyPetalFlowShop:
# 843 "data/maps/Route104/scripts.pory"
	.string "PRETTY PETAL FLOWER SHOP$"
# 844 "data/maps/Route104/scripts.pory"

# 845 "data/maps/Route104/scripts.pory"
Route104_Text_TrainerTipsDoubleBattles:
# 846 "data/maps/Route104/scripts.pory"
	.string "Trainer Tips\p"
# 847 "data/maps/Route104/scripts.pory"
	.string "You can rearrange your Pokémon party\n"
# 848 "data/maps/Route104/scripts.pory"
	.string "more efficiently by using the “Select”\l"
# 849 "data/maps/Route104/scripts.pory"
	.string "button or the “R” button while\l"
# 850 "data/maps/Route104/scripts.pory"
	.string "hovering over a Pokémon in\l"
# 851 "data/maps/Route104/scripts.pory"
	.string "the party menu.$"
# 852 "data/maps/Route104/scripts.pory"

# 853 "data/maps/Route104/scripts.pory"
Route104_Text_MayWeShouldRegister:
# 854 "data/maps/Route104/scripts.pory"
	.string "May: Oh, hi, {PLAYER}{KUN}!\p"
# 855 "data/maps/Route104/scripts.pory"
	.string "Devon upgraded your PokéNav with\n"
# 856 "data/maps/Route104/scripts.pory"
	.string "the Match Call system, huh?\p"
# 857 "data/maps/Route104/scripts.pory"
	.string "We should register each other so we\n"
# 858 "data/maps/Route104/scripts.pory"
	.string "can get in contact anytime.$"
# 859 "data/maps/Route104/scripts.pory"

# 860 "data/maps/Route104/scripts.pory"
Route104_Text_RegisteredMay:
# 861 "data/maps/Route104/scripts.pory"
	.string "{PLAYER} registered May\n"
# 862 "data/maps/Route104/scripts.pory"
	.string "in the PokéNav.$"
# 863 "data/maps/Route104/scripts.pory"

# 864 "data/maps/Route104/scripts.pory"
Route104_Text_MayHowsYourPokedex:
# 865 "data/maps/Route104/scripts.pory"
	.string "May: Oh, by the way, {PLAYER}{KUN},\n"
# 866 "data/maps/Route104/scripts.pory"
	.string "how's your Pokédex coming along?$"
# 867 "data/maps/Route104/scripts.pory"

# 868 "data/maps/Route104/scripts.pory"
Route104_Text_MayMinesDecentLetsBattle:
# 869 "data/maps/Route104/scripts.pory"
	.string "Mine's looking pretty decent.\n"
# 870 "data/maps/Route104/scripts.pory"
	.string "So…\l"
# 871 "data/maps/Route104/scripts.pory"
	.string "How about a little battle?$"
# 872 "data/maps/Route104/scripts.pory"

# 873 "data/maps/Route104/scripts.pory"
Route104_Text_MayHaventRaisedPokemon:
# 874 "data/maps/Route104/scripts.pory"
	.string "May: Oh, what's the matter?\p"
# 875 "data/maps/Route104/scripts.pory"
	.string "Haven't you caught or raised your\n"
# 876 "data/maps/Route104/scripts.pory"
	.string "Pokémon very much?\p"
# 877 "data/maps/Route104/scripts.pory"
	.string "That's not very good for a trainer!$"
# 878 "data/maps/Route104/scripts.pory"

# 879 "data/maps/Route104/scripts.pory"
Route104_Text_MayLetsBattle:
# 880 "data/maps/Route104/scripts.pory"
	.string "May: So, what do you think?\n"
# 881 "data/maps/Route104/scripts.pory"
	.string "How about a little battle here?$"
# 882 "data/maps/Route104/scripts.pory"

# 883 "data/maps/Route104/scripts.pory"
Route104_Text_MayIntro:
# 884 "data/maps/Route104/scripts.pory"
	.string "May: You just became a trainer,\n"
# 885 "data/maps/Route104/scripts.pory"
	.string "{PLAYER}{KUN}. I'm not going to lose!$"
# 886 "data/maps/Route104/scripts.pory"

# 887 "data/maps/Route104/scripts.pory"
Route104_Text_MayDefeat:
# 888 "data/maps/Route104/scripts.pory"
	.string "Yikes!\n"
# 889 "data/maps/Route104/scripts.pory"
	.string "You're better than I expected!$"
# 890 "data/maps/Route104/scripts.pory"

# 891 "data/maps/Route104/scripts.pory"
Route104_Text_MayPostBattle:
# 892 "data/maps/Route104/scripts.pory"
	.string "May: I can tell you've gotten pretty\n"
# 893 "data/maps/Route104/scripts.pory"
	.string "good with the way you handle Pokémon.\p"
# 894 "data/maps/Route104/scripts.pory"
	.string "But instead of only making them\n"
# 895 "data/maps/Route104/scripts.pory"
	.string "battle, you should be like Mr. Briney.\p"
# 896 "data/maps/Route104/scripts.pory"
	.string "It's important to become friends with\n"
# 897 "data/maps/Route104/scripts.pory"
	.string "Pokémon, too.$"
# 898 "data/maps/Route104/scripts.pory"

# 899 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanWeShouldRegister:
# 900 "data/maps/Route104/scripts.pory"
	.string "Brendan: Oh, hey, {PLAYER}!\p"
# 901 "data/maps/Route104/scripts.pory"
	.string "Cool, you had Devon install the Match\n"
# 902 "data/maps/Route104/scripts.pory"
	.string "Call system on your PokéNav!\p"
# 903 "data/maps/Route104/scripts.pory"
	.string "Let's register each other in our\n"
# 904 "data/maps/Route104/scripts.pory"
	.string "PokéNavs so we can keep in touch.$"
# 905 "data/maps/Route104/scripts.pory"

# 906 "data/maps/Route104/scripts.pory"
Route104_Text_RegisteredBrendan:
# 907 "data/maps/Route104/scripts.pory"
	.string "{PLAYER} registered Brendan\n"
# 908 "data/maps/Route104/scripts.pory"
	.string "in the PokéNav.$"
# 909 "data/maps/Route104/scripts.pory"

# 910 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanHowsYourPokedex:
# 911 "data/maps/Route104/scripts.pory"
	.string "Brendan: {PLAYER}, how's your Pokédex?\n"
# 912 "data/maps/Route104/scripts.pory"
	.string "Have you filled in any pages yet?$"
# 913 "data/maps/Route104/scripts.pory"

# 914 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanDoingGreatLetsBattle:
# 915 "data/maps/Route104/scripts.pory"
	.string "Me, I'm doing great!\p"
# 916 "data/maps/Route104/scripts.pory"
	.string "Want to check out how good I am with\n"
# 917 "data/maps/Route104/scripts.pory"
	.string "a battle?$"
# 918 "data/maps/Route104/scripts.pory"

# 919 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanNoConfidence:
# 920 "data/maps/Route104/scripts.pory"
	.string "Brendan: What's the matter? Don't have\n"
# 921 "data/maps/Route104/scripts.pory"
	.string "any confidence in your Pokémon?$"
# 922 "data/maps/Route104/scripts.pory"

# 923 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanLetsBattle:
# 924 "data/maps/Route104/scripts.pory"
	.string "Brendan: What's up?\n"
# 925 "data/maps/Route104/scripts.pory"
	.string "Want to have a battle with me?$"
# 926 "data/maps/Route104/scripts.pory"

# 927 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanIntro:
# 928 "data/maps/Route104/scripts.pory"
	.string "Brendan: I know you just became\n"
# 929 "data/maps/Route104/scripts.pory"
	.string "a trainer, but I won't go easy!$"
# 930 "data/maps/Route104/scripts.pory"

# 931 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanDefeat:
# 932 "data/maps/Route104/scripts.pory"
	.string "Hmm…\n"
# 933 "data/maps/Route104/scripts.pory"
	.string "You're pretty good.$"
# 934 "data/maps/Route104/scripts.pory"

# 935 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanPostBattle:
# 936 "data/maps/Route104/scripts.pory"
	.string "Brendan: You've gotten pretty decent\n"
# 937 "data/maps/Route104/scripts.pory"
	.string "at handling Pokémon.\p"
# 938 "data/maps/Route104/scripts.pory"
	.string "But, you know, you shouldn't just be\n"
# 939 "data/maps/Route104/scripts.pory"
	.string "making Pokémon battle.\p"
# 940 "data/maps/Route104/scripts.pory"
	.string "Like Mr. Briney, it's important to\n"
# 941 "data/maps/Route104/scripts.pory"
	.string "become friends with your Pokémon.$"

Route104_EventScript_DawnTrigger1::
# 945 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8008, 1
# 946 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_DawnScene
	end


Route104_EventScript_DawnTrigger2::
# 952 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8008, 2
# 953 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_DawnScene
	end


Route104_EventScript_DawnScene::
# 959 "data/maps/Route104/scripts.pory"
	lockall
# 960 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_PlayDawnMusic
# 961 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_DAWN, Common_Movement_WalkInPlaceFasterDown
# 962 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 963 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_DAWN, Common_Movement_ExclamationMark
# 964 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 965 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_DAWN, Common_Movement_Delay48
# 966 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 967 "data/maps/Route104/scripts.pory"
	delay 30
# 968 "data/maps/Route104/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route104_EventScript_DawnApproachPlayer1
# 969 "data/maps/Route104/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route104_EventScript_DawnApproachPlayer2
# 970 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_DawnRivalBattle
# 971 "data/maps/Route104/scripts.pory"
	releaseall
	end


Route104_EventScript_DawnRivalBattle::
# 976 "data/maps/Route104/scripts.pory"
	msgbox Dawn_Greeting
# 977 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_DAWN_ROUTE_104, Dawn_Defeated
# 978 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_DawnDefeated
	end


Route104_EventScript_DawnDefeated::
# 983 "data/maps/Route104/scripts.pory"
	msgbox Dawn_TakeThis
# 984 "data/maps/Route104/scripts.pory"
	giveitemfast ITEM_ASPEAR_BERRY, 10
# 985 "data/maps/Route104/scripts.pory"
	giveitemfast ITEM_PERSIM_BERRY, 10
# 986 "data/maps/Route104/scripts.pory"
	giveitemfast ITEM_PECHA_BERRY, 10
# 987 "data/maps/Route104/scripts.pory"
	giveitemfast ITEM_RAWST_BERRY, 10
# 988 "data/maps/Route104/scripts.pory"
	giveitemfast ITEM_CHERI_BERRY, 10
# 989 "data/maps/Route104/scripts.pory"
	giveitemfast ITEM_CHESTO_BERRY, 10
# 990 "data/maps/Route104/scripts.pory"
	giveitemfast ITEM_CHOPLE_BERRY, 10
# 991 "data/maps/Route104/scripts.pory"
	giveitemfast ITEM_COLBUR_BERRY, 10
# 992 "data/maps/Route104/scripts.pory"
	giveitemfast ITEM_WACAN_BERRY, 10
# 993 "data/maps/Route104/scripts.pory"
	giveitemfast ITEM_CHARTI_BERRY, 10
# 994 "data/maps/Route104/scripts.pory"
	giveitemfast ITEM_CHILAN_BERRY, 10
# 995 "data/maps/Route104/scripts.pory"
	giveitemfast ITEM_HABAN_BERRY, 10
# 996 "data/maps/Route104/scripts.pory"
	giveitemfast ITEM_ROSELI_BERRY, 10
# 997 "data/maps/Route104/scripts.pory"
	giveitemfast ITEM_SHUCA_BERRY, 10
# 998 "data/maps/Route104/scripts.pory"
	giveitemfast ITEM_BABIRI_BERRY, 10
# 999 "data/maps/Route104/scripts.pory"
	giveitemfast ITEM_KASIB_BERRY, 10
# 1000 "data/maps/Route104/scripts.pory"
	giveitemfast ITEM_COBA_BERRY, 10
# 1001 "data/maps/Route104/scripts.pory"
	giveitemfast ITEM_KEBIA_BERRY, 10
# 1002 "data/maps/Route104/scripts.pory"
	giveitemfast ITEM_OCCA_BERRY, 10
# 1003 "data/maps/Route104/scripts.pory"
	giveitemfast ITEM_PASSHO_BERRY, 10
# 1004 "data/maps/Route104/scripts.pory"
	giveitemfast ITEM_PAYAPA_BERRY, 10
# 1005 "data/maps/Route104/scripts.pory"
	giveitemfast ITEM_RINDO_BERRY, 10
# 1006 "data/maps/Route104/scripts.pory"
	giveitemfast ITEM_YACHE_BERRY, 10
# 1007 "data/maps/Route104/scripts.pory"
	giveitemfast ITEM_TANGA_BERRY, 10
# 1008 "data/maps/Route104/scripts.pory"
	giveitemfast ITEM_HARBOR_MAIL
# 1009 "data/maps/Route104/scripts.pory"
	giveitemfast ITEM_WISE_GLASSES
# 1010 "data/maps/Route104/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1011 "data/maps/Route104/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_ReceivedSeveralItems, MSGBOX_DEFAULT
# 1012 "data/maps/Route104/scripts.pory"
	waitfanfare
# 1013 "data/maps/Route104/scripts.pory"
	msgbox DawnGoodbye
# 1014 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_DawnExit
	end


Route104_EventScript_DawnApproachPlayer1::
# 1021 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_DAWN, Route104_Movement_DawnApproachPlayer1
# 1022 "data/maps/Route104/scripts.pory"
	waitmovement 0
	return


Route104_Movement_DawnApproachPlayer1::
# 1028 "data/maps/Route104/scripts.pory"
	walk_down
# 1029 "data/maps/Route104/scripts.pory"
	walk_left
# 1030 "data/maps/Route104/scripts.pory"
	walk_in_place_faster_down
# 1031 "data/maps/Route104/scripts.pory"
	step_end
	return


Route104_EventScript_DawnApproachPlayer2::
# 1035 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_DAWN, Route104_Movement_DawnApproachPlayer2
# 1036 "data/maps/Route104/scripts.pory"
	waitmovement 0
	return


Route104_Movement_DawnApproachPlayer2::
# 1041 "data/maps/Route104/scripts.pory"
	walk_down
# 1042 "data/maps/Route104/scripts.pory"
	step_end
	return


Route104_EventScript_DawnExit::
# 1046 "data/maps/Route104/scripts.pory"
	closemessage
# 1047 "data/maps/Route104/scripts.pory"
	delay 45
# 1048 "data/maps/Route104/scripts.pory"
	call_if_eq VAR_0x8008, 1, ApplyMovementDawn
# 1049 "data/maps/Route104/scripts.pory"
	call_if_eq VAR_0x8008, 2, ApplyMovementDawn
# 1050 "data/maps/Route104/scripts.pory"
	removeobject LOCALID_DAWN
# 1051 "data/maps/Route104/scripts.pory"
	setflag FLAG_DAWN_104
# 1052 "data/maps/Route104/scripts.pory"
	savebgm MUS_DUMMY
# 1053 "data/maps/Route104/scripts.pory"
	fadedefaultbgm
# 1054 "data/maps/Route104/scripts.pory"
	releaseall
	end


ApplyMovementDawn::
# 1059 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_DAWN, Route104_EventScript_DawnExit1
# 1060 "data/maps/Route104/scripts.pory"
	waitmovement 0
	return


Route104_EventScript_DawnExit1::
# 1065 "data/maps/Route104/scripts.pory"
	walk_up
# 1066 "data/maps/Route104/scripts.pory"
	walk_up
# 1067 "data/maps/Route104/scripts.pory"
	walk_up
# 1068 "data/maps/Route104/scripts.pory"
	walk_up
# 1069 "data/maps/Route104/scripts.pory"
	walk_up
# 1070 "data/maps/Route104/scripts.pory"
	walk_up
# 1071 "data/maps/Route104/scripts.pory"
	walk_up
# 1072 "data/maps/Route104/scripts.pory"
	step_end
	return


Route104_EventScript_PlayDawnMusic::
# 1076 "data/maps/Route104/scripts.pory"
	playbgm MUS_DP_DAWN, TRUE
	return


Dawn_Greeting::
# 1080 "data/maps/Route104/scripts.pory"
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
# 1096 "data/maps/Route104/scripts.pory"
	.string "Looks like {RIVAL} was right!$"

Dawn_TakeThis::
# 1101 "data/maps/Route104/scripts.pory"
	.string "That was a great battle! I'll definitely\n"
	.string "be seeing you again, {PLAYER}, so I can\l"
	.string "test my strength!\p"
	.string "Also, here, I have some extra Items\n"
	.string "taking up space in my Bag that you can\l"
	.string "have, hopefully they'll be helpful.$"

DawnGoodbye::
# 1110 "data/maps/Route104/scripts.pory"
	.string "I gave you a bunch of Berries that can\n"
	.string "reduce the damage of super effective\l"
	.string "moves, and a handy pair of Wise Glasses\l"
	.string "that can raise a Pokémon's Special\l"
	.string "Attack. Be sure to check them out!\p"
	.string "Alright, I'm off. Nice to meet you\n"
	.string "{PLAYER}, I'm sure we'll see each other\l"
	.string "again soon!$"
