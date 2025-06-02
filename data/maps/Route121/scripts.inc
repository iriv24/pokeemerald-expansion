# 1 "data/maps/Route121/scripts.pory"

# 2 "data/maps/Route121/scripts.pory"
.set LOCALID_GRUNT_1, 12
# 3 "data/maps/Route121/scripts.pory"
.set LOCALID_GRUNT_2, 13
# 4 "data/maps/Route121/scripts.pory"
.set LOCALID_GRUNT_3, 14
# 5 "data/maps/Route121/scripts.pory"
.set LOCALID_BYRON, 30
# 6 "data/maps/Route121/scripts.pory"

# 7 "data/maps/Route121/scripts.pory"
Route121_MapScripts::
# 8 "data/maps/Route121/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route121_OnTransition
# 9 "data/maps/Route121/scripts.pory"
	.byte 0
# 10 "data/maps/Route121/scripts.pory"

# 11 "data/maps/Route121/scripts.pory"
Route121_OnTransition:
# 12 "data/maps/Route121/scripts.pory"
	setflag FLAG_VISITED_ROUTE_121
# 13 "data/maps/Route121/scripts.pory"
	end
# 14 "data/maps/Route121/scripts.pory"

# 15 "data/maps/Route121/scripts.pory"
Route121_EventScript_Woman::
# 16 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_AheadLoomsMtPyre, MSGBOX_NPC
# 17 "data/maps/Route121/scripts.pory"
	end
# 18 "data/maps/Route121/scripts.pory"

# 19 "data/maps/Route121/scripts.pory"
Route121_EventScript_MtPyrePierSign::
# 20 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_MtPyrePierSign, MSGBOX_SIGN
# 21 "data/maps/Route121/scripts.pory"
	end
# 22 "data/maps/Route121/scripts.pory"

# 23 "data/maps/Route121/scripts.pory"
Route121_EventScript_SafariZoneSign::
# 24 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_SafariZoneSign, MSGBOX_SIGN
# 25 "data/maps/Route121/scripts.pory"
	end
# 26 "data/maps/Route121/scripts.pory"

# 27 "data/maps/Route121/scripts.pory"
Route121_EventScript_AquaGruntsMoveOut::
# 28 "data/maps/Route121/scripts.pory"
	lockall
# 29 "data/maps/Route121/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 30 "data/maps/Route121/scripts.pory"
	applymovement LOCALID_GRUNT_2, Common_Movement_WalkInPlaceRight
# 31 "data/maps/Route121/scripts.pory"
	waitmovement 0
# 32 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_OkayMoveOutToMtPyre, MSGBOX_DEFAULT
# 33 "data/maps/Route121/scripts.pory"
	closemessage
# 34 "data/maps/Route121/scripts.pory"
	applymovement LOCALID_GRUNT_1, Route121_Movement_Grunt1Exit
# 35 "data/maps/Route121/scripts.pory"
	applymovement LOCALID_GRUNT_2, Route121_Movement_Grunt2Exit
# 36 "data/maps/Route121/scripts.pory"
	applymovement LOCALID_GRUNT_3, Route121_Movement_Grunt3Exit
# 37 "data/maps/Route121/scripts.pory"
	waitmovement 0
# 38 "data/maps/Route121/scripts.pory"
	fadedefaultbgm
# 39 "data/maps/Route121/scripts.pory"
	removeobject LOCALID_GRUNT_1
# 40 "data/maps/Route121/scripts.pory"
	removeobject LOCALID_GRUNT_2
# 41 "data/maps/Route121/scripts.pory"
	removeobject LOCALID_GRUNT_3
# 42 "data/maps/Route121/scripts.pory"
	setvar VAR_ROUTE121_STATE, 1
# 43 "data/maps/Route121/scripts.pory"
	releaseall
# 44 "data/maps/Route121/scripts.pory"
	end
# 45 "data/maps/Route121/scripts.pory"

# 46 "data/maps/Route121/scripts.pory"
Route121_Movement_Grunt1Exit:
# 47 "data/maps/Route121/scripts.pory"
	walk_down
# 48 "data/maps/Route121/scripts.pory"
	walk_down
# 49 "data/maps/Route121/scripts.pory"
	walk_down
# 50 "data/maps/Route121/scripts.pory"
	walk_down
# 51 "data/maps/Route121/scripts.pory"
	walk_down
# 52 "data/maps/Route121/scripts.pory"
	walk_down
# 53 "data/maps/Route121/scripts.pory"
	walk_down
# 54 "data/maps/Route121/scripts.pory"
	walk_down
# 55 "data/maps/Route121/scripts.pory"
	step_end
# 56 "data/maps/Route121/scripts.pory"

# 57 "data/maps/Route121/scripts.pory"
Route121_Movement_Grunt2Exit:
# 58 "data/maps/Route121/scripts.pory"
	walk_down
# 59 "data/maps/Route121/scripts.pory"
	walk_down
# 60 "data/maps/Route121/scripts.pory"
	walk_down
# 61 "data/maps/Route121/scripts.pory"
	walk_down
# 62 "data/maps/Route121/scripts.pory"
	walk_down
# 63 "data/maps/Route121/scripts.pory"
	walk_down
# 64 "data/maps/Route121/scripts.pory"
	walk_down
# 65 "data/maps/Route121/scripts.pory"
	walk_down
# 66 "data/maps/Route121/scripts.pory"
	step_end
# 67 "data/maps/Route121/scripts.pory"

# 68 "data/maps/Route121/scripts.pory"
Route121_Movement_Grunt3Exit:
# 69 "data/maps/Route121/scripts.pory"
	walk_down
# 70 "data/maps/Route121/scripts.pory"
	walk_down
# 71 "data/maps/Route121/scripts.pory"
	walk_down
# 72 "data/maps/Route121/scripts.pory"
	walk_down
# 73 "data/maps/Route121/scripts.pory"
	walk_down
# 74 "data/maps/Route121/scripts.pory"
	walk_down
# 75 "data/maps/Route121/scripts.pory"
	walk_down
# 76 "data/maps/Route121/scripts.pory"
	walk_down
# 77 "data/maps/Route121/scripts.pory"
	step_end
# 78 "data/maps/Route121/scripts.pory"

# 79 "data/maps/Route121/scripts.pory"
Route121_EventScript_Vanessa::
# 80 "data/maps/Route121/scripts.pory"
	trainerbattle_single TRAINER_VANESSA, Route121_Text_VanessaIntro, Route121_Text_VanessaDefeat
# 81 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_VanessaPostBattle, MSGBOX_AUTOCLOSE
# 82 "data/maps/Route121/scripts.pory"
	end
# 83 "data/maps/Route121/scripts.pory"

# 84 "data/maps/Route121/scripts.pory"
Route121_EventScript_Walter::
# 85 "data/maps/Route121/scripts.pory"
	trainerbattle_single TRAINER_WALTER_1, Route121_Text_WalterIntro, Route121_Text_WalterDefeat, Route121_EventScript_RegisterWalter
# 86 "data/maps/Route121/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 87 "data/maps/Route121/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route121_EventScript_RematchWalter
# 88 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_WalterPostBattle, MSGBOX_DEFAULT
# 89 "data/maps/Route121/scripts.pory"
	release
# 90 "data/maps/Route121/scripts.pory"
	end
# 91 "data/maps/Route121/scripts.pory"

# 92 "data/maps/Route121/scripts.pory"
Route121_EventScript_RegisterWalter::
# 93 "data/maps/Route121/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 94 "data/maps/Route121/scripts.pory"
	waitmovement 0
# 95 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_WalterRegister, MSGBOX_DEFAULT
# 96 "data/maps/Route121/scripts.pory"
	register_matchcall TRAINER_WALTER_1
# 97 "data/maps/Route121/scripts.pory"
	release
# 98 "data/maps/Route121/scripts.pory"
	end
# 99 "data/maps/Route121/scripts.pory"

# 100 "data/maps/Route121/scripts.pory"
Route121_EventScript_RematchWalter::
# 101 "data/maps/Route121/scripts.pory"
	trainerbattle_rematch TRAINER_WALTER_1, Route121_Text_WalterRematchIntro, Route121_Text_WalterRematchDefeat
# 102 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_WalterPostRematch, MSGBOX_AUTOCLOSE
# 103 "data/maps/Route121/scripts.pory"
	end
# 104 "data/maps/Route121/scripts.pory"

# 105 "data/maps/Route121/scripts.pory"
Route121_EventScript_Tammy::
# 106 "data/maps/Route121/scripts.pory"
	trainerbattle_single TRAINER_TAMMY, Route121_Text_TammyIntro, Route121_Text_TammyDefeat
# 107 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_TammyPostBattle, MSGBOX_AUTOCLOSE
# 108 "data/maps/Route121/scripts.pory"
	end
# 109 "data/maps/Route121/scripts.pory"

# 110 "data/maps/Route121/scripts.pory"
Route121_EventScript_Kate::
# 111 "data/maps/Route121/scripts.pory"
	trainerbattle_double TRAINER_KATE_AND_JOY, Route121_Text_KateIntro, Route121_Text_KateDefeat, Route121_Text_KateNotEnoughMons
# 112 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_KatePostBattle, MSGBOX_AUTOCLOSE
# 113 "data/maps/Route121/scripts.pory"
	end
# 114 "data/maps/Route121/scripts.pory"

# 115 "data/maps/Route121/scripts.pory"
Route121_EventScript_Joy::
# 116 "data/maps/Route121/scripts.pory"
	trainerbattle_double TRAINER_KATE_AND_JOY, Route121_Text_JoyIntro, Route121_Text_JoyDefeat, Route121_Text_JoyNotEnoughMons
# 117 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_JoyPostBattle, MSGBOX_AUTOCLOSE
# 118 "data/maps/Route121/scripts.pory"
	end
# 119 "data/maps/Route121/scripts.pory"

# 120 "data/maps/Route121/scripts.pory"
Route121_EventScript_Jessica::
# 121 "data/maps/Route121/scripts.pory"
	trainerbattle_single TRAINER_JESSICA_1, Route121_Text_JessicaIntro, Route121_Text_JessicaDefeat, Route121_EventScript_RegisterJessica
# 122 "data/maps/Route121/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 123 "data/maps/Route121/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route121_EventScript_RematchJessica
# 124 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_JessicaPostBattle, MSGBOX_DEFAULT
# 125 "data/maps/Route121/scripts.pory"
	release
# 126 "data/maps/Route121/scripts.pory"
	end
# 127 "data/maps/Route121/scripts.pory"

# 128 "data/maps/Route121/scripts.pory"
Route121_EventScript_RegisterJessica::
# 129 "data/maps/Route121/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 130 "data/maps/Route121/scripts.pory"
	waitmovement 0
# 131 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_JessicaRegister, MSGBOX_DEFAULT
# 132 "data/maps/Route121/scripts.pory"
	register_matchcall TRAINER_JESSICA_1
# 133 "data/maps/Route121/scripts.pory"
	release
# 134 "data/maps/Route121/scripts.pory"
	end
# 135 "data/maps/Route121/scripts.pory"

# 136 "data/maps/Route121/scripts.pory"
Route121_EventScript_RematchJessica::
# 137 "data/maps/Route121/scripts.pory"
	trainerbattle_rematch TRAINER_JESSICA_1, Route121_Text_JessicaRematchIntro, Route121_Text_JessicaRematchDefeat
# 138 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_JessicaPostRematch, MSGBOX_AUTOCLOSE
# 139 "data/maps/Route121/scripts.pory"
	end
# 140 "data/maps/Route121/scripts.pory"

# 141 "data/maps/Route121/scripts.pory"
Route121_EventScript_Cale::
# 142 "data/maps/Route121/scripts.pory"
	trainerbattle_single TRAINER_CALE, Route121_Text_CaleIntro, Route121_Text_CaleDefeat
# 143 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_CalePostBattle, MSGBOX_AUTOCLOSE
# 144 "data/maps/Route121/scripts.pory"
	end
# 145 "data/maps/Route121/scripts.pory"

# 146 "data/maps/Route121/scripts.pory"
Route121_EventScript_Myles::
# 147 "data/maps/Route121/scripts.pory"
	trainerbattle_single TRAINER_MYLES, Route121_Text_MylesIntro, Route121_Text_MylesDefeat
# 148 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_MylesPostBattle, MSGBOX_AUTOCLOSE
# 149 "data/maps/Route121/scripts.pory"
	end
# 150 "data/maps/Route121/scripts.pory"

# 151 "data/maps/Route121/scripts.pory"
Route121_EventScript_Pat::
# 152 "data/maps/Route121/scripts.pory"
	trainerbattle_single TRAINER_PAT, Route121_Text_PatIntro, Route121_Text_PatDefeat
# 153 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_PatPostBattle, MSGBOX_AUTOCLOSE
# 154 "data/maps/Route121/scripts.pory"
	end
# 155 "data/maps/Route121/scripts.pory"

# 156 "data/maps/Route121/scripts.pory"
Route121_EventScript_Marcel::
# 157 "data/maps/Route121/scripts.pory"
	trainerbattle_single TRAINER_MARCEL, Route121_Text_MarcelIntro, Route121_Text_MarcelDefeat
# 158 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_MarcelPostBattle, MSGBOX_AUTOCLOSE
# 159 "data/maps/Route121/scripts.pory"
	end
# 160 "data/maps/Route121/scripts.pory"

# 161 "data/maps/Route121/scripts.pory"
Route121_EventScript_Cristin::
# 162 "data/maps/Route121/scripts.pory"
	trainerbattle_single TRAINER_CRISTIN_1, Route121_Text_CristinIntro, Route121_Text_CristinDefeat, Route121_EventScript_RegisterCristin
# 163 "data/maps/Route121/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 164 "data/maps/Route121/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route121_EventScript_RematchCristin
# 165 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_CristinPostBattle, MSGBOX_DEFAULT
# 166 "data/maps/Route121/scripts.pory"
	release
# 167 "data/maps/Route121/scripts.pory"
	end
# 168 "data/maps/Route121/scripts.pory"

# 169 "data/maps/Route121/scripts.pory"
Route121_EventScript_RegisterCristin::
# 170 "data/maps/Route121/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 171 "data/maps/Route121/scripts.pory"
	waitmovement 0
# 172 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_CristinRegister, MSGBOX_DEFAULT
# 173 "data/maps/Route121/scripts.pory"
	register_matchcall TRAINER_CRISTIN_1
# 174 "data/maps/Route121/scripts.pory"
	release
# 175 "data/maps/Route121/scripts.pory"
	end
# 176 "data/maps/Route121/scripts.pory"

# 177 "data/maps/Route121/scripts.pory"
Route121_EventScript_RematchCristin::
# 178 "data/maps/Route121/scripts.pory"
	trainerbattle_rematch TRAINER_CRISTIN_1, Route121_Text_CristinRematchIntro, Route121_Text_CristinRematchDefeat
# 179 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_CristinPostRematch, MSGBOX_AUTOCLOSE
# 180 "data/maps/Route121/scripts.pory"
	end
# 181 "data/maps/Route121/scripts.pory"

# 182 "data/maps/Route121/scripts.pory"
Route121_Text_OkayMoveOutToMtPyre:
# 183 "data/maps/Route121/scripts.pory"
	.string "Okay!\n"
# 184 "data/maps/Route121/scripts.pory"
	.string "We're to move out to Mt. Pyre!$"
# 185 "data/maps/Route121/scripts.pory"

# 186 "data/maps/Route121/scripts.pory"
Route121_Text_AheadLoomsMtPyre:
# 187 "data/maps/Route121/scripts.pory"
	.string "Ahead looms Mt. Pyre…\p"
# 188 "data/maps/Route121/scripts.pory"
	.string "It is a natural monument to the spirits \n"
# 189 "data/maps/Route121/scripts.pory"
	.string "of departed Pokémon…$"
# 190 "data/maps/Route121/scripts.pory"

# 191 "data/maps/Route121/scripts.pory"
Route121_Text_MtPyrePierSign:
# 192 "data/maps/Route121/scripts.pory"
	.string "MT. PYRE PIER\p"
# 193 "data/maps/Route121/scripts.pory"
	.string "…The sign is old and worn out.\n"
# 194 "data/maps/Route121/scripts.pory"
	.string "The words are barely legible…$"
# 195 "data/maps/Route121/scripts.pory"

# 196 "data/maps/Route121/scripts.pory"
Route121_Text_SafariZoneSign:
# 197 "data/maps/Route121/scripts.pory"
	.string "“Filled with rare Pokémon!”\n"
# 198 "data/maps/Route121/scripts.pory"
	.string "SAFARI ZONE$"

Route121_EventScript_Byron::
# 203 "data/maps/Route121/scripts.pory"
	lockall
# 204 "data/maps/Route121/scripts.pory"
	applymovement LOCALID_BYRON, Common_Movement_FacePlayer
# 205 "data/maps/Route121/scripts.pory"
	goto_if_defeated TRAINER_BYRON, Route121_EventScript_ByronDefeated
# 206 "data/maps/Route121/scripts.pory"
	goto_if_set FLAG_TEMP_1, Route121_EventScript_ByronRequestBattleAgain
# 207 "data/maps/Route121/scripts.pory"
	msgbox Byron_Greeting, MSGBOX_YESNO
# 208 "data/maps/Route121/scripts.pory"
	goto Route121_EventScript_BattleByronPrompt
	end


Route121_EventScript_ByronRequestBattleAgain::
# 213 "data/maps/Route121/scripts.pory"
	msgbox Byron_ReadyYet, MSGBOX_YESNO
# 214 "data/maps/Route121/scripts.pory"
	goto Route121_EventScript_BattleByronPrompt
	end


Route121_EventScript_BattleByronPrompt::
# 219 "data/maps/Route121/scripts.pory"
	call_if_eq VAR_RESULT, YES, Route121_EventScript_BattleByron
# 220 "data/maps/Route121/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route121_EventScript_DeclineByronBattle
# 221 "data/maps/Route121/scripts.pory"
	closemessage
	end


Route121_EventScript_DeclineByronBattle::
# 226 "data/maps/Route121/scripts.pory"
	setflag FLAG_TEMP_1
# 227 "data/maps/Route121/scripts.pory"
	msgbox Byron_ComeBackWhenReady, MSGBOX_DEFAULT
# 228 "data/maps/Route121/scripts.pory"
	release
	end


Route121_EventScript_BattleByron::
# 233 "data/maps/Route121/scripts.pory"
	msgbox Route121_EventScript_BattleByron_Text_0, MSGBOX_DEFAULT
# 234 "data/maps/Route121/scripts.pory"
	trainerbattle_no_intro TRAINER_BYRON, Byron_Outro
# 235 "data/maps/Route121/scripts.pory"
	giveitem ITEM_TM_STEALTH_ROCK
# 236 "data/maps/Route121/scripts.pory"
	giveitem ITEM_TM_HIGH_HORSEPOWER
# 237 "data/maps/Route121/scripts.pory"
	giveitem ITEM_COPPERAJITE
# 238 "data/maps/Route121/scripts.pory"
	giveitem ITEM_ROCKY_HELMET
# 239 "data/maps/Route121/scripts.pory"
	giveitem ITEM_LEFTOVERS
# 240 "data/maps/Route121/scripts.pory"
	goto Route121_EventScript_ByronGiveJirachi
	return


Route121_EventScript_ByronDefeated::
# 246 "data/maps/Route121/scripts.pory"
	msgbox PostBattle_Byron, MSGBOX_DEFAULT
# 247 "data/maps/Route121/scripts.pory"
	releaseall
	end


Route121_EventScript_ByronGiveJirachi::
# 252 "data/maps/Route121/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_JIRACHI
# 253 "data/maps/Route121/scripts.pory"
	givemonrandom SPECIES_JIRACHI, 30
# 254 "data/maps/Route121/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, Route121_EventScript_ReceiveJirachiParty
# 255 "data/maps/Route121/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, Route121_EventScript_ReceiveJirachiPC
# 256 "data/maps/Route121/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 257 "data/maps/Route121/scripts.pory"
	release
	end


Route121_EventScript_ReceiveJirachiParty::
# 262 "data/maps/Route121/scripts.pory"
	call Route121_EventScript_ReceivedJirachiFanfare
# 263 "data/maps/Route121/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 264 "data/maps/Route121/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route121_EventScript_ExplainJirachi
# 265 "data/maps/Route121/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 266 "data/maps/Route121/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 267 "data/maps/Route121/scripts.pory"
	goto Route121_EventScript_ExplainJirachi
	end


Route121_EventScript_ReceiveJirachiPC::
# 273 "data/maps/Route121/scripts.pory"
	call Route121_EventScript_ReceivedJirachiFanfare
# 274 "data/maps/Route121/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 275 "data/maps/Route121/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route121_EventScript_SendJirachiToPC
# 276 "data/maps/Route121/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 277 "data/maps/Route121/scripts.pory"
	goto Route121_EventScript_SendJirachiToPC
	end


Route121_EventScript_SendJirachiToPC::
# 283 "data/maps/Route121/scripts.pory"
	call Common_EventScript_TransferredToPC
# 284 "data/maps/Route121/scripts.pory"
	goto Route121_EventScript_ExplainJirachi
	end


Route121_EventScript_ReceivedJirachiFanfare::
# 290 "data/maps/Route121/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 291 "data/maps/Route121/scripts.pory"
	message Route121_Text_PlayerReceivedJirachi
# 292 "data/maps/Route121/scripts.pory"
	waitmessage
# 293 "data/maps/Route121/scripts.pory"
	waitfanfare
# 294 "data/maps/Route121/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_JIRACHI
	return


Route121_EventScript_ExplainJirachi::
# 300 "data/maps/Route121/scripts.pory"
	msgbox Byron_ExplainJirachi, MSGBOX_DEFAULT
# 301 "data/maps/Route121/scripts.pory"
	release
	end


Route121_Psyduck1::
# 358 "data/maps/Route121/scripts.pory"
	lock
# 359 "data/maps/Route121/scripts.pory"
	faceplayer
# 360 "data/maps/Route121/scripts.pory"
	waitse
# 361 "data/maps/Route121/scripts.pory"
	playmoncry SPECIES_PSYDUCK, CRY_MODE_NORMAL
# 362 "data/maps/Route121/scripts.pory"
	msgbox Route121_Psyduck1_Text_0, MSGBOX_DEFAULT
# 363 "data/maps/Route121/scripts.pory"
	waitmoncry
# 364 "data/maps/Route121/scripts.pory"
	release
	end


Route121_Psyduck2::
# 370 "data/maps/Route121/scripts.pory"
	lock
# 371 "data/maps/Route121/scripts.pory"
	faceplayer
# 372 "data/maps/Route121/scripts.pory"
	waitse
# 373 "data/maps/Route121/scripts.pory"
	playmoncry SPECIES_PSYDUCK, CRY_MODE_NORMAL
# 374 "data/maps/Route121/scripts.pory"
	msgbox Route121_Psyduck2_Text_0, MSGBOX_DEFAULT
# 375 "data/maps/Route121/scripts.pory"
	waitmoncry
# 376 "data/maps/Route121/scripts.pory"
	release
	end


Route121_Psyduck3::
# 381 "data/maps/Route121/scripts.pory"
	lock
# 382 "data/maps/Route121/scripts.pory"
	faceplayer
# 383 "data/maps/Route121/scripts.pory"
	waitse
# 384 "data/maps/Route121/scripts.pory"
	playmoncry SPECIES_PSYDUCK, CRY_MODE_NORMAL
# 385 "data/maps/Route121/scripts.pory"
	msgbox Route121_Psyduck3_Text_0, MSGBOX_DEFAULT
# 386 "data/maps/Route121/scripts.pory"
	waitmoncry
# 387 "data/maps/Route121/scripts.pory"
	release
	end


Route121_Psyduck4::
# 392 "data/maps/Route121/scripts.pory"
	lock
# 393 "data/maps/Route121/scripts.pory"
	faceplayer
# 394 "data/maps/Route121/scripts.pory"
	waitse
# 395 "data/maps/Route121/scripts.pory"
	playmoncry SPECIES_PSYDUCK, CRY_MODE_NORMAL
# 396 "data/maps/Route121/scripts.pory"
	msgbox Route121_Psyduck4_Text_0, MSGBOX_DEFAULT
# 397 "data/maps/Route121/scripts.pory"
	waitmoncry
# 398 "data/maps/Route121/scripts.pory"
	release
	end


# 407 "data/maps/Route121/scripts.pory"
StopPlayerLeft:
# 408 "data/maps/Route121/scripts.pory"
	walk_left
	step_end

Route121_EventScript_BattleByron_Text_0:
# 233 "data/maps/Route121/scripts.pory"
	.string "Excellent!$"

Route121_Psyduck1_Text_0:
# 362 "data/maps/Route121/scripts.pory"
	.string "Psyduck: Psyyyyyyy.$"

Route121_Psyduck2_Text_0:
# 374 "data/maps/Route121/scripts.pory"
	.string "Psyduck: Psy?$"

Route121_Psyduck3_Text_0:
# 385 "data/maps/Route121/scripts.pory"
	.string "Psyduck: Psyyyy?$"

Route121_Psyduck4_Text_0:
# 396 "data/maps/Route121/scripts.pory"
	.string "Psyduck: PSYYY!!!!$"

Byron_Greeting::
# 305 "data/maps/Route121/scripts.pory"
	.string "Well hello there, you look like a well-\n"
	.string "traveled person. Did you happen to run\l"
	.string "into a young man named Roark during\l"
	.string "your journey?\p"
	.string "… … … … … …\p"
	.string "Oh, you did! And you were able to\n"
	.string "defeat him?\p"
	.string "… … … … … …\p"
	.string "Excellent, that must mean you are a\n"
	.string "strong trainer if you were able to\l"
	.string "defeat my son.\p"
	.string "Oh, where are my manners, I'm Byron, a\n"
	.string "Gym Leader from the Sinnoh region.\p"
	.string "Say, since you are a strong trainer, how\n"
	.string "would you feel about having a battle\l"
	.string "with me?$"

Byron_ReadyYet::
# 324 "data/maps/Route121/scripts.pory"
	.string "Would you like to battle now?$"

Byron_ComeBackWhenReady::
# 328 "data/maps/Route121/scripts.pory"
	.string "That's alright, I'll be here if you\n"
	.string "change your mind.$"

Route121_Text_PlayerReceivedJirachi::
# 333 "data/maps/Route121/scripts.pory"
	.string "{PLAYER} received Jirachi!$"

Byron_ExplainJirachi::
# 337 "data/maps/Route121/scripts.pory"
	.string "Jirachi is one of my\n"
	.string "favorite Steel-types, I hope you treat\l"
	.string "that Jirachi kindly and raise it well.$"

Byron_Outro::
# 344 "data/maps/Route121/scripts.pory"
	.string "I see how you were able to defeat my\n"
	.string "son. I'm confident I'll be leaving this\l"
	.string "Pokémon in good hands.$"

PostBattle_Byron::
# 351 "data/maps/Route121/scripts.pory"
	.string "I'm off to find Roark, I'm sure he's\n"
	.string "going to explore the underground of\l"
	.string "this region.$"

GoBeatWinona::
# 402 "data/maps/Route121/scripts.pory"
	.string "You should defeat Winona before\n"
	.string "moving on to here.$"
