# 1 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 2 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
.set LOCALID_FAMILIAR_GRUNT, 13
# 3 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
.set LOCALID_DRAKE, 15
# 4 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 5 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_MapScripts::
# 6 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.byte 0
# 7 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 8 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_EntranceAttendant::
# 9 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_PleaseEnjoyYourself, MSGBOX_NPC
# 10 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 11 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 12 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_PayEntranceFeeLeft::
# 13 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	lockall
# 14 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 15 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	waitmovement 0
# 16 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto SlateportCity_OceanicMuseum_1F_EventScript_PayEntranceFee
# 17 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 18 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 19 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_PayEntranceFeeRight::
# 20 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	lockall
# 21 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 22 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	waitmovement 0
# 23 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto SlateportCity_OceanicMuseum_1F_EventScript_PayEntranceFee
# 24 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 25 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 26 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_PayEntranceFee::
# 27 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	showmoneybox 0, 0
# 28 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_WouldYouLikeToEnter, MSGBOX_YESNO
# 29 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto_if_eq VAR_RESULT, YES, SlateportCity_OceanicMuseum_1F_EventScript_CheckMoneyForFee
# 30 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	closemessage
# 31 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	hidemoneybox
# 32 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_OceanicMuseum_1F_Movement_PushPlayerBackFromCounter
# 33 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	waitmovement 0
# 34 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	releaseall
# 35 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 36 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 37 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_CheckMoneyForFee::
# 38 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	checkmoney 50
# 39 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_OceanicMuseum_1F_EventScript_NotEnoughMoney
# 40 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	playse SE_SHOP
# 41 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	removemoney 50
# 42 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	updatemoneybox
# 43 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_PleaseEnjoyYourself, MSGBOX_DEFAULT
# 44 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	setvar VAR_SLATEPORT_MUSEUM_1F_STATE, 1
# 45 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	hidemoneybox
# 46 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	releaseall
# 47 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 48 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 49 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_NotEnoughMoney::
# 50 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto_if_unset FLAG_DELIVERED_DEVON_GOODS, SlateportCity_OceanicMuseum_1F_EventScript_AllowEntranceAnyway
# 51 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_NotEnoughMoney, MSGBOX_DEFAULT
# 52 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	closemessage
# 53 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	hidemoneybox
# 54 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_OceanicMuseum_1F_Movement_PushPlayerBackFromCounter
# 55 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	waitmovement 0
# 56 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	releaseall
# 57 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 58 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 59 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_AllowEntranceAnyway::
# 60 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_CatchUpWithYourGroup, MSGBOX_DEFAULT
# 61 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	setvar VAR_SLATEPORT_MUSEUM_1F_STATE, 1
# 62 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	hidemoneybox
# 63 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	releaseall
# 64 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 65 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 66 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Movement_PushPlayerBackFromCounter:
# 67 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_down
# 68 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	step_end
# 69 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 70 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_MuseumGrunt1::
# 71 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_AquaExistForGoodOfAll, MSGBOX_NPC
# 72 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 73 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 74 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_MuseumGrunt2::
# 75 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_OurBossIsntHere, MSGBOX_NPC
# 76 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 77 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 78 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_MuseumGrunt3::
# 79 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_WouldStuffHereMakeMeRich, MSGBOX_NPC
# 80 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 81 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 82 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_MuseumGrunt4::
# 83 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_CanLearnForNefariousDeeds, MSGBOX_SIGN
# 84 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 85 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 86 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_MuseumGrunt5::
# 87 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_RustboroBungled, MSGBOX_NPC
# 88 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 89 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 90 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_MuseumGrunt6::
# 91 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_DidntHaveMoney, MSGBOX_NPC
# 92 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 93 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 94 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_WhirlpoolExperiment::
# 95 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_WhirlpoolExperiment, MSGBOX_SIGN
# 96 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 97 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 98 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_WaterfallExperiment::
# 99 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_WaterfallExperiment, MSGBOX_SIGN
# 100 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 101 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 102 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_OceanSoilDisplay::
# 103 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_OceanSoilDisplay, MSGBOX_SIGN
# 104 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 105 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 106 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_BeachSandDisplay::
# 107 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_BeachSandDisplay, MSGBOX_SIGN
# 108 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 109 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 110 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_OceanicMinifact1::
# 111 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_OceanicMinifact1, MSGBOX_SIGN
# 112 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 113 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 114 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_OceanicMinifact2::
# 115 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_OceanicMinifact2, MSGBOX_SIGN
# 116 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 117 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 118 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_OceanicMinifact3::
# 119 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_OceanicMinifact3, MSGBOX_SIGN
# 120 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 121 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 122 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_FossilDisplay::
# 123 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_FossilDisplay, MSGBOX_SIGN
# 124 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 125 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 126 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_DepthMeasuringMachine::
# 127 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_DepthMeasuringMachine, MSGBOX_SIGN
# 128 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 129 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 130 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_MuseumPatron1::
# 131 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_LearnAboutSeaForBattling, MSGBOX_NPC
# 132 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 133 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 134 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_MuseumPatron2::
# 135 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_SternIsRoleModel, MSGBOX_NPC
# 136 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 137 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 138 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_MuseumPatron3::
# 139 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_MustBePokemonWeDontKnow, MSGBOX_NPC
# 140 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 141 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 142 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_MuseumPatron4::
# 143 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_WantSeaPokemon, MSGBOX_NPC
# 144 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 145 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 146 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGrunt::
# 147 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	lock
# 148 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	faceplayer
# 149 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	delay 8
# 150 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	playse SE_PIN
# 151 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	applymovement LOCALID_FAMILIAR_GRUNT, Common_Movement_ExclamationMark
# 152 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	waitmovement 0
# 153 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	applymovement LOCALID_FAMILIAR_GRUNT, Common_Movement_Delay48
# 154 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	waitmovement 0
# 155 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_RememberMeTakeThis, MSGBOX_DEFAULT
# 156 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	compare VAR_GAME_SETTING_DIFFICULTY_MODE, GAME_SETTING_DIFFICULTY_HARD_MODE
# 157 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto_if_ge SlateportCity_OceanicMuseum_1F_EventScript_GiveTM_2
# 158 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	giveitem ITEM_TM_FLIP_TURN
# 159 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, SlateportCity_OceanicMuseum_1F_EventScript_NoRoomForThief
# 160 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	setflag FLAG_RECEIVED_TM_FLIP_TURN
# 161 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_HopeINeverSeeYouAgain, MSGBOX_DEFAULT
# 162 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	closemessage
# 163 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto_if_eq VAR_FACING, DIR_NORTH, SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGruntExitNorth
# 164 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto_if_eq VAR_FACING, DIR_SOUTH, SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGruntExitSouth
# 165 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto_if_eq VAR_FACING, DIR_WEST, SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGruntExitWestEast
# 166 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto_if_eq VAR_FACING, DIR_EAST, SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGruntExitWestEast
# 167 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 168 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_GiveTM_1:
# 169 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, SlateportCity_OceanicMuseum_1F_EventScript_NoRoomForThief
# 170 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	setflag FLAG_RECEIVED_TM_FLIP_TURN
# 171 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_HopeINeverSeeYouAgain, MSGBOX_DEFAULT
# 172 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	closemessage
# 173 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto_if_eq VAR_FACING, DIR_NORTH, SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGruntExitNorth
# 174 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto_if_eq VAR_FACING, DIR_SOUTH, SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGruntExitSouth
# 175 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto_if_eq VAR_FACING, DIR_WEST, SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGruntExitWestEast
# 176 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto_if_eq VAR_FACING, DIR_EAST, SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGruntExitWestEast
# 177 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 178 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 179 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_GiveTM_2:
# 180 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto SlateportCity_OceanicMuseum_1F_EventScript_GiveTM_1
# 181 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 182 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGruntExitNorth::
# 183 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_OceanicMuseum_1F_Movement_PlayerWatchGruntExitNorth
# 184 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	applymovement LOCALID_FAMILIAR_GRUNT, SlateportCity_OceanicMuseum_1F_Movement_FamiliarGruntExitNorth
# 185 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	waitmovement 0
# 186 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGruntExited
# 187 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 188 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 189 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGruntExitSouth::
# 190 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	applymovement LOCALID_FAMILIAR_GRUNT, SlateportCity_OceanicMuseum_1F_Movement_FamiliarGruntExit
# 191 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	waitmovement 0
# 192 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGruntExited
# 193 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 194 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 195 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGruntExitWestEast::
# 196 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_OceanicMuseum_1F_Movement_PlayerWatchGruntExitWestEast
# 197 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	applymovement LOCALID_FAMILIAR_GRUNT, SlateportCity_OceanicMuseum_1F_Movement_FamiliarGruntExit
# 198 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	waitmovement 0
# 199 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGruntExited
# 200 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 201 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 202 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGruntExited::
# 203 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_FAMILIAR_AQUA_GRUNT
# 204 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	playse SE_EXIT
# 205 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	removeobject LOCALID_FAMILIAR_GRUNT
# 206 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	release
# 207 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 208 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 209 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_NoRoomForThief::
# 210 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_YouHaveToTakeThis, MSGBOX_DEFAULT
# 211 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	release
# 212 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 213 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 214 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Movement_PlayerWatchGruntExitNorth:
# 215 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	delay_16
# 216 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	delay_8
# 217 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	delay_4
# 218 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_in_place_faster_down
# 219 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	step_end
# 220 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 221 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Movement_PlayerWatchGruntExitWestEast:
# 222 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	delay_16
# 223 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_in_place_faster_down
# 224 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	step_end
# 225 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 226 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Movement_FamiliarGruntExit:
# 227 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	face_down
# 228 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_fast_down
# 229 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_fast_down
# 230 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_fast_down
# 231 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_fast_down
# 232 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	delay_8
# 233 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	step_end
# 234 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 235 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Movement_FamiliarGruntExitNorth:
# 236 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_fast_right
# 237 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_fast_down
# 238 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_fast_down
# 239 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_fast_down
# 240 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_fast_down
# 241 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	delay_8
# 242 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	step_end
# 243 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 244 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_WouldYouLikeToEnter:
# 245 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Welcome to the Oceanic Museum.\p"
# 246 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "The entrance fee is ¥50.\n"
# 247 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Would you like to enter?$"
# 248 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 249 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_PleaseEnjoyYourself:
# 250 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Please enjoy yourself.$"
# 251 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 252 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_NotEnoughMoney:
# 253 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Oh? I'm sorry, but you don't seem to\n"
# 254 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "have enough money.$"
# 255 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 256 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_CatchUpWithYourGroup:
# 257 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Oh? You're with that group that\n"
# 258 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "went in earlier?\p"
# 259 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "You're the only one who's late.\n"
# 260 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "You'd better go catch up to them!$"
# 261 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 262 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_AquaExistForGoodOfAll:
# 263 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "We, Team Aqua, exist for the good\n"
# 264 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "of all!$"
# 265 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 266 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_OurBossIsntHere:
# 267 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "We were told to assemble here,\n"
# 268 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "so we did, but…\p"
# 269 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Our boss, the linchpin, isn't here.$"
# 270 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 271 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_WouldStuffHereMakeMeRich:
# 272 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "If I ripped off the stuff here,\n"
# 273 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "would it make me rich?$"
# 274 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 275 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_CanLearnForNefariousDeeds:
# 276 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "What I learn here, I can put to use on\n"
# 277 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "nefarious deeds…$"
# 278 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 279 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_RustboroBungled:
# 280 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "If our goons didn't bungle things\n"
# 281 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "in Rustboro, we wouldn't be here!$"
# 282 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 283 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_DidntHaveMoney:
# 284 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "I didn't have ¥50, so it took a long\n"
# 285 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "time getting by the receptionist.$"
# 286 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 287 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_LearnAboutSeaForBattling:
# 288 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "I want to learn about the sea and\n"
# 289 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "use that knowledge for battling.$"
# 290 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 291 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_SternIsRoleModel:
# 292 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "I get all giddy and gooey when\n"
# 293 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "I see the sea!\p"
# 294 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "For me, Capt. Stern is the number\n"
# 295 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "one role model!$"
# 296 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 297 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_MustBePokemonWeDontKnow:
# 298 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "The sea is vast without end, and\n"
# 299 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "infinitely deep…\p"
# 300 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "There must be many Pokémon that\n"
# 301 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "we don't know about.$"
# 302 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 303 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_WantSeaPokemon:
# 304 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "I want a sea Pokémon.\p"
# 305 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "I think it would feel cool and nice\n"
# 306 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "to hug.$"
# 307 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 308 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_RememberMeTakeThis:
# 309 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Aiyeeeh!\n"
# 310 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "What are you doing here?\p"
# 311 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Me? I'm the Team Aqua member\n"
# 312 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "you thumped before, remember?\l"
# 313 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Back in Rusturf Tunnel?\p"
# 314 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Here, take this!\n"
# 315 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "You have to forgive me!$"
# 316 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 317 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_HopeINeverSeeYouAgain:
# 318 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Me? I'm getting out of here!\n"
# 319 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Hope I never see you again!\p"
# 320 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Wahahaha!$"
# 321 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 322 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_YouHaveToTakeThis:
# 323 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Awww, come on!\n"
# 324 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "You have to take this and let me go!$"
# 325 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 326 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_WhirlpoolExperiment:
# 327 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "A blue fluid is spiraling inside\n"
# 328 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "a glass vessel.\p"
# 329 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“This is an experiment to create a\n"
# 330 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "whirlpool artificially using wind.”$"
# 331 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 332 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_WaterfallExperiment:
# 333 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "A red ball is bobbing up and down\n"
# 334 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "inside a glass vessel.\p"
# 335 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“This is an experiment simulating a\n"
# 336 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "waterfall using the ball's buoyancy.”$"
# 337 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 338 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_OceanSoilDisplay:
# 339 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "It's a sample of soil from the ocean\n"
# 340 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "floor.\p"
# 341 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“Over many years, the remains of\n"
# 342 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "life-forms settle at the bottom of\l"
# 343 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "the sea, making sedimentary layers.\p"
# 344 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“By analyzing these layers, the\n"
# 345 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "ancient past is revealed.”$"
# 346 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 347 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_BeachSandDisplay:
# 348 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "It's a sample of beach sand.\p"
# 349 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“Stones from mountains are washed\n"
# 350 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "down by rivers where they are\l"
# 351 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "chipped and ground down.\p"
# 352 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“They are reduced to grains and end\n"
# 353 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "up as sand on beaches.”$"
# 354 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 355 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_OceanicMinifact1:
# 356 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“OCEANIC MINIFACT 1\n"
# 357 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Why is seawater blue?\p"
# 358 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“Light is composed of many colors.\p"
# 359 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“When light passes through water,\n"
# 360 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "most kinds of light lose color.\p"
# 361 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“However, blue light retains its\n"
# 362 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "color, making the sea appear blue.”$"
# 363 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 364 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_OceanicMinifact2:
# 365 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“OCEANIC MINIFACT 2\n"
# 366 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Why is the sea salty?\p"
# 367 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“Seawater contains dissolved salt in\n"
# 368 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "the form of sodium and chlorine ions.\p"
# 369 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“These ions leech out of rocks\n"
# 370 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "and are carried out to sea by rain.\p"
# 371 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“The concentration of dissolved salt\n"
# 372 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "makes the sea salty.”$"
# 373 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 374 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_OceanicMinifact3:
# 375 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“OCEANIC MINIFACT 3\n"
# 376 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Which is bigger? The sea or land?\p"
# 377 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“The sea covers about 70% of\n"
# 378 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "the planet, and the rest is land.\p"
# 379 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“The sea is therefore more than twice\n"
# 380 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "the size of land.”$"
# 381 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 382 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_FossilDisplay:
# 383 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "It's a fossil with wavy ridges on it.\p"
# 384 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“Soil on the ocean floor gets scoured\n"
# 385 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "by the tide.\p"
# 386 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“The flowing seawater marks the soil\n"
# 387 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "with small ridges and valleys.\p"
# 388 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“If this soil becomes fossilized, it is\n"
# 389 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "called a ripple mark.”$"
# 390 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 391 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_DepthMeasuringMachine:
# 392 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "A strange machine is rotating under\n"
# 393 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "a glass dome.\p"
# 394 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Maybe it's for measuring the depth\n"
# 395 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "of something…$"

SlateportCity_OceanicMuseum_1F_EventScript_DrakeTrigger1::
# 400 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	setvar VAR_0x8008, 1
# 401 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto SlateportCity_OceanicMuseum_1F_EventScript_DrakeScene
	end


SlateportCity_OceanicMuseum_1F_EventScript_DrakeTrigger2::
# 407 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	setvar VAR_0x8008, 2
# 408 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto SlateportCity_OceanicMuseum_1F_EventScript_DrakeScene
	end


SlateportCity_OceanicMuseum_1F_EventScript_DrakeScene::
# 414 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	lockall
# 415 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	call_if_eq VAR_0x8008, 1, SlateportCity_OceanicMuseum_1F_EventScript_DrakeApproachPlayer1
# 416 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	call_if_eq VAR_0x8008, 2, SlateportCity_OceanicMuseum_1F_EventScript_DrakeApproachPlayer2
# 417 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1FDrakeIntro, MSGBOX_DEFAULT
# 418 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	closemessage
# 419 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	delay 10
# 420 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	call ApplyMovementDrakeExit
# 421 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	removeobject LOCALID_DRAKE
# 422 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	setvar VAR_DRAKE_SLATEPORT, 2
# 423 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	releaseall
	end


SlateportCity_OceanicMuseum_1F_EventScript_DrakeApproachPlayer1::
# 428 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	playse SE_DOOR
# 429 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	addobject LOCALID_DRAKE
# 430 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	applymovement LOCALID_DRAKE, SlateportCity_OceanicMuseum_1F_Movement_DrakeApproachPlayer
# 431 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	waitmovement 0
	return


SlateportCity_OceanicMuseum_1F_EventScript_DrakeApproachPlayer2::
# 436 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	playse SE_DOOR
# 437 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	setobjectxyperm LOCALID_DRAKE, 10, 8
# 438 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	addobject LOCALID_DRAKE
# 439 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	applymovement LOCALID_DRAKE, SlateportCity_OceanicMuseum_1F_Movement_DrakeApproachPlayer
# 440 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	waitmovement 0
	return


SlateportCity_OceanicMuseum_1F_Movement_DrakeApproachPlayer::
# 445 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_up
# 446 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	step_end
	return


ApplyMovementDrakeExit::
# 450 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	playse SE_DOOR
# 451 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	applymovement LOCALID_DRAKE, SlateportCity_OceanicMuseum_1F_EventScript_DrakeExit
# 452 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	waitmovement 0
	return


SlateportCity_OceanicMuseum_1F_EventScript_DrakeExit::
# 457 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_down
# 458 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	step_end
	return


SlateportCity_OceanicMuseum_1FDrakeIntro::
# 461 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Hmph. Oh, I apologize for bumping into\n"
	.string "you.\p"
	.string "I happened to be in the area and saw\n"
	.string "several members of Team Aqua fleeing\l"
	.string "from this museum.\p"
	.string "Do you happen to know anything about\n"
	.string "why they were fleeing?\p"
	.string "… … … … … …\p"
	.string "I see, so they were after some Devon\n"
	.string "Parts meant for Capt. Stern, but you\l"
	.string "defeated them in battle and scared\l"
	.string "them off.\p"
	.string "Sounds like you must be quite the\n"
	.string "trainer to be able to deal with Team\l"
	.string "Aqua all by yourself.\p"
	.string "Allow me to introduce myself then, I am\n"
	.string "Drake of the Elite Four, and you are?\p"
	.string "… … … … … …\p"
	.string "I see. Well, excellent work, {PLAYER}.\n"
	.string "I'll be going now, but I have a feeling\l"
	.string "our paths may cross again sometime.$"
