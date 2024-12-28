# 1 "data/maps/EverGrandeCity/scripts.pory"

# 2 "data/maps/EverGrandeCity/scripts.pory"
.set LOCALID_VOLKNER, 3
# 3 "data/maps/EverGrandeCity/scripts.pory"

# 4 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_MapScripts::
# 5 "data/maps/EverGrandeCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_OnTransition
# 6 "data/maps/EverGrandeCity/scripts.pory"
	.byte 0
# 7 "data/maps/EverGrandeCity/scripts.pory"

# 8 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_OnTransition:
# 9 "data/maps/EverGrandeCity/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
# 10 "data/maps/EverGrandeCity/scripts.pory"
	call_if_unset FLAG_BEAT_BOTH_RIVALS, Common_EventScript_SetupRivalGfxId
# 11 "data/maps/EverGrandeCity/scripts.pory"
	end
# 12 "data/maps/EverGrandeCity/scripts.pory"

# 13 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_VictoryRoadSign::
# 14 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_EnteringVictoryRoad, MSGBOX_SIGN
# 15 "data/maps/EverGrandeCity/scripts.pory"
	end
# 16 "data/maps/EverGrandeCity/scripts.pory"

# 17 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_CitySign::
# 18 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_CitySign, MSGBOX_SIGN
# 19 "data/maps/EverGrandeCity/scripts.pory"
	end
# 20 "data/maps/EverGrandeCity/scripts.pory"

# 21 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_PokemonLeagueSign::
# 22 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_EnteringPokemonLeague, MSGBOX_SIGN
# 23 "data/maps/EverGrandeCity/scripts.pory"
	end
# 24 "data/maps/EverGrandeCity/scripts.pory"

# 25 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_Rival::
# 26 "data/maps/EverGrandeCity/scripts.pory"
	lock
# 27 "data/maps/EverGrandeCity/scripts.pory"
	faceplayer
# 28 "data/maps/EverGrandeCity/scripts.pory"
	checkplayergender
# 29 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, EverGrandeCity_EventScript_May
# 30 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, EverGrandeCity_EventScript_Brendan
# 31 "data/maps/EverGrandeCity/scripts.pory"
	end
# 32 "data/maps/EverGrandeCity/scripts.pory"

# 33 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_May::
# 34 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_set FLAG_EVERGRANDE_CITY_BEAT_RIVAL, EverGrandeCity_EventScript_BeatRivalNotDawn
# 35 "data/maps/EverGrandeCity/scripts.pory"
	call_if_set FLAG_DECLINED_RIVAL_BATTLE_EVERGRANDE, EverGrandeCity_EventScript_MayAskToBattleAgain
# 36 "data/maps/EverGrandeCity/scripts.pory"
	call_if_unset FLAG_DECLINED_RIVAL_BATTLE_EVERGRANDE, EverGrandeCity_EventScript_MayAskToBattle
# 37 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, EverGrandeCity_EventScript_DeclineMayBattle
# 38 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_MayWontBeBeaten, MSGBOX_DEFAULT
# 39 "data/maps/EverGrandeCity/scripts.pory"
	switch VAR_STARTER_MON
# 40 "data/maps/EverGrandeCity/scripts.pory"
	case 0, EverGrandeCity_EventScript_BattleMayTreecko
# 41 "data/maps/EverGrandeCity/scripts.pory"
	case 1, EverGrandeCity_EventScript_BattleMayTorchic
# 42 "data/maps/EverGrandeCity/scripts.pory"
	case 2, EverGrandeCity_EventScript_BattleMayMudkip
# 43 "data/maps/EverGrandeCity/scripts.pory"
	end
# 44 "data/maps/EverGrandeCity/scripts.pory"

# 45 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_MayAskToBattleAgain::
# 46 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_MayBattleMe, MSGBOX_YESNO
# 47 "data/maps/EverGrandeCity/scripts.pory"
	return
# 48 "data/maps/EverGrandeCity/scripts.pory"

# 49 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_MayAskToBattle::
# 50 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_MayShoppingLetsBattle, MSGBOX_YESNO
# 51 "data/maps/EverGrandeCity/scripts.pory"
	return
# 52 "data/maps/EverGrandeCity/scripts.pory"

# 53 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_DeclineMayBattle::
# 54 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_DECLINED_RIVAL_BATTLE_EVERGRANDE
# 55 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_MayNotRaisingPokemon, MSGBOX_DEFAULT
# 56 "data/maps/EverGrandeCity/scripts.pory"
	release
# 57 "data/maps/EverGrandeCity/scripts.pory"
	end
# 58 "data/maps/EverGrandeCity/scripts.pory"

# 59 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_BattleMayTreecko::
# 60 "data/maps/EverGrandeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_EVERGRANDE_TREECKO, EverGrandeCity_Text_MayDefeat
# 61 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_DefeatedMay
# 62 "data/maps/EverGrandeCity/scripts.pory"
	end
# 63 "data/maps/EverGrandeCity/scripts.pory"

# 64 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_BattleMayTorchic::
# 65 "data/maps/EverGrandeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_EVERGRANDE_TORCHIC, EverGrandeCity_Text_MayDefeat
# 66 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_DefeatedMay
# 67 "data/maps/EverGrandeCity/scripts.pory"
	end
# 68 "data/maps/EverGrandeCity/scripts.pory"

# 69 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_BattleMayMudkip::
# 70 "data/maps/EverGrandeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_EVERGRANDE_MUDKIP, EverGrandeCity_Text_MayDefeat
# 71 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_DefeatedMay
# 72 "data/maps/EverGrandeCity/scripts.pory"
	end
# 73 "data/maps/EverGrandeCity/scripts.pory"

# 74 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_DefeatedMay::
# 75 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_EVERGRANDE_CITY_BEAT_RIVAL
# 76 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_set FLAG_BEAT_DAWN_EVERGRANDE, EverGrandeCity_EventScript_RivalsFlyAway
# 77 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_CanYouBeatDawn, MSGBOX_DEFAULT
# 78 "data/maps/EverGrandeCity/scripts.pory"
	releaseall
# 79 "data/maps/EverGrandeCity/scripts.pory"
	end
# 80 "data/maps/EverGrandeCity/scripts.pory"

# 81 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_Brendan::
# 82 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_set FLAG_EVERGRANDE_CITY_BEAT_RIVAL, EverGrandeCity_EventScript_BeatRivalNotDawn
# 83 "data/maps/EverGrandeCity/scripts.pory"
	call_if_set FLAG_DECLINED_RIVAL_BATTLE_EVERGRANDE, EverGrandeCity_EventScript_BrendanAskToBattleAgain
# 84 "data/maps/EverGrandeCity/scripts.pory"
	call_if_unset FLAG_DECLINED_RIVAL_BATTLE_EVERGRANDE, EverGrandeCity_EventScript_BrendanAskToBattle
# 85 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, EverGrandeCity_EventScript_DeclineBrendanBattle
# 86 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_BrendanWontBeBeaten, MSGBOX_DEFAULT
# 87 "data/maps/EverGrandeCity/scripts.pory"
	switch VAR_STARTER_MON
# 88 "data/maps/EverGrandeCity/scripts.pory"
	case 0, EverGrandeCity_EventScript_BattleBrendanTreecko
# 89 "data/maps/EverGrandeCity/scripts.pory"
	case 1, EverGrandeCity_EventScript_BattleBrendanTorchic
# 90 "data/maps/EverGrandeCity/scripts.pory"
	case 2, EverGrandeCity_EventScript_BattleBrendanMudkip
# 91 "data/maps/EverGrandeCity/scripts.pory"
	end
# 92 "data/maps/EverGrandeCity/scripts.pory"

# 93 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_BrendanAskToBattleAgain::
# 94 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_BrendanBattleMe, MSGBOX_YESNO
# 95 "data/maps/EverGrandeCity/scripts.pory"
	return
# 96 "data/maps/EverGrandeCity/scripts.pory"

# 97 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_BrendanAskToBattle::
# 98 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_BrendanShoppingLetsBattle, MSGBOX_YESNO
# 99 "data/maps/EverGrandeCity/scripts.pory"
	return
# 100 "data/maps/EverGrandeCity/scripts.pory"

# 101 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_DeclineBrendanBattle::
# 102 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_DECLINED_RIVAL_BATTLE_EVERGRANDE
# 103 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_BrendanNoConfidence, MSGBOX_DEFAULT
# 104 "data/maps/EverGrandeCity/scripts.pory"
	release
# 105 "data/maps/EverGrandeCity/scripts.pory"
	end
# 106 "data/maps/EverGrandeCity/scripts.pory"

# 107 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_BattleBrendanTreecko::
# 108 "data/maps/EverGrandeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_EVERGRANDE_TREECKO, EverGrandeCity_Text_BrendanDefeat
# 109 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_DefeatedBrendan
# 110 "data/maps/EverGrandeCity/scripts.pory"
	end
# 111 "data/maps/EverGrandeCity/scripts.pory"

# 112 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_BattleBrendanTorchic::
# 113 "data/maps/EverGrandeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_EVERGRANDE_TORCHIC, EverGrandeCity_Text_BrendanDefeat
# 114 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_DefeatedBrendan
# 115 "data/maps/EverGrandeCity/scripts.pory"
	end
# 116 "data/maps/EverGrandeCity/scripts.pory"

# 117 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_BattleBrendanMudkip::
# 118 "data/maps/EverGrandeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_EVERGRANDE_MUDKIP, EverGrandeCity_Text_BrendanDefeat
# 119 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_DefeatedBrendan
# 120 "data/maps/EverGrandeCity/scripts.pory"
	end
# 121 "data/maps/EverGrandeCity/scripts.pory"

# 122 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_DefeatedBrendan::
# 123 "data/maps/EverGrandeCity/scripts.pory"
    setflag FLAG_EVERGRANDE_CITY_BEAT_RIVAL
# 124 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_set FLAG_BEAT_DAWN_EVERGRANDE, EverGrandeCity_EventScript_RivalsFlyAway
# 125 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_CanYouBeatDawn, MSGBOX_DEFAULT
# 126 "data/maps/EverGrandeCity/scripts.pory"
	releaseall
# 127 "data/maps/EverGrandeCity/scripts.pory"
	end
# 128 "data/maps/EverGrandeCity/scripts.pory"

# 129 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_BeatRivalNotDawn::
# 130 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_NotMovingUntilDawn, MSGBOX_DEFAULT
# 131 "data/maps/EverGrandeCity/scripts.pory"
	releaseall
# 132 "data/maps/EverGrandeCity/scripts.pory"
	end
# 133 "data/maps/EverGrandeCity/scripts.pory"

# 134 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_RivalFlyAway::
# 135 "data/maps/EverGrandeCity/scripts.pory"
	closemessage
# 136 "data/maps/EverGrandeCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
# 137 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 0
# 138 "data/maps/EverGrandeCity/scripts.pory"
	delay 50
# 139 "data/maps/EverGrandeCity/scripts.pory"
	setfieldeffectargument 0, 1
# 140 "data/maps/EverGrandeCity/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 141 "data/maps/EverGrandeCity/scripts.pory"
	delay 15
# 142 "data/maps/EverGrandeCity/scripts.pory"
	removeobject VAR_LAST_TALKED
# 143 "data/maps/EverGrandeCity/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 144 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_MET_RIVAL_LILYCOVE
# 145 "data/maps/EverGrandeCity/scripts.pory"
	release
# 146 "data/maps/EverGrandeCity/scripts.pory"
	end
# 147 "data/maps/EverGrandeCity/scripts.pory"

# 148 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_SetVisitedEverGrande::
# 149 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_VISITED_EVER_GRANDE_CITY
# 150 "data/maps/EverGrandeCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 151 "data/maps/EverGrandeCity/scripts.pory"
	end
# 152 "data/maps/EverGrandeCity/scripts.pory"

# 153 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_MomRoamerCall::
# 154 "data/maps/EverGrandeCity/scripts.pory"
	lockall
# 155 "data/maps/EverGrandeCity/scripts.pory"
	pokenavcall MatchCall_Text_MomRoamers
# 156 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 157 "data/maps/EverGrandeCity/scripts.pory"
	closemessage
# 158 "data/maps/EverGrandeCity/scripts.pory"
	special InitRoamer
# 159 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_ROAMER_MATCH_CALL
# 160 "data/maps/EverGrandeCity/scripts.pory"
	releaseall
# 161 "data/maps/EverGrandeCity/scripts.pory"
	end
# 162 "data/maps/EverGrandeCity/scripts.pory"

# 163 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_MayShoppingLetsBattle:
# 164 "data/maps/EverGrandeCity/scripts.pory"
	.string "{PLAYER}! Dawn told me about\n"
# 165 "data/maps/EverGrandeCity/scripts.pory"
	.string "everything that happened with Team\l"
# 166 "data/maps/EverGrandeCity/scripts.pory"
	.string "Aqua, Team Magma, and Drake!\p"
# 167 "data/maps/EverGrandeCity/scripts.pory"
	.string "I can't believe what he did, but I'm\n"
# 168 "data/maps/EverGrandeCity/scripts.pory"
	.string "more impressed with how you were able\l"
# 169 "data/maps/EverGrandeCity/scripts.pory"
	.string "to stop all of them by yourself!\p"
# 170 "data/maps/EverGrandeCity/scripts.pory"
	.string "It feels silly to even say this, but we\n"
# 171 "data/maps/EverGrandeCity/scripts.pory"
	.string "wanted to give you one final test\l"
# 172 "data/maps/EverGrandeCity/scripts.pory"
	.string "before you head into Victory Road!\l"
# 173 "data/maps/EverGrandeCity/scripts.pory"
	.string "We are rivals after all!\p"
# 174 "data/maps/EverGrandeCity/scripts.pory"
	.string "Don't worry, we won't make you fight us\n"
# 175 "data/maps/EverGrandeCity/scripts.pory"
	.string "both at once. But you will have to beat\l"
# 176 "data/maps/EverGrandeCity/scripts.pory"
	.string "us both to get through! So…\p"
# 177 "data/maps/EverGrandeCity/scripts.pory"
	.string "What do you say to one last battle?$"
# 178 "data/maps/EverGrandeCity/scripts.pory"

# 179 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_MayNotRaisingPokemon:
# 180 "data/maps/EverGrandeCity/scripts.pory"
	.string "Oh, alright then. But just so you know,\n"
# 181 "data/maps/EverGrandeCity/scripts.pory"
	.string "I'm not going anywhere until you beat\l"
# 182 "data/maps/EverGrandeCity/scripts.pory"
	.string "Dawn and me!$"
# 183 "data/maps/EverGrandeCity/scripts.pory"

# 184 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_MayBattleMe:
# 185 "data/maps/EverGrandeCity/scripts.pory"
	.string "Come on, battle with me one more time!\n"
# 186 "data/maps/EverGrandeCity/scripts.pory"
	.string "What do you say?$"
# 187 "data/maps/EverGrandeCity/scripts.pory"

# 188 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_MayWontBeBeaten:
# 189 "data/maps/EverGrandeCity/scripts.pory"
	.string "I'll show you how strong I've become!$"
# 190 "data/maps/EverGrandeCity/scripts.pory"

# 191 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_MayDefeat:
# 192 "data/maps/EverGrandeCity/scripts.pory"
	.string "… … … … … … … …\p"
# 193 "data/maps/EverGrandeCity/scripts.pory"
	.string "I remember the battle I had with you,\n"
# 194 "data/maps/EverGrandeCity/scripts.pory"
	.string "{PLAYER}{KUN}, on Route 103.\p"
# 195 "data/maps/EverGrandeCity/scripts.pory"
	.string "That battle helped you become this\n"
# 196 "data/maps/EverGrandeCity/scripts.pory"
	.string "strong, didn't it?$"
# 197 "data/maps/EverGrandeCity/scripts.pory"

# 198 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_MayGoingBackToLittleroot:
# 199 "data/maps/EverGrandeCity/scripts.pory"
	.string "Anyway, I'm thinking of going back to\n"
# 200 "data/maps/EverGrandeCity/scripts.pory"
	.string "Littleroot soon.\p"
# 201 "data/maps/EverGrandeCity/scripts.pory"
	.string "I've caught a decent group of Pokémon,\n"
# 202 "data/maps/EverGrandeCity/scripts.pory"
	.string "and my Pokédex is coming along, so\l"
# 203 "data/maps/EverGrandeCity/scripts.pory"
	.string "I'm going home to show my dad.\p"
# 204 "data/maps/EverGrandeCity/scripts.pory"
	.string "Like Dawn said, you've got this,\n"
# 205 "data/maps/EverGrandeCity/scripts.pory"
	.string "{PLAYER}. I know you're strong enough\l"
# 206 "data/maps/EverGrandeCity/scripts.pory"
	.string "to become the Champion!\p"
# 207 "data/maps/EverGrandeCity/scripts.pory"
	.string "Oh, and one more thing. When we first\n"
# 208 "data/maps/EverGrandeCity/scripts.pory"
	.string "got here, we saw Wally walking into\l"
# 209 "data/maps/EverGrandeCity/scripts.pory"
	.string "Victory Road.\p"
# 210 "data/maps/EverGrandeCity/scripts.pory"
	.string "He looked really determined, he was\n"
# 211 "data/maps/EverGrandeCity/scripts.pory"
	.string "almost like a different person from\l"
# 212 "data/maps/EverGrandeCity/scripts.pory"
	.string "that timid kid you beat in Mauville…\p"
# 213 "data/maps/EverGrandeCity/scripts.pory"
	.string "Just thought I'd give you a heads up!\n"
# 214 "data/maps/EverGrandeCity/scripts.pory"
	.string "Anyway, take care, {PLAYER}, I'm sure\l"
# 215 "data/maps/EverGrandeCity/scripts.pory"
	.string "I'll see you again soon!$"
# 216 "data/maps/EverGrandeCity/scripts.pory"

# 217 "data/maps/EverGrandeCity/scripts.pory"

# 218 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_RivalTakeKubfu:
# 219 "data/maps/EverGrandeCity/scripts.pory"
	.string "Here, {PLAYER}, I have one final gift\n"
# 220 "data/maps/EverGrandeCity/scripts.pory"
	.string "as well before I head out.$"
# 221 "data/maps/EverGrandeCity/scripts.pory"

# 222 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_BrendanShoppingLetsBattle:
# 223 "data/maps/EverGrandeCity/scripts.pory"
	.string "{PLAYER}! Dawn told me about\n"
# 224 "data/maps/EverGrandeCity/scripts.pory"
	.string "everything that happened with Team\l"
# 225 "data/maps/EverGrandeCity/scripts.pory"
	.string "Aqua, Team Magma, and Drake!\p"
# 226 "data/maps/EverGrandeCity/scripts.pory"
	.string "I can't believe what he did, but I'm\n"
# 227 "data/maps/EverGrandeCity/scripts.pory"
	.string "more impressed with how you were able\l"
# 228 "data/maps/EverGrandeCity/scripts.pory"
	.string "to stop all of them by yourself!\p"
# 229 "data/maps/EverGrandeCity/scripts.pory"
	.string "It feels silly to even say this, but we\n"
# 230 "data/maps/EverGrandeCity/scripts.pory"
	.string "wanted to give you one final test\l"
# 231 "data/maps/EverGrandeCity/scripts.pory"
	.string "before you head into Victory Road!\l"
# 232 "data/maps/EverGrandeCity/scripts.pory"
	.string "We are rivals after all!\p"
# 233 "data/maps/EverGrandeCity/scripts.pory"
	.string "Don't worry, we won't make you fight us\n"
# 234 "data/maps/EverGrandeCity/scripts.pory"
	.string "both at once. But you will have to beat\l"
# 235 "data/maps/EverGrandeCity/scripts.pory"
	.string "us both to get through! So…\p"
# 236 "data/maps/EverGrandeCity/scripts.pory"
	.string "What do you say to one last battle?$"
# 237 "data/maps/EverGrandeCity/scripts.pory"

# 238 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_BrendanNoConfidence:
# 239 "data/maps/EverGrandeCity/scripts.pory"
	.string "If you say so, but I'm not going\n"
# 240 "data/maps/EverGrandeCity/scripts.pory"
	.string "anywhere until we battle!$"
# 241 "data/maps/EverGrandeCity/scripts.pory"

# 242 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_BrendanBattleMe:
# 243 "data/maps/EverGrandeCity/scripts.pory"
	.string "Come on, {PLAYER}. I'm really going to\n"
# 244 "data/maps/EverGrandeCity/scripts.pory"
	.string "beat you this time!\l"
# 245 "data/maps/EverGrandeCity/scripts.pory"
	.string "What do you say?$"
# 246 "data/maps/EverGrandeCity/scripts.pory"

# 247 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_BrendanWontBeBeaten:
# 248 "data/maps/EverGrandeCity/scripts.pory"
	.string "I'll show you how strong I've become!$"
# 249 "data/maps/EverGrandeCity/scripts.pory"

# 250 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_BrendanDefeat:
# 251 "data/maps/EverGrandeCity/scripts.pory"
	.string "… … … … … … … …\p"
# 252 "data/maps/EverGrandeCity/scripts.pory"
	.string "I remember the battle I had with you,\n"
# 253 "data/maps/EverGrandeCity/scripts.pory"
	.string "{PLAYER}{KUN}, on Route 103.\p"
# 254 "data/maps/EverGrandeCity/scripts.pory"
	.string "That battle helped you become this\n"
# 255 "data/maps/EverGrandeCity/scripts.pory"
	.string "strong, didn't it?$"
# 256 "data/maps/EverGrandeCity/scripts.pory"

# 257 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_BrendanGoingBackToLittleroot:
# 258 "data/maps/EverGrandeCity/scripts.pory"
	.string "Anyway, I…\n"
# 259 "data/maps/EverGrandeCity/scripts.pory"
	.string "I plan on going home to Littleroot.\p"
# 260 "data/maps/EverGrandeCity/scripts.pory"
	.string "You know I'm helping out my dad on his\n"
# 261 "data/maps/EverGrandeCity/scripts.pory"
	.string "Pokédex. It's coming together pretty\l"
# 262 "data/maps/EverGrandeCity/scripts.pory"
	.string "decently, so I should go show him.\p"
# 263 "data/maps/EverGrandeCity/scripts.pory"
	.string "Like Dawn said, you've got this,\n"
# 264 "data/maps/EverGrandeCity/scripts.pory"
	.string "{PLAYER}. I know you're strong enough\l"
# 265 "data/maps/EverGrandeCity/scripts.pory"
	.string "to become the Champion!\p"
# 266 "data/maps/EverGrandeCity/scripts.pory"
	.string "Oh, and one more thing. When we first\n"
# 267 "data/maps/EverGrandeCity/scripts.pory"
	.string "got here, we saw Wally walking into\l"
# 268 "data/maps/EverGrandeCity/scripts.pory"
	.string "Victory Road.\p"
# 269 "data/maps/EverGrandeCity/scripts.pory"
	.string "He looked really determined, he was\n"
# 270 "data/maps/EverGrandeCity/scripts.pory"
	.string "almost like a different person from\l"
# 271 "data/maps/EverGrandeCity/scripts.pory"
	.string "that timid kid you beat in Mauville…\p"
# 272 "data/maps/EverGrandeCity/scripts.pory"
	.string "Just thought I'd give you a heads up!\n"
# 273 "data/maps/EverGrandeCity/scripts.pory"
	.string "Anyway, take care, {PLAYER}, I'm sure\l"
# 274 "data/maps/EverGrandeCity/scripts.pory"
	.string "I'll see you again soon!$"
# 275 "data/maps/EverGrandeCity/scripts.pory"

# 276 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_EnteringVictoryRoad:
# 277 "data/maps/EverGrandeCity/scripts.pory"
	.string "Entering Victory Road$"
# 278 "data/maps/EverGrandeCity/scripts.pory"

# 279 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_EnteringPokemonLeague:
# 280 "data/maps/EverGrandeCity/scripts.pory"
	.string "Entering Pokémon League\n"
# 281 "data/maps/EverGrandeCity/scripts.pory"
	.string "Center Gate$"
# 282 "data/maps/EverGrandeCity/scripts.pory"

# 283 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_CitySign:
# 284 "data/maps/EverGrandeCity/scripts.pory"
	.string "Ever Grande City\p"
# 285 "data/maps/EverGrandeCity/scripts.pory"
	.string "“The paradise of flowers, the sea,\n"
# 286 "data/maps/EverGrandeCity/scripts.pory"
	.string "and Pokémon.”$"

EverGrandeCity_EventScript_Dawn::
# 291 "data/maps/EverGrandeCity/scripts.pory"
	lockall
# 292 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 2, Common_Movement_FacePlayer
# 293 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_set FLAG_BEAT_DAWN_EVERGRANDE, EverGrandeCity_EventScript_BeatDawnNotRival
# 294 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_set FLAG_DECLINED_DAWN_EVERGRANDE, EverGrandeCity_EventScript_DawnRequestBattleAgain
# 295 "data/maps/EverGrandeCity/scripts.pory"
	msgbox Dawn_GreetingEvergrande, MSGBOX_YESNO
# 296 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_BattleDawnPrompt
	end


EverGrandeCity_EventScript_DawnRequestBattleAgain::
# 301 "data/maps/EverGrandeCity/scripts.pory"
	msgbox ReadyYetFinal, MSGBOX_YESNO
# 302 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_BattleDawnPrompt
	end


EverGrandeCity_EventScript_BattleDawnPrompt::
# 307 "data/maps/EverGrandeCity/scripts.pory"
	call_if_eq VAR_RESULT, YES, EverGrandeCity_EventScript_BattleDawn
# 308 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, EverGrandeCity_EventScript_DeclineDawnBattle
# 309 "data/maps/EverGrandeCity/scripts.pory"
	closemessage
	end


EverGrandeCity_EventScript_DeclineDawnBattle::
# 314 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_DECLINED_DAWN_EVERGRANDE
# 315 "data/maps/EverGrandeCity/scripts.pory"
	msgbox ComeBackWhenReadyFinal, MSGBOX_DEFAULT
# 316 "data/maps/EverGrandeCity/scripts.pory"
	release
	end


EverGrandeCity_EventScript_BattleDawn::
# 321 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_EventScript_BattleDawn_Text_0, MSGBOX_DEFAULT
# 322 "data/maps/EverGrandeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_DAWN_EVERGRANDE, Dawn_OutroEvergrande
# 323 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_DawnDefeated
	return


EverGrandeCity_EventScript_DawnDefeated::
# 329 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_BEAT_DAWN_EVERGRANDE
# 330 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_set FLAG_EVERGRANDE_CITY_BEAT_RIVAL, EverGrandeCity_EventScript_RivalsFlyAway
# 331 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_CanYouBeatRival, MSGBOX_DEFAULT
# 332 "data/maps/EverGrandeCity/scripts.pory"
	releaseall
	end


EverGrandeCity_EventScript_BeatDawnNotRival::
# 337 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_NotMovingUntilRival, MSGBOX_DEFAULT
# 338 "data/maps/EverGrandeCity/scripts.pory"
	releaseall
	end


EverGrandeCity_EventScript_RivalsFlyAway::
# 344 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterDown
# 345 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 0
# 346 "data/maps/EverGrandeCity/scripts.pory"
	msgbox DawnFarewell, MSGBOX_DEFAULT
# 347 "data/maps/EverGrandeCity/scripts.pory"
	giveitem ITEM_TM_DRACO_METEOR
# 348 "data/maps/EverGrandeCity/scripts.pory"
	msgbox DawnFarewell2, MSGBOX_DEFAULT
# 349 "data/maps/EverGrandeCity/scripts.pory"
	closemessage
# 350 "data/maps/EverGrandeCity/scripts.pory"
	delay 30
# 351 "data/maps/EverGrandeCity/scripts.pory"
	setfieldeffectargument 0, 1
# 352 "data/maps/EverGrandeCity/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 353 "data/maps/EverGrandeCity/scripts.pory"
	delay 15
# 354 "data/maps/EverGrandeCity/scripts.pory"
	removeobject 2
# 355 "data/maps/EverGrandeCity/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 356 "data/maps/EverGrandeCity/scripts.pory"
	delay 15
# 357 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_RivalFarewellStart
# 358 "data/maps/EverGrandeCity/scripts.pory"
	releaseall
	end


EverGrandeCity_EventScript_RivalFarewellStart::
# 363 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterDown
# 364 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 0
# 365 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_RivalTakeKubfu, MSGBOX_DEFAULT
# 366 "data/maps/EverGrandeCity/scripts.pory"
	closemessage
# 367 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_RivalGiveKubfu
# 368 "data/maps/EverGrandeCity/scripts.pory"
	releaseall
	end


EverGrandeCity_EventScript_MayFarewell::
# 373 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_MayGoingBackToLittleroot, MSGBOX_DEFAULT
# 374 "data/maps/EverGrandeCity/scripts.pory"
	closemessage
# 375 "data/maps/EverGrandeCity/scripts.pory"
	delay 30
# 376 "data/maps/EverGrandeCity/scripts.pory"
	setfieldeffectargument 0, 1
# 377 "data/maps/EverGrandeCity/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 378 "data/maps/EverGrandeCity/scripts.pory"
	delay 15
# 379 "data/maps/EverGrandeCity/scripts.pory"
	removeobject 1
# 380 "data/maps/EverGrandeCity/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 381 "data/maps/EverGrandeCity/scripts.pory"
	delay 15
# 382 "data/maps/EverGrandeCity/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 383 "data/maps/EverGrandeCity/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_PICHU_DOLL
# 384 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_MET_RIVAL_LILYCOVE
# 385 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_BEAT_BOTH_RIVALS
# 386 "data/maps/EverGrandeCity/scripts.pory"
	releaseall
	end


EverGrandeCity_EventScript_BrendanFarewell::
# 391 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_BrendanGoingBackToLittleroot, MSGBOX_DEFAULT
# 392 "data/maps/EverGrandeCity/scripts.pory"
	closemessage
# 393 "data/maps/EverGrandeCity/scripts.pory"
	delay 30
# 394 "data/maps/EverGrandeCity/scripts.pory"
	setfieldeffectargument 0, 1
# 395 "data/maps/EverGrandeCity/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 396 "data/maps/EverGrandeCity/scripts.pory"
	delay 15
# 397 "data/maps/EverGrandeCity/scripts.pory"
	removeobject 1
# 398 "data/maps/EverGrandeCity/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 399 "data/maps/EverGrandeCity/scripts.pory"
	delay 15
# 400 "data/maps/EverGrandeCity/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 401 "data/maps/EverGrandeCity/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_SWABLU_DOLL
# 402 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_MET_RIVAL_LILYCOVE
# 403 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_BEAT_BOTH_RIVALS
# 404 "data/maps/EverGrandeCity/scripts.pory"
	releaseall
	end


EverGrandeCity_EventScript_RivalGiveKubfu::
# 409 "data/maps/EverGrandeCity/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_KUBFU
# 410 "data/maps/EverGrandeCity/scripts.pory"
	givemonrandom SPECIES_KUBFU, 40
# 411 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, EverGrandeCity_EventScript_ReceiveKubfuParty
# 412 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, EverGrandeCity_EventScript_ReceiveKubfuPC
# 413 "data/maps/EverGrandeCity/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 414 "data/maps/EverGrandeCity/scripts.pory"
	release
	end


EverGrandeCity_EventScript_ReceiveKubfuParty::
# 419 "data/maps/EverGrandeCity/scripts.pory"
	call EverGrandeCity_EventScript_ReceivedKubfuFanfare
# 420 "data/maps/EverGrandeCity/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 421 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, EverGrandeCity_EventScript_ExplainKubfu
# 422 "data/maps/EverGrandeCity/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 423 "data/maps/EverGrandeCity/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 424 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_ExplainKubfu
	end


EverGrandeCity_EventScript_ReceiveKubfuPC::
# 430 "data/maps/EverGrandeCity/scripts.pory"
	call EverGrandeCity_EventScript_ReceivedKubfuFanfare
# 431 "data/maps/EverGrandeCity/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 432 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, EverGrandeCity_EventScript_SendKubfuToPC
# 433 "data/maps/EverGrandeCity/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 434 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_SendKubfuToPC
	end


EverGrandeCity_EventScript_SendKubfuToPC::
# 440 "data/maps/EverGrandeCity/scripts.pory"
	call Common_EventScript_TransferredToPC
# 441 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_ExplainKubfu
	end


EverGrandeCity_EventScript_ReceivedKubfuFanfare::
# 447 "data/maps/EverGrandeCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 448 "data/maps/EverGrandeCity/scripts.pory"
	message EverGrandeCity_Text_PlayerReceivedKubfu
# 449 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 450 "data/maps/EverGrandeCity/scripts.pory"
	waitfanfare
# 451 "data/maps/EverGrandeCity/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_KUBFU
	return


EverGrandeCity_EventScript_ExplainKubfu::
# 457 "data/maps/EverGrandeCity/scripts.pory"
	msgbox Rival_ExplainKubfu, MSGBOX_DEFAULT
# 458 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_RECEIVED_KUBFU
# 459 "data/maps/EverGrandeCity/scripts.pory"
	checkplayergender
# 460 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, EverGrandeCity_EventScript_MayFarewell
# 461 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, EverGrandeCity_EventScript_BrendanFarewell
# 462 "data/maps/EverGrandeCity/scripts.pory"
	release
	end


EverGrandeCity_EventScript_Volkner::
# 553 "data/maps/EverGrandeCity/scripts.pory"
	lockall
# 554 "data/maps/EverGrandeCity/scripts.pory"
	applymovement LOCALID_VOLKNER, Common_Movement_FacePlayer
# 555 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_defeated TRAINER_VOLKNER, EverGrandeCity_EventScript_VolknerDefeated
# 556 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_set FLAG_TEMP_1, EverGrandeCity_EventScript_VolknerRequestBattleAgain
# 557 "data/maps/EverGrandeCity/scripts.pory"
	msgbox Volkner_Greeting, MSGBOX_YESNO
# 558 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_BattleVolknerPrompt
	end


EverGrandeCity_EventScript_VolknerRequestBattleAgain::
# 563 "data/maps/EverGrandeCity/scripts.pory"
	msgbox Volkner_ReadyYet, MSGBOX_YESNO
# 564 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_BattleVolknerPrompt
	end


EverGrandeCity_EventScript_BattleVolknerPrompt::
# 569 "data/maps/EverGrandeCity/scripts.pory"
	call_if_eq VAR_RESULT, YES, EverGrandeCity_EventScript_BattleVolkner
# 570 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, EverGrandeCity_EventScript_DeclineVolknerBattle
# 571 "data/maps/EverGrandeCity/scripts.pory"
	closemessage
	end


EverGrandeCity_EventScript_DeclineVolknerBattle::
# 576 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_TEMP_1
# 577 "data/maps/EverGrandeCity/scripts.pory"
	msgbox Volkner_ComeBackWhenReady, MSGBOX_DEFAULT
# 578 "data/maps/EverGrandeCity/scripts.pory"
	release
	end


EverGrandeCity_EventScript_BattleVolkner::
# 583 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_EventScript_BattleVolkner_Text_0, MSGBOX_DEFAULT
# 584 "data/maps/EverGrandeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_VOLKNER, Volkner_Outro
# 585 "data/maps/EverGrandeCity/scripts.pory"
	giveitem ITEM_TM_RISING_VOLTAGE
# 586 "data/maps/EverGrandeCity/scripts.pory"
	giveitem ITEM_TM_SUPERCELL_SLAM
# 587 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_VolknerGiveZeraora
	return


EverGrandeCity_EventScript_VolknerDefeated::
# 593 "data/maps/EverGrandeCity/scripts.pory"
	msgbox PostBattle_Volkner, MSGBOX_DEFAULT
# 594 "data/maps/EverGrandeCity/scripts.pory"
	releaseall
	end


EverGrandeCity_EventScript_VolknerGiveZeraora::
# 599 "data/maps/EverGrandeCity/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_ZERAORA
# 600 "data/maps/EverGrandeCity/scripts.pory"
	givemonrandom SPECIES_ZERAORA, 50
# 601 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, EverGrandeCity_EventScript_ReceiveZeraoraParty
# 602 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, EverGrandeCity_EventScript_ReceiveZeraoraPC
# 603 "data/maps/EverGrandeCity/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 604 "data/maps/EverGrandeCity/scripts.pory"
	release
	end


EverGrandeCity_EventScript_ReceiveZeraoraParty::
# 609 "data/maps/EverGrandeCity/scripts.pory"
	call EverGrandeCity_EventScript_ReceivedZeraoraFanfare
# 610 "data/maps/EverGrandeCity/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 611 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, EverGrandeCity_EventScript_ExplainZeraora
# 612 "data/maps/EverGrandeCity/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 613 "data/maps/EverGrandeCity/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 614 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_ExplainZeraora
	end


EverGrandeCity_EventScript_ReceiveZeraoraPC::
# 620 "data/maps/EverGrandeCity/scripts.pory"
	call EverGrandeCity_EventScript_ReceivedZeraoraFanfare
# 621 "data/maps/EverGrandeCity/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 622 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, EverGrandeCity_EventScript_SendZeraoraToPC
# 623 "data/maps/EverGrandeCity/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 624 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_SendZeraoraToPC
	end


EverGrandeCity_EventScript_SendZeraoraToPC::
# 630 "data/maps/EverGrandeCity/scripts.pory"
	call Common_EventScript_TransferredToPC
# 631 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_ExplainZeraora
	end


EverGrandeCity_EventScript_ReceivedZeraoraFanfare::
# 637 "data/maps/EverGrandeCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 638 "data/maps/EverGrandeCity/scripts.pory"
	message EverGrandeCity_Text_PlayerReceivedZeraora
# 639 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 640 "data/maps/EverGrandeCity/scripts.pory"
	waitfanfare
# 641 "data/maps/EverGrandeCity/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_ZERAORA
	return


EverGrandeCity_EventScript_ExplainZeraora::
# 647 "data/maps/EverGrandeCity/scripts.pory"
	msgbox Volkner_ExplainZeraora, MSGBOX_DEFAULT
# 648 "data/maps/EverGrandeCity/scripts.pory"
	release
	end


EverGrandeCity_EventScript_BattleDawn_Text_0:
# 321 "data/maps/EverGrandeCity/scripts.pory"
	.string "Let's do this, one last time!$"

EverGrandeCity_EventScript_BattleVolkner_Text_0:
# 583 "data/maps/EverGrandeCity/scripts.pory"
	.string "This is going to be electric!$"

EverGrandeCity_Text_PlayerReceivedKubfu::
# 466 "data/maps/EverGrandeCity/scripts.pory"
	.string "{PLAYER} received Kubfu!$"

Rival_ExplainKubfu::
# 470 "data/maps/EverGrandeCity/scripts.pory"
	.string "Kubfu can evolve in 2 different ways.\n"
	.string "You can use a Dusk Stone to evolve it\l"
	.string "into the Single-Strike form, like I have,\l"
	.string "or you can use a Water Stone to evolve\l"
	.string "it into the Rapid-Strike form.\p"
	.string "Both are quite powerful.$"

Dawn_GreetingEvergrande::
# 480 "data/maps/EverGrandeCity/scripts.pory"
	.string "Hey, {PLAYER}! After everything that\n"
	.string "happened in Sootopolis, I called up\l"
	.string "{RIVAL}, and we decided to meet up here\l"
	.string "and wait for you.\p"
	.string "You've beaten us both a number of\n"
	.string "times, but we agreed that we can't just\l"
	.string "let you through to Victory Road\l"
	.string "without one more battle for each of us!\p"
	.string "Don't worry, we won't make you fight us\n"
	.string "both at once. But you will have to beat\l"
	.string "us both to get through!\p"
	.string "So what do you say, ready to have our\n"
	.string "final battle?$"

ReadyYetFinal::
# 496 "data/maps/EverGrandeCity/scripts.pory"
	.string "Ready for our final battle now?$"

ComeBackWhenReadyFinal::
# 500 "data/maps/EverGrandeCity/scripts.pory"
	.string "Come back when you're ready, I'll be\n"
	.string "here!$"

Dawn_OutroEvergrande::
# 505 "data/maps/EverGrandeCity/scripts.pory"
	.string "Looks like you passed my final test\n"
	.string "with flying colors, {PLAYER}.\p"
	.string "Not that there was ever any doubt, but\n"
	.string "you're definitely ready for the\l"
	.string "Pokémon League.$"

EverGrandeCity_Text_CanYouBeatRival::
# 513 "data/maps/EverGrandeCity/scripts.pory"
	.string "Thanks for one last great battle,\n"
	.string "{PLAYER}. But I'm not going anywhere\l"
	.string "until you beat {RIVAL} too!$"

EverGrandeCity_Text_NotMovingUntilRival::
# 520 "data/maps/EverGrandeCity/scripts.pory"
	.string "I'm not going anywhere until\n"
	.string "you beat {RIVAL} too!$"

EverGrandeCity_Text_CanYouBeatDawn::
# 525 "data/maps/EverGrandeCity/scripts.pory"
	.string "That was a great battle, {PLAYER}, but\n"
	.string "can you beat Dawn too?$"

EverGrandeCity_Text_NotMovingUntilDawn::
# 530 "data/maps/EverGrandeCity/scripts.pory"
	.string "I'm not going anywhere until\n"
	.string "you beat Dawn too!$"

DawnFarewell::
# 535 "data/maps/EverGrandeCity/scripts.pory"
	.string "Dawn: Well, {PLAYER}, neither of us were\n"
	.string "a match for you once again.\p"
	.string "I have one more TM I can give you to\n"
	.string "help, I hope you can use it against\l"
	.string "against the Elite Four when you make it\l"
	.string "there.$"

DawnFarewell2::
# 544 "data/maps/EverGrandeCity/scripts.pory"
	.string "Become the Champion, {PLAYER}, I know\n"
	.string "you can do it!\p"
	.string "So long, my friend, until next time!$"

Volkner_Greeting::
# 652 "data/maps/EverGrandeCity/scripts.pory"
	.string "Wow, another trainer showed up here. It\n"
	.string "gets pretty boring being the strongest\l"
	.string "Gym Leader in a given region…\p"
	.string "… … … … … …\p"
	.string "How would I know? Well, my name's\n"
	.string "Volkner, and I'm the 8th Gym Leader in\l"
	.string "the Sinnoh region.\p"
	.string "Usually, the weak trainers get weeded\n"
	.string "out before they can make it to me.\p"
	.string "But you're now the fourth strong-\n"
	.string "looking trainer I've seen come through\l"
	.string "here, it's really got me itching for a\l"
	.string "battle. So, will you battle me?$"

Volkner_ReadyYet::
# 668 "data/maps/EverGrandeCity/scripts.pory"
	.string "Ready to battle me yet?$"

Volkner_ComeBackWhenReady::
# 672 "data/maps/EverGrandeCity/scripts.pory"
	.string "How boring, I was hoping you'd be\n"
	.string "different than the average trainer.$"

EverGrandeCity_Text_PlayerReceivedZeraora::
# 677 "data/maps/EverGrandeCity/scripts.pory"
	.string "{PLAYER} received Zeraora!$"

Volkner_ExplainZeraora::
# 681 "data/maps/EverGrandeCity/scripts.pory"
	.string "Zeraora is definitely a favorite of\n"
	.string "mine. His electrifying fists light up\l"
	.string "any battle!\p"
	.string "I hope you raise it well!$"

Volkner_Outro::
# 688 "data/maps/EverGrandeCity/scripts.pory"
	.string "Ha! Wow, the trainers here are way\n"
	.string "stronger than in Sinnoh, how exciting!$"

PostBattle_Volkner::
# 694 "data/maps/EverGrandeCity/scripts.pory"
	.string "I think I'll just stay here and wait for\n"
	.string "more strong trainers, someone else can\l"
	.string "run my Gym for all I care.$"
