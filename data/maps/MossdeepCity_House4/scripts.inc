# 1 "data/maps/MossdeepCity_House4/scripts.pory"

# 2 "data/maps/MossdeepCity_House4/scripts.pory"
MossdeepCity_House4_MapScripts::
# 3 "data/maps/MossdeepCity_House4/scripts.pory"
	.byte 0
# 4 "data/maps/MossdeepCity_House4/scripts.pory"

# 5 "data/maps/MossdeepCity_House4/scripts.pory"
MossdeepCity_House4_EventScript_Mochi::
# 6 "data/maps/MossdeepCity_House4/scripts.pory"
	lock
# 7 "data/maps/MossdeepCity_House4/scripts.pory"
	faceplayer
# 8 "data/maps/MossdeepCity_House4/scripts.pory"
	waitse
# 9 "data/maps/MossdeepCity_House4/scripts.pory"
	playmoncry SPECIES_TYRANTRUM, CRY_MODE_NORMAL
# 10 "data/maps/MossdeepCity_House4/scripts.pory"
	msgbox MossdeepCity_House4_Text_Tyrantrum, MSGBOX_DEFAULT
# 11 "data/maps/MossdeepCity_House4/scripts.pory"
	waitmoncry
# 12 "data/maps/MossdeepCity_House4/scripts.pory"
	release
# 13 "data/maps/MossdeepCity_House4/scripts.pory"
	end
# 14 "data/maps/MossdeepCity_House4/scripts.pory"

# 15 "data/maps/MossdeepCity_House4/scripts.pory"
MossdeepCity_House4_Text_Tyrantrum:
# 16 "data/maps/MossdeepCity_House4/scripts.pory"
	.string "Mochi: Grrrraaaaraaararaaa!$"

MossdeepCity_House4_EventScript_Sunbird::
# 20 "data/maps/MossdeepCity_House4/scripts.pory"
	lockall
# 21 "data/maps/MossdeepCity_House4/scripts.pory"
	applymovement 1, Common_Movement_FacePlayer
# 22 "data/maps/MossdeepCity_House4/scripts.pory"
	goto_if_set FLAG_RECEIVED_MEW, MossdeepCity_House4_EventScript_SunbirdDefeated
# 23 "data/maps/MossdeepCity_House4/scripts.pory"
	goto_if_set FLAG_DECLINED_SUNBIRD_BATTLE, MossdeepCity_House4_EventScript_SunbirdRequestBattleAgain
# 24 "data/maps/MossdeepCity_House4/scripts.pory"
	msgbox Sunbird_Greeting, MSGBOX_YESNO
# 25 "data/maps/MossdeepCity_House4/scripts.pory"
	goto MossdeepCity_House4_EventScript_BattleSunbirdPrompt
	end


MossdeepCity_House4_EventScript_SunbirdRequestBattleAgain::
# 30 "data/maps/MossdeepCity_House4/scripts.pory"
	msgbox Sunbird_ReadyYet, MSGBOX_YESNO
# 31 "data/maps/MossdeepCity_House4/scripts.pory"
	goto MossdeepCity_House4_EventScript_BattleSunbirdPrompt
	end


MossdeepCity_House4_EventScript_BattleSunbirdPrompt::
# 36 "data/maps/MossdeepCity_House4/scripts.pory"
	call_if_eq VAR_RESULT, YES, MossdeepCity_House4_EventScript_BattleSunbird
# 37 "data/maps/MossdeepCity_House4/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MossdeepCity_House4_EventScript_DeclineSunbirdBattle
# 38 "data/maps/MossdeepCity_House4/scripts.pory"
	closemessage
	end


MossdeepCity_House4_EventScript_DeclineSunbirdBattle::
# 43 "data/maps/MossdeepCity_House4/scripts.pory"
	setflag FLAG_DECLINED_SUNBIRD_BATTLE
# 44 "data/maps/MossdeepCity_House4/scripts.pory"
	msgbox Sunbird_ComeBackWhenReady, MSGBOX_DEFAULT
# 45 "data/maps/MossdeepCity_House4/scripts.pory"
	release
	end


MossdeepCity_House4_EventScript_BattleSunbird::
# 50 "data/maps/MossdeepCity_House4/scripts.pory"
	msgbox Sunbird_YoureOn, MSGBOX_DEFAULT
# 51 "data/maps/MossdeepCity_House4/scripts.pory"
	trainerbattle_no_intro TRAINER_SUNBIRD, Sunbird_Outro
# 52 "data/maps/MossdeepCity_House4/scripts.pory"
	goto MossdeepCity_House4_EventScript_SunbirdGiveMew
	return


MossdeepCity_House4_EventScript_SunbirdDefeated::
# 58 "data/maps/MossdeepCity_House4/scripts.pory"
	msgbox PostBattle_Sunbird, MSGBOX_DEFAULT
# 59 "data/maps/MossdeepCity_House4/scripts.pory"
	releaseall
	end


MossdeepCity_House4_EventScript_SunbirdGiveMew::
# 64 "data/maps/MossdeepCity_House4/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_MEW
# 65 "data/maps/MossdeepCity_House4/scripts.pory"
	givemonrandom SPECIES_MEW, 50
# 66 "data/maps/MossdeepCity_House4/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, MossdeepCity_House4_EventScript_ReceiveMewParty
# 67 "data/maps/MossdeepCity_House4/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, MossdeepCity_House4_EventScript_ReceiveMewPC
# 68 "data/maps/MossdeepCity_House4/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 69 "data/maps/MossdeepCity_House4/scripts.pory"
	release
	end


MossdeepCity_House4_EventScript_ReceiveMewParty::
# 74 "data/maps/MossdeepCity_House4/scripts.pory"
	call MossdeepCity_House4_EventScript_ReceivedMewFanfare
# 75 "data/maps/MossdeepCity_House4/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 76 "data/maps/MossdeepCity_House4/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MossdeepCity_House4_EventScript_ExplainMew
# 77 "data/maps/MossdeepCity_House4/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 78 "data/maps/MossdeepCity_House4/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 79 "data/maps/MossdeepCity_House4/scripts.pory"
	goto MossdeepCity_House4_EventScript_ExplainMew
	end


MossdeepCity_House4_EventScript_ReceiveMewPC::
# 85 "data/maps/MossdeepCity_House4/scripts.pory"
	call MossdeepCity_House4_EventScript_ReceivedMewFanfare
# 86 "data/maps/MossdeepCity_House4/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 87 "data/maps/MossdeepCity_House4/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MossdeepCity_House4_EventScript_SendMewToPC
# 88 "data/maps/MossdeepCity_House4/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 89 "data/maps/MossdeepCity_House4/scripts.pory"
	goto MossdeepCity_House4_EventScript_SendMewToPC
	end


MossdeepCity_House4_EventScript_SendMewToPC::
# 95 "data/maps/MossdeepCity_House4/scripts.pory"
	call Common_EventScript_TransferredToPC
# 96 "data/maps/MossdeepCity_House4/scripts.pory"
	goto MossdeepCity_House4_EventScript_ExplainMew
	end


MossdeepCity_House4_EventScript_ReceivedMewFanfare::
# 102 "data/maps/MossdeepCity_House4/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 103 "data/maps/MossdeepCity_House4/scripts.pory"
	message MossdeepCity_House4_Text_PlayerReceivedMew
# 104 "data/maps/MossdeepCity_House4/scripts.pory"
	waitmessage
# 105 "data/maps/MossdeepCity_House4/scripts.pory"
	waitfanfare
# 106 "data/maps/MossdeepCity_House4/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_MEW
	return


MossdeepCity_House4_EventScript_ExplainMew::
# 112 "data/maps/MossdeepCity_House4/scripts.pory"
	msgbox Sunbird_ExplainMew, MSGBOX_DEFAULT
# 113 "data/maps/MossdeepCity_House4/scripts.pory"
	setflag FLAG_RECEIVED_MEW
# 114 "data/maps/MossdeepCity_House4/scripts.pory"
	release
	end


Sunbird_Greeting::
# 118 "data/maps/MossdeepCity_House4/scripts.pory"
	.string "Hello! I'm Sunbird, and I was one of the\n"
	.string "first players ever to beat this game, so\l"
	.string "I got to make my own trainer with my\l"
	.string "Hall of Fame team!\p"
	.string "Now if you can beat me, I'll give you a\n"
	.string "pretty good reward (spoiler, it's a\l"
	.string "Mythical Pokémon)!\p"
	.string "I'll also explain to you what my\n"
	.string "Skeledirge's nickname, “OBC Andy”,\l"
	.string "means.\p"
	.string "In fact, you kind of remind me of him.\p"
	.string "So, you think you can beat me?$"

Sunbird_ReadyYet::
# 133 "data/maps/MossdeepCity_House4/scripts.pory"
	.string "Ready yet, OBC trainer?$"

Sunbird_YoureOn::
# 137 "data/maps/MossdeepCity_House4/scripts.pory"
	.string "Alright you're on, OBC trainer!$"

Sunbird_ComeBackWhenReady::
# 141 "data/maps/MossdeepCity_House4/scripts.pory"
	.string "That's fine, I don't blame you.\n"
	.string "My team is pretty scary!$"

Sunbird_Outro::
# 146 "data/maps/MossdeepCity_House4/scripts.pory"
	.string "Ok, I'll tell you… “OBC” stands for “One\n"
	.string "Brain Cell”, but Andy does his best!$"

MossdeepCity_House4_Text_PlayerReceivedMew::
# 151 "data/maps/MossdeepCity_House4/scripts.pory"
	.string "{PLAYER} received Mew!$"

Sunbird_ExplainMew::
# 155 "data/maps/MossdeepCity_House4/scripts.pory"
	.string "I told you I'd give you a Mythical if you\n"
	.string "could beat me!\p"
	.string "And I'd say that's a pretty darn good\n"
	.string "one, so I hope Mew helps you!$"

PostBattle_Sunbird::
# 162 "data/maps/MossdeepCity_House4/scripts.pory"
	.string "Mochi the shiny Tyrantrum was a\n"
	.string "core member of my team when I beat\l"
	.string "this game.\p"
	.string "He was with me for so long and was a big\n"
	.string "part of my Hall of Fame team!\p"
	.string "I hope you have a Pokémon with you\n"
	.string "that you care about as much as I care\l"
	.string "about Mochi, and I hope you go far\l"
	.string "together!$"
