# 1 "data/maps/PacifidlogTown_House3/scripts.pory"

# 2 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_MapScripts::
# 3 "data/maps/PacifidlogTown_House3/scripts.pory"
	.byte 0
# 4 "data/maps/PacifidlogTown_House3/scripts.pory"

# 5 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_EventScript_Trader::
# 6 "data/maps/PacifidlogTown_House3/scripts.pory"
	lock
# 7 "data/maps/PacifidlogTown_House3/scripts.pory"
	faceplayer
# 8 "data/maps/PacifidlogTown_House3/scripts.pory"
	goto_if_set FLAG_PACIFIDLOG_NPC_TRADE_COMPLETED, PacifidlogTown_House3_EventScript_TradeCompleted
# 9 "data/maps/PacifidlogTown_House3/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_IRON_BUNDLE
# 10 "data/maps/PacifidlogTown_House3/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 11 "data/maps/PacifidlogTown_House3/scripts.pory"
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
# 12 "data/maps/PacifidlogTown_House3/scripts.pory"
	copyvar VAR_0x8009, VAR_RESULT
# 13 "data/maps/PacifidlogTown_House3/scripts.pory"
	msgbox PacifidlogTown_House3_Text_WillingToTradeIt, MSGBOX_YESNO
# 14 "data/maps/PacifidlogTown_House3/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PacifidlogTown_House3_EventScript_DeclineTrade
# 15 "data/maps/PacifidlogTown_House3/scripts.pory"
	special ChoosePartyMon
# 16 "data/maps/PacifidlogTown_House3/scripts.pory"
	waitstate
# 17 "data/maps/PacifidlogTown_House3/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 18 "data/maps/PacifidlogTown_House3/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, PacifidlogTown_House3_EventScript_DeclineTrade
# 19 "data/maps/PacifidlogTown_House3/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 20 "data/maps/PacifidlogTown_House3/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 21 "data/maps/PacifidlogTown_House3/scripts.pory"
	copyvar VAR_0x800B, VAR_RESULT
# 22 "data/maps/PacifidlogTown_House3/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, PacifidlogTown_House3_EventScript_NotRequestedMon
# 23 "data/maps/PacifidlogTown_House3/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 24 "data/maps/PacifidlogTown_House3/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 25 "data/maps/PacifidlogTown_House3/scripts.pory"
	special CreateInGameTradePokemon
# 26 "data/maps/PacifidlogTown_House3/scripts.pory"
	special DoInGameTradeScene
# 27 "data/maps/PacifidlogTown_House3/scripts.pory"
	waitstate
# 28 "data/maps/PacifidlogTown_House3/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 29 "data/maps/PacifidlogTown_House3/scripts.pory"
	msgbox PacifidlogTown_House3_Text_ItsSubtlyDifferentThankYou, MSGBOX_DEFAULT
# 30 "data/maps/PacifidlogTown_House3/scripts.pory"
	setflag FLAG_PACIFIDLOG_NPC_TRADE_COMPLETED
# 31 "data/maps/PacifidlogTown_House3/scripts.pory"
	release
# 32 "data/maps/PacifidlogTown_House3/scripts.pory"
	end
# 33 "data/maps/PacifidlogTown_House3/scripts.pory"

# 34 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_EventScript_DeclineTrade::
# 35 "data/maps/PacifidlogTown_House3/scripts.pory"
	msgbox PacifidlogTown_House3_Text_NotDesperateOrAnything, MSGBOX_DEFAULT
# 36 "data/maps/PacifidlogTown_House3/scripts.pory"
	release
# 37 "data/maps/PacifidlogTown_House3/scripts.pory"
	end
# 38 "data/maps/PacifidlogTown_House3/scripts.pory"

# 39 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_EventScript_NotRequestedMon::
# 40 "data/maps/PacifidlogTown_House3/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 41 "data/maps/PacifidlogTown_House3/scripts.pory"
	msgbox PacifidlogTown_House3_Text_WontAcceptAnyLessThanRealMon, MSGBOX_DEFAULT
# 42 "data/maps/PacifidlogTown_House3/scripts.pory"
	release
# 43 "data/maps/PacifidlogTown_House3/scripts.pory"
	end
# 44 "data/maps/PacifidlogTown_House3/scripts.pory"

# 45 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_EventScript_TradeCompleted::
# 46 "data/maps/PacifidlogTown_House3/scripts.pory"
	msgbox PacifidlogTown_House3_Text_ReallyWantedToGetBagon, MSGBOX_DEFAULT
# 47 "data/maps/PacifidlogTown_House3/scripts.pory"
	release
# 48 "data/maps/PacifidlogTown_House3/scripts.pory"
	end
# 49 "data/maps/PacifidlogTown_House3/scripts.pory"

# 50 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_EventScript_Girl::
# 51 "data/maps/PacifidlogTown_House3/scripts.pory"
	msgbox PacifidlogTown_House3_Text_IsThatAPokedex, MSGBOX_NPC
# 52 "data/maps/PacifidlogTown_House3/scripts.pory"
	end
# 53 "data/maps/PacifidlogTown_House3/scripts.pory"

# 54 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_Text_WillingToTradeIt:
# 55 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "I found this weird robot bird thing…\n"
# 56 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "I'm not a huge fan, I kind of wanted to\l"
# 57 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "find the original.\p"
# 58 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "Say, you wouldn't happen to have a\n"
# 59 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "Delibird would you?\p"
# 60 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "I'll trade you this Iron Bundle for it\n"
# 61 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "if you do!$"
# 62 "data/maps/PacifidlogTown_House3/scripts.pory"

# 63 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_Text_ItsSubtlyDifferentThankYou:
# 64 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "Awesome, it's the original thing!\n"
# 65 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "I don't know where this cheap knock off\l"
# 66 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "came from, but you can never beat the\l"
# 67 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "real deal.\p"
# 68 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "Thank you so much!$"
# 69 "data/maps/PacifidlogTown_House3/scripts.pory"

# 70 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_Text_WontAcceptAnyLessThanRealMon:
# 71 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "Hey that's not a Delibird!\n"
# 72 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "What are you trying to pull here?$"
# 73 "data/maps/PacifidlogTown_House3/scripts.pory"

# 74 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_Text_NotDesperateOrAnything:
# 75 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "Oh, so you're not going to go through\n"
# 76 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "with this?\p"
# 77 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "That's cool. I'm not desperate to make\n"
# 78 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "a trade or anything.$"
# 79 "data/maps/PacifidlogTown_House3/scripts.pory"

# 80 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_Text_ReallyWantedToGetBagon:
# 81 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "I don't even know where you found\n"
# 82 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "this Delibird, I searched high and low\l"
# 83 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "and all I found was that weird robot.$"
# 84 "data/maps/PacifidlogTown_House3/scripts.pory"

# 85 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_Text_IsThatAPokedex:
# 86 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "Is that a Pokédex?\p"
# 87 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "Did you get to meet a lot of different\n"
# 88 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "Pokémon?\p"
# 89 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "I wish I was like you.$"
