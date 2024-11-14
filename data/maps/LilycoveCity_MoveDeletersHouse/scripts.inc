# 1 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 2 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
.set LOCALID_MOVE_DELETER, 1
# 3 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 4 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_MapScripts::
# 5 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.byte 0
# 6 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 7 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_EventScript_EggMoveTutor::
# 8 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	lock
# 9 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	faceplayer
# 10 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	goto_if_unset FLAG_MET_REGULAR_MOVE_TUTOR, LilycoveCity_MoveDeletersHouse_EventScript_CantTeachYet
# 11 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	call_if_unset FLAG_MET_EGG_MOVE_TUTOR, LilycoveCity_MoveDeletersHouse_EventScript_SetEggMoveFlag
# 12 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	msgbox LilycoveCity_MoveDeletersHouse_Text_HowToUseEggMoves, MSGBOX_DEFAULT
# 13 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	release
# 14 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	end
# 15 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 16 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_EventScript_SetEggMoveFlag::
# 17 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	setflag FLAG_MET_EGG_MOVE_TUTOR
# 18 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	msgbox LilycoveCity_MoveDeletersHouse_Text_ImEggMoveTutor, MSGBOX_DEFAULT
# 19 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 20 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	msgbox LilycoveCity_MoveDeletersHouse_Text_ObtainedEggMoveTutorOption, MSGBOX_DEFAULT
# 21 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	waitfanfare
# 22 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	return
# 23 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 24 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_EventScript_CantTeachYet::
# 25 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	msgbox LilycoveCity_MoveDeletersHouse_Text_CantTeachYet, MSGBOX_DEFAULT
# 26 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	release
# 27 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	end
# 28 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 29 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_EventScript_MoveDeleterOriginal::
# 30 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	lockall
# 31 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	applymovement LOCALID_MOVE_DELETER, Common_Movement_FacePlayer
# 32 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	waitmovement 0
# 33 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	msgbox LilycoveCity_MoveDeletersHouse_Text_ICanMakeMonForgetMove, MSGBOX_YESNO
# 34 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	switch VAR_RESULT
# 35 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	case YES, LilycoveCity_MoveDeletersHouse_EventScript_ChooseMonAndMoveToForget
# 36 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	case NO, LilycoveCity_MoveDeletersHouse_EventScript_ComeAgain
# 37 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	releaseall
# 38 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	end
# 39 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 40 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_EventScript_ChooseMonAndMoveToForget::
# 41 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	msgbox LilycoveCity_MoveDeletersHouse_Text_WhichMonShouldForget, MSGBOX_DEFAULT
# 42 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	special ChoosePartyMon
# 43 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	waitstate
# 44 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, LilycoveCity_MoveDeletersHouse_EventScript_ComeAgain
# 45 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	special IsSelectedMonEgg
# 46 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, LilycoveCity_MoveDeletersHouse_EventScript_EggCantForgetMoves
# 47 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	special GetNumMovesSelectedMonHas
# 48 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, 1, LilycoveCity_MoveDeletersHouse_EventScript_MonOnlyKnowsOneMove
# 49 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	msgbox LilycoveCity_MoveDeletersHouse_Text_WhichMoveShouldBeForgotten, MSGBOX_DEFAULT
# 50 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 51 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	special MoveDeleterChooseMoveToForget
# 52 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 53 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	goto_if_eq VAR_0x8005, MAX_MON_MOVES, LilycoveCity_MoveDeletersHouse_EventScript_ChooseMonAndMoveToForget
# 54 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	special BufferMoveDeleterNicknameAndMove
# 55 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	msgbox LilycoveCity_MoveDeletersHouse_Text_MonsMoveShouldBeForgotten, MSGBOX_YESNO
# 56 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	switch VAR_RESULT
# 57 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	case YES, LilycoveCity_MoveDeletersHouse_EventScript_TryForgetMove
# 58 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	case NO, LilycoveCity_MoveDeletersHouse_EventScript_ComeAgain
# 59 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	releaseall
# 60 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	end
# 61 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 62 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_EventScript_TryForgetMove::
# 63 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	special IsLastMonThatKnowsSurf
# 64 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, LilycoveCity_MoveDeletersHouse_EventScript_LastMonWithSurf
# 65 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	special MoveDeleterForgetMove
# 66 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	playfanfare MUS_MOVE_DELETED
# 67 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	waitfanfare
# 68 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	msgbox LilycoveCity_MoveDeletersHouse_Text_MonHasForgottenMove, MSGBOX_DEFAULT
# 69 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	releaseall
# 70 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	end
# 71 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 72 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_EventScript_MonOnlyKnowsOneMove::
# 73 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	special BufferMoveDeleterNicknameAndMove
# 74 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	msgbox LilycoveCity_MoveDeletersHouse_Text_MonOnlyKnowsOneMove, MSGBOX_DEFAULT
# 75 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	releaseall
# 76 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	end
# 77 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 78 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_EventScript_EggCantForgetMoves::
# 79 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	msgbox LilycoveCity_MoveDeletersHouse_Text_EggCantForgetMoves, MSGBOX_DEFAULT
# 80 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	releaseall
# 81 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	end
# 82 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 83 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_EventScript_ComeAgain::
# 84 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	msgbox LilycoveCity_MoveDeletersHouse_Text_ComeAgain, MSGBOX_DEFAULT
# 85 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	releaseall
# 86 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	end
# 87 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 88 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_EventScript_LastMonWithSurf::
# 89 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	special BufferMoveDeleterNicknameAndMove
# 90 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	msgbox LilycoveCity_MoveDeletersHouse_Text_CantForgetSurf, MSGBOX_DEFAULT
# 91 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	releaseall
# 92 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	end
# 93 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 94 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_Text_CantTeachYet:
# 95 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "Hm, what's this?\n"
# 96 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "It doesn't look like you know anything\l"
# 97 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "about relearning moves, so I have\l"
# 98 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "nothing to show you.\p"
# 99 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "I heard there's a man in Dewford Town\n"
# 100 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "who knows a thing or two about this.$"
# 101 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 102 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_Text_ImEggMoveTutor:
# 103 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "Oh, hello there young trainer.\n"
# 104 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "I've recently undergone a career\l"
# 105 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "change.\p"
# 106 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "I used to be known as the Move Deleter,\n"
# 107 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "but everyone can do that themselves\l"
# 108 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "nowadays, so I had to learn a new skill.\p"
# 109 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "Now, I can teach you to teach your\n"
# 110 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "Pokémon their Egg Moves.\l"
# 111 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "Check this out!$"
# 112 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 113 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_Text_ObtainedEggMoveTutorOption:
# 114 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "Obtained the option to relearn\n"
# 115 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "Egg Moves!$"
# 116 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 117 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_Text_HowToUseEggMoves:
# 118 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "If you go to your party menu, select a\n"
# 119 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "Pokémon, then select “Relearn”, you\l"
# 120 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "will have a new option: “Egg Moves”,\l"
# 121 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "assuming your Pokémon actually has Egg\l"
# 122 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "Moves to learn!\p"
# 123 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "Isn't that handy?$"
# 124 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 125 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_Text_ICanMakeMonForgetMove:
# 126 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "Uh…\n"
# 127 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "Oh, yes, I'm the MOVE DELETER.\p"
# 128 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "I can make Pokémon forget their moves.\p"
# 129 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "Would you like me to do that?$"
# 130 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 131 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_Text_WhichMonShouldForget:
# 132 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "Which Pokémon should forget a move?$"
# 133 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 134 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_Text_WhichMoveShouldBeForgotten:
# 135 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "Which move should be forgotten?$"
# 136 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 137 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_Text_MonOnlyKnowsOneMove:
# 138 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "{STR_VAR_1} knows only one move\n"
# 139 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "so it can't be forgotten…$"
# 140 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 141 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_Text_MonsMoveShouldBeForgotten:
# 142 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "Hm! {STR_VAR_1}'s {STR_VAR_2}?\n"
# 143 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "That move should be forgotten?$"
# 144 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 145 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_Text_MonHasForgottenMove:
# 146 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "It worked to perfection!\p"
# 147 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "{STR_VAR_1} has forgotten\n"
# 148 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "{STR_VAR_2} completely.$"
# 149 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 150 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_Text_ComeAgain:
# 151 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "Come again if there are moves that\n"
# 152 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "need to be forgotten.$"
# 153 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 154 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_Text_EggCantForgetMoves:
# 155 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "What?\n"
# 156 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "No EGG should know any moves.$"
# 157 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 158 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_Text_CantForgetSurf:
# 159 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "Hm!\p"
# 160 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "Your {STR_VAR_1} doesn't seem willing\n"
# 161 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "to forget SURF.$"
