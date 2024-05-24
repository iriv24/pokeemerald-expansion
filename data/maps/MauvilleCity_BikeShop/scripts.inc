# 1 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 2 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_MapScripts::
# 3 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.byte 0
# 4 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 5 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_Rydel::
# 6 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	lock
# 7 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	faceplayer
# 8 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_set FLAG_RECEIVED_BIKE, MauvilleCity_BikeShop_EventScript_AskSwitchBikes
# 9 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_set FLAG_DECLINED_BIKE, MauvilleCity_BikeShop_EventScript_SkipGreeting
# 10 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_RydelGreeting, MSGBOX_DEFAULT
# 11 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_DidYouComeFromFarAway, MSGBOX_YESNO
# 12 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_eq VAR_RESULT, YES, MauvilleCity_BikeShop_EventScript_YesFar
# 13 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_BikeShop_EventScript_NotFar
# 14 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	release
# 15 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 16 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 17 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_SkipGreeting::
# 18 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_DidYouComeFromFarAway, MSGBOX_YESNO
# 19 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_eq VAR_RESULT, YES, MauvilleCity_BikeShop_EventScript_YesFar
# 20 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_BikeShop_EventScript_NotFar
# 21 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 22 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 23 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_ChooseBike::
# 24 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_ExplainBikesChooseWhichOne, MSGBOX_DEFAULT
# 25 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	giveitem ITEM_MACH_BIKE
# 26 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 27 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	giveitem ITEM_ACRO_BIKE
# 28 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 29 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_GetOutThere, MSGBOX_DEFAULT
# 30 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	setflag FLAG_RECEIVED_BIKE
# 31 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	release
# 32 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 33 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 34 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_NotFar::
# 35 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	setflag FLAG_DECLINED_BIKE
# 36 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_GuessYouDontNeedBike, MSGBOX_DEFAULT
# 37 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	release
# 38 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 39 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 40 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_YesFar::
# 41 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseBike
# 42 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 43 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 44 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_GetMachBike::
# 45 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_ChoseMachBike, MSGBOX_DEFAULT
# 46 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	giveitem ITEM_MACH_BIKE
# 47 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 48 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ComeBackToSwitchBikes
# 49 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 50 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 51 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_GetAcroBike::
# 52 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_ChoseAcroBike, MSGBOX_DEFAULT
# 53 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	giveitem ITEM_ACRO_BIKE
# 54 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 55 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ComeBackToSwitchBikes
# 56 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 57 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 58 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_ComeBackToSwitchBikes::
# 59 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_ComeBackToSwitchBikes, MSGBOX_DEFAULT
# 60 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	special SwapRegisteredBike
# 61 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	release
# 62 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 63 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 64 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_AskSwitchBikes::
# 65 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_WantToSwitchBikes, MSGBOX_DEFAULT
# 66 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	release
# 67 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 68 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 69 "data/maps/MauvilleCity_BikeShop/scripts.pory"
@ If the player does not have a bike on them Rydel assumes its stored in the PC
# 70 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_SwitchBikes::
# 71 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_IllSwitchBikes, MSGBOX_DEFAULT
# 72 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	checkitem ITEM_ACRO_BIKE
# 73 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_BikeShop_EventScript_SwitchAcroForMach
# 74 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	checkitem ITEM_MACH_BIKE
# 75 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_BikeShop_EventScript_SwitchMachForAcro
# 76 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_OhYourBikeIsInPC, MSGBOX_DEFAULT
# 77 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	release
# 78 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 79 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 80 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_KeepBike::
# 81 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_HappyYouLikeIt, MSGBOX_DEFAULT
# 82 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	release
# 83 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 84 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 85 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_SwitchAcroForMach::
# 86 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	incrementgamestat GAME_STAT_TRADED_BIKES
# 87 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_ExchangedAcroForMach, MSGBOX_DEFAULT
# 88 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	removeitem ITEM_ACRO_BIKE
# 89 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	giveitem ITEM_MACH_BIKE
# 90 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ComeBackToSwitchBikes
# 91 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 92 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 93 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_SwitchMachForAcro::
# 94 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	incrementgamestat GAME_STAT_TRADED_BIKES
# 95 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_ExchangedMachForAcro, MSGBOX_DEFAULT
# 96 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	removeitem ITEM_MACH_BIKE
# 97 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	giveitem ITEM_ACRO_BIKE
# 98 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ComeBackToSwitchBikes
# 99 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 100 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 101 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_Assistant::
# 102 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_HandbooksAreInBack, MSGBOX_NPC
# 103 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 104 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 105 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_MachBikeHandbook::
# 106 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_MachHandbookWhichPage
# 107 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 108 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage
# 109 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 110 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 111 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage::
# 112 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	multichoice 0, 0, MULTI_MACH_BIKE_INFO, FALSE
# 113 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	switch VAR_RESULT
# 114 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 0, MauvilleCity_BikeShop_EventScript_HowToRide
# 115 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 1, MauvilleCity_BikeShop_EventScript_HowToTurn
# 116 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 2, MauvilleCity_BikeShop_EventScript_SandySlopes
# 117 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 3, MauvilleCity_BikeShop_EventScript_ExitMachHandbook
# 118 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case MULTI_B_PRESSED, MauvilleCity_BikeShop_EventScript_ExitMachHandbook
# 119 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 120 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 121 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_HowToRide::
# 122 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_HowToRideMachBike
# 123 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 124 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage
# 125 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 126 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 127 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_HowToTurn::
# 128 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_HowToTurnMachBike
# 129 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 130 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage
# 131 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 132 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 133 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_SandySlopes::
# 134 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_SandySlopes
# 135 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 136 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage
# 137 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 138 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 139 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_ExitMachHandbook::
# 140 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	release
# 141 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 142 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 143 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_AcroBikeHandbook::
# 144 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_AcroHandbookWhichPage
# 145 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 146 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage
# 147 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 148 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 149 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage::
# 150 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	multichoice 0, 0, MULTI_ACRO_BIKE_INFO, FALSE
# 151 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	switch VAR_RESULT
# 152 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 0, MauvilleCity_BikeShop_EventScript_Wheelies
# 153 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 1, MauvilleCity_BikeShop_EventScript_BunnyHops
# 154 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 2, MauvilleCity_BikeShop_EventScript_Jumps
# 155 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 3, MauvilleCity_BikeShop_EventScript_ExitAcroHandbook
# 156 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case MULTI_B_PRESSED, MauvilleCity_BikeShop_EventScript_ExitAcroHandbook
# 157 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 158 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 159 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_Wheelies::
# 160 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_Wheelies
# 161 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 162 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage
# 163 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 164 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 165 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_BunnyHops::
# 166 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_BunnyHops
# 167 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 168 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage
# 169 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 170 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 171 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_Jumps::
# 172 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_Jumps
# 173 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 174 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage
# 175 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 176 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 177 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_ExitAcroHandbook::
# 178 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	release
# 179 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 180 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 181 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_RydelGreeting:
# 182 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Well, well, what have we here?\n"
# 183 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "A most energetic customer!\p"
# 184 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Me? You may call me Rydel.\n"
# 185 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I'm the owner of this cycle shop.$"
# 186 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 187 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_DidYouComeFromFarAway:
# 188 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Your running shoes…\n"
# 189 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "They're awfully filthy.\p"
# 190 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Did you come from far away?$"
# 191 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 192 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_GuessYouDontNeedBike:
# 193 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Is that right?\p"
# 194 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Then, I guess you have no need for\n"
# 195 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "any of my bikes.$"
# 196 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 197 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_ExplainBikesChooseWhichOne:
# 198 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Hm, hm… … … … …\p"
# 199 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "You're saying that you came all this\n"
# 200 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "way from Littleroot?\p"
# 201 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "My goodness!\n"
# 202 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "That's ridiculously far!\p"
# 203 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "If you had one of my bikes, you could\n"
# 204 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "go anywhere easily while feeling the\l"
# 205 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "gentle caress of the wind!\p"
# 206 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I'll tell you what!\n"
# 207 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I'll give you a bike!\p"
# 208 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Oh, what the heck!\n"
# 209 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I'll give you TWO bikes!\p"
# 210 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I forgot to tell you that there are\n"
# 211 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "two kinds of bikes!\p"
# 212 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "They are the Mach Bike and\n"
# 213 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "the Acro Bike!\p"
# 214 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "The Mach Bike is for cyclists who want\n"
# 215 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "to feel the wind with their bodies!\p"
# 216 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "And an Acro Bike is for those who\n"
# 217 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "prefer technical rides!\p"
# 218 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I'm a real sweetheart, so you can\n"
# 219 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "have them both, free of charge!$"
# 220 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 221 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_GetOutThere:
# 222 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I just love seeing the smiling face of a\n"
# 223 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "new cyclist!\p"
# 224 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "What are you waiting for, get out there\n"
# 225 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "and ride!$"
# 226 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 227 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 228 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_ChoseMachBike:
# 229 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "{PLAYER} chose the Mach Bike.$"
# 230 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 231 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_ChoseAcroBike:
# 232 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "{PLAYER} chose the Acro Bike.$"
# 233 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 234 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_ComeBackToSwitchBikes:
# 235 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "If you get the urge to switch\n"
# 236 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "bikes, just come see me!$"
# 237 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 238 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_WantToSwitchBikes:
# 239 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Oh? Don't you just love those bikes!$"
# 240 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 241 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_IllSwitchBikes:
# 242 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Okay, no problem!\n"
# 243 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I'll switch bikes for you!$"
# 244 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 245 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_ExchangedMachForAcro:
# 246 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "{PLAYER} got the Mach Bike exchanged\n"
# 247 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "for an Acro Bike.$"
# 248 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 249 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_ExchangedAcroForMach:
# 250 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "{PLAYER} got the Acro Bike exchanged\n"
# 251 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "for a Mach Bike.$"
# 252 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 253 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_HappyYouLikeIt:
# 254 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Good, good!\n"
# 255 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I'm happy that you like it!$"
# 256 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 257 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_OhYourBikeIsInPC:
# 258 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Oh? What happened to that bike\n"
# 259 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I gave you?\p"
# 260 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Oh, I get it, you stored it using your PC.\p"
# 261 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Well, take it out of PC storage,\n"
# 262 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "and I'll be happy to exchange it!\p"
# 263 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "May the wind always be at your back\n"
# 264 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "on your adventure!$"
# 265 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 266 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_HandbooksAreInBack:
# 267 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I'm learning about bikes while\n"
# 268 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I work here.\p"
# 269 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "If you need advice on how to ride your\n"
# 270 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "bike, there're a couple handbooks in\l"
# 271 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "the back.$"
# 272 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 273 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_MachHandbookWhichPage:
# 274 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "It's a handbook on the Mach Bike.\p"
# 275 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Which page do you want to read?$"
# 276 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 277 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_HowToRideMachBike:
# 278 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "A bike moves in the direction that\n"
# 279 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "the + Control Pad is pressed.\p"
# 280 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "It will speed up once it gets rolling.\p"
# 281 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "To stop, release the + Control Pad.\n"
# 282 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "The bike will slow to a stop.\p"
# 283 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Want to read a different page?$"
# 284 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 285 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_HowToTurnMachBike:
# 286 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "A Mach Bike is speedy, but it can't\n"
# 287 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "stop very quickly.\p"
# 288 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "It gets a little tricky to get around\n"
# 289 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "a corner.\p"
# 290 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Release the + Control Pad a little\n"
# 291 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "before the corner and slow down.\p"
# 292 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Want to read a different page?$"
# 293 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 294 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_SandySlopes:
# 295 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "There are small sandy slopes\n"
# 296 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "throughout the HOENN region.\p"
# 297 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "The loose, crumbly sand makes it\n"
# 298 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "impossible to climb normally.\p"
# 299 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "But if you have a Mach Bike, you can\n"
# 300 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "zip up a sandy slope.\p"
# 301 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Want to read a different page?$"
# 302 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 303 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_AcroHandbookWhichPage:
# 304 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "It's a handbook on the Acro Bike.\p"
# 305 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Which page do you want to read?$"
# 306 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 307 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_Wheelies:
# 308 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Press the B Button while riding,\n"
# 309 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "and the front wheel lifts up.\p"
# 310 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "You can zip around with the front\n"
# 311 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "wheel up using the + Control Pad.\p"
# 312 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "This technique is called a wheelie.\p"
# 313 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Want to read a different page?$"
# 314 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 315 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_BunnyHops:
# 316 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Keeping the B Button pressed,\n"
# 317 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "your bike can hop on the spot.\p"
# 318 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "This technique is called a bunny hop.\p"
# 319 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "You can ride while hopping, too.\p"
# 320 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Want to read a different page?$"
# 321 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 322 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_Jumps:
# 323 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Press the B Button and the + Control\n"
# 324 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Pad at the same time to jump.\p"
# 325 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Press the + Control Pad to the side\n"
# 326 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "to jump sideways.\p"
# 327 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Press it backwards to make the bike\n"
# 328 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "change directions while jumping.\p"
# 329 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Want to read a different page?$"
