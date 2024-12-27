# 1 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"

# 2 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
MossdeepCity_BetaTesterHouse_MapScripts::
# 3 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.byte 0
# 4 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"

# 5 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
MossdeepCity_BetaTesterHouse_EventScript_Mochi::
# 6 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	lock
# 7 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	faceplayer
# 8 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	waitse
# 9 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	playmoncry SPECIES_TYRANTRUM, CRY_MODE_NORMAL
# 10 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox MossdeepCity_BetaTesterHouse_Text_Tyrantrum, MSGBOX_DEFAULT
# 11 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	waitmoncry
# 12 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	release
# 13 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	end
# 14 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"

# 15 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
MossdeepCity_BetaTesterHouse_Text_Tyrantrum:
# 16 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "Mochi: Grrrraaaaraaararaaa!$"
# 17 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"

# 18 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
MossdeepCity_BetaTesterHouse_EventScript_Kingambit::
# 19 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	lock
# 20 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	faceplayer
# 21 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	waitse
# 22 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	playmoncry SPECIES_KINGAMBIT, CRY_MODE_NORMAL
# 23 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox MossdeepCity_BetaTesterHouse_Text_Kingambit, MSGBOX_DEFAULT
# 24 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	waitmoncry
# 25 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	release
# 26 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	end
# 27 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"

# 28 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
MossdeepCity_BetaTesterHouse_Text_Kingambit:
# 29 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "Kingambit: Uuhuuhuuhuuahahuuhu!$"

MossdeepCity_BetaTesterHouse_EventScript_Sunbird::
# 33 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	lockall
# 34 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	applymovement 1, Common_Movement_FacePlayer
# 35 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto_if_defeated TRAINER_SUNBIRD, MossdeepCity_BetaTesterHouse_EventScript_SunbirdDefeated
# 36 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto_if_set FLAG_TEMP_1, MossdeepCity_BetaTesterHouse_EventScript_SunbirdRequestBattleAgain
# 37 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox Sunbird_Greeting, MSGBOX_YESNO
# 38 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto MossdeepCity_BetaTesterHouse_EventScript_BattleSunbirdPrompt
	end


MossdeepCity_BetaTesterHouse_EventScript_SunbirdRequestBattleAgain::
# 43 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox Sunbird_ReadyYet, MSGBOX_YESNO
# 44 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto MossdeepCity_BetaTesterHouse_EventScript_BattleSunbirdPrompt
	end


MossdeepCity_BetaTesterHouse_EventScript_BattleSunbirdPrompt::
# 49 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	call_if_eq VAR_RESULT, YES, MossdeepCity_BetaTesterHouse_EventScript_BattleSunbird
# 50 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MossdeepCity_BetaTesterHouse_EventScript_DeclineSunbirdBattle
# 51 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	closemessage
	end


MossdeepCity_BetaTesterHouse_EventScript_DeclineSunbirdBattle::
# 56 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	setflag FLAG_TEMP_1
# 57 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox Sunbird_ComeBackWhenReady, MSGBOX_DEFAULT
# 58 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	release
	end


MossdeepCity_BetaTesterHouse_EventScript_BattleSunbird::
# 63 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox Sunbird_YoureOn, MSGBOX_DEFAULT
# 64 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	trainerbattle_no_intro TRAINER_SUNBIRD, Sunbird_Outro
# 65 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto MossdeepCity_BetaTesterHouse_EventScript_SunbirdGiveMew
	return


MossdeepCity_BetaTesterHouse_EventScript_SunbirdDefeated::
# 71 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox PostBattle_Sunbird, MSGBOX_DEFAULT
# 72 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	releaseall
	end


MossdeepCity_BetaTesterHouse_EventScript_SunbirdGiveMew::
# 77 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_MEW
# 78 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	givemonrandom SPECIES_MEW, 50
# 79 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, MossdeepCity_BetaTesterHouse_EventScript_ReceiveMewParty
# 80 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, MossdeepCity_BetaTesterHouse_EventScript_ReceiveMewPC
# 81 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 82 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	release
	end


MossdeepCity_BetaTesterHouse_EventScript_ReceiveMewParty::
# 87 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	call MossdeepCity_BetaTesterHouse_EventScript_ReceivedMewFanfare
# 88 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 89 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MossdeepCity_BetaTesterHouse_EventScript_ExplainMew
# 90 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 91 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 92 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto MossdeepCity_BetaTesterHouse_EventScript_ExplainMew
	end


MossdeepCity_BetaTesterHouse_EventScript_ReceiveMewPC::
# 98 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	call MossdeepCity_BetaTesterHouse_EventScript_ReceivedMewFanfare
# 99 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 100 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MossdeepCity_BetaTesterHouse_EventScript_SendMewToPC
# 101 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 102 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto MossdeepCity_BetaTesterHouse_EventScript_SendMewToPC
	end


MossdeepCity_BetaTesterHouse_EventScript_SendMewToPC::
# 108 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	call Common_EventScript_TransferredToPC
# 109 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto MossdeepCity_BetaTesterHouse_EventScript_ExplainMew
	end


MossdeepCity_BetaTesterHouse_EventScript_ReceivedMewFanfare::
# 115 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 116 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	message MossdeepCity_BetaTesterHouse_Text_PlayerReceivedMew
# 117 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	waitmessage
# 118 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	waitfanfare
# 119 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_MEW
	return


MossdeepCity_BetaTesterHouse_EventScript_ExplainMew::
# 125 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox Sunbird_ExplainMew, MSGBOX_DEFAULT
# 126 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	release
	end


MossdeepCity_BetaTesterHouse_EventScript_Suneal::
# 189 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	lockall
# 190 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	applymovement 3, Common_Movement_FacePlayer
# 191 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto_if_defeated TRAINER_SUNEAL, MossdeepCity_BetaTesterHouse_EventScript_SunealDefeated
# 192 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto_if_set FLAG_TEMP_2, MossdeepCity_BetaTesterHouse_EventScript_SunealRequestBattleAgain
# 193 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox Suneal_Greeting, MSGBOX_YESNO
# 194 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto MossdeepCity_BetaTesterHouse_EventScript_BattleSunealPrompt
	end


MossdeepCity_BetaTesterHouse_EventScript_SunealRequestBattleAgain::
# 199 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox Suneal_ReadyYet, MSGBOX_YESNO
# 200 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto MossdeepCity_BetaTesterHouse_EventScript_BattleSunealPrompt
	end


MossdeepCity_BetaTesterHouse_EventScript_BattleSunealPrompt::
# 205 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	call_if_eq VAR_RESULT, YES, MossdeepCity_BetaTesterHouse_EventScript_BattleSuneal
# 206 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MossdeepCity_BetaTesterHouse_EventScript_DeclineSunealBattle
# 207 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	closemessage
	end


MossdeepCity_BetaTesterHouse_EventScript_DeclineSunealBattle::
# 212 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	setflag FLAG_TEMP_2
# 213 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox Suneal_ComeBackWhenReady, MSGBOX_DEFAULT
# 214 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	release
	end


MossdeepCity_BetaTesterHouse_EventScript_BattleSuneal::
# 219 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox Suneal_YoureOn, MSGBOX_DEFAULT
# 220 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	trainerbattle_no_intro TRAINER_SUNEAL, Suneal_Outro
# 221 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto MossdeepCity_BetaTesterHouse_EventScript_SunealGiveDarkrai
	return


MossdeepCity_BetaTesterHouse_EventScript_SunealDefeated::
# 227 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox PostBattle_Suneal, MSGBOX_DEFAULT
# 228 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	releaseall
	end


MossdeepCity_BetaTesterHouse_EventScript_SunealGiveDarkrai::
# 233 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_DARKRAI
# 234 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	givemonrandom SPECIES_DARKRAI, 50
# 235 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, MossdeepCity_BetaTesterHouse_EventScript_ReceiveDarkraiParty
# 236 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, MossdeepCity_BetaTesterHouse_EventScript_ReceiveDarkraiPC
# 237 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 238 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	release
	end


MossdeepCity_BetaTesterHouse_EventScript_ReceiveDarkraiParty::
# 243 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	call MossdeepCity_BetaTesterHouse_EventScript_ReceivedDarkraiFanfare
# 244 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 245 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MossdeepCity_BetaTesterHouse_EventScript_ExplainDarkrai
# 246 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 247 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 248 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto MossdeepCity_BetaTesterHouse_EventScript_ExplainDarkrai
	end


MossdeepCity_BetaTesterHouse_EventScript_ReceiveDarkraiPC::
# 254 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	call MossdeepCity_BetaTesterHouse_EventScript_ReceivedDarkraiFanfare
# 255 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 256 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MossdeepCity_BetaTesterHouse_EventScript_SendDarkraiToPC
# 257 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 258 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto MossdeepCity_BetaTesterHouse_EventScript_SendDarkraiToPC
	end


MossdeepCity_BetaTesterHouse_EventScript_SendDarkraiToPC::
# 264 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	call Common_EventScript_TransferredToPC
# 265 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto MossdeepCity_BetaTesterHouse_EventScript_ExplainDarkrai
	end


MossdeepCity_BetaTesterHouse_EventScript_ReceivedDarkraiFanfare::
# 271 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 272 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	message MossdeepCity_BetaTesterHouse_Text_PlayerReceivedDarkrai
# 273 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	waitmessage
# 274 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	waitfanfare
# 275 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_DARKRAI
	return


MossdeepCity_BetaTesterHouse_EventScript_ExplainDarkrai::
# 281 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox Suneal_ExplainDarkrai, MSGBOX_DEFAULT
# 282 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	release
	end


Sunbird_Greeting::
# 130 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
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
# 145 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "Ready yet, OBC trainer?$"

Sunbird_YoureOn::
# 149 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "Alright you're on, OBC trainer!$"

Sunbird_ComeBackWhenReady::
# 153 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "That's fine, I don't blame you.\n"
	.string "My team is pretty scary!$"

Sunbird_Outro::
# 158 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "Ok, I'll tell you… “OBC” stands for “One\n"
	.string "Brain Cell”, but Andy does his best!$"

MossdeepCity_BetaTesterHouse_Text_PlayerReceivedMew::
# 163 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "{PLAYER} received Mew!$"

Sunbird_ExplainMew::
# 167 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "I told you I'd give you a Mythical if you\n"
	.string "could beat me!\p"
	.string "And I'd say that's a pretty darn good\n"
	.string "one, so I hope Mew helps you!$"

PostBattle_Sunbird::
# 174 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "Mochi the shiny Tyrantrum was a\n"
	.string "core member of my team when I beat\l"
	.string "this game.\p"
	.string "He was with me for so long and was a big\n"
	.string "part of my Hall of Fame team!\p"
	.string "I hope you have a Pokémon with you\n"
	.string "that you care about as much as I care\l"
	.string "about Mochi, and I hope you go far\l"
	.string "together!$"

Suneal_Greeting::
# 286 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "What's up? My name is Suneal, and I was\n"
	.string "the first person besides the creator\l"
	.string "to beat this game.\p"
	.string "I actually beat it more than once, and\n"
	.string "I played a version way before it was\l"
	.string "finalized.\p"
	.string "If you can beat me, I'll give you a\n"
	.string "Mythical Pokémon as a reward.\p"
	.string "What do you say?$"

Suneal_ReadyYet::
# 298 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "Ready to battle yet?$"

Suneal_YoureOn::
# 302 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "Let's do this.$"

Suneal_ComeBackWhenReady::
# 306 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "Come back if you change your mind.$"

Suneal_Outro::
# 310 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "Looks like you might not be a complete\n"
	.string "bum after all.$"

MossdeepCity_BetaTesterHouse_Text_PlayerReceivedDarkrai::
# 315 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "{PLAYER} received Darkrai!$"

Suneal_ExplainDarkrai::
# 319 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "As promised, there's your Mythical.\n"
	.string "You're not getting Dark Hole until\l"
	.string "post-game though, that move is\l"
	.string "completely broken.$"

PostBattle_Suneal::
# 326 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "I was the one who suggested adding a\n"
	.string "White Out Counter to the 2nd Nurse in\l"
	.string "the Pokémon Centers, and I'm the one\l"
	.string "who came up with the “obtained several\l"
	.string "Items!” idea instead of getting 50\l"
	.string "individual messages, so you're\l"
	.string "welcome for that.$"
