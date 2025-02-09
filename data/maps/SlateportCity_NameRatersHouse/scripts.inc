# 1 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 2 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_MapScripts::
# 3 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.byte 0
# 4 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 5 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_MoveDeletersHouse_EventScript_MoveDeleterOriginal::
# 6 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	lockall
# 7 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	applymovement LOCALID_MOVE_DELETER, Common_Movement_FacePlayer
# 8 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	waitmovement 0
# 9 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_MoveDeletersHouse_Text_ICanMakeMonForgetMove, MSGBOX_YESNO
# 10 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	switch VAR_RESULT
# 11 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	case YES, SlateportCity_MoveDeletersHouse_EventScript_ChooseMonAndMoveToForget
# 12 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	case NO, SlateportCity_MoveDeletersHouse_EventScript_ComeAgain
# 13 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	releaseall
# 14 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	end
# 15 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 16 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_MoveDeletersHouse_EventScript_ChooseMonAndMoveToForget::
# 17 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_MoveDeletersHouse_Text_WhichMonShouldForget, MSGBOX_DEFAULT
# 18 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	special ChoosePartyMon
# 19 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	waitstate
# 20 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, SlateportCity_MoveDeletersHouse_EventScript_ComeAgain
# 21 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	special IsSelectedMonEgg
# 22 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, SlateportCity_MoveDeletersHouse_EventScript_EggCantForgetMoves
# 23 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	special GetNumMovesSelectedMonHas
# 24 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, 1, SlateportCity_MoveDeletersHouse_EventScript_MonOnlyKnowsOneMove
# 25 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_MoveDeletersHouse_Text_WhichMoveShouldBeForgotten, MSGBOX_DEFAULT
# 26 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 27 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	special MoveDeleterChooseMoveToForget
# 28 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 29 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto_if_eq VAR_0x8005, MAX_MON_MOVES, SlateportCity_MoveDeletersHouse_EventScript_ChooseMonAndMoveToForget
# 30 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	special BufferMoveDeleterNicknameAndMove
# 31 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_MoveDeletersHouse_Text_MonsMoveShouldBeForgotten, MSGBOX_YESNO
# 32 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	switch VAR_RESULT
# 33 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	case YES, SlateportCity_MoveDeletersHouse_EventScript_TryForgetMove
# 34 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	case NO, SlateportCity_MoveDeletersHouse_EventScript_ComeAgain
# 35 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	releaseall
# 36 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	end
# 37 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 38 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_MoveDeletersHouse_EventScript_TryForgetMove::
# 39 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	special MoveDeleterForgetMove
# 40 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	playfanfare MUS_MOVE_DELETED
# 41 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	waitfanfare
# 42 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_MoveDeletersHouse_Text_MonHasForgottenMove, MSGBOX_DEFAULT
# 43 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	releaseall
# 44 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	end
# 45 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 46 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_MoveDeletersHouse_EventScript_MonOnlyKnowsOneMove::
# 47 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	special BufferMoveDeleterNicknameAndMove
# 48 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_MoveDeletersHouse_Text_MonOnlyKnowsOneMove, MSGBOX_DEFAULT
# 49 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	releaseall
# 50 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	end
# 51 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 52 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_MoveDeletersHouse_EventScript_EggCantForgetMoves::
# 53 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_MoveDeletersHouse_Text_EggCantForgetMoves, MSGBOX_DEFAULT
# 54 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	releaseall
# 55 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	end
# 56 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 57 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_MoveDeletersHouse_EventScript_ComeAgain::
# 58 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_MoveDeletersHouse_Text_ComeAgain, MSGBOX_DEFAULT
# 59 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	releaseall
# 60 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	end
# 61 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 62 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_EventScript_NameRater::
# 63 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_Text_PleasedToRateMonNickname, MSGBOX_NPC
# 64 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	end
# 65 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 66 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_EventScript_ChooseMonToRate::
# 67 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_Text_CritiqueWhichMonNickname, MSGBOX_DEFAULT
# 68 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	special ChoosePartyMon
# 69 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	waitstate
# 70 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto_if_ne VAR_0x8004, PARTY_NOTHING_CHOSEN, SlateportCity_NameRatersHouse_EventScript_RateMonNickname
# 71 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, SlateportCity_NameRatersHouse_EventScript_DeclineNameRate
# 72 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	end
# 73 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 74 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_EventScript_DeclineNameRate::
# 75 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_Text_DoVisitAgain, MSGBOX_DEFAULT
# 76 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	release
# 77 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	end
# 78 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 79 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_EventScript_RateMonNickname::
# 80 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 81 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, SPECIES_EGG, SlateportCity_NameRatersHouse_EventScript_CantRateEgg
# 82 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	special BufferMonNickname
# 83 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	special IsMonOTIDNotPlayers
# 84 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, SlateportCity_NameRatersHouse_EventScript_PlayerNotMonsOT
# 85 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	specialvar VAR_RESULT, MonOTNameNotPlayer
# 86 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	special BufferMonNickname
# 87 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, SlateportCity_NameRatersHouse_EventScript_PlayerNotMonsOT
# 88 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_Text_FineNameSuggestBetterOne, MSGBOX_YESNO
# 89 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, YES, SlateportCity_NameRatersHouse_EventScript_ChangeNickname
# 90 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SlateportCity_NameRatersHouse_EventScript_DeclineNameRate
# 91 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	end
# 92 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 93 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_EventScript_CantRateEgg::
# 94 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_Text_ThatIsMerelyAnEgg, MSGBOX_DEFAULT
# 95 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	release
# 96 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	end
# 97 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 98 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_EventScript_PlayerNotMonsOT::
# 99 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_Text_MagnificentName, MSGBOX_DEFAULT
# 100 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	release
# 101 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	end
# 102 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 103 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_EventScript_ChangeNickname::
# 104 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_Text_WhatShallNewNameBe, MSGBOX_DEFAULT
# 105 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 106 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	specialvar VAR_RESULT, TryPutNameRaterShowOnTheAir
# 107 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	special BufferMonNickname
# 108 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, SlateportCity_NameRatersHouse_EventScript_NewNameDifferent
# 109 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_Text_NameNoDifferentYetSuperior, MSGBOX_DEFAULT
# 110 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	release
# 111 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	end
# 112 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 113 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_EventScript_NewNameDifferent::
# 114 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_Text_MonShallBeKnownAsName, MSGBOX_DEFAULT
# 115 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	release
# 116 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	end
# 117 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 118 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_Text_PleasedToRateMonNickname:
# 119 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Hi, hi! I'm the Name Rater!\p"
# 120 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "But I'm lazy now, all your nicknames\n"
# 121 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "look great! Or terrible!\p"
# 122 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "I don't really care, I'm retired.$"
# 123 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 124 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_Text_CritiqueWhichMonNickname:
# 125 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Which Pokémon's nickname should\n"
# 126 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "I critique?$"
# 127 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 128 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_Text_FineNameSuggestBetterOne:
# 129 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Hmmm… {STR_VAR_1}, is it? That is\n"
# 130 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "quite a fine name you bestowed.\p"
# 131 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "But! What say you, if I were to\n"
# 132 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "suggest a slightly better name?$"
# 133 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 134 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_Text_WhatShallNewNameBe:
# 135 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Ah, good. Then, what shall the new\n"
# 136 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "nickname be?$"
# 137 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 138 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_Text_MonShallBeKnownAsName:
# 139 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Done! From now on, this Pokémon\n"
# 140 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "shall be known as {STR_VAR_1}!\p"
# 141 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "It is a better name than before!\n"
# 142 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "How fortunate for you!$"
# 143 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 144 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_Text_DoVisitAgain:
# 145 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "I see.\n"
# 146 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Do come visit again.$"
# 147 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 148 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_Text_NameNoDifferentYetSuperior:
# 149 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Done! From now on, this Pokémon\n"
# 150 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "shall be known as {STR_VAR_1}!\p"
# 151 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "It looks no different from before,\n"
# 152 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "and yet, this is vastly superior!\p"
# 153 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "How fortunate for you!$"
# 154 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 155 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_Text_MagnificentName:
# 156 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Hmmm… {STR_VAR_1} it is!\p"
# 157 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "This is a magnificent nickname!\n"
# 158 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "It is impeccably beyond reproach!\p"
# 159 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "You'll do well to cherish your\n"
# 160 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "{STR_VAR_1} now and beyond.$"
# 161 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 162 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_Text_ThatIsMerelyAnEgg:
# 163 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Now, now.\n"
# 164 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "That is merely an EGG!$"
# 165 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 166 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 167 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 168 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_MoveDeletersHouse_Text_ICanMakeMonForgetMove:
# 169 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Uh…\n"
# 170 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Oh, yes, I'm the Move Deleter.\p"
# 171 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "I can make Pokémon forget their moves.\p"
# 172 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Would you like me to do that?$"
# 173 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 174 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_MoveDeletersHouse_Text_WhichMonShouldForget:
# 175 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Which Pokémon should forget a move?$"
# 176 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 177 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_MoveDeletersHouse_Text_WhichMoveShouldBeForgotten:
# 178 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Which move should be forgotten?$"
# 179 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 180 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_MoveDeletersHouse_Text_MonOnlyKnowsOneMove:
# 181 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "{STR_VAR_1} knows only one move\n"
# 182 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "so it can't be forgotten…$"
# 183 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 184 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_MoveDeletersHouse_Text_MonsMoveShouldBeForgotten:
# 185 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Hm! {STR_VAR_1}'s {STR_VAR_2}?\n"
# 186 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "That move should be forgotten?$"
# 187 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 188 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_MoveDeletersHouse_Text_MonHasForgottenMove:
# 189 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "It worked to perfection!\p"
# 190 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "{STR_VAR_1} has forgotten\n"
# 191 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "{STR_VAR_2} completely.$"
# 192 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 193 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_MoveDeletersHouse_Text_ComeAgain:
# 194 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Come again if there are moves that\n"
# 195 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "need to be forgotten.$"
# 196 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 197 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_MoveDeletersHouse_Text_EggCantForgetMoves:
# 198 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "What?\n"
# 199 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "No Egg should know any moves.$"
