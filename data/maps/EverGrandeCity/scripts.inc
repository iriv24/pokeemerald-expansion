# 1 "data/maps/EverGrandeCity/scripts.pory"

# 2 "data/maps/EverGrandeCity/scripts.pory"
.set LOCALID_RIVAL, 1
# 3 "data/maps/EverGrandeCity/scripts.pory"
.set LOCALID_DAWN, 2
# 4 "data/maps/EverGrandeCity/scripts.pory"
.set LOCALID_VOLKNER, 3
# 5 "data/maps/EverGrandeCity/scripts.pory"

# 6 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_MapScripts::
# 7 "data/maps/EverGrandeCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_OnTransition
# 8 "data/maps/EverGrandeCity/scripts.pory"
	.byte 0
# 9 "data/maps/EverGrandeCity/scripts.pory"

# 10 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_OnTransition:
# 11 "data/maps/EverGrandeCity/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
# 12 "data/maps/EverGrandeCity/scripts.pory"
	call_if_unset FLAG_BEAT_BOTH_RIVALS, Common_EventScript_SetupRivalGfxId
# 13 "data/maps/EverGrandeCity/scripts.pory"
	end
# 14 "data/maps/EverGrandeCity/scripts.pory"

# 15 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_VictoryRoadSign::
# 16 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_EnteringVictoryRoad, MSGBOX_SIGN
# 17 "data/maps/EverGrandeCity/scripts.pory"
	end
# 18 "data/maps/EverGrandeCity/scripts.pory"

# 19 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_CitySign::
# 20 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_CitySign, MSGBOX_SIGN
# 21 "data/maps/EverGrandeCity/scripts.pory"
	end
# 22 "data/maps/EverGrandeCity/scripts.pory"

# 23 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_PokemonLeagueSign::
# 24 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_EnteringPokemonLeague, MSGBOX_SIGN
# 25 "data/maps/EverGrandeCity/scripts.pory"
	end
# 26 "data/maps/EverGrandeCity/scripts.pory"

# 27 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_Rival::
# 28 "data/maps/EverGrandeCity/scripts.pory"
	lock
# 29 "data/maps/EverGrandeCity/scripts.pory"
	faceplayer
# 30 "data/maps/EverGrandeCity/scripts.pory"
	checkplayergender
# 31 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, EverGrandeCity_EventScript_May
# 32 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, EverGrandeCity_EventScript_Brendan
# 33 "data/maps/EverGrandeCity/scripts.pory"
	end
# 34 "data/maps/EverGrandeCity/scripts.pory"

# 35 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_May::
# 36 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_set FLAG_EVERGRANDE_CITY_BEAT_RIVAL, EverGrandeCity_EventScript_BeatRivalNotDawn
# 37 "data/maps/EverGrandeCity/scripts.pory"
	call_if_set FLAG_DECLINED_RIVAL_BATTLE_EVERGRANDE, EverGrandeCity_EventScript_MayAskToBattleAgain
# 38 "data/maps/EverGrandeCity/scripts.pory"
	call_if_unset FLAG_DECLINED_RIVAL_BATTLE_EVERGRANDE, EverGrandeCity_EventScript_MayAskToBattle
# 39 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, EverGrandeCity_EventScript_DeclineMayBattle
# 40 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_MayWontBeBeaten, MSGBOX_DEFAULT
# 41 "data/maps/EverGrandeCity/scripts.pory"
	switch VAR_STARTER_MON
# 42 "data/maps/EverGrandeCity/scripts.pory"
	case 0, EverGrandeCity_EventScript_BattleMayTreecko
# 43 "data/maps/EverGrandeCity/scripts.pory"
	case 1, EverGrandeCity_EventScript_BattleMayTorchic
# 44 "data/maps/EverGrandeCity/scripts.pory"
	case 2, EverGrandeCity_EventScript_BattleMayMudkip
# 45 "data/maps/EverGrandeCity/scripts.pory"
	end
# 46 "data/maps/EverGrandeCity/scripts.pory"

# 47 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_MayAskToBattleAgain::
# 48 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_MayBattleMe, MSGBOX_YESNO
# 49 "data/maps/EverGrandeCity/scripts.pory"
	return
# 50 "data/maps/EverGrandeCity/scripts.pory"

# 51 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_MayAskToBattle::
# 52 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_MayShoppingLetsBattle, MSGBOX_YESNO
# 53 "data/maps/EverGrandeCity/scripts.pory"
	return
# 54 "data/maps/EverGrandeCity/scripts.pory"

# 55 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_DeclineMayBattle::
# 56 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_DECLINED_RIVAL_BATTLE_EVERGRANDE
# 57 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_MayNotRaisingPokemon, MSGBOX_DEFAULT
# 58 "data/maps/EverGrandeCity/scripts.pory"
	release
# 59 "data/maps/EverGrandeCity/scripts.pory"
	end
# 60 "data/maps/EverGrandeCity/scripts.pory"

# 61 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_BattleMayTreecko::
# 62 "data/maps/EverGrandeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_EVERGRANDE_TREECKO, EverGrandeCity_Text_MayDefeat
# 63 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_DefeatedMay
# 64 "data/maps/EverGrandeCity/scripts.pory"
	end
# 65 "data/maps/EverGrandeCity/scripts.pory"

# 66 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_BattleMayTorchic::
# 67 "data/maps/EverGrandeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_EVERGRANDE_TORCHIC, EverGrandeCity_Text_MayDefeat
# 68 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_DefeatedMay
# 69 "data/maps/EverGrandeCity/scripts.pory"
	end
# 70 "data/maps/EverGrandeCity/scripts.pory"

# 71 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_BattleMayMudkip::
# 72 "data/maps/EverGrandeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_EVERGRANDE_MUDKIP, EverGrandeCity_Text_MayDefeat
# 73 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_DefeatedMay
# 74 "data/maps/EverGrandeCity/scripts.pory"
	end
# 75 "data/maps/EverGrandeCity/scripts.pory"

# 76 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_DefeatedMay::
# 77 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_EVERGRANDE_CITY_BEAT_RIVAL
# 78 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_set FLAG_BEAT_DAWN_EVERGRANDE, EverGrandeCity_EventScript_RivalsFlyAway
# 79 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_CanYouBeatDawn, MSGBOX_DEFAULT
# 80 "data/maps/EverGrandeCity/scripts.pory"
	releaseall
# 81 "data/maps/EverGrandeCity/scripts.pory"
	end
# 82 "data/maps/EverGrandeCity/scripts.pory"

# 83 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_Brendan::
# 84 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_set FLAG_EVERGRANDE_CITY_BEAT_RIVAL, EverGrandeCity_EventScript_BeatRivalNotDawn
# 85 "data/maps/EverGrandeCity/scripts.pory"
	call_if_set FLAG_DECLINED_RIVAL_BATTLE_EVERGRANDE, EverGrandeCity_EventScript_BrendanAskToBattleAgain
# 86 "data/maps/EverGrandeCity/scripts.pory"
	call_if_unset FLAG_DECLINED_RIVAL_BATTLE_EVERGRANDE, EverGrandeCity_EventScript_BrendanAskToBattle
# 87 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, EverGrandeCity_EventScript_DeclineBrendanBattle
# 88 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_BrendanWontBeBeaten, MSGBOX_DEFAULT
# 89 "data/maps/EverGrandeCity/scripts.pory"
	switch VAR_STARTER_MON
# 90 "data/maps/EverGrandeCity/scripts.pory"
	case 0, EverGrandeCity_EventScript_BattleBrendanTreecko
# 91 "data/maps/EverGrandeCity/scripts.pory"
	case 1, EverGrandeCity_EventScript_BattleBrendanTorchic
# 92 "data/maps/EverGrandeCity/scripts.pory"
	case 2, EverGrandeCity_EventScript_BattleBrendanMudkip
# 93 "data/maps/EverGrandeCity/scripts.pory"
	end
# 94 "data/maps/EverGrandeCity/scripts.pory"

# 95 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_BrendanAskToBattleAgain::
# 96 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_BrendanBattleMe, MSGBOX_YESNO
# 97 "data/maps/EverGrandeCity/scripts.pory"
	return
# 98 "data/maps/EverGrandeCity/scripts.pory"

# 99 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_BrendanAskToBattle::
# 100 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_BrendanShoppingLetsBattle, MSGBOX_YESNO
# 101 "data/maps/EverGrandeCity/scripts.pory"
	return
# 102 "data/maps/EverGrandeCity/scripts.pory"

# 103 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_DeclineBrendanBattle::
# 104 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_DECLINED_RIVAL_BATTLE_EVERGRANDE
# 105 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_BrendanNoConfidence, MSGBOX_DEFAULT
# 106 "data/maps/EverGrandeCity/scripts.pory"
	release
# 107 "data/maps/EverGrandeCity/scripts.pory"
	end
# 108 "data/maps/EverGrandeCity/scripts.pory"

# 109 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_BattleBrendanTreecko::
# 110 "data/maps/EverGrandeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_EVERGRANDE_TREECKO, EverGrandeCity_Text_BrendanDefeat
# 111 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_DefeatedBrendan
# 112 "data/maps/EverGrandeCity/scripts.pory"
	end
# 113 "data/maps/EverGrandeCity/scripts.pory"

# 114 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_BattleBrendanTorchic::
# 115 "data/maps/EverGrandeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_EVERGRANDE_TORCHIC, EverGrandeCity_Text_BrendanDefeat
# 116 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_DefeatedBrendan
# 117 "data/maps/EverGrandeCity/scripts.pory"
	end
# 118 "data/maps/EverGrandeCity/scripts.pory"

# 119 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_BattleBrendanMudkip::
# 120 "data/maps/EverGrandeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_EVERGRANDE_MUDKIP, EverGrandeCity_Text_BrendanDefeat
# 121 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_DefeatedBrendan
# 122 "data/maps/EverGrandeCity/scripts.pory"
	end
# 123 "data/maps/EverGrandeCity/scripts.pory"

# 124 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_DefeatedBrendan::
# 125 "data/maps/EverGrandeCity/scripts.pory"
    setflag FLAG_EVERGRANDE_CITY_BEAT_RIVAL
# 126 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_set FLAG_BEAT_DAWN_EVERGRANDE, EverGrandeCity_EventScript_RivalsFlyAway
# 127 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_CanYouBeatDawn, MSGBOX_DEFAULT
# 128 "data/maps/EverGrandeCity/scripts.pory"
	releaseall
# 129 "data/maps/EverGrandeCity/scripts.pory"
	end
# 130 "data/maps/EverGrandeCity/scripts.pory"

# 131 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_BeatRivalNotDawn::
# 132 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_NotMovingUntilDawn, MSGBOX_DEFAULT
# 133 "data/maps/EverGrandeCity/scripts.pory"
	releaseall
# 134 "data/maps/EverGrandeCity/scripts.pory"
	end
# 135 "data/maps/EverGrandeCity/scripts.pory"

# 136 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_RivalFlyAway::
# 137 "data/maps/EverGrandeCity/scripts.pory"
	closemessage
# 138 "data/maps/EverGrandeCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
# 139 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 0
# 140 "data/maps/EverGrandeCity/scripts.pory"
	delay 50
# 141 "data/maps/EverGrandeCity/scripts.pory"
	setfieldeffectargument 0, 1
# 142 "data/maps/EverGrandeCity/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 143 "data/maps/EverGrandeCity/scripts.pory"
	delay 15
# 144 "data/maps/EverGrandeCity/scripts.pory"
	removeobject VAR_LAST_TALKED
# 145 "data/maps/EverGrandeCity/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 146 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_MET_RIVAL_LILYCOVE
# 147 "data/maps/EverGrandeCity/scripts.pory"
	release
# 148 "data/maps/EverGrandeCity/scripts.pory"
	end
# 149 "data/maps/EverGrandeCity/scripts.pory"

# 150 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_SetVisitedEverGrande::
# 151 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_VISITED_EVER_GRANDE_CITY
# 152 "data/maps/EverGrandeCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 153 "data/maps/EverGrandeCity/scripts.pory"
	end
# 154 "data/maps/EverGrandeCity/scripts.pory"

# 155 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_MayShoppingLetsBattle:
# 156 "data/maps/EverGrandeCity/scripts.pory"
	.string "{PLAYER}! Dawn told me about\n"
# 157 "data/maps/EverGrandeCity/scripts.pory"
	.string "everything that happened with Team\l"
# 158 "data/maps/EverGrandeCity/scripts.pory"
	.string "Aqua, Team Magma, and Drake!\p"
# 159 "data/maps/EverGrandeCity/scripts.pory"
	.string "I can't believe what he did, but I'm\n"
# 160 "data/maps/EverGrandeCity/scripts.pory"
	.string "more impressed with how you were able\l"
# 161 "data/maps/EverGrandeCity/scripts.pory"
	.string "to stop all of them by yourself!\p"
# 162 "data/maps/EverGrandeCity/scripts.pory"
	.string "It feels silly to even say this, but we\n"
# 163 "data/maps/EverGrandeCity/scripts.pory"
	.string "wanted to give you one final test\l"
# 164 "data/maps/EverGrandeCity/scripts.pory"
	.string "before you head into Victory Road!\l"
# 165 "data/maps/EverGrandeCity/scripts.pory"
	.string "We are rivals after all!\p"
# 166 "data/maps/EverGrandeCity/scripts.pory"
	.string "Don't worry, we won't make you fight us\n"
# 167 "data/maps/EverGrandeCity/scripts.pory"
	.string "both at once. But you will have to beat\l"
# 168 "data/maps/EverGrandeCity/scripts.pory"
	.string "us both to get through! So…\p"
# 169 "data/maps/EverGrandeCity/scripts.pory"
	.string "What do you say to one last battle?$"
# 170 "data/maps/EverGrandeCity/scripts.pory"

# 171 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_MayNotRaisingPokemon:
# 172 "data/maps/EverGrandeCity/scripts.pory"
	.string "Oh, alright then. But just so you know,\n"
# 173 "data/maps/EverGrandeCity/scripts.pory"
	.string "I'm not going anywhere until you beat\l"
# 174 "data/maps/EverGrandeCity/scripts.pory"
	.string "Dawn and me!$"
# 175 "data/maps/EverGrandeCity/scripts.pory"

# 176 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_MayBattleMe:
# 177 "data/maps/EverGrandeCity/scripts.pory"
	.string "Come on, battle with me one more time!\n"
# 178 "data/maps/EverGrandeCity/scripts.pory"
	.string "What do you say?$"
# 179 "data/maps/EverGrandeCity/scripts.pory"

# 180 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_MayWontBeBeaten:
# 181 "data/maps/EverGrandeCity/scripts.pory"
	.string "I'll show you how strong I've become!$"
# 182 "data/maps/EverGrandeCity/scripts.pory"

# 183 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_MayDefeat:
# 184 "data/maps/EverGrandeCity/scripts.pory"
	.string "… … … … … … … …\p"
# 185 "data/maps/EverGrandeCity/scripts.pory"
	.string "I remember the battle I had with you,\n"
# 186 "data/maps/EverGrandeCity/scripts.pory"
	.string "{PLAYER}{KUN}, on Route 103.\p"
# 187 "data/maps/EverGrandeCity/scripts.pory"
	.string "That battle helped you become this\n"
# 188 "data/maps/EverGrandeCity/scripts.pory"
	.string "strong, didn't it?$"
# 189 "data/maps/EverGrandeCity/scripts.pory"

# 190 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_MayGoingBackToLittleroot:
# 191 "data/maps/EverGrandeCity/scripts.pory"
	.string "Anyway, I'm thinking of going back to\n"
# 192 "data/maps/EverGrandeCity/scripts.pory"
	.string "Littleroot soon.\p"
# 193 "data/maps/EverGrandeCity/scripts.pory"
	.string "I've caught a decent group of Pokémon,\n"
# 194 "data/maps/EverGrandeCity/scripts.pory"
	.string "and my Pokédex is coming along, so\l"
# 195 "data/maps/EverGrandeCity/scripts.pory"
	.string "I'm going home to show my dad.\p"
# 196 "data/maps/EverGrandeCity/scripts.pory"
	.string "Like Dawn said, you've got this,\n"
# 197 "data/maps/EverGrandeCity/scripts.pory"
	.string "{PLAYER}. I know you're strong enough\l"
# 198 "data/maps/EverGrandeCity/scripts.pory"
	.string "to become the Champion!\p"
# 199 "data/maps/EverGrandeCity/scripts.pory"
	.string "Oh, and one more thing. When we first\n"
# 200 "data/maps/EverGrandeCity/scripts.pory"
	.string "got here, we saw Wally walking into\l"
# 201 "data/maps/EverGrandeCity/scripts.pory"
	.string "Victory Road.\p"
# 202 "data/maps/EverGrandeCity/scripts.pory"
	.string "He looked really determined, he was\n"
# 203 "data/maps/EverGrandeCity/scripts.pory"
	.string "almost like a different person from\l"
# 204 "data/maps/EverGrandeCity/scripts.pory"
	.string "that timid kid you beat in Mauville…\p"
# 205 "data/maps/EverGrandeCity/scripts.pory"
	.string "Just thought I'd give you a heads up!\n"
# 206 "data/maps/EverGrandeCity/scripts.pory"
	.string "Anyway, take care, {PLAYER}, I'm sure\l"
# 207 "data/maps/EverGrandeCity/scripts.pory"
	.string "I'll see you again soon!$"
# 208 "data/maps/EverGrandeCity/scripts.pory"

# 209 "data/maps/EverGrandeCity/scripts.pory"

# 210 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_RivalTakeKubfu:
# 211 "data/maps/EverGrandeCity/scripts.pory"
	.string "Here, {PLAYER}, I have one final gift\n"
# 212 "data/maps/EverGrandeCity/scripts.pory"
	.string "as well before I head out.$"
# 213 "data/maps/EverGrandeCity/scripts.pory"

# 214 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_BrendanShoppingLetsBattle:
# 215 "data/maps/EverGrandeCity/scripts.pory"
	.string "{PLAYER}! Dawn told me about\n"
# 216 "data/maps/EverGrandeCity/scripts.pory"
	.string "everything that happened with Team\l"
# 217 "data/maps/EverGrandeCity/scripts.pory"
	.string "Aqua, Team Magma, and Drake!\p"
# 218 "data/maps/EverGrandeCity/scripts.pory"
	.string "I can't believe what he did, but I'm\n"
# 219 "data/maps/EverGrandeCity/scripts.pory"
	.string "more impressed with how you were able\l"
# 220 "data/maps/EverGrandeCity/scripts.pory"
	.string "to stop all of them by yourself!\p"
# 221 "data/maps/EverGrandeCity/scripts.pory"
	.string "It feels silly to even say this, but we\n"
# 222 "data/maps/EverGrandeCity/scripts.pory"
	.string "wanted to give you one final test\l"
# 223 "data/maps/EverGrandeCity/scripts.pory"
	.string "before you head into Victory Road!\l"
# 224 "data/maps/EverGrandeCity/scripts.pory"
	.string "We are rivals after all!\p"
# 225 "data/maps/EverGrandeCity/scripts.pory"
	.string "Don't worry, we won't make you fight us\n"
# 226 "data/maps/EverGrandeCity/scripts.pory"
	.string "both at once. But you will have to beat\l"
# 227 "data/maps/EverGrandeCity/scripts.pory"
	.string "us both to get through! So…\p"
# 228 "data/maps/EverGrandeCity/scripts.pory"
	.string "What do you say to one last battle?$"
# 229 "data/maps/EverGrandeCity/scripts.pory"

# 230 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_BrendanNoConfidence:
# 231 "data/maps/EverGrandeCity/scripts.pory"
	.string "If you say so, but I'm not going\n"
# 232 "data/maps/EverGrandeCity/scripts.pory"
	.string "anywhere until we battle!$"
# 233 "data/maps/EverGrandeCity/scripts.pory"

# 234 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_BrendanBattleMe:
# 235 "data/maps/EverGrandeCity/scripts.pory"
	.string "Come on, {PLAYER}. I'm really going to\n"
# 236 "data/maps/EverGrandeCity/scripts.pory"
	.string "beat you this time!\l"
# 237 "data/maps/EverGrandeCity/scripts.pory"
	.string "What do you say?$"
# 238 "data/maps/EverGrandeCity/scripts.pory"

# 239 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_BrendanWontBeBeaten:
# 240 "data/maps/EverGrandeCity/scripts.pory"
	.string "I'll show you how strong I've become!$"
# 241 "data/maps/EverGrandeCity/scripts.pory"

# 242 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_BrendanDefeat:
# 243 "data/maps/EverGrandeCity/scripts.pory"
	.string "… … … … … … … …\p"
# 244 "data/maps/EverGrandeCity/scripts.pory"
	.string "I remember the battle I had with you,\n"
# 245 "data/maps/EverGrandeCity/scripts.pory"
	.string "{PLAYER}{KUN}, on Route 103.\p"
# 246 "data/maps/EverGrandeCity/scripts.pory"
	.string "That battle helped you become this\n"
# 247 "data/maps/EverGrandeCity/scripts.pory"
	.string "strong, didn't it?$"
# 248 "data/maps/EverGrandeCity/scripts.pory"

# 249 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_BrendanGoingBackToLittleroot:
# 250 "data/maps/EverGrandeCity/scripts.pory"
	.string "Anyway, I…\n"
# 251 "data/maps/EverGrandeCity/scripts.pory"
	.string "I plan on going home to Littleroot.\p"
# 252 "data/maps/EverGrandeCity/scripts.pory"
	.string "You know I'm helping out my dad on his\n"
# 253 "data/maps/EverGrandeCity/scripts.pory"
	.string "Pokédex. It's coming together pretty\l"
# 254 "data/maps/EverGrandeCity/scripts.pory"
	.string "decently, so I should go show him.\p"
# 255 "data/maps/EverGrandeCity/scripts.pory"
	.string "Like Dawn said, you've got this,\n"
# 256 "data/maps/EverGrandeCity/scripts.pory"
	.string "{PLAYER}. I know you're strong enough\l"
# 257 "data/maps/EverGrandeCity/scripts.pory"
	.string "to become the Champion!\p"
# 258 "data/maps/EverGrandeCity/scripts.pory"
	.string "Oh, and one more thing. When we first\n"
# 259 "data/maps/EverGrandeCity/scripts.pory"
	.string "got here, we saw Wally walking into\l"
# 260 "data/maps/EverGrandeCity/scripts.pory"
	.string "Victory Road.\p"
# 261 "data/maps/EverGrandeCity/scripts.pory"
	.string "He looked really determined, he was\n"
# 262 "data/maps/EverGrandeCity/scripts.pory"
	.string "almost like a different person from\l"
# 263 "data/maps/EverGrandeCity/scripts.pory"
	.string "that timid kid you beat in Mauville…\p"
# 264 "data/maps/EverGrandeCity/scripts.pory"
	.string "Just thought I'd give you a heads up!\n"
# 265 "data/maps/EverGrandeCity/scripts.pory"
	.string "Anyway, take care, {PLAYER}, I'm sure\l"
# 266 "data/maps/EverGrandeCity/scripts.pory"
	.string "I'll see you again soon!$"
# 267 "data/maps/EverGrandeCity/scripts.pory"

# 268 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_EnteringVictoryRoad:
# 269 "data/maps/EverGrandeCity/scripts.pory"
	.string "Entering Victory Road$"
# 270 "data/maps/EverGrandeCity/scripts.pory"

# 271 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_EnteringPokemonLeague:
# 272 "data/maps/EverGrandeCity/scripts.pory"
	.string "Entering Pokémon League\n"
# 273 "data/maps/EverGrandeCity/scripts.pory"
	.string "Center Gate$"
# 274 "data/maps/EverGrandeCity/scripts.pory"

# 275 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_CitySign:
# 276 "data/maps/EverGrandeCity/scripts.pory"
	.string "Ever Grande City\p"
# 277 "data/maps/EverGrandeCity/scripts.pory"
	.string "“The paradise of flowers, the sea,\n"
# 278 "data/maps/EverGrandeCity/scripts.pory"
	.string "and Pokémon.”$"

EverGrandeCity_EventScript_Dawn::
# 283 "data/maps/EverGrandeCity/scripts.pory"
	lockall
# 284 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 2, Common_Movement_FacePlayer
# 285 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_set FLAG_BEAT_DAWN_EVERGRANDE, EverGrandeCity_EventScript_BeatDawnNotRival
# 286 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_set FLAG_DECLINED_DAWN_EVERGRANDE, EverGrandeCity_EventScript_DawnRequestBattleAgain
# 287 "data/maps/EverGrandeCity/scripts.pory"
	msgbox Dawn_GreetingEvergrande, MSGBOX_YESNO
# 288 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_BattleDawnPrompt
	end


EverGrandeCity_EventScript_DawnRequestBattleAgain::
# 293 "data/maps/EverGrandeCity/scripts.pory"
	msgbox ReadyYetFinal, MSGBOX_YESNO
# 294 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_BattleDawnPrompt
	end


EverGrandeCity_EventScript_BattleDawnPrompt::
# 299 "data/maps/EverGrandeCity/scripts.pory"
	call_if_eq VAR_RESULT, YES, EverGrandeCity_EventScript_BattleDawn
# 300 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, EverGrandeCity_EventScript_DeclineDawnBattle
# 301 "data/maps/EverGrandeCity/scripts.pory"
	closemessage
	end


EverGrandeCity_EventScript_DeclineDawnBattle::
# 306 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_DECLINED_DAWN_EVERGRANDE
# 307 "data/maps/EverGrandeCity/scripts.pory"
	msgbox ComeBackWhenReadyFinal, MSGBOX_DEFAULT
# 308 "data/maps/EverGrandeCity/scripts.pory"
	release
	end


EverGrandeCity_EventScript_BattleDawn::
# 313 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_EventScript_BattleDawn_Text_0, MSGBOX_DEFAULT
# 314 "data/maps/EverGrandeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_DAWN_EVERGRANDE, Dawn_OutroEvergrande
# 315 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_DawnDefeated
	return


EverGrandeCity_EventScript_DawnDefeated::
# 321 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_BEAT_DAWN_EVERGRANDE
# 322 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_set FLAG_EVERGRANDE_CITY_BEAT_RIVAL, EverGrandeCity_EventScript_RivalsFlyAway
# 323 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_CanYouBeatRival, MSGBOX_DEFAULT
# 324 "data/maps/EverGrandeCity/scripts.pory"
	releaseall
	end


EverGrandeCity_EventScript_BeatDawnNotRival::
# 329 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_NotMovingUntilRival, MSGBOX_DEFAULT
# 330 "data/maps/EverGrandeCity/scripts.pory"
	releaseall
	end


EverGrandeCity_EventScript_RivalsFlyAway::
# 336 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterDown
# 337 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 0
# 338 "data/maps/EverGrandeCity/scripts.pory"
	msgbox DawnFarewell, MSGBOX_DEFAULT
# 339 "data/maps/EverGrandeCity/scripts.pory"
	giveitem ITEM_TM_DRACO_METEOR
# 340 "data/maps/EverGrandeCity/scripts.pory"
	msgbox DawnFarewell2, MSGBOX_DEFAULT
# 341 "data/maps/EverGrandeCity/scripts.pory"
	closemessage
# 342 "data/maps/EverGrandeCity/scripts.pory"
	delay 30
# 343 "data/maps/EverGrandeCity/scripts.pory"
	setfieldeffectargument 0, 1
# 344 "data/maps/EverGrandeCity/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 345 "data/maps/EverGrandeCity/scripts.pory"
	delay 15
# 346 "data/maps/EverGrandeCity/scripts.pory"
	removeobject 2
# 347 "data/maps/EverGrandeCity/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 348 "data/maps/EverGrandeCity/scripts.pory"
	delay 15
# 349 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_RivalFarewellStart
# 350 "data/maps/EverGrandeCity/scripts.pory"
	releaseall
	end


EverGrandeCity_EventScript_RivalFarewellStart::
# 355 "data/maps/EverGrandeCity/scripts.pory"
	compare VAR_GAME_SETTING_DIFFICULTY_MODE, GAME_SETTING_DIFFICULTY_HARD_MODE
	goto_if_ge EverGrandeCity_EventScript_RivalFarewellStart_2
# 368 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterDown
# 369 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 0
# 370 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_RivalTakeKubfu, MSGBOX_DEFAULT
# 371 "data/maps/EverGrandeCity/scripts.pory"
	closemessage
# 372 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_RivalGiveKubfu
EverGrandeCity_EventScript_RivalFarewellStart_1:
# 374 "data/maps/EverGrandeCity/scripts.pory"
	releaseall
	end

EverGrandeCity_EventScript_RivalFarewellStart_2:
# 357 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterDown
# 358 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 0
# 359 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_RivalTakeKubfu, MSGBOX_DEFAULT
# 360 "data/maps/EverGrandeCity/scripts.pory"
	closemessage
# 361 "data/maps/EverGrandeCity/scripts.pory"
	giveitem ITEM_TM_U_TURN
# 362 "data/maps/EverGrandeCity/scripts.pory"
	checkplayergender
# 363 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, EverGrandeCity_EventScript_MayFarewell
# 364 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, EverGrandeCity_EventScript_BrendanFarewell
	goto EverGrandeCity_EventScript_RivalFarewellStart_1


EverGrandeCity_EventScript_MayFarewell::
# 379 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_MayGoingBackToLittleroot, MSGBOX_DEFAULT
# 380 "data/maps/EverGrandeCity/scripts.pory"
	closemessage
# 381 "data/maps/EverGrandeCity/scripts.pory"
	delay 30
# 382 "data/maps/EverGrandeCity/scripts.pory"
	setfieldeffectargument 0, 1
# 383 "data/maps/EverGrandeCity/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 384 "data/maps/EverGrandeCity/scripts.pory"
	delay 15
# 385 "data/maps/EverGrandeCity/scripts.pory"
	removeobject 1
# 386 "data/maps/EverGrandeCity/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 387 "data/maps/EverGrandeCity/scripts.pory"
	delay 15
# 388 "data/maps/EverGrandeCity/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 389 "data/maps/EverGrandeCity/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_PICHU_DOLL
# 390 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_MET_RIVAL_LILYCOVE
# 391 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_BEAT_BOTH_RIVALS
# 392 "data/maps/EverGrandeCity/scripts.pory"
	releaseall
	end


EverGrandeCity_EventScript_BrendanFarewell::
# 397 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_BrendanGoingBackToLittleroot, MSGBOX_DEFAULT
# 398 "data/maps/EverGrandeCity/scripts.pory"
	closemessage
# 399 "data/maps/EverGrandeCity/scripts.pory"
	delay 30
# 400 "data/maps/EverGrandeCity/scripts.pory"
	setfieldeffectargument 0, 1
# 401 "data/maps/EverGrandeCity/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 402 "data/maps/EverGrandeCity/scripts.pory"
	delay 15
# 403 "data/maps/EverGrandeCity/scripts.pory"
	removeobject 1
# 404 "data/maps/EverGrandeCity/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 405 "data/maps/EverGrandeCity/scripts.pory"
	delay 15
# 406 "data/maps/EverGrandeCity/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 407 "data/maps/EverGrandeCity/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_SWABLU_DOLL
# 408 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_MET_RIVAL_LILYCOVE
# 409 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_BEAT_BOTH_RIVALS
# 410 "data/maps/EverGrandeCity/scripts.pory"
	releaseall
	end


EverGrandeCity_EventScript_RivalGiveKubfu::
# 415 "data/maps/EverGrandeCity/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_KUBFU
# 416 "data/maps/EverGrandeCity/scripts.pory"
	givemonrandom SPECIES_KUBFU, 40
# 417 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, EverGrandeCity_EventScript_ReceiveKubfuParty
# 418 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, EverGrandeCity_EventScript_ReceiveKubfuPC
# 419 "data/maps/EverGrandeCity/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 420 "data/maps/EverGrandeCity/scripts.pory"
	release
	end


EverGrandeCity_EventScript_ReceiveKubfuParty::
# 425 "data/maps/EverGrandeCity/scripts.pory"
	call EverGrandeCity_EventScript_ReceivedKubfuFanfare
# 426 "data/maps/EverGrandeCity/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 427 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, EverGrandeCity_EventScript_ExplainKubfu
# 428 "data/maps/EverGrandeCity/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 429 "data/maps/EverGrandeCity/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 430 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_ExplainKubfu
	end


EverGrandeCity_EventScript_ReceiveKubfuPC::
# 436 "data/maps/EverGrandeCity/scripts.pory"
	call EverGrandeCity_EventScript_ReceivedKubfuFanfare
# 437 "data/maps/EverGrandeCity/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 438 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, EverGrandeCity_EventScript_SendKubfuToPC
# 439 "data/maps/EverGrandeCity/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 440 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_SendKubfuToPC
	end


EverGrandeCity_EventScript_SendKubfuToPC::
# 446 "data/maps/EverGrandeCity/scripts.pory"
	call Common_EventScript_TransferredToPC
# 447 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_ExplainKubfu
	end


EverGrandeCity_EventScript_ReceivedKubfuFanfare::
# 453 "data/maps/EverGrandeCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 454 "data/maps/EverGrandeCity/scripts.pory"
	message EverGrandeCity_Text_PlayerReceivedKubfu
# 455 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 456 "data/maps/EverGrandeCity/scripts.pory"
	waitfanfare
# 457 "data/maps/EverGrandeCity/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_KUBFU
	return


EverGrandeCity_EventScript_ExplainKubfu::
# 463 "data/maps/EverGrandeCity/scripts.pory"
	msgbox Rival_ExplainKubfu, MSGBOX_DEFAULT
# 464 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_RECEIVED_KUBFU
# 465 "data/maps/EverGrandeCity/scripts.pory"
	checkplayergender
# 466 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, EverGrandeCity_EventScript_MayFarewell
# 467 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, EverGrandeCity_EventScript_BrendanFarewell
# 468 "data/maps/EverGrandeCity/scripts.pory"
	release
	end


EverGrandeCity_EventScript_Volkner::
# 559 "data/maps/EverGrandeCity/scripts.pory"
	lockall
# 560 "data/maps/EverGrandeCity/scripts.pory"
	applymovement LOCALID_VOLKNER, Common_Movement_FacePlayer
# 561 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_defeated TRAINER_VOLKNER, EverGrandeCity_EventScript_VolknerDefeated
# 562 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_set FLAG_TEMP_1, EverGrandeCity_EventScript_VolknerRequestBattleAgain
# 563 "data/maps/EverGrandeCity/scripts.pory"
	msgbox Volkner_Greeting, MSGBOX_YESNO
# 564 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_BattleVolknerPrompt
	end


EverGrandeCity_EventScript_VolknerRequestBattleAgain::
# 569 "data/maps/EverGrandeCity/scripts.pory"
	msgbox Volkner_ReadyYet, MSGBOX_YESNO
# 570 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_BattleVolknerPrompt
	end


EverGrandeCity_EventScript_BattleVolknerPrompt::
# 575 "data/maps/EverGrandeCity/scripts.pory"
	call_if_eq VAR_RESULT, YES, EverGrandeCity_EventScript_BattleVolkner
# 576 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, EverGrandeCity_EventScript_DeclineVolknerBattle
# 577 "data/maps/EverGrandeCity/scripts.pory"
	closemessage
	end


EverGrandeCity_EventScript_DeclineVolknerBattle::
# 582 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_TEMP_1
# 583 "data/maps/EverGrandeCity/scripts.pory"
	msgbox Volkner_ComeBackWhenReady, MSGBOX_DEFAULT
# 584 "data/maps/EverGrandeCity/scripts.pory"
	release
	end


EverGrandeCity_EventScript_BattleVolkner::
# 589 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_EventScript_BattleVolkner_Text_0, MSGBOX_DEFAULT
# 590 "data/maps/EverGrandeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_VOLKNER, Volkner_Outro
# 591 "data/maps/EverGrandeCity/scripts.pory"
	giveitem ITEM_TM_RISING_VOLTAGE
# 592 "data/maps/EverGrandeCity/scripts.pory"
	giveitem ITEM_TM_SUPERCELL_SLAM
# 593 "data/maps/EverGrandeCity/scripts.pory"
	compare VAR_GAME_SETTING_DIFFICULTY_MODE, GAME_SETTING_DIFFICULTY_HARD_MODE
	goto_if_ge EverGrandeCity_EventScript_BattleVolkner_1
# 600 "data/maps/EverGrandeCity/scripts.pory"
	giveitem ITEM_EJECT_BUTTON
# 601 "data/maps/EverGrandeCity/scripts.pory"
	giveitem ITEM_EJECT_PACK
# 602 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_VolknerGiveZeraora
	return

EverGrandeCity_EventScript_BattleVolkner_1:
# 595 "data/maps/EverGrandeCity/scripts.pory"
	giveitem ITEM_EJECT_PACK
	return


EverGrandeCity_EventScript_VolknerDefeated::
# 609 "data/maps/EverGrandeCity/scripts.pory"
	msgbox PostBattle_Volkner, MSGBOX_DEFAULT
# 610 "data/maps/EverGrandeCity/scripts.pory"
	releaseall
	end


EverGrandeCity_EventScript_VolknerGiveZeraora::
# 615 "data/maps/EverGrandeCity/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_ZERAORA
# 616 "data/maps/EverGrandeCity/scripts.pory"
	givemonrandom SPECIES_ZERAORA, 50
# 617 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, EverGrandeCity_EventScript_ReceiveZeraoraParty
# 618 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, EverGrandeCity_EventScript_ReceiveZeraoraPC
# 619 "data/maps/EverGrandeCity/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 620 "data/maps/EverGrandeCity/scripts.pory"
	release
	end


EverGrandeCity_EventScript_ReceiveZeraoraParty::
# 625 "data/maps/EverGrandeCity/scripts.pory"
	call EverGrandeCity_EventScript_ReceivedZeraoraFanfare
# 626 "data/maps/EverGrandeCity/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 627 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, EverGrandeCity_EventScript_ExplainZeraora
# 628 "data/maps/EverGrandeCity/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 629 "data/maps/EverGrandeCity/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 630 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_ExplainZeraora
	end


EverGrandeCity_EventScript_ReceiveZeraoraPC::
# 636 "data/maps/EverGrandeCity/scripts.pory"
	call EverGrandeCity_EventScript_ReceivedZeraoraFanfare
# 637 "data/maps/EverGrandeCity/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 638 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, EverGrandeCity_EventScript_SendZeraoraToPC
# 639 "data/maps/EverGrandeCity/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 640 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_SendZeraoraToPC
	end


EverGrandeCity_EventScript_SendZeraoraToPC::
# 646 "data/maps/EverGrandeCity/scripts.pory"
	call Common_EventScript_TransferredToPC
# 647 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_ExplainZeraora
	end


EverGrandeCity_EventScript_ReceivedZeraoraFanfare::
# 653 "data/maps/EverGrandeCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 654 "data/maps/EverGrandeCity/scripts.pory"
	message EverGrandeCity_Text_PlayerReceivedZeraora
# 655 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 656 "data/maps/EverGrandeCity/scripts.pory"
	waitfanfare
# 657 "data/maps/EverGrandeCity/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_ZERAORA
	return


EverGrandeCity_EventScript_ExplainZeraora::
# 663 "data/maps/EverGrandeCity/scripts.pory"
	msgbox Volkner_ExplainZeraora, MSGBOX_DEFAULT
# 664 "data/maps/EverGrandeCity/scripts.pory"
	release
	end


EverGrandeCity_EventScript_BackToBackTrigger::
# 717 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_BackToBackScene
	end


EverGrandeCity_EventScript_BackToBackScene::
# 722 "data/maps/EverGrandeCity/scripts.pory"
	compare VAR_GAME_SETTING_DIFFICULTY_MODE, GAME_SETTING_DIFFICULTY_HARD_MODE
	goto_if_ge EverGrandeCity_EventScript_BackToBackScene_2
# 794 "data/maps/EverGrandeCity/scripts.pory"
	setvar VAR_BEAT_RIVAL_BACK_TO_BACK, 1
EverGrandeCity_EventScript_BackToBackScene_1:
# 796 "data/maps/EverGrandeCity/scripts.pory"
	releaseall
	end

EverGrandeCity_EventScript_BackToBackScene_2:
# 724 "data/maps/EverGrandeCity/scripts.pory"
	lockall
# 725 "data/maps/EverGrandeCity/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, FALSE
# 726 "data/maps/EverGrandeCity/scripts.pory"
	playse SE_PIN
# 727 "data/maps/EverGrandeCity/scripts.pory"
	playse SE_PIN
# 728 "data/maps/EverGrandeCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 729 "data/maps/EverGrandeCity/scripts.pory"
	applymovement LOCALID_DAWN, Common_Movement_ExclamationMark
# 730 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 0
# 731 "data/maps/EverGrandeCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 732 "data/maps/EverGrandeCity/scripts.pory"
	applymovement LOCALID_DAWN, Common_Movement_WalkInPlaceFasterDown
# 733 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 0
# 734 "data/maps/EverGrandeCity/scripts.pory"
	msgbox RivalYoureHere
# 735 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 736 "data/maps/EverGrandeCity/scripts.pory"
	applymovement LOCALID_DAWN, EverGrandeCity_Movement_BackToBackDawnApproachPlayer
# 737 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 0
# 738 "data/maps/EverGrandeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_LookAtDawn
# 739 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 0
# 740 "data/maps/EverGrandeCity/scripts.pory"
	msgbox DawnApproach
# 741 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 742 "data/maps/EverGrandeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_LookAtRival
# 743 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 0
# 744 "data/maps/EverGrandeCity/scripts.pory"
	msgbox RivalApproach
# 745 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 746 "data/maps/EverGrandeCity/scripts.pory"
	playse SE_PIN
# 747 "data/maps/EverGrandeCity/scripts.pory"
	applymovement LOCALID_DAWN, Common_Movement_ExclamationMark
# 748 "data/maps/EverGrandeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_LookAtDawn
# 749 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 0
# 750 "data/maps/EverGrandeCity/scripts.pory"
	msgbox DawnMeFirst
# 751 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 752 "data/maps/EverGrandeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_DAWN_EVERGRANDE, Dawn_OutroEvergrande
# 753 "data/maps/EverGrandeCity/scripts.pory"
	msgbox DawnPostBattle
# 754 "data/maps/EverGrandeCity/scripts.pory"
	closemessage
# 755 "data/maps/EverGrandeCity/scripts.pory"
	applymovement LOCALID_DAWN, DawnLost
# 756 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 0
# 757 "data/maps/EverGrandeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_LookAtRival
# 758 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 0
# 759 "data/maps/EverGrandeCity/scripts.pory"
	playse SE_PIN
# 760 "data/maps/EverGrandeCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 761 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 0
# 762 "data/maps/EverGrandeCity/scripts.pory"
	msgbox RivalMyTurn
# 763 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 764 "data/maps/EverGrandeCity/scripts.pory"
	checkplayergender
# 765 "data/maps/EverGrandeCity/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq EverGrandeCity_EventScript_BackToBackScene_6
# 779 "data/maps/EverGrandeCity/scripts.pory"
	switch VAR_STARTER_MON
# 781 "data/maps/EverGrandeCity/scripts.pory"
	case 0, EverGrandeCity_EventScript_BackToBackScene_14
# 783 "data/maps/EverGrandeCity/scripts.pory"
	case 1, EverGrandeCity_EventScript_BackToBackScene_15
# 785 "data/maps/EverGrandeCity/scripts.pory"
	case 2, EverGrandeCity_EventScript_BackToBackScene_16
EverGrandeCity_EventScript_BackToBackScene_5:
# 789 "data/maps/EverGrandeCity/scripts.pory"
	setvar VAR_BEAT_RIVAL_BACK_TO_BACK, 1
# 790 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_RivalsFlyAway
	goto EverGrandeCity_EventScript_BackToBackScene_1

EverGrandeCity_EventScript_BackToBackScene_6:
# 767 "data/maps/EverGrandeCity/scripts.pory"
	switch VAR_STARTER_MON
# 769 "data/maps/EverGrandeCity/scripts.pory"
	case 0, EverGrandeCity_EventScript_BackToBackScene_10
# 771 "data/maps/EverGrandeCity/scripts.pory"
	case 1, EverGrandeCity_EventScript_BackToBackScene_11
# 773 "data/maps/EverGrandeCity/scripts.pory"
	case 2, EverGrandeCity_EventScript_BackToBackScene_12
	goto EverGrandeCity_EventScript_BackToBackScene_5

EverGrandeCity_EventScript_BackToBackScene_10:
# 770 "data/maps/EverGrandeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_EVERGRANDE_TREECKO, EverGrandeCity_Text_MayDefeat
	goto EverGrandeCity_EventScript_BackToBackScene_5

EverGrandeCity_EventScript_BackToBackScene_11:
# 772 "data/maps/EverGrandeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_EVERGRANDE_TORCHIC, EverGrandeCity_Text_MayDefeat
	goto EverGrandeCity_EventScript_BackToBackScene_5

EverGrandeCity_EventScript_BackToBackScene_12:
# 774 "data/maps/EverGrandeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_EVERGRANDE_MUDKIP, EverGrandeCity_Text_MayDefeat
	goto EverGrandeCity_EventScript_BackToBackScene_5

EverGrandeCity_EventScript_BackToBackScene_14:
# 782 "data/maps/EverGrandeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_EVERGRANDE_TREECKO, EverGrandeCity_Text_BrendanDefeat
	goto EverGrandeCity_EventScript_BackToBackScene_5

EverGrandeCity_EventScript_BackToBackScene_15:
# 784 "data/maps/EverGrandeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_EVERGRANDE_TORCHIC, EverGrandeCity_Text_BrendanDefeat
	goto EverGrandeCity_EventScript_BackToBackScene_5

EverGrandeCity_EventScript_BackToBackScene_16:
# 786 "data/maps/EverGrandeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_EVERGRANDE_MUDKIP, EverGrandeCity_Text_BrendanDefeat
	goto EverGrandeCity_EventScript_BackToBackScene_5


EverGrandeCity_Movement_BackToBackDawnApproachPlayer::
# 802 "data/maps/EverGrandeCity/scripts.pory"
	walk_down
# 803 "data/maps/EverGrandeCity/scripts.pory"
	face_right
# 804 "data/maps/EverGrandeCity/scripts.pory"
	step_end
	return


EverGrandeCity_LookAtDawn::
# 808 "data/maps/EverGrandeCity/scripts.pory"
	face_left
# 809 "data/maps/EverGrandeCity/scripts.pory"
	step_end
	return


EverGrandeCity_LookAtRival::
# 813 "data/maps/EverGrandeCity/scripts.pory"
	face_up
# 814 "data/maps/EverGrandeCity/scripts.pory"
	step_end
	return


DawnLost::
# 818 "data/maps/EverGrandeCity/scripts.pory"
	face_up
# 819 "data/maps/EverGrandeCity/scripts.pory"
	walk_up
# 820 "data/maps/EverGrandeCity/scripts.pory"
	face_down
# 821 "data/maps/EverGrandeCity/scripts.pory"
	step_end
	return


RivalLost::
# 825 "data/maps/EverGrandeCity/scripts.pory"
	lock_facing_direction
# 826 "data/maps/EverGrandeCity/scripts.pory"
	walk_left
# 827 "data/maps/EverGrandeCity/scripts.pory"
	unlock_facing_direction
# 828 "data/maps/EverGrandeCity/scripts.pory"
	step_end
	return


SetRivalsPermLoc::
# 892 "data/maps/EverGrandeCity/scripts.pory"
	setobjectxyperm LOCALID_DAWN, 17, 43
# 893 "data/maps/EverGrandeCity/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 18, 43
# 894 "data/maps/EverGrandeCity/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL, MOVEMENT_TYPE_FACE_DOWN
	return


EverGrandeCity_EventScript_BattleDawn_Text_0:
# 313 "data/maps/EverGrandeCity/scripts.pory"
	.string "Let's do this, one last time!$"

EverGrandeCity_EventScript_BattleVolkner_Text_0:
# 589 "data/maps/EverGrandeCity/scripts.pory"
	.string "This is going to be electric!$"

EverGrandeCity_Text_PlayerReceivedKubfu::
# 472 "data/maps/EverGrandeCity/scripts.pory"
	.string "{PLAYER} received Kubfu!$"

Rival_ExplainKubfu::
# 476 "data/maps/EverGrandeCity/scripts.pory"
	.string "Kubfu can evolve in 2 different ways.\n"
	.string "You can use a Dusk Stone to evolve it\l"
	.string "into the Single-Strike form, like I have,\l"
	.string "or you can use a Water Stone to evolve\l"
	.string "it into the Rapid-Strike form.\p"
	.string "Both are quite powerful.$"

Dawn_GreetingEvergrande::
# 486 "data/maps/EverGrandeCity/scripts.pory"
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
# 502 "data/maps/EverGrandeCity/scripts.pory"
	.string "Ready for our final battle now?$"

ComeBackWhenReadyFinal::
# 506 "data/maps/EverGrandeCity/scripts.pory"
	.string "Come back when you're ready, I'll be\n"
	.string "here!$"

Dawn_OutroEvergrande::
# 511 "data/maps/EverGrandeCity/scripts.pory"
	.string "Looks like you passed my final test\n"
	.string "with flying colors, {PLAYER}.\p"
	.string "Not that there was ever any doubt, but\n"
	.string "you're definitely ready for the\l"
	.string "Pokémon League.$"

EverGrandeCity_Text_CanYouBeatRival::
# 519 "data/maps/EverGrandeCity/scripts.pory"
	.string "Thanks for one last great battle,\n"
	.string "{PLAYER}. But I'm not going anywhere\l"
	.string "until you beat {RIVAL} too!$"

EverGrandeCity_Text_NotMovingUntilRival::
# 526 "data/maps/EverGrandeCity/scripts.pory"
	.string "I'm not going anywhere until\n"
	.string "you beat {RIVAL} too!$"

EverGrandeCity_Text_CanYouBeatDawn::
# 531 "data/maps/EverGrandeCity/scripts.pory"
	.string "That was a great battle, {PLAYER}, but\n"
	.string "can you beat Dawn too?$"

EverGrandeCity_Text_NotMovingUntilDawn::
# 536 "data/maps/EverGrandeCity/scripts.pory"
	.string "I'm not going anywhere until\n"
	.string "you beat Dawn too!$"

DawnFarewell::
# 541 "data/maps/EverGrandeCity/scripts.pory"
	.string "Dawn: Well, {PLAYER}, neither of us were\n"
	.string "a match for you once again.\p"
	.string "I have one more TM I can give you to\n"
	.string "help, I hope you can use it against\l"
	.string "against the Elite Four when you make it\l"
	.string "there.$"

DawnFarewell2::
# 550 "data/maps/EverGrandeCity/scripts.pory"
	.string "Become the Champion, {PLAYER}, I know\n"
	.string "you can do it!\p"
	.string "So long, my friend, until next time!$"

Volkner_Greeting::
# 668 "data/maps/EverGrandeCity/scripts.pory"
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
# 684 "data/maps/EverGrandeCity/scripts.pory"
	.string "Ready to battle me yet?$"

Volkner_ComeBackWhenReady::
# 688 "data/maps/EverGrandeCity/scripts.pory"
	.string "How boring, I was hoping you'd be\n"
	.string "different than the average trainer.$"

EverGrandeCity_Text_PlayerReceivedZeraora::
# 693 "data/maps/EverGrandeCity/scripts.pory"
	.string "{PLAYER} received Zeraora!$"

Volkner_ExplainZeraora::
# 697 "data/maps/EverGrandeCity/scripts.pory"
	.string "Zeraora is definitely a favorite of\n"
	.string "mine. His electrifying fists light up\l"
	.string "any battle!\p"
	.string "I hope you raise it well!$"

Volkner_Outro::
# 704 "data/maps/EverGrandeCity/scripts.pory"
	.string "Ha! Wow, the trainers here are way\n"
	.string "stronger than in Sinnoh, how exciting!$"

PostBattle_Volkner::
# 710 "data/maps/EverGrandeCity/scripts.pory"
	.string "I think I'll just stay here and wait for\n"
	.string "more strong trainers, someone else can\l"
	.string "run my Gym for all I care.$"

DelayForMaxie1::
# 831 "data/maps/EverGrandeCity/scripts.pory"
	.string "Rival: Listen up, Courtney! We have\n"
	.string "to do everything we can to stall\l"
	.string "that brat!\p"
	.string "We know {PLAYER} is on their way here\n"
	.string "right now, and even though our coward\l"
	.string "comrades quit on us, we need to buy\l"
	.string "time for Maxie to capture Groudon!$"

RivalYoureHere::
# 841 "data/maps/EverGrandeCity/scripts.pory"
	.string "{RIVAL}: {PLAYER}! You're finally here!$"

DawnApproach::
# 846 "data/maps/EverGrandeCity/scripts.pory"
	.string "Dawn: Hey, {PLAYER}! After everything\n"
	.string "that happened in Sootopolis, I called\l"
	.string "up {RIVAL}, and we decided to meet up\l"
	.string "here and wait for you.$"

RivalApproach::
# 853 "data/maps/EverGrandeCity/scripts.pory"
	.string "{RIVAL}: Dawn told me about\n"
	.string "everything that happened with Team\l"
	.string "Aqua, Team Magma, and Drake!\p"
	.string "I can't believe what he did, but I'm\n"
	.string "more impressed with how you were able\l"
	.string "to stop all of them by yourself!\p"
	.string "It feels silly to even say this, but we\n"
	.string "wanted to give you one final test\l"
	.string "before you head into Victory Road!\p"
	.string "We are rivals after all!\p"
	.string "Don't worry, we won't go easy on\n"
	.string "you hero, I know you'd hate that. So…\p"
	.string "What do you say to one last battle?$"

DawnMeFirst::
# 869 "data/maps/EverGrandeCity/scripts.pory"
	.string "Dawn: Hey, no fair {RIVAL}! We agreed\n"
	.string "I would go first!\p"
	.string "{RIVAL}: Right, I got carried away…\n"
	.string "I just can't wait to fight {PLAYER}!\p"
	.string "Go ahead then, but leave some for me!\p"
	.string "Dawn: I can't promise I will.$"

DawnPostBattle::
# 878 "data/maps/EverGrandeCity/scripts.pory"
	.string "Dawn: I'd love to say I weakened you for\n"
	.string "{RIVAL} but I doubt that's even true…\p"
	.string "Haha… You really are something else.\n"
	.string "I can't wait to go back home and tell\l"
	.string "everyone about you!$"

RivalMyTurn::
# 886 "data/maps/EverGrandeCity/scripts.pory"
	.string "{RIVAL}: That got my blood pumping {PLAYER}!\p"
	.string "Come at me with the same energy!$"
