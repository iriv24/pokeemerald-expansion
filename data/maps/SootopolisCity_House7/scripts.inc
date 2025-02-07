# 1 "data/maps/SootopolisCity_House7/scripts.pory"

# 2 "data/maps/SootopolisCity_House7/scripts.pory"
.set LOCALID_DANNI, 1
# 3 "data/maps/SootopolisCity_House7/scripts.pory"
.set LOCALID_MASTA_JANES, 3
# 4 "data/maps/SootopolisCity_House7/scripts.pory"

# 5 "data/maps/SootopolisCity_House7/scripts.pory"
SootopolisCity_House7_MapScripts::
# 6 "data/maps/SootopolisCity_House7/scripts.pory"
	.byte 0
# 7 "data/maps/SootopolisCity_House7/scripts.pory"

# 8 "data/maps/SootopolisCity_House7/scripts.pory"
SootopolisCity_House7_EventScript_Urshifu::
# 9 "data/maps/SootopolisCity_House7/scripts.pory"
	lock
# 10 "data/maps/SootopolisCity_House7/scripts.pory"
	faceplayer
# 11 "data/maps/SootopolisCity_House7/scripts.pory"
	waitse
# 12 "data/maps/SootopolisCity_House7/scripts.pory"
	playmoncry SPECIES_URSHIFU_RAPID_STRIKE, CRY_MODE_NORMAL
# 13 "data/maps/SootopolisCity_House7/scripts.pory"
	msgbox SootopolisCity_House7_Text_Urshifu, MSGBOX_DEFAULT
# 14 "data/maps/SootopolisCity_House7/scripts.pory"
	waitmoncry
# 15 "data/maps/SootopolisCity_House7/scripts.pory"
	release
# 16 "data/maps/SootopolisCity_House7/scripts.pory"
	end
# 17 "data/maps/SootopolisCity_House7/scripts.pory"

# 18 "data/maps/SootopolisCity_House7/scripts.pory"
SootopolisCity_House7_Text_Urshifu:
# 19 "data/maps/SootopolisCity_House7/scripts.pory"
	.string "Urshifu: Huaaaaah!$"
# 20 "data/maps/SootopolisCity_House7/scripts.pory"

# 21 "data/maps/SootopolisCity_House7/scripts.pory"
SootopolisCity_House7_EventScript_Meowscarada::
# 22 "data/maps/SootopolisCity_House7/scripts.pory"
	lock
# 23 "data/maps/SootopolisCity_House7/scripts.pory"
	faceplayer
# 24 "data/maps/SootopolisCity_House7/scripts.pory"
	waitse
# 25 "data/maps/SootopolisCity_House7/scripts.pory"
	playmoncry SPECIES_MEOWSCARADA, CRY_MODE_NORMAL
# 26 "data/maps/SootopolisCity_House7/scripts.pory"
	msgbox SootopolisCity_House7_Text_Meowscarada, MSGBOX_DEFAULT
# 27 "data/maps/SootopolisCity_House7/scripts.pory"
	waitmoncry
# 28 "data/maps/SootopolisCity_House7/scripts.pory"
	release
# 29 "data/maps/SootopolisCity_House7/scripts.pory"
	end
# 30 "data/maps/SootopolisCity_House7/scripts.pory"

# 31 "data/maps/SootopolisCity_House7/scripts.pory"
SootopolisCity_House7_Text_Meowscarada:
# 32 "data/maps/SootopolisCity_House7/scripts.pory"
	.string "Meowscarada: Tzchrowwwwww!$"

SootopolisCity_House7_EventScript_Danni::
# 37 "data/maps/SootopolisCity_House7/scripts.pory"
	lockall
# 38 "data/maps/SootopolisCity_House7/scripts.pory"
	applymovement LOCALID_DANNI, Common_Movement_FacePlayer
# 39 "data/maps/SootopolisCity_House7/scripts.pory"
	goto_if_defeated TRAINER_DANNI, SootopolisCity_House7_EventScript_DanniDefeated
# 40 "data/maps/SootopolisCity_House7/scripts.pory"
	goto_if_set FLAG_TEMP_1, SootopolisCity_House7_EventScript_DanniRequestBattleAgain
# 41 "data/maps/SootopolisCity_House7/scripts.pory"
	msgbox Danni_Greeting, MSGBOX_YESNO
# 42 "data/maps/SootopolisCity_House7/scripts.pory"
	goto SootopolisCity_House7_EventScript_BattleDanniPrompt
	end


SootopolisCity_House7_EventScript_DanniRequestBattleAgain::
# 47 "data/maps/SootopolisCity_House7/scripts.pory"
	msgbox Danni_ReadyYet, MSGBOX_YESNO
# 48 "data/maps/SootopolisCity_House7/scripts.pory"
	goto SootopolisCity_House7_EventScript_BattleDanniPrompt
	end


SootopolisCity_House7_EventScript_BattleDanniPrompt::
# 53 "data/maps/SootopolisCity_House7/scripts.pory"
	call_if_eq VAR_RESULT, YES, SootopolisCity_House7_EventScript_BattleDanni
# 54 "data/maps/SootopolisCity_House7/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SootopolisCity_House7_EventScript_DeclineDanniBattle
# 55 "data/maps/SootopolisCity_House7/scripts.pory"
	closemessage
	end


SootopolisCity_House7_EventScript_DeclineDanniBattle::
# 60 "data/maps/SootopolisCity_House7/scripts.pory"
	setflag FLAG_TEMP_1
# 61 "data/maps/SootopolisCity_House7/scripts.pory"
	msgbox Danni_ComeBackWhenReady, MSGBOX_DEFAULT
# 62 "data/maps/SootopolisCity_House7/scripts.pory"
	release
	end


SootopolisCity_House7_EventScript_BattleDanni::
# 67 "data/maps/SootopolisCity_House7/scripts.pory"
	msgbox Danni_YoureOn, MSGBOX_DEFAULT
# 68 "data/maps/SootopolisCity_House7/scripts.pory"
	trainerbattle_no_intro TRAINER_DANNI, Danni_Outro
# 69 "data/maps/SootopolisCity_House7/scripts.pory"
	goto SootopolisCity_House7_EventScript_DanniGiveHoopa
	return


SootopolisCity_House7_EventScript_DanniDefeated::
# 75 "data/maps/SootopolisCity_House7/scripts.pory"
	msgbox PostBattle_Danni, MSGBOX_DEFAULT
# 76 "data/maps/SootopolisCity_House7/scripts.pory"
	releaseall
	end


SootopolisCity_House7_EventScript_DanniGiveHoopa::
# 81 "data/maps/SootopolisCity_House7/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_HOOPA_CONFINED
# 82 "data/maps/SootopolisCity_House7/scripts.pory"
	givemonrandom SPECIES_HOOPA_CONFINED, 50
# 83 "data/maps/SootopolisCity_House7/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, SootopolisCity_House7_EventScript_ReceiveHoopaParty
# 84 "data/maps/SootopolisCity_House7/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, SootopolisCity_House7_EventScript_ReceiveHoopaPC
# 85 "data/maps/SootopolisCity_House7/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 86 "data/maps/SootopolisCity_House7/scripts.pory"
	release
	end


SootopolisCity_House7_EventScript_ReceiveHoopaParty::
# 91 "data/maps/SootopolisCity_House7/scripts.pory"
	call SootopolisCity_House7_EventScript_ReceivedHoopaFanfare
# 92 "data/maps/SootopolisCity_House7/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 93 "data/maps/SootopolisCity_House7/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SootopolisCity_House7_EventScript_ExplainHoopa
# 94 "data/maps/SootopolisCity_House7/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 95 "data/maps/SootopolisCity_House7/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 96 "data/maps/SootopolisCity_House7/scripts.pory"
	goto SootopolisCity_House7_EventScript_ExplainHoopa
	end


SootopolisCity_House7_EventScript_ReceiveHoopaPC::
# 102 "data/maps/SootopolisCity_House7/scripts.pory"
	call SootopolisCity_House7_EventScript_ReceivedHoopaFanfare
# 103 "data/maps/SootopolisCity_House7/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 104 "data/maps/SootopolisCity_House7/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SootopolisCity_House7_EventScript_SendHoopaToPC
# 105 "data/maps/SootopolisCity_House7/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 106 "data/maps/SootopolisCity_House7/scripts.pory"
	goto SootopolisCity_House7_EventScript_SendHoopaToPC
	end


SootopolisCity_House7_EventScript_SendHoopaToPC::
# 112 "data/maps/SootopolisCity_House7/scripts.pory"
	call Common_EventScript_TransferredToPC
# 113 "data/maps/SootopolisCity_House7/scripts.pory"
	goto SootopolisCity_House7_EventScript_ExplainHoopa
	end


SootopolisCity_House7_EventScript_ReceivedHoopaFanfare::
# 119 "data/maps/SootopolisCity_House7/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 120 "data/maps/SootopolisCity_House7/scripts.pory"
	message SootopolisCity_House7_Text_PlayerReceivedHoopa
# 121 "data/maps/SootopolisCity_House7/scripts.pory"
	waitmessage
# 122 "data/maps/SootopolisCity_House7/scripts.pory"
	waitfanfare
# 123 "data/maps/SootopolisCity_House7/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_HOOPA_CONFINED
	return


SootopolisCity_House7_EventScript_ExplainHoopa::
# 129 "data/maps/SootopolisCity_House7/scripts.pory"
	msgbox Danni_ExplainHoopa, MSGBOX_DEFAULT
# 130 "data/maps/SootopolisCity_House7/scripts.pory"
	release
	end


SootopolisCity_House7_EventScript_MastaJanes::
# 175 "data/maps/SootopolisCity_House7/scripts.pory"
	lockall
# 176 "data/maps/SootopolisCity_House7/scripts.pory"
	applymovement LOCALID_MASTA_JANES, Common_Movement_FacePlayer
# 177 "data/maps/SootopolisCity_House7/scripts.pory"
	goto_if_defeated TRAINER_MASTA_JANES, SootopolisCity_House7_EventScript_MastaJanesDefeated
# 178 "data/maps/SootopolisCity_House7/scripts.pory"
	goto_if_set FLAG_TEMP_2, SootopolisCity_House7_EventScript_MastaJanesRequestBattleAgain
# 179 "data/maps/SootopolisCity_House7/scripts.pory"
	msgbox MastaJanes_Greeting, MSGBOX_YESNO
# 180 "data/maps/SootopolisCity_House7/scripts.pory"
	goto SootopolisCity_House7_EventScript_BattleMastaJanesPrompt
	end


SootopolisCity_House7_EventScript_MastaJanesRequestBattleAgain::
# 185 "data/maps/SootopolisCity_House7/scripts.pory"
	msgbox MastaJanes_ReadyYet, MSGBOX_YESNO
# 186 "data/maps/SootopolisCity_House7/scripts.pory"
	goto SootopolisCity_House7_EventScript_BattleMastaJanesPrompt
	end


SootopolisCity_House7_EventScript_BattleMastaJanesPrompt::
# 191 "data/maps/SootopolisCity_House7/scripts.pory"
	call_if_eq VAR_RESULT, YES, SootopolisCity_House7_EventScript_BattleMastaJanes
# 192 "data/maps/SootopolisCity_House7/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SootopolisCity_House7_EventScript_DeclineMastaJanesBattle
# 193 "data/maps/SootopolisCity_House7/scripts.pory"
	closemessage
	end


SootopolisCity_House7_EventScript_DeclineMastaJanesBattle::
# 198 "data/maps/SootopolisCity_House7/scripts.pory"
	setflag FLAG_TEMP_2
# 199 "data/maps/SootopolisCity_House7/scripts.pory"
	msgbox MastaJanes_ComeBackWhenReady, MSGBOX_DEFAULT
# 200 "data/maps/SootopolisCity_House7/scripts.pory"
	release
	end


SootopolisCity_House7_EventScript_BattleMastaJanes::
# 205 "data/maps/SootopolisCity_House7/scripts.pory"
	msgbox MastaJanes_YoureOn, MSGBOX_DEFAULT
# 206 "data/maps/SootopolisCity_House7/scripts.pory"
	trainerbattle_no_intro TRAINER_MASTA_JANES, MastaJanes_Outro
# 207 "data/maps/SootopolisCity_House7/scripts.pory"
	goto SootopolisCity_House7_EventScript_MastaJanesGiveDitto
	return


SootopolisCity_House7_EventScript_MastaJanesDefeated::
# 212 "data/maps/SootopolisCity_House7/scripts.pory"
	msgbox PostBattle_MastaJanes, MSGBOX_DEFAULT
# 213 "data/maps/SootopolisCity_House7/scripts.pory"
	releaseall
	end


SootopolisCity_House7_EventScript_MastaJanesGiveDitto::
# 218 "data/maps/SootopolisCity_House7/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_DITTO
# 219 "data/maps/SootopolisCity_House7/scripts.pory"
	givemonrandom SPECIES_DITTO, 50, isShiny = TRUE
# 220 "data/maps/SootopolisCity_House7/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, SootopolisCity_House7_EventScript_ReceiveDittoParty
# 221 "data/maps/SootopolisCity_House7/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, SootopolisCity_House7_EventScript_ReceiveDittoPC
# 222 "data/maps/SootopolisCity_House7/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 223 "data/maps/SootopolisCity_House7/scripts.pory"
	release
	end


SootopolisCity_House7_EventScript_ReceiveDittoParty::
# 228 "data/maps/SootopolisCity_House7/scripts.pory"
	call SootopolisCity_House7_EventScript_ReceivedDittoFanfare
# 229 "data/maps/SootopolisCity_House7/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 230 "data/maps/SootopolisCity_House7/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SootopolisCity_House7_EventScript_ExplainDitto
# 231 "data/maps/SootopolisCity_House7/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 232 "data/maps/SootopolisCity_House7/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 233 "data/maps/SootopolisCity_House7/scripts.pory"
	goto SootopolisCity_House7_EventScript_ExplainDitto
	end


SootopolisCity_House7_EventScript_ReceiveDittoPC::
# 238 "data/maps/SootopolisCity_House7/scripts.pory"
	call SootopolisCity_House7_EventScript_ReceivedDittoFanfare
# 239 "data/maps/SootopolisCity_House7/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 240 "data/maps/SootopolisCity_House7/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SootopolisCity_House7_EventScript_SendDittoToPC
# 241 "data/maps/SootopolisCity_House7/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 242 "data/maps/SootopolisCity_House7/scripts.pory"
	goto SootopolisCity_House7_EventScript_SendDittoToPC
	end


SootopolisCity_House7_EventScript_SendDittoToPC::
# 247 "data/maps/SootopolisCity_House7/scripts.pory"
	call Common_EventScript_TransferredToPC
# 248 "data/maps/SootopolisCity_House7/scripts.pory"
	goto SootopolisCity_House7_EventScript_ExplainDitto
	end


SootopolisCity_House7_EventScript_ReceivedDittoFanfare::
# 253 "data/maps/SootopolisCity_House7/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 254 "data/maps/SootopolisCity_House7/scripts.pory"
	message SootopolisCity_House7_Text_PlayerReceivedDitto
# 255 "data/maps/SootopolisCity_House7/scripts.pory"
	waitmessage
# 256 "data/maps/SootopolisCity_House7/scripts.pory"
	waitfanfare
# 257 "data/maps/SootopolisCity_House7/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_DITTO
	return


SootopolisCity_House7_EventScript_ExplainDitto::
# 262 "data/maps/SootopolisCity_House7/scripts.pory"
	msgbox MastaJanes_ExplainDitto, MSGBOX_DEFAULT
# 263 "data/maps/SootopolisCity_House7/scripts.pory"
	release
	end


Danni_Greeting::
# 134 "data/maps/SootopolisCity_House7/scripts.pory"
	.string "Ello ello, trainer. Nice to see you’ve\n"
	.string "gotten this far. How bout a battle with\l"
	.string "a nuzlocke legend?\p"
	.string "Win here and you get a rad Mythical\n"
	.string "from me. You in?$"

Danni_ReadyYet::
# 142 "data/maps/SootopolisCity_House7/scripts.pory"
	.string "Ready yet?$"

Danni_YoureOn::
# 146 "data/maps/SootopolisCity_House7/scripts.pory"
	.string "You'll never beat this squad!$"

Danni_ComeBackWhenReady::
# 150 "data/maps/SootopolisCity_House7/scripts.pory"
	.string "Didn't think so!$"

Danni_Outro::
# 154 "data/maps/SootopolisCity_House7/scripts.pory"
	.string "Huh. You defeated me. Kudos and\n"
	.string "congrats.$"

SootopolisCity_House7_Text_PlayerReceivedHoopa::
# 159 "data/maps/SootopolisCity_House7/scripts.pory"
	.string "{PLAYER} received Hoopa!$"

Danni_ExplainHoopa::
# 163 "data/maps/SootopolisCity_House7/scripts.pory"
	.string "As promised, there's your Mythical.\n"
	.string "That one is pretty strong too, I'd say.$"

PostBattle_Danni::
# 168 "data/maps/SootopolisCity_House7/scripts.pory"
	.string "I was the first player ever to nuzlocke\n"
	.string "this game! And, I did it deathless!\l"
	.string "How do you like that?$"

MastaJanes_Greeting::
# 267 "data/maps/SootopolisCity_House7/scripts.pory"
	.string "Hi there trainer, my name is MastaJanes.\n"
	.string "I was the 5th person to beat this game,\l"
	.string "and most notably, I beat it on the\l"
	.string "MyBoy emulator.\p"
	.string "Even though were several crashes in\n"
	.string "that version of the game at the time,\l"
	.string "and even though the creator told me\l"
	.string "not to use MyBoy, I persevered and\l"
	.string "finished the game anyway.\p"
	.string "Now, if you can beat me, I'll give you a\n"
	.string "shiny Ditto you can use to breed more\l"
	.string "shiny Pokémon.\p"
	.string "Do you want to battle?$"

MastaJanes_ReadyYet::
# 283 "data/maps/SootopolisCity_House7/scripts.pory"
	.string "Are you ready now?$"

MastaJanes_YoureOn::
# 287 "data/maps/SootopolisCity_House7/scripts.pory"
	.string "You're going down!$"

MastaJanes_ComeBackWhenReady::
# 291 "data/maps/SootopolisCity_House7/scripts.pory"
	.string "You know where to find me if you change\n"
	.string "your mind.$"

MastaJanes_Outro::
# 296 "data/maps/SootopolisCity_House7/scripts.pory"
	.string "Wow, I didn't think I could lose.\n$"

SootopolisCity_House7_Text_PlayerReceivedDitto::
# 300 "data/maps/SootopolisCity_House7/scripts.pory"
	.string "{PLAYER} received Ditto!$"

MastaJanes_ExplainDitto::
# 304 "data/maps/SootopolisCity_House7/scripts.pory"
	.string "Here's your shiny Ditto!\n"
	.string "Hope you can use it to get many more\l"
	.string "shiny Pokémon.$"

PostBattle_MastaJanes::
# 310 "data/maps/SootopolisCity_House7/scripts.pory"
	.string "I'm still playing on MyBoy to this day.$"
