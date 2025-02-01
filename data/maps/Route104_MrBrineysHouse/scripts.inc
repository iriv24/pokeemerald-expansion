# 1 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 2 "data/maps/Route104_MrBrineysHouse/scripts.pory"
.set LOCALID_BRINEY, 1
# 3 "data/maps/Route104_MrBrineysHouse/scripts.pory"
.set LOCALID_PEEKO, 2
# 4 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 5 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_MapScripts::
# 6 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route104_MrBrineysHouse_OnTransition
# 7 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.byte 0
# 8 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 9 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_OnTransition:
# 10 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setflag FLAG_LANDMARK_MR_BRINEY_HOUSE
# 11 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	call_if_eq VAR_BRINEY_HOUSE_STATE, 1, Route104_MrBrineysHouse_EventScript_SetBrineyPeekoPos
# 12 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	end
# 13 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 14 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_EventScript_SetBrineyPeekoPos::
# 15 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setobjectxyperm LOCALID_BRINEY, 9, 3
# 16 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setobjectmovementtype LOCALID_BRINEY, MOVEMENT_TYPE_WALK_SEQUENCE_DOWN_LEFT_UP_RIGHT
# 17 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setobjectxyperm LOCALID_PEEKO, 9, 6
# 18 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setobjectmovementtype LOCALID_PEEKO, MOVEMENT_TYPE_WALK_SEQUENCE_LEFT_UP_RIGHT_DOWN
# 19 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	return
# 20 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 21 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_EventScript_Briney::
# 22 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	lock
# 23 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	faceplayer
# 24 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	call_if_unset FLAG_MR_BRINEY_SAILING_INTRO, Route104_MrBrineysHouse_EventScript_SailingIntro
# 25 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto_if_unset FLAG_DELIVERED_STEVEN_LETTER, Route104_MrBrineysHouse_EventScript_SailBothDeliveries
# 26 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto_if_unset FLAG_DELIVERED_DEVON_GOODS, Route104_MrBrineysHouse_EventScript_SailDeliverPackage
# 27 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto Route104_MrBrineysHouse_EventScript_WhereAreWeBound
# 28 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	end
# 29 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 30 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_EventScript_SailingIntro::
# 31 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setflag FLAG_MR_BRINEY_SAILING_INTRO
# 32 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	msgbox Route104_MrBrineysHouse_Text_WaitUpPeeko, MSGBOX_DEFAULT
# 33 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	msgbox Route104_MrBrineysHouse_Text_ItsYouLetsSailToDewford, MSGBOX_YESNO
# 34 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route104_MrBrineysHouse_EventScript_DeclineDeliverySailing
# 35 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto Route104_MrBrineysHouse_EventScript_SailToDewford
# 36 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	end
# 37 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 38 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_EventScript_WhereAreWeBound::
# 39 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	message Route104_MrBrineysHouse_Text_WhereAreWeBound
# 40 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	waitmessage
# 41 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	multichoicedefault 20, 8, MULTI_BRINEY_OFF_DEWFORD, 1, FALSE
# 42 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	switch VAR_RESULT
# 43 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	case 0, Route104_MrBrineysHouse_EventScript_SailToDewford
# 44 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	case 1, Route104_MrBrineysHouse_EventScript_DeclineSailing
# 45 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	case MULTI_B_PRESSED, Route104_MrBrineysHouse_EventScript_DeclineSailing
# 46 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	end
# 47 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 48 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_EventScript_SailBothDeliveries::
# 49 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	msgbox Route104_MrBrineysHouse_Text_NeedToMakeDeliveriesSailToDewford, MSGBOX_YESNO
# 50 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route104_MrBrineysHouse_EventScript_DeclineDeliverySailing
# 51 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto Route104_MrBrineysHouse_EventScript_SailToDewford
# 52 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	end
# 53 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 54 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_EventScript_SailDeliverPackage::
# 55 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	msgbox Route104_MrBrineysHouse_Text_NeedToDeliverPackageSailToDewford, MSGBOX_YESNO
# 56 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route104_MrBrineysHouse_EventScript_DeclineDeliverySailing
# 57 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto Route104_MrBrineysHouse_EventScript_SailToDewford
# 58 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	end
# 59 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 60 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_EventScript_DeclineDeliverySailing::
# 61 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	msgbox Route104_MrBrineysHouse_Text_DeclineDeliverySail, MSGBOX_DEFAULT
# 62 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	release
# 63 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	end
# 64 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 65 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_EventScript_DeclineSailing::
# 66 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	msgbox Route104_MrBrineysHouse_Text_TellMeWheneverYouWantToSail, MSGBOX_DEFAULT
# 67 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	release
# 68 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	end
# 69 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 70 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_EventScript_SailToDewford::
# 71 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	msgbox Route104_MrBrineysHouse_Text_SetSailForDewford, MSGBOX_DEFAULT
# 72 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	call EventScript_BackupMrBrineyLocation
# 73 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setvar VAR_BOARD_BRINEY_BOAT_STATE, 1
# 74 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_104_MR_BRINEY
# 75 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 76 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 77 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_RIVAL
# 78 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	warp MAP_ROUTE104, 13, 51
# 79 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	waitstate
# 80 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	releaseall
# 81 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	end
# 82 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 83 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_EventScript_Peeko::
# 84 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	lock
# 85 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	faceplayer
# 86 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	waitse
# 87 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
# 88 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	msgbox Route104_MrBrineysHouse_Text_Peeko, MSGBOX_DEFAULT
# 89 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	waitmoncry
# 90 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	release
# 91 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	end
# 92 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 93 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_Text_WaitUpPeeko:
# 94 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "Mr. Briney: Hold on, lass!\n"
# 95 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "Wait up, Peeko!$"
# 96 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 97 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_Text_ItsYouLetsSailToDewford:
# 98 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "Hm? You're {PLAYER}{KUN}!\n"
# 99 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "You saved my darling Peeko!\l"
# 100 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "We owe so much to you!\p"
# 101 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "What's that?\n"
# 102 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "You want to sail with me?\p"
# 103 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "Hmhm…\p"
# 104 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "You have a Letter bound for Dewford\n"
# 105 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "and a package for Slateport, then?\p"
# 106 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "Quite the busy life you must lead!\p"
# 107 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "But, certainly, what you're asking is\n"
# 108 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "no problem at all.\p"
# 109 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "You've come to the right man!\n"
# 110 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "We'll set sail for Dewford.$"
# 111 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 112 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_Text_SetSailForDewford:
# 113 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "Mr. Briney: Dewford it is, then!\p"
# 114 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "Anchors aweigh!\n"
# 115 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "Peeko, we're setting sail, my darling!$"
# 116 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 117 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_Text_DeclineDeliverySail:
# 118 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "Mr. Briney: Is that so?\n"
# 119 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "Your deliveries can wait?\p"
# 120 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "You just go on and tell me whenever\n"
# 121 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "you want to set sail!$"
# 122 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 123 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_Text_NeedToMakeDeliveriesSailToDewford:
# 124 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "Mr. Briney: Ahoy!\n"
# 125 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "I know exactly what you want to say!\p"
# 126 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "You're to deliver a Letter to Dewford\n"
# 127 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "and a package to Slateport.\p"
# 128 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "What you need me to do is no problem\n"
# 129 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "at all--I'm the man for the job!\p"
# 130 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "First, we'll set sail for Dewford.$"
# 131 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 132 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_Text_NeedToDeliverPackageSailToDewford:
# 133 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "Mr. Briney: Ahoy!\n"
# 134 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "I know exactly what you want to say!\p"
# 135 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "You're to deliver a package to\n"
# 136 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "Capt. Stern in Slateport.\p"
# 137 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "What you need me to do is no problem\n"
# 138 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "at all--I'm the man for the job!\p"
# 139 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "First, we'll set sail for Dewford.$"
# 140 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 141 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_Text_WhereAreWeBound:
# 142 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "Mr. Briney: Ahoy!\n"
# 143 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "For you, I'll go out to sea anytime!\p"
# 144 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "Now, my friend, where are we bound?$"
# 145 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 146 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_Text_TellMeWheneverYouWantToSail:
# 147 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "Mr. Briney: Is that so?\n"
# 148 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "Well, Peeko owes her life to you.\p"
# 149 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "You just go on and tell me whenever\n"
# 150 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "you want to set sail!$"
# 151 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 152 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_Text_Peeko:
# 153 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "Peeko: Pii piihyoro!$"
