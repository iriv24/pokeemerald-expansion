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
	call_if_unset FLAG_MET_EGG_MOVE_TUTOR, LilycoveCity_MoveDeletersHouse_EventScript_SetEggMoveFlag
# 11 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	msgbox LilycoveCity_MoveDeletersHouse_Text_HowToUseEggMoves, MSGBOX_DEFAULT
# 12 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	release
# 13 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	end
# 14 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 15 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_EventScript_SetEggMoveFlag::
# 16 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	setflag FLAG_MET_EGG_MOVE_TUTOR
# 17 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	msgbox LilycoveCity_MoveDeletersHouse_Text_ImEggMoveTutor, MSGBOX_DEFAULT
# 18 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 19 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	msgbox LilycoveCity_MoveDeletersHouse_Text_ObtainedEggMoveTutorOption, MSGBOX_DEFAULT
# 20 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	waitfanfare
# 21 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	return
# 22 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 23 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_EventScript_MoveDeleterOriginal::
# 24 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	lockall
# 25 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	applymovement LOCALID_MOVE_DELETER, Common_Movement_FacePlayer
# 26 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	waitmovement 0
# 27 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	msgbox LilycoveCity_MoveDeletersHouse_Text_ICanMakeMonForgetMove, MSGBOX_YESNO
# 28 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	switch VAR_RESULT
# 29 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	case YES, LilycoveCity_MoveDeletersHouse_EventScript_ChooseMonAndMoveToForget
# 30 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	case NO, LilycoveCity_MoveDeletersHouse_EventScript_ComeAgain
# 31 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	releaseall
# 32 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	end
# 33 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 34 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_EventScript_ChooseMonAndMoveToForget::
# 35 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	msgbox LilycoveCity_MoveDeletersHouse_Text_WhichMonShouldForget, MSGBOX_DEFAULT
# 36 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	special ChoosePartyMon
# 37 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	waitstate
# 38 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, LilycoveCity_MoveDeletersHouse_EventScript_ComeAgain
# 39 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	special IsSelectedMonEgg
# 40 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, LilycoveCity_MoveDeletersHouse_EventScript_EggCantForgetMoves
# 41 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	special GetNumMovesSelectedMonHas
# 42 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, 1, LilycoveCity_MoveDeletersHouse_EventScript_MonOnlyKnowsOneMove
# 43 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	msgbox LilycoveCity_MoveDeletersHouse_Text_WhichMoveShouldBeForgotten, MSGBOX_DEFAULT
# 44 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 45 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	special MoveDeleterChooseMoveToForget
# 46 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 47 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	goto_if_eq VAR_0x8005, MAX_MON_MOVES, LilycoveCity_MoveDeletersHouse_EventScript_ChooseMonAndMoveToForget
# 48 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	special BufferMoveDeleterNicknameAndMove
# 49 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	msgbox LilycoveCity_MoveDeletersHouse_Text_MonsMoveShouldBeForgotten, MSGBOX_YESNO
# 50 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	switch VAR_RESULT
# 51 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	case YES, LilycoveCity_MoveDeletersHouse_EventScript_TryForgetMove
# 52 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	case NO, LilycoveCity_MoveDeletersHouse_EventScript_ComeAgain
# 53 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	releaseall
# 54 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	end
# 55 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 56 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_EventScript_TryForgetMove::
# 57 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	special IsLastMonThatKnowsSurf
# 58 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, LilycoveCity_MoveDeletersHouse_EventScript_LastMonWithSurf
# 59 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	special MoveDeleterForgetMove
# 60 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	playfanfare MUS_MOVE_DELETED
# 61 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	waitfanfare
# 62 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	msgbox LilycoveCity_MoveDeletersHouse_Text_MonHasForgottenMove, MSGBOX_DEFAULT
# 63 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	releaseall
# 64 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	end
# 65 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 66 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_EventScript_MonOnlyKnowsOneMove::
# 67 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	special BufferMoveDeleterNicknameAndMove
# 68 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	msgbox LilycoveCity_MoveDeletersHouse_Text_MonOnlyKnowsOneMove, MSGBOX_DEFAULT
# 69 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	releaseall
# 70 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	end
# 71 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 72 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_EventScript_EggCantForgetMoves::
# 73 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	msgbox LilycoveCity_MoveDeletersHouse_Text_EggCantForgetMoves, MSGBOX_DEFAULT
# 74 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	releaseall
# 75 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	end
# 76 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 77 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_EventScript_ComeAgain::
# 78 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	msgbox LilycoveCity_MoveDeletersHouse_Text_ComeAgain, MSGBOX_DEFAULT
# 79 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	releaseall
# 80 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	end
# 81 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 82 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_EventScript_LastMonWithSurf::
# 83 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	special BufferMoveDeleterNicknameAndMove
# 84 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	msgbox LilycoveCity_MoveDeletersHouse_Text_CantForgetSurf, MSGBOX_DEFAULT
# 85 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	releaseall
# 86 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	end
# 87 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 88 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_Text_ImEggMoveTutor:
# 89 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "Oh, hello there young trainer.\n"
# 90 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "I've recently undergone a career\l"
# 91 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "change.\p"
# 92 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "I used to be known as the Move Deleter,\n"
# 93 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "but everyone can do that themselves\l"
# 94 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "nowadays, so I had to learn a new skill.\p"
# 95 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "Now, I can teach you to teach your\n"
# 96 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "Pokémon their Egg Moves.\l"
# 97 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "Check this out!$"
# 98 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 99 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_Text_ObtainedEggMoveTutorOption:
# 100 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "Obtained the option to relearn\n"
# 101 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "Egg Moves!$"
# 102 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 103 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_Text_HowToUseEggMoves:
# 104 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "If you go to your Party Menu, select a\n"
# 105 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "Pokémon, then select “RELEARN”, you\l"
# 106 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "will have a new option: “EGG MOVES”,\l"
# 107 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "assuming your Pokémon actually has Egg\l"
# 108 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "Moves to learn!\p"
# 109 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "Isn't that handy?$"
# 110 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 111 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_Text_ICanMakeMonForgetMove:
# 112 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "Uh…\n"
# 113 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "Oh, yes, I'm the MOVE DELETER.\p"
# 114 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "I can make POKéMON forget their moves.\p"
# 115 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "Would you like me to do that?$"
# 116 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 117 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_Text_WhichMonShouldForget:
# 118 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "Which POKéMON should forget a move?$"
# 119 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 120 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_Text_WhichMoveShouldBeForgotten:
# 121 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "Which move should be forgotten?$"
# 122 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 123 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_Text_MonOnlyKnowsOneMove:
# 124 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "{STR_VAR_1} knows only one move\n"
# 125 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "so it can't be forgotten…$"
# 126 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 127 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_Text_MonsMoveShouldBeForgotten:
# 128 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "Hm! {STR_VAR_1}'s {STR_VAR_2}?\n"
# 129 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "That move should be forgotten?$"
# 130 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 131 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_Text_MonHasForgottenMove:
# 132 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "It worked to perfection!\p"
# 133 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "{STR_VAR_1} has forgotten\n"
# 134 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "{STR_VAR_2} completely.$"
# 135 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 136 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_Text_ComeAgain:
# 137 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "Come again if there are moves that\n"
# 138 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "need to be forgotten.$"
# 139 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 140 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_Text_EggCantForgetMoves:
# 141 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "What?\n"
# 142 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "No EGG should know any moves.$"
# 143 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 144 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_Text_CantForgetSurf:
# 145 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "Hm!\p"
# 146 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "Your {STR_VAR_1} doesn't seem willing\n"
# 147 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "to forget SURF.$"
