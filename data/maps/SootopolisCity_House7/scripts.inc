# 1 "data/maps/SootopolisCity_House7/scripts.pory"

# 2 "data/maps/SootopolisCity_House7/scripts.pory"
.set LOCALID_DANNI, 1
# 3 "data/maps/SootopolisCity_House7/scripts.pory"

# 4 "data/maps/SootopolisCity_House7/scripts.pory"
SootopolisCity_House7_MapScripts::
# 5 "data/maps/SootopolisCity_House7/scripts.pory"
	.byte 0
# 6 "data/maps/SootopolisCity_House7/scripts.pory"

# 7 "data/maps/SootopolisCity_House7/scripts.pory"
SootopolisCity_House7_EventScript_Urshifu::
# 8 "data/maps/SootopolisCity_House7/scripts.pory"
	lock
# 9 "data/maps/SootopolisCity_House7/scripts.pory"
	faceplayer
# 10 "data/maps/SootopolisCity_House7/scripts.pory"
	waitse
# 11 "data/maps/SootopolisCity_House7/scripts.pory"
	playmoncry SPECIES_URSHIFU_RAPID_STRIKE, CRY_MODE_NORMAL
# 12 "data/maps/SootopolisCity_House7/scripts.pory"
	msgbox SootopolisCity_House7_Text_Urshifu, MSGBOX_DEFAULT
# 13 "data/maps/SootopolisCity_House7/scripts.pory"
	waitmoncry
# 14 "data/maps/SootopolisCity_House7/scripts.pory"
	release
# 15 "data/maps/SootopolisCity_House7/scripts.pory"
	end
# 16 "data/maps/SootopolisCity_House7/scripts.pory"

# 17 "data/maps/SootopolisCity_House7/scripts.pory"
SootopolisCity_House7_Text_Urshifu:
# 18 "data/maps/SootopolisCity_House7/scripts.pory"
	.string "Urshifu: Huaaaaah!$"

SootopolisCity_House7_EventScript_Danni::
# 23 "data/maps/SootopolisCity_House7/scripts.pory"
	lockall
# 24 "data/maps/SootopolisCity_House7/scripts.pory"
	applymovement LOCALID_DANNI, Common_Movement_FacePlayer
# 25 "data/maps/SootopolisCity_House7/scripts.pory"
	goto_if_defeated TRAINER_DANNI, SootopolisCity_House7_EventScript_DanniDefeated
# 26 "data/maps/SootopolisCity_House7/scripts.pory"
	goto_if_set FLAG_TEMP_1, SootopolisCity_House7_EventScript_DanniRequestBattleAgain
# 27 "data/maps/SootopolisCity_House7/scripts.pory"
	msgbox Danni_Greeting, MSGBOX_YESNO
# 28 "data/maps/SootopolisCity_House7/scripts.pory"
	goto SootopolisCity_House7_EventScript_BattleDanniPrompt
	end


SootopolisCity_House7_EventScript_DanniRequestBattleAgain::
# 33 "data/maps/SootopolisCity_House7/scripts.pory"
	msgbox Danni_ReadyYet, MSGBOX_YESNO
# 34 "data/maps/SootopolisCity_House7/scripts.pory"
	goto SootopolisCity_House7_EventScript_BattleDanniPrompt
	end


SootopolisCity_House7_EventScript_BattleDanniPrompt::
# 39 "data/maps/SootopolisCity_House7/scripts.pory"
	call_if_eq VAR_RESULT, YES, SootopolisCity_House7_EventScript_BattleDanni
# 40 "data/maps/SootopolisCity_House7/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SootopolisCity_House7_EventScript_DeclineDanniBattle
# 41 "data/maps/SootopolisCity_House7/scripts.pory"
	closemessage
	end


SootopolisCity_House7_EventScript_DeclineDanniBattle::
# 46 "data/maps/SootopolisCity_House7/scripts.pory"
	setflag FLAG_TEMP_1
# 47 "data/maps/SootopolisCity_House7/scripts.pory"
	msgbox Danni_ComeBackWhenReady, MSGBOX_DEFAULT
# 48 "data/maps/SootopolisCity_House7/scripts.pory"
	release
	end


SootopolisCity_House7_EventScript_BattleDanni::
# 53 "data/maps/SootopolisCity_House7/scripts.pory"
	msgbox Danni_YoureOn, MSGBOX_DEFAULT
# 54 "data/maps/SootopolisCity_House7/scripts.pory"
	trainerbattle_no_intro TRAINER_DANNI, Danni_Outro
# 55 "data/maps/SootopolisCity_House7/scripts.pory"
	goto SootopolisCity_House7_EventScript_DanniGiveHoopa
	return


SootopolisCity_House7_EventScript_DanniDefeated::
# 61 "data/maps/SootopolisCity_House7/scripts.pory"
	msgbox PostBattle_Danni, MSGBOX_DEFAULT
# 62 "data/maps/SootopolisCity_House7/scripts.pory"
	releaseall
	end


SootopolisCity_House7_EventScript_DanniGiveHoopa::
# 67 "data/maps/SootopolisCity_House7/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_HOOPA_CONFINED
# 68 "data/maps/SootopolisCity_House7/scripts.pory"
	givemonrandom SPECIES_HOOPA_CONFINED, 50
# 69 "data/maps/SootopolisCity_House7/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, SootopolisCity_House7_EventScript_ReceiveHoopaParty
# 70 "data/maps/SootopolisCity_House7/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, SootopolisCity_House7_EventScript_ReceiveHoopaPC
# 71 "data/maps/SootopolisCity_House7/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 72 "data/maps/SootopolisCity_House7/scripts.pory"
	release
	end


SootopolisCity_House7_EventScript_ReceiveHoopaParty::
# 77 "data/maps/SootopolisCity_House7/scripts.pory"
	call SootopolisCity_House7_EventScript_ReceivedHoopaFanfare
# 78 "data/maps/SootopolisCity_House7/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 79 "data/maps/SootopolisCity_House7/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SootopolisCity_House7_EventScript_ExplainHoopa
# 80 "data/maps/SootopolisCity_House7/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 81 "data/maps/SootopolisCity_House7/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 82 "data/maps/SootopolisCity_House7/scripts.pory"
	goto SootopolisCity_House7_EventScript_ExplainHoopa
	end


SootopolisCity_House7_EventScript_ReceiveHoopaPC::
# 88 "data/maps/SootopolisCity_House7/scripts.pory"
	call SootopolisCity_House7_EventScript_ReceivedHoopaFanfare
# 89 "data/maps/SootopolisCity_House7/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 90 "data/maps/SootopolisCity_House7/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SootopolisCity_House7_EventScript_SendHoopaToPC
# 91 "data/maps/SootopolisCity_House7/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 92 "data/maps/SootopolisCity_House7/scripts.pory"
	goto SootopolisCity_House7_EventScript_SendHoopaToPC
	end


SootopolisCity_House7_EventScript_SendHoopaToPC::
# 98 "data/maps/SootopolisCity_House7/scripts.pory"
	call Common_EventScript_TransferredToPC
# 99 "data/maps/SootopolisCity_House7/scripts.pory"
	goto SootopolisCity_House7_EventScript_ExplainHoopa
	end


SootopolisCity_House7_EventScript_ReceivedHoopaFanfare::
# 105 "data/maps/SootopolisCity_House7/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 106 "data/maps/SootopolisCity_House7/scripts.pory"
	message SootopolisCity_House7_Text_PlayerReceivedHoopa
# 107 "data/maps/SootopolisCity_House7/scripts.pory"
	waitmessage
# 108 "data/maps/SootopolisCity_House7/scripts.pory"
	waitfanfare
# 109 "data/maps/SootopolisCity_House7/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_HOOPA_CONFINED
	return


SootopolisCity_House7_EventScript_ExplainHoopa::
# 115 "data/maps/SootopolisCity_House7/scripts.pory"
	msgbox Danni_ExplainHoopa, MSGBOX_DEFAULT
# 116 "data/maps/SootopolisCity_House7/scripts.pory"
	release
	end


Danni_Greeting::
# 120 "data/maps/SootopolisCity_House7/scripts.pory"
	.string "Ello ello, trainer. Nice to see you’ve\n"
	.string "gotten this far. How bout a battle with\l"
	.string "a nuzlocke legend?\p"
	.string "Win here and you get a rad Mythical\n"
	.string "from me. You in?$"

Danni_ReadyYet::
# 128 "data/maps/SootopolisCity_House7/scripts.pory"
	.string "Ready yet?$"

Danni_YoureOn::
# 132 "data/maps/SootopolisCity_House7/scripts.pory"
	.string "You'll never beat this squad!$"

Danni_ComeBackWhenReady::
# 136 "data/maps/SootopolisCity_House7/scripts.pory"
	.string "Didn't think so!$"

Danni_Outro::
# 140 "data/maps/SootopolisCity_House7/scripts.pory"
	.string "Huh. You defeated me. Kudos and\n"
	.string "congrats.$"

SootopolisCity_House7_Text_PlayerReceivedHoopa::
# 145 "data/maps/SootopolisCity_House7/scripts.pory"
	.string "{PLAYER} received Hoopa!$"

Danni_ExplainHoopa::
# 149 "data/maps/SootopolisCity_House7/scripts.pory"
	.string "As promised, there's your Mythical.\n"
	.string "That one is pretty strong too, I'd say.$"

PostBattle_Danni::
# 154 "data/maps/SootopolisCity_House7/scripts.pory"
	.string "I was the first player ever to nuzlocke\n"
	.string "this game! And, I did it deathless!\l"
	.string "How do you like that?$"
