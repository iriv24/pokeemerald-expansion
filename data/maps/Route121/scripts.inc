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
	.byte 0
# 9 "data/maps/Route121/scripts.pory"

# 10 "data/maps/Route121/scripts.pory"
Route121_EventScript_Woman::
# 11 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_AheadLoomsMtPyre, MSGBOX_NPC
# 12 "data/maps/Route121/scripts.pory"
	end
# 13 "data/maps/Route121/scripts.pory"

# 14 "data/maps/Route121/scripts.pory"
Route121_EventScript_MtPyrePierSign::
# 15 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_MtPyrePierSign, MSGBOX_SIGN
# 16 "data/maps/Route121/scripts.pory"
	end
# 17 "data/maps/Route121/scripts.pory"

# 18 "data/maps/Route121/scripts.pory"
Route121_EventScript_SafariZoneSign::
# 19 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_SafariZoneSign, MSGBOX_SIGN
# 20 "data/maps/Route121/scripts.pory"
	end
# 21 "data/maps/Route121/scripts.pory"

# 22 "data/maps/Route121/scripts.pory"
Route121_EventScript_AquaGruntsMoveOut::
# 23 "data/maps/Route121/scripts.pory"
	lockall
# 24 "data/maps/Route121/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 25 "data/maps/Route121/scripts.pory"
	applymovement LOCALID_GRUNT_2, Common_Movement_WalkInPlaceRight
# 26 "data/maps/Route121/scripts.pory"
	waitmovement 0
# 27 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_OkayMoveOutToMtPyre, MSGBOX_DEFAULT
# 28 "data/maps/Route121/scripts.pory"
	closemessage
# 29 "data/maps/Route121/scripts.pory"
	applymovement LOCALID_GRUNT_1, Route121_Movement_Grunt1Exit
# 30 "data/maps/Route121/scripts.pory"
	applymovement LOCALID_GRUNT_2, Route121_Movement_Grunt2Exit
# 31 "data/maps/Route121/scripts.pory"
	applymovement LOCALID_GRUNT_3, Route121_Movement_Grunt3Exit
# 32 "data/maps/Route121/scripts.pory"
	waitmovement 0
# 33 "data/maps/Route121/scripts.pory"
	fadedefaultbgm
# 34 "data/maps/Route121/scripts.pory"
	removeobject LOCALID_GRUNT_1
# 35 "data/maps/Route121/scripts.pory"
	removeobject LOCALID_GRUNT_2
# 36 "data/maps/Route121/scripts.pory"
	removeobject LOCALID_GRUNT_3
# 37 "data/maps/Route121/scripts.pory"
	setvar VAR_ROUTE121_STATE, 1
# 38 "data/maps/Route121/scripts.pory"
	releaseall
# 39 "data/maps/Route121/scripts.pory"
	end
# 40 "data/maps/Route121/scripts.pory"

# 41 "data/maps/Route121/scripts.pory"
Route121_Movement_Grunt1Exit:
# 42 "data/maps/Route121/scripts.pory"
	walk_down
# 43 "data/maps/Route121/scripts.pory"
	walk_down
# 44 "data/maps/Route121/scripts.pory"
	walk_down
# 45 "data/maps/Route121/scripts.pory"
	walk_down
# 46 "data/maps/Route121/scripts.pory"
	walk_down
# 47 "data/maps/Route121/scripts.pory"
	walk_down
# 48 "data/maps/Route121/scripts.pory"
	walk_down
# 49 "data/maps/Route121/scripts.pory"
	walk_down
# 50 "data/maps/Route121/scripts.pory"
	step_end
# 51 "data/maps/Route121/scripts.pory"

# 52 "data/maps/Route121/scripts.pory"
Route121_Movement_Grunt2Exit:
# 53 "data/maps/Route121/scripts.pory"
	walk_down
# 54 "data/maps/Route121/scripts.pory"
	walk_down
# 55 "data/maps/Route121/scripts.pory"
	walk_down
# 56 "data/maps/Route121/scripts.pory"
	walk_down
# 57 "data/maps/Route121/scripts.pory"
	walk_down
# 58 "data/maps/Route121/scripts.pory"
	walk_down
# 59 "data/maps/Route121/scripts.pory"
	walk_down
# 60 "data/maps/Route121/scripts.pory"
	walk_down
# 61 "data/maps/Route121/scripts.pory"
	step_end
# 62 "data/maps/Route121/scripts.pory"

# 63 "data/maps/Route121/scripts.pory"
Route121_Movement_Grunt3Exit:
# 64 "data/maps/Route121/scripts.pory"
	walk_down
# 65 "data/maps/Route121/scripts.pory"
	walk_down
# 66 "data/maps/Route121/scripts.pory"
	walk_down
# 67 "data/maps/Route121/scripts.pory"
	walk_down
# 68 "data/maps/Route121/scripts.pory"
	walk_down
# 69 "data/maps/Route121/scripts.pory"
	walk_down
# 70 "data/maps/Route121/scripts.pory"
	walk_down
# 71 "data/maps/Route121/scripts.pory"
	walk_down
# 72 "data/maps/Route121/scripts.pory"
	step_end
# 73 "data/maps/Route121/scripts.pory"

# 74 "data/maps/Route121/scripts.pory"
Route121_EventScript_Vanessa::
# 75 "data/maps/Route121/scripts.pory"
	trainerbattle_single TRAINER_VANESSA, Route121_Text_VanessaIntro, Route121_Text_VanessaDefeat
# 76 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_VanessaPostBattle, MSGBOX_AUTOCLOSE
# 77 "data/maps/Route121/scripts.pory"
	end
# 78 "data/maps/Route121/scripts.pory"

# 79 "data/maps/Route121/scripts.pory"
Route121_EventScript_Walter::
# 80 "data/maps/Route121/scripts.pory"
	trainerbattle_single TRAINER_WALTER_1, Route121_Text_WalterIntro, Route121_Text_WalterDefeat, Route121_EventScript_RegisterWalter
# 81 "data/maps/Route121/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 82 "data/maps/Route121/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route121_EventScript_RematchWalter
# 83 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_WalterPostBattle, MSGBOX_DEFAULT
# 84 "data/maps/Route121/scripts.pory"
	release
# 85 "data/maps/Route121/scripts.pory"
	end
# 86 "data/maps/Route121/scripts.pory"

# 87 "data/maps/Route121/scripts.pory"
Route121_EventScript_RegisterWalter::
# 88 "data/maps/Route121/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 89 "data/maps/Route121/scripts.pory"
	waitmovement 0
# 90 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_WalterRegister, MSGBOX_DEFAULT
# 91 "data/maps/Route121/scripts.pory"
	register_matchcall TRAINER_WALTER_1
# 92 "data/maps/Route121/scripts.pory"
	release
# 93 "data/maps/Route121/scripts.pory"
	end
# 94 "data/maps/Route121/scripts.pory"

# 95 "data/maps/Route121/scripts.pory"
Route121_EventScript_RematchWalter::
# 96 "data/maps/Route121/scripts.pory"
	trainerbattle_rematch TRAINER_WALTER_1, Route121_Text_WalterRematchIntro, Route121_Text_WalterRematchDefeat
# 97 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_WalterPostRematch, MSGBOX_AUTOCLOSE
# 98 "data/maps/Route121/scripts.pory"
	end
# 99 "data/maps/Route121/scripts.pory"

# 100 "data/maps/Route121/scripts.pory"
Route121_EventScript_Tammy::
# 101 "data/maps/Route121/scripts.pory"
	trainerbattle_single TRAINER_TAMMY, Route121_Text_TammyIntro, Route121_Text_TammyDefeat
# 102 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_TammyPostBattle, MSGBOX_AUTOCLOSE
# 103 "data/maps/Route121/scripts.pory"
	end
# 104 "data/maps/Route121/scripts.pory"

# 105 "data/maps/Route121/scripts.pory"
Route121_EventScript_Kate::
# 106 "data/maps/Route121/scripts.pory"
	trainerbattle_double TRAINER_KATE_AND_JOY, Route121_Text_KateIntro, Route121_Text_KateDefeat, Route121_Text_KateNotEnoughMons
# 107 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_KatePostBattle, MSGBOX_AUTOCLOSE
# 108 "data/maps/Route121/scripts.pory"
	end
# 109 "data/maps/Route121/scripts.pory"

# 110 "data/maps/Route121/scripts.pory"
Route121_EventScript_Joy::
# 111 "data/maps/Route121/scripts.pory"
	trainerbattle_double TRAINER_KATE_AND_JOY, Route121_Text_JoyIntro, Route121_Text_JoyDefeat, Route121_Text_JoyNotEnoughMons
# 112 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_JoyPostBattle, MSGBOX_AUTOCLOSE
# 113 "data/maps/Route121/scripts.pory"
	end
# 114 "data/maps/Route121/scripts.pory"

# 115 "data/maps/Route121/scripts.pory"
Route121_EventScript_Jessica::
# 116 "data/maps/Route121/scripts.pory"
	trainerbattle_single TRAINER_JESSICA_1, Route121_Text_JessicaIntro, Route121_Text_JessicaDefeat, Route121_EventScript_RegisterJessica
# 117 "data/maps/Route121/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 118 "data/maps/Route121/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route121_EventScript_RematchJessica
# 119 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_JessicaPostBattle, MSGBOX_DEFAULT
# 120 "data/maps/Route121/scripts.pory"
	release
# 121 "data/maps/Route121/scripts.pory"
	end
# 122 "data/maps/Route121/scripts.pory"

# 123 "data/maps/Route121/scripts.pory"
Route121_EventScript_RegisterJessica::
# 124 "data/maps/Route121/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 125 "data/maps/Route121/scripts.pory"
	waitmovement 0
# 126 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_JessicaRegister, MSGBOX_DEFAULT
# 127 "data/maps/Route121/scripts.pory"
	register_matchcall TRAINER_JESSICA_1
# 128 "data/maps/Route121/scripts.pory"
	release
# 129 "data/maps/Route121/scripts.pory"
	end
# 130 "data/maps/Route121/scripts.pory"

# 131 "data/maps/Route121/scripts.pory"
Route121_EventScript_RematchJessica::
# 132 "data/maps/Route121/scripts.pory"
	trainerbattle_rematch TRAINER_JESSICA_1, Route121_Text_JessicaRematchIntro, Route121_Text_JessicaRematchDefeat
# 133 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_JessicaPostRematch, MSGBOX_AUTOCLOSE
# 134 "data/maps/Route121/scripts.pory"
	end
# 135 "data/maps/Route121/scripts.pory"

# 136 "data/maps/Route121/scripts.pory"
Route121_EventScript_Cale::
# 137 "data/maps/Route121/scripts.pory"
	trainerbattle_single TRAINER_CALE, Route121_Text_CaleIntro, Route121_Text_CaleDefeat
# 138 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_CalePostBattle, MSGBOX_AUTOCLOSE
# 139 "data/maps/Route121/scripts.pory"
	end
# 140 "data/maps/Route121/scripts.pory"

# 141 "data/maps/Route121/scripts.pory"
Route121_EventScript_Myles::
# 142 "data/maps/Route121/scripts.pory"
	trainerbattle_single TRAINER_MYLES, Route121_Text_MylesIntro, Route121_Text_MylesDefeat
# 143 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_MylesPostBattle, MSGBOX_AUTOCLOSE
# 144 "data/maps/Route121/scripts.pory"
	end
# 145 "data/maps/Route121/scripts.pory"

# 146 "data/maps/Route121/scripts.pory"
Route121_EventScript_Pat::
# 147 "data/maps/Route121/scripts.pory"
	trainerbattle_single TRAINER_PAT, Route121_Text_PatIntro, Route121_Text_PatDefeat
# 148 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_PatPostBattle, MSGBOX_AUTOCLOSE
# 149 "data/maps/Route121/scripts.pory"
	end
# 150 "data/maps/Route121/scripts.pory"

# 151 "data/maps/Route121/scripts.pory"
Route121_EventScript_Marcel::
# 152 "data/maps/Route121/scripts.pory"
	trainerbattle_single TRAINER_MARCEL, Route121_Text_MarcelIntro, Route121_Text_MarcelDefeat
# 153 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_MarcelPostBattle, MSGBOX_AUTOCLOSE
# 154 "data/maps/Route121/scripts.pory"
	end
# 155 "data/maps/Route121/scripts.pory"

# 156 "data/maps/Route121/scripts.pory"
Route121_EventScript_Cristin::
# 157 "data/maps/Route121/scripts.pory"
	trainerbattle_single TRAINER_CRISTIN_1, Route121_Text_CristinIntro, Route121_Text_CristinDefeat, Route121_EventScript_RegisterCristin
# 158 "data/maps/Route121/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 159 "data/maps/Route121/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route121_EventScript_RematchCristin
# 160 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_CristinPostBattle, MSGBOX_DEFAULT
# 161 "data/maps/Route121/scripts.pory"
	release
# 162 "data/maps/Route121/scripts.pory"
	end
# 163 "data/maps/Route121/scripts.pory"

# 164 "data/maps/Route121/scripts.pory"
Route121_EventScript_RegisterCristin::
# 165 "data/maps/Route121/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 166 "data/maps/Route121/scripts.pory"
	waitmovement 0
# 167 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_CristinRegister, MSGBOX_DEFAULT
# 168 "data/maps/Route121/scripts.pory"
	register_matchcall TRAINER_CRISTIN_1
# 169 "data/maps/Route121/scripts.pory"
	release
# 170 "data/maps/Route121/scripts.pory"
	end
# 171 "data/maps/Route121/scripts.pory"

# 172 "data/maps/Route121/scripts.pory"
Route121_EventScript_RematchCristin::
# 173 "data/maps/Route121/scripts.pory"
	trainerbattle_rematch TRAINER_CRISTIN_1, Route121_Text_CristinRematchIntro, Route121_Text_CristinRematchDefeat
# 174 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_CristinPostRematch, MSGBOX_AUTOCLOSE
# 175 "data/maps/Route121/scripts.pory"
	end
# 176 "data/maps/Route121/scripts.pory"

# 177 "data/maps/Route121/scripts.pory"
Route121_Text_OkayMoveOutToMtPyre:
# 178 "data/maps/Route121/scripts.pory"
	.string "Okay!\n"
# 179 "data/maps/Route121/scripts.pory"
	.string "We're to move out to MT. PYRE!$"
# 180 "data/maps/Route121/scripts.pory"

# 181 "data/maps/Route121/scripts.pory"
Route121_Text_AheadLoomsMtPyre:
# 182 "data/maps/Route121/scripts.pory"
	.string "Ahead looms MT. PYRE…\p"
# 183 "data/maps/Route121/scripts.pory"
	.string "It is a natural monument to the spirits \n"
# 184 "data/maps/Route121/scripts.pory"
	.string "of departed POKéMON…$"
# 185 "data/maps/Route121/scripts.pory"

# 186 "data/maps/Route121/scripts.pory"
Route121_Text_MtPyrePierSign:
# 187 "data/maps/Route121/scripts.pory"
	.string "MT. PYRE PIER\p"
# 188 "data/maps/Route121/scripts.pory"
	.string "…The sign is old and worn out.\n"
# 189 "data/maps/Route121/scripts.pory"
	.string "The words are barely legible…$"
# 190 "data/maps/Route121/scripts.pory"

# 191 "data/maps/Route121/scripts.pory"
Route121_Text_SafariZoneSign:
# 192 "data/maps/Route121/scripts.pory"
	.string "“Filled with rare POKéMON!”\n"
# 193 "data/maps/Route121/scripts.pory"
	.string "SAFARI ZONE$"

Route121_EventScript_Byron::
# 198 "data/maps/Route121/scripts.pory"
	lockall
# 199 "data/maps/Route121/scripts.pory"
	applymovement LOCALID_BYRON, Common_Movement_FacePlayer
# 200 "data/maps/Route121/scripts.pory"
	goto_if_set FLAG_RECEIVED_MELTAN, Route121_EventScript_ByronDefeated
# 201 "data/maps/Route121/scripts.pory"
	goto_if_set FLAG_DECLINED_BYRON_BATTLE, Route121_EventScript_ByronRequestBattleAgain
# 202 "data/maps/Route121/scripts.pory"
	msgbox Byron_Greeting, MSGBOX_YESNO
# 203 "data/maps/Route121/scripts.pory"
	goto Route121_EventScript_BattleByronPrompt
	end


Route121_EventScript_ByronRequestBattleAgain::
# 208 "data/maps/Route121/scripts.pory"
	msgbox Ready_Yet, MSGBOX_YESNO
# 209 "data/maps/Route121/scripts.pory"
	goto Route121_EventScript_BattleByronPrompt
	end


Route121_EventScript_BattleByronPrompt::
# 214 "data/maps/Route121/scripts.pory"
	call_if_eq VAR_RESULT, YES, Route121_EventScript_BattleByron
# 215 "data/maps/Route121/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route121_EventScript_DeclineByronBattle
# 216 "data/maps/Route121/scripts.pory"
	closemessage
	end


Route121_EventScript_DeclineByronBattle::
# 221 "data/maps/Route121/scripts.pory"
	setflag FLAG_DECLINED_BYRON_BATTLE
# 222 "data/maps/Route121/scripts.pory"
	msgbox Come_Back_When_Ready, MSGBOX_DEFAULT
# 223 "data/maps/Route121/scripts.pory"
	release
	end


Route121_EventScript_BattleByron::
# 228 "data/maps/Route121/scripts.pory"
	msgbox Route121_EventScript_BattleByron_Text_0, MSGBOX_DEFAULT
# 229 "data/maps/Route121/scripts.pory"
	trainerbattle_no_intro TRAINER_BYRON, Byron_Outro
# 230 "data/maps/Route121/scripts.pory"
	giveitem ITEM_TM_STEALTH_ROCK
# 231 "data/maps/Route121/scripts.pory"
	giveitem ITEM_TM_HIGH_HORSEPOWER
# 232 "data/maps/Route121/scripts.pory"
	giveitem ITEM_COPPERAJITE
# 233 "data/maps/Route121/scripts.pory"
	giveitem ITEM_ROCKY_HELMET
# 234 "data/maps/Route121/scripts.pory"
	giveitem ITEM_LEFTOVERS
# 235 "data/maps/Route121/scripts.pory"
	goto Route121_EventScript_ByronGiveMeltan
	return


Route121_EventScript_ByronDefeated::
# 241 "data/maps/Route121/scripts.pory"
	msgbox PostBattle_Byron, MSGBOX_DEFAULT
# 242 "data/maps/Route121/scripts.pory"
	releaseall
	end


Route121_EventScript_ByronGiveMeltan::
# 247 "data/maps/Route121/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_MELTAN
# 248 "data/maps/Route121/scripts.pory"
	givemonrandom SPECIES_MELTAN, 30
# 249 "data/maps/Route121/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, Route121_EventScript_ReceiveMeltanParty
# 250 "data/maps/Route121/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, Route121_EventScript_ReceiveMeltanPC
# 251 "data/maps/Route121/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 252 "data/maps/Route121/scripts.pory"
	release
	end


Route121_EventScript_ReceiveMeltanParty::
# 257 "data/maps/Route121/scripts.pory"
	call Route121_EventScript_ReceivedMeltanFanfare
# 258 "data/maps/Route121/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 259 "data/maps/Route121/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route121_EventScript_ExplainMeltan
# 260 "data/maps/Route121/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 261 "data/maps/Route121/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 262 "data/maps/Route121/scripts.pory"
	goto Route121_EventScript_ExplainMeltan
	end


Route121_EventScript_ReceiveMeltanPC::
# 268 "data/maps/Route121/scripts.pory"
	call Route121_EventScript_ReceivedMeltanFanfare
# 269 "data/maps/Route121/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 270 "data/maps/Route121/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route121_EventScript_SendMeltanToPC
# 271 "data/maps/Route121/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 272 "data/maps/Route121/scripts.pory"
	goto Route121_EventScript_SendMeltanToPC
	end


Route121_EventScript_SendMeltanToPC::
# 278 "data/maps/Route121/scripts.pory"
	call Common_EventScript_TransferredToPC
# 279 "data/maps/Route121/scripts.pory"
	goto Route121_EventScript_ExplainMeltan
	end


Route121_EventScript_ReceivedMeltanFanfare::
# 285 "data/maps/Route121/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 286 "data/maps/Route121/scripts.pory"
	message Route121_Text_PlayerReceivedMeltan
# 287 "data/maps/Route121/scripts.pory"
	waitmessage
# 288 "data/maps/Route121/scripts.pory"
	waitfanfare
# 289 "data/maps/Route121/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_MELTAN
	return


Route121_EventScript_ExplainMeltan::
# 295 "data/maps/Route121/scripts.pory"
	msgbox Byron_ExplainMeltan, MSGBOX_DEFAULT
# 296 "data/maps/Route121/scripts.pory"
	setflag FLAG_RECEIVED_MELTAN
# 297 "data/maps/Route121/scripts.pory"
	release
	end


Route121_Trigger_BlockPath::
# 344 "data/maps/Route121/scripts.pory"
	lockall
# 345 "data/maps/Route121/scripts.pory"
	msgbox GoBeatWinona
# 346 "data/maps/Route121/scripts.pory"
	waitmessage
# 347 "data/maps/Route121/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StopPlayerLeft
# 348 "data/maps/Route121/scripts.pory"
	waitmovement 0
# 349 "data/maps/Route121/scripts.pory"
	releaseall
	end


# 358 "data/maps/Route121/scripts.pory"
StopPlayerLeft:
# 359 "data/maps/Route121/scripts.pory"
	walk_left
	step_end

Route121_EventScript_BattleByron_Text_0:
# 228 "data/maps/Route121/scripts.pory"
	.string "Excellent!$"

Route121_Text_PlayerReceivedMeltan::
# 301 "data/maps/Route121/scripts.pory"
	.string "{PLAYER} received Meltan!$"

Byron_ExplainMeltan::
# 305 "data/maps/Route121/scripts.pory"
	.string "Meltan and Melmetal are 2 of my\n"
	.string "favorite Steel-types, I hope you treat\l"
	.string "that Meltan kindly and raise it well.$"

Byron_Greeting::
# 311 "data/maps/Route121/scripts.pory"
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

Byron_Outro::
# 330 "data/maps/Route121/scripts.pory"
	.string "I see how you were able to defeat my\n"
	.string "son. I'm confident I'll be leaving this\l"
	.string "Pokémon in good hands.$"

PostBattle_Byron::
# 337 "data/maps/Route121/scripts.pory"
	.string "I'm off to find Roark, I'm sure he's\n"
	.string "going to explore the underground of\l"
	.string "this region.$"

GoBeatWinona::
# 353 "data/maps/Route121/scripts.pory"
	.string "You should defeat Winona before\n"
	.string "moving on to here.$"
