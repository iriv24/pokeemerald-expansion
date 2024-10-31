# 1 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 2 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_MapScripts::
# 3 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.byte 0
# 4 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 5 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_EventScript_NameRater::
# 6 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_Text_PleasedToRateMonNickname, MSGBOX_DEFAULT
# 7 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	release
# 8 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	end
# 9 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 10 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_EventScript_ChooseMonToRate::
# 11 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_Text_CritiqueWhichMonNickname, MSGBOX_DEFAULT
# 12 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	special ChoosePartyMon
# 13 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	waitstate
# 14 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto_if_ne VAR_0x8004, PARTY_NOTHING_CHOSEN, SlateportCity_NameRatersHouse_EventScript_RateMonNickname
# 15 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, SlateportCity_NameRatersHouse_EventScript_DeclineNameRate
# 16 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	end
# 17 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 18 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_EventScript_DeclineNameRate::
# 19 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_Text_DoVisitAgain, MSGBOX_DEFAULT
# 20 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	release
# 21 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	end
# 22 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 23 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_EventScript_RateMonNickname::
# 24 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 25 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, SPECIES_EGG, SlateportCity_NameRatersHouse_EventScript_CantRateEgg
# 26 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	special BufferMonNickname
# 27 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	special IsMonOTIDNotPlayers
# 28 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, SlateportCity_NameRatersHouse_EventScript_PlayerNotMonsOT
# 29 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	specialvar VAR_RESULT, MonOTNameNotPlayer
# 30 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	special BufferMonNickname
# 31 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, SlateportCity_NameRatersHouse_EventScript_PlayerNotMonsOT
# 32 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_Text_FineNameSuggestBetterOne, MSGBOX_YESNO
# 33 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, YES, SlateportCity_NameRatersHouse_EventScript_ChangeNickname
# 34 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SlateportCity_NameRatersHouse_EventScript_DeclineNameRate
# 35 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	end
# 36 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 37 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_EventScript_CantRateEgg::
# 38 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_Text_ThatIsMerelyAnEgg, MSGBOX_DEFAULT
# 39 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	release
# 40 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	end
# 41 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 42 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_EventScript_PlayerNotMonsOT::
# 43 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_Text_MagnificentName, MSGBOX_DEFAULT
# 44 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	release
# 45 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	end
# 46 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 47 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_EventScript_ChangeNickname::
# 48 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_Text_WhatShallNewNameBe, MSGBOX_DEFAULT
# 49 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 50 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	specialvar VAR_RESULT, TryPutNameRaterShowOnTheAir
# 51 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	special BufferMonNickname
# 52 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, SlateportCity_NameRatersHouse_EventScript_NewNameDifferent
# 53 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_Text_NameNoDifferentYetSuperior, MSGBOX_DEFAULT
# 54 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	release
# 55 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	end
# 56 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 57 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_EventScript_NewNameDifferent::
# 58 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_Text_MonShallBeKnownAsName, MSGBOX_DEFAULT
# 59 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	release
# 60 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	end
# 61 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 62 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_Text_PleasedToRateMonNickname:
# 63 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Hi, hi! I'm the Name Rater!\p"
# 64 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "But I'm lazy now, all your nicknames\n"
# 65 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "look great! Or terrible!\p"
# 66 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "I don't really care, I'm retired.$"
# 67 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 68 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_Text_CritiqueWhichMonNickname:
# 69 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Which POKéMON's nickname should\n"
# 70 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "I critique?$"
# 71 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 72 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_Text_FineNameSuggestBetterOne:
# 73 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Hmmm… {STR_VAR_1}, is it? That is\n"
# 74 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "quite a fine name you bestowed.\p"
# 75 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "But! What say you, if I were to\n"
# 76 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "suggest a slightly better name?$"
# 77 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 78 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_Text_WhatShallNewNameBe:
# 79 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Ah, good. Then, what shall the new\n"
# 80 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "nickname be?$"
# 81 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 82 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_Text_MonShallBeKnownAsName:
# 83 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Done! From now on, this POKéMON\n"
# 84 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "shall be known as {STR_VAR_1}!\p"
# 85 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "It is a better name than before!\n"
# 86 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "How fortunate for you!$"
# 87 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 88 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_Text_DoVisitAgain:
# 89 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "I see.\n"
# 90 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Do come visit again.$"
# 91 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 92 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_Text_NameNoDifferentYetSuperior:
# 93 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Done! From now on, this POKéMON\n"
# 94 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "shall be known as {STR_VAR_1}!\p"
# 95 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "It looks no different from before,\n"
# 96 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "and yet, this is vastly superior!\p"
# 97 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "How fortunate for you!$"
# 98 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 99 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_Text_MagnificentName:
# 100 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Hmmm… {STR_VAR_1} it is!\p"
# 101 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "This is a magnificent nickname!\n"
# 102 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "It is impeccably beyond reproach!\p"
# 103 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "You'll do well to cherish your\n"
# 104 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "{STR_VAR_1} now and beyond.$"
# 105 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 106 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_Text_ThatIsMerelyAnEgg:
# 107 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Now, now.\n"
# 108 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "That is merely an EGG!$"
