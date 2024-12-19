# 1 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 2 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_MapScripts::
# 3 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.byte 0
# 4 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 5 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_EventScript_NameRater::
# 6 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_Text_PleasedToRateMonNickname, MSGBOX_NPC
# 7 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	end
# 8 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 9 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_EventScript_ChooseMonToRate::
# 10 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_Text_CritiqueWhichMonNickname, MSGBOX_DEFAULT
# 11 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	special ChoosePartyMon
# 12 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	waitstate
# 13 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto_if_ne VAR_0x8004, PARTY_NOTHING_CHOSEN, SlateportCity_NameRatersHouse_EventScript_RateMonNickname
# 14 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, SlateportCity_NameRatersHouse_EventScript_DeclineNameRate
# 15 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	end
# 16 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 17 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_EventScript_DeclineNameRate::
# 18 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_Text_DoVisitAgain, MSGBOX_DEFAULT
# 19 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	release
# 20 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	end
# 21 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 22 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_EventScript_RateMonNickname::
# 23 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 24 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, SPECIES_EGG, SlateportCity_NameRatersHouse_EventScript_CantRateEgg
# 25 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	special BufferMonNickname
# 26 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	special IsMonOTIDNotPlayers
# 27 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, SlateportCity_NameRatersHouse_EventScript_PlayerNotMonsOT
# 28 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	specialvar VAR_RESULT, MonOTNameNotPlayer
# 29 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	special BufferMonNickname
# 30 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, SlateportCity_NameRatersHouse_EventScript_PlayerNotMonsOT
# 31 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_Text_FineNameSuggestBetterOne, MSGBOX_YESNO
# 32 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, YES, SlateportCity_NameRatersHouse_EventScript_ChangeNickname
# 33 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SlateportCity_NameRatersHouse_EventScript_DeclineNameRate
# 34 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	end
# 35 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 36 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_EventScript_CantRateEgg::
# 37 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_Text_ThatIsMerelyAnEgg, MSGBOX_DEFAULT
# 38 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	release
# 39 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	end
# 40 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 41 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_EventScript_PlayerNotMonsOT::
# 42 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_Text_MagnificentName, MSGBOX_DEFAULT
# 43 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	release
# 44 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	end
# 45 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 46 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_EventScript_ChangeNickname::
# 47 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_Text_WhatShallNewNameBe, MSGBOX_DEFAULT
# 48 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 49 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	specialvar VAR_RESULT, TryPutNameRaterShowOnTheAir
# 50 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	special BufferMonNickname
# 51 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, SlateportCity_NameRatersHouse_EventScript_NewNameDifferent
# 52 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_Text_NameNoDifferentYetSuperior, MSGBOX_DEFAULT
# 53 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	release
# 54 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	end
# 55 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 56 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_EventScript_NewNameDifferent::
# 57 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_Text_MonShallBeKnownAsName, MSGBOX_DEFAULT
# 58 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	release
# 59 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	end
# 60 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 61 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_Text_PleasedToRateMonNickname:
# 62 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Hi, hi! I'm the Name Rater!\p"
# 63 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "But I'm lazy now, all your nicknames\n"
# 64 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "look great! Or terrible!\p"
# 65 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "I don't really care, I'm retired.$"
# 66 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 67 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_Text_CritiqueWhichMonNickname:
# 68 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Which Pokémon's nickname should\n"
# 69 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "I critique?$"
# 70 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 71 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_Text_FineNameSuggestBetterOne:
# 72 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Hmmm… {STR_VAR_1}, is it? That is\n"
# 73 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "quite a fine name you bestowed.\p"
# 74 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "But! What say you, if I were to\n"
# 75 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "suggest a slightly better name?$"
# 76 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 77 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_Text_WhatShallNewNameBe:
# 78 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Ah, good. Then, what shall the new\n"
# 79 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "nickname be?$"
# 80 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 81 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_Text_MonShallBeKnownAsName:
# 82 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Done! From now on, this Pokémon\n"
# 83 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "shall be known as {STR_VAR_1}!\p"
# 84 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "It is a better name than before!\n"
# 85 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "How fortunate for you!$"
# 86 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 87 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_Text_DoVisitAgain:
# 88 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "I see.\n"
# 89 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Do come visit again.$"
# 90 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 91 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_Text_NameNoDifferentYetSuperior:
# 92 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Done! From now on, this Pokémon\n"
# 93 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "shall be known as {STR_VAR_1}!\p"
# 94 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "It looks no different from before,\n"
# 95 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "and yet, this is vastly superior!\p"
# 96 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "How fortunate for you!$"
# 97 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 98 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_Text_MagnificentName:
# 99 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Hmmm… {STR_VAR_1} it is!\p"
# 100 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "This is a magnificent nickname!\n"
# 101 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "It is impeccably beyond reproach!\p"
# 102 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "You'll do well to cherish your\n"
# 103 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "{STR_VAR_1} now and beyond.$"
# 104 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 105 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_Text_ThatIsMerelyAnEgg:
# 106 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Now, now.\n"
# 107 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "That is merely an EGG!$"
