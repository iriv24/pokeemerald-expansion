# 1 "data/maps/EverGrandeCity/scripts.pory"

# 2 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_MapScripts::
# 3 "data/maps/EverGrandeCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_OnTransition
# 4 "data/maps/EverGrandeCity/scripts.pory"
	.byte 0
# 5 "data/maps/EverGrandeCity/scripts.pory"

# 6 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_OnTransition:
# 7 "data/maps/EverGrandeCity/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
# 8 "data/maps/EverGrandeCity/scripts.pory"
	end
# 9 "data/maps/EverGrandeCity/scripts.pory"

# 10 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_VictoryRoadSign::
# 11 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_EnteringVictoryRoad, MSGBOX_SIGN
# 12 "data/maps/EverGrandeCity/scripts.pory"
	end
# 13 "data/maps/EverGrandeCity/scripts.pory"

# 14 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_CitySign::
# 15 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_CitySign, MSGBOX_SIGN
# 16 "data/maps/EverGrandeCity/scripts.pory"
	end
# 17 "data/maps/EverGrandeCity/scripts.pory"

# 18 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_PokemonLeagueSign::
# 19 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_EnteringPokemonLeague, MSGBOX_SIGN
# 20 "data/maps/EverGrandeCity/scripts.pory"
	end
# 21 "data/maps/EverGrandeCity/scripts.pory"

# 22 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_Rival::
# 23 "data/maps/EverGrandeCity/scripts.pory"
	lock
# 24 "data/maps/EverGrandeCity/scripts.pory"
	faceplayer
# 25 "data/maps/EverGrandeCity/scripts.pory"
	checkplayergender
# 26 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, EverGrandeCity_EventScript_May
# 27 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, EverGrandeCity_EventScript_Brendan
# 28 "data/maps/EverGrandeCity/scripts.pory"
	end
# 29 "data/maps/EverGrandeCity/scripts.pory"

# 30 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_May::
# 31 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_set FLAG_EVERGRANDE_CITY_BEAT_RIVAL, EverGrandeCity_EventScript_BeatRivalNotDawn
# 32 "data/maps/EverGrandeCity/scripts.pory"
	call_if_set FLAG_DECLINED_RIVAL_BATTLE_EVERGRANDE, EverGrandeCity_EventScript_MayAskToBattleAgain
# 33 "data/maps/EverGrandeCity/scripts.pory"
	call_if_unset FLAG_DECLINED_RIVAL_BATTLE_EVERGRANDE, EverGrandeCity_EventScript_MayAskToBattle
# 34 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, EverGrandeCity_EventScript_DeclineMayBattle
# 35 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_MayWontBeBeaten, MSGBOX_DEFAULT
# 36 "data/maps/EverGrandeCity/scripts.pory"
	switch VAR_STARTER_MON
# 37 "data/maps/EverGrandeCity/scripts.pory"
	case 0, EverGrandeCity_EventScript_BattleMayTreecko
# 38 "data/maps/EverGrandeCity/scripts.pory"
	case 1, EverGrandeCity_EventScript_BattleMayTorchic
# 39 "data/maps/EverGrandeCity/scripts.pory"
	case 2, EverGrandeCity_EventScript_BattleMayMudkip
# 40 "data/maps/EverGrandeCity/scripts.pory"
	end
# 41 "data/maps/EverGrandeCity/scripts.pory"

# 42 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_MayAskToBattleAgain::
# 43 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_MayBattleMe, MSGBOX_YESNO
# 44 "data/maps/EverGrandeCity/scripts.pory"
	return
# 45 "data/maps/EverGrandeCity/scripts.pory"

# 46 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_MayAskToBattle::
# 47 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_MayShoppingLetsBattle, MSGBOX_YESNO
# 48 "data/maps/EverGrandeCity/scripts.pory"
	return
# 49 "data/maps/EverGrandeCity/scripts.pory"

# 50 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_DeclineMayBattle::
# 51 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_DECLINED_RIVAL_BATTLE_EVERGRANDE
# 52 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_MayNotRaisingPokemon, MSGBOX_DEFAULT
# 53 "data/maps/EverGrandeCity/scripts.pory"
	release
# 54 "data/maps/EverGrandeCity/scripts.pory"
	end
# 55 "data/maps/EverGrandeCity/scripts.pory"

# 56 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_BattleMayTreecko::
# 57 "data/maps/EverGrandeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_EVERGRANDE_TREECKO, EverGrandeCity_Text_MayDefeat
# 58 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_DefeatedMay
# 59 "data/maps/EverGrandeCity/scripts.pory"
	end
# 60 "data/maps/EverGrandeCity/scripts.pory"

# 61 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_BattleMayTorchic::
# 62 "data/maps/EverGrandeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_EVERGRANDE_TORCHIC, EverGrandeCity_Text_MayDefeat
# 63 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_DefeatedMay
# 64 "data/maps/EverGrandeCity/scripts.pory"
	end
# 65 "data/maps/EverGrandeCity/scripts.pory"

# 66 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_BattleMayMudkip::
# 67 "data/maps/EverGrandeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_EVERGRANDE_MUDKIP, EverGrandeCity_Text_MayDefeat
# 68 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_DefeatedMay
# 69 "data/maps/EverGrandeCity/scripts.pory"
	end
# 70 "data/maps/EverGrandeCity/scripts.pory"

# 71 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_DefeatedMay::
# 72 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_EVERGRANDE_CITY_BEAT_RIVAL
# 73 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_set FLAG_BEAT_DAWN_EVERGRANDE, EverGrandeCity_EventScript_RivalsFlyAway
# 74 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_CanYouBeatDawn, MSGBOX_DEFAULT
# 75 "data/maps/EverGrandeCity/scripts.pory"
	releaseall
# 76 "data/maps/EverGrandeCity/scripts.pory"
	end
# 77 "data/maps/EverGrandeCity/scripts.pory"

# 78 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_Brendan::
# 79 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_set FLAG_EVERGRANDE_CITY_BEAT_RIVAL, EverGrandeCity_EventScript_BeatRivalNotDawn
# 80 "data/maps/EverGrandeCity/scripts.pory"
	call_if_set FLAG_DECLINED_RIVAL_BATTLE_EVERGRANDE, EverGrandeCity_EventScript_BrendanAskToBattleAgain
# 81 "data/maps/EverGrandeCity/scripts.pory"
	call_if_unset FLAG_DECLINED_RIVAL_BATTLE_EVERGRANDE, EverGrandeCity_EventScript_BrendanAskToBattle
# 82 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, EverGrandeCity_EventScript_DeclineBrendanBattle
# 83 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_BrendanWontBeBeaten, MSGBOX_DEFAULT
# 84 "data/maps/EverGrandeCity/scripts.pory"
	switch VAR_STARTER_MON
# 85 "data/maps/EverGrandeCity/scripts.pory"
	case 0, EverGrandeCity_EventScript_BattleBrendanTreecko
# 86 "data/maps/EverGrandeCity/scripts.pory"
	case 1, EverGrandeCity_EventScript_BattleBrendanTorchic
# 87 "data/maps/EverGrandeCity/scripts.pory"
	case 2, EverGrandeCity_EventScript_BattleBrendanMudkip
# 88 "data/maps/EverGrandeCity/scripts.pory"
	end
# 89 "data/maps/EverGrandeCity/scripts.pory"

# 90 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_BrendanAskToBattleAgain::
# 91 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_BrendanBattleMe, MSGBOX_YESNO
# 92 "data/maps/EverGrandeCity/scripts.pory"
	return
# 93 "data/maps/EverGrandeCity/scripts.pory"

# 94 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_BrendanAskToBattle::
# 95 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_BrendanShoppingLetsBattle, MSGBOX_YESNO
# 96 "data/maps/EverGrandeCity/scripts.pory"
	return
# 97 "data/maps/EverGrandeCity/scripts.pory"

# 98 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_DeclineBrendanBattle::
# 99 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_DECLINED_RIVAL_BATTLE_EVERGRANDE
# 100 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_BrendanNoConfidence, MSGBOX_DEFAULT
# 101 "data/maps/EverGrandeCity/scripts.pory"
	release
# 102 "data/maps/EverGrandeCity/scripts.pory"
	end
# 103 "data/maps/EverGrandeCity/scripts.pory"

# 104 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_BattleBrendanTreecko::
# 105 "data/maps/EverGrandeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_EVERGRANDE_TREECKO, EverGrandeCity_Text_BrendanDefeat
# 106 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_DefeatedBrendan
# 107 "data/maps/EverGrandeCity/scripts.pory"
	end
# 108 "data/maps/EverGrandeCity/scripts.pory"

# 109 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_BattleBrendanTorchic::
# 110 "data/maps/EverGrandeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_EVERGRANDE_TORCHIC, EverGrandeCity_Text_BrendanDefeat
# 111 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_DefeatedBrendan
# 112 "data/maps/EverGrandeCity/scripts.pory"
	end
# 113 "data/maps/EverGrandeCity/scripts.pory"

# 114 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_BattleBrendanMudkip::
# 115 "data/maps/EverGrandeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_EVERGRANDE_MUDKIP, EverGrandeCity_Text_BrendanDefeat
# 116 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_DefeatedBrendan
# 117 "data/maps/EverGrandeCity/scripts.pory"
	end
# 118 "data/maps/EverGrandeCity/scripts.pory"

# 119 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_DefeatedBrendan::
# 120 "data/maps/EverGrandeCity/scripts.pory"
    setflag FLAG_EVERGRANDE_CITY_BEAT_RIVAL
# 121 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_set FLAG_BEAT_DAWN_EVERGRANDE, EverGrandeCity_EventScript_RivalsFlyAway
# 122 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_CanYouBeatDawn, MSGBOX_DEFAULT
# 123 "data/maps/EverGrandeCity/scripts.pory"
	releaseall
# 124 "data/maps/EverGrandeCity/scripts.pory"
	end
# 125 "data/maps/EverGrandeCity/scripts.pory"

# 126 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_BeatRivalNotDawn::
# 127 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_NotMovingUntilDawn, MSGBOX_DEFAULT
# 128 "data/maps/EverGrandeCity/scripts.pory"
	releaseall
# 129 "data/maps/EverGrandeCity/scripts.pory"
	end
# 130 "data/maps/EverGrandeCity/scripts.pory"

# 131 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_RivalFlyAway::
# 132 "data/maps/EverGrandeCity/scripts.pory"
	closemessage
# 133 "data/maps/EverGrandeCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
# 134 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 0
# 135 "data/maps/EverGrandeCity/scripts.pory"
	delay 50
# 136 "data/maps/EverGrandeCity/scripts.pory"
	setfieldeffectargument 0, 1
# 137 "data/maps/EverGrandeCity/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 138 "data/maps/EverGrandeCity/scripts.pory"
	delay 15
# 139 "data/maps/EverGrandeCity/scripts.pory"
	removeobject VAR_LAST_TALKED
# 140 "data/maps/EverGrandeCity/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 141 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_MET_RIVAL_LILYCOVE
# 142 "data/maps/EverGrandeCity/scripts.pory"
	release
# 143 "data/maps/EverGrandeCity/scripts.pory"
	end
# 144 "data/maps/EverGrandeCity/scripts.pory"

# 145 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_SetVisitedEverGrande::
# 146 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_VISITED_EVER_GRANDE_CITY
# 147 "data/maps/EverGrandeCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 148 "data/maps/EverGrandeCity/scripts.pory"
	end
# 149 "data/maps/EverGrandeCity/scripts.pory"

# 150 "data/maps/EverGrandeCity/scripts.pory"

# 151 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_MayShoppingLetsBattle:
# 152 "data/maps/EverGrandeCity/scripts.pory"
	.string "{PLAYER}! Dawn told me about\n"
# 153 "data/maps/EverGrandeCity/scripts.pory"
	.string "everything that happened with Team\p"
# 154 "data/maps/EverGrandeCity/scripts.pory"
	.string "Aqua, Team Magma, and Drake! I can't\n"
# 155 "data/maps/EverGrandeCity/scripts.pory"
	.string "believe what he did, but I'm more\p"
# 156 "data/maps/EverGrandeCity/scripts.pory"
	.string "impressed with how you were able to\n"
# 157 "data/maps/EverGrandeCity/scripts.pory"
	.string "stop all of them by yourself! It feels\p"
# 158 "data/maps/EverGrandeCity/scripts.pory"
	.string "silly to even say this, but we wanted to\n"
# 159 "data/maps/EverGrandeCity/scripts.pory"
	.string "give you one final test before you head\p"
# 160 "data/maps/EverGrandeCity/scripts.pory"
	.string "into Victory Road! We are rivals after\n"
# 161 "data/maps/EverGrandeCity/scripts.pory"
	.string "all!\p"
# 162 "data/maps/EverGrandeCity/scripts.pory"
	.string "Don't worry, we won't make you fight us\n"
# 163 "data/maps/EverGrandeCity/scripts.pory"
	.string "both at once. But you will have to beat\l"
# 164 "data/maps/EverGrandeCity/scripts.pory"
	.string "us both to get through! So…\p"
# 165 "data/maps/EverGrandeCity/scripts.pory"
	.string "What do you say to one last battle?$"
# 166 "data/maps/EverGrandeCity/scripts.pory"

# 167 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_MayNotRaisingPokemon:
# 168 "data/maps/EverGrandeCity/scripts.pory"
	.string "Oh, alright then. But just so you know,\n"
# 169 "data/maps/EverGrandeCity/scripts.pory"
	.string "I'm not going anywhere until you beat\l"
# 170 "data/maps/EverGrandeCity/scripts.pory"
	.string "Dawn and me!$"
# 171 "data/maps/EverGrandeCity/scripts.pory"

# 172 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_MayBattleMe:
# 173 "data/maps/EverGrandeCity/scripts.pory"
	.string "Come on, battle with me one more time!\n"
# 174 "data/maps/EverGrandeCity/scripts.pory"
	.string "What do you say?$"
# 175 "data/maps/EverGrandeCity/scripts.pory"

# 176 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_MayWontBeBeaten:
# 177 "data/maps/EverGrandeCity/scripts.pory"
	.string "I'll show you how strong I've become!$"
# 178 "data/maps/EverGrandeCity/scripts.pory"

# 179 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_MayDefeat:
# 180 "data/maps/EverGrandeCity/scripts.pory"
	.string "… … … … … … … …\p"
# 181 "data/maps/EverGrandeCity/scripts.pory"
	.string "I remember the battle I had with you,\n"
# 182 "data/maps/EverGrandeCity/scripts.pory"
	.string "{PLAYER}{KUN}, on Route 103.\p"
# 183 "data/maps/EverGrandeCity/scripts.pory"
	.string "That battle helped you become this\n"
# 184 "data/maps/EverGrandeCity/scripts.pory"
	.string "strong, {PLAYER}{KUN}, didn't it?$"
# 185 "data/maps/EverGrandeCity/scripts.pory"

# 186 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_MayGoingBackToLittleroot:
# 187 "data/maps/EverGrandeCity/scripts.pory"
	.string "May: I'm thinking of going back to\n"
# 188 "data/maps/EverGrandeCity/scripts.pory"
	.string "Littleroot soon.\p"
# 189 "data/maps/EverGrandeCity/scripts.pory"
	.string "I've caught a decent group of Pokémon,\n"
# 190 "data/maps/EverGrandeCity/scripts.pory"
	.string "and my Pokédex is coming along, so\l"
# 191 "data/maps/EverGrandeCity/scripts.pory"
	.string "I'm going home to show my dad.\p"
# 192 "data/maps/EverGrandeCity/scripts.pory"
	.string "Like Dawn said, you've got this,\n"
# 193 "data/maps/EverGrandeCity/scripts.pory"
	.string "{PLAYER}. I know you're strong enough\l"
# 194 "data/maps/EverGrandeCity/scripts.pory"
	.string "to become the Champion!\p"
# 195 "data/maps/EverGrandeCity/scripts.pory"
	.string "Oh, and one more thing. When we first\n"
# 196 "data/maps/EverGrandeCity/scripts.pory"
	.string "got here, we saw Wally walking into\p"
# 197 "data/maps/EverGrandeCity/scripts.pory"
	.string "Victory Road. He looked really\n"
# 198 "data/maps/EverGrandeCity/scripts.pory"
	.string "determined, he was almost like a\p"
# 199 "data/maps/EverGrandeCity/scripts.pory"
	.string "different person than that timid kid\n"
# 200 "data/maps/EverGrandeCity/scripts.pory"
	.string "you beat in Mauville…\l"
# 201 "data/maps/EverGrandeCity/scripts.pory"
	.string "Just thought I'd give you a heads up!\p"
# 202 "data/maps/EverGrandeCity/scripts.pory"
	.string "Anyway, take care, {PLAYER}, I'm sure\n"
# 203 "data/maps/EverGrandeCity/scripts.pory"
	.string "I'll see you again soon!$"
# 204 "data/maps/EverGrandeCity/scripts.pory"

# 205 "data/maps/EverGrandeCity/scripts.pory"

# 206 "data/maps/EverGrandeCity/scripts.pory"

# 207 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_BrendanShoppingLetsBattle:
# 208 "data/maps/EverGrandeCity/scripts.pory"
	.string "{PLAYER}! Dawn told me about\n"
# 209 "data/maps/EverGrandeCity/scripts.pory"
	.string "everything that happened with Team\p"
# 210 "data/maps/EverGrandeCity/scripts.pory"
	.string "Aqua, Team Magma, and Drake! I can't\n"
# 211 "data/maps/EverGrandeCity/scripts.pory"
	.string "believe what he did, but I'm more\p"
# 212 "data/maps/EverGrandeCity/scripts.pory"
	.string "impressed with how you were able to\n"
# 213 "data/maps/EverGrandeCity/scripts.pory"
	.string "stop all of them by yourself! It feels\p"
# 214 "data/maps/EverGrandeCity/scripts.pory"
	.string "silly to even say this, but we wanted to\n"
# 215 "data/maps/EverGrandeCity/scripts.pory"
	.string "give you one final test before you head\p"
# 216 "data/maps/EverGrandeCity/scripts.pory"
	.string "into Victory Road! We are rivals after\n"
# 217 "data/maps/EverGrandeCity/scripts.pory"
	.string "all!\p"
# 218 "data/maps/EverGrandeCity/scripts.pory"
	.string "Don't worry, we won't make you fight us\n"
# 219 "data/maps/EverGrandeCity/scripts.pory"
	.string "both at once. But you will have to beat\l"
# 220 "data/maps/EverGrandeCity/scripts.pory"
	.string "us both to get through! So…\p"
# 221 "data/maps/EverGrandeCity/scripts.pory"
	.string "What do you say to one last battle?$"
# 222 "data/maps/EverGrandeCity/scripts.pory"

# 223 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_BrendanNoConfidence:
# 224 "data/maps/EverGrandeCity/scripts.pory"
	.string "If you say so, but I'm not going\n"
# 225 "data/maps/EverGrandeCity/scripts.pory"
	.string "anywhere until we battle!$"
# 226 "data/maps/EverGrandeCity/scripts.pory"

# 227 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_BrendanBattleMe:
# 228 "data/maps/EverGrandeCity/scripts.pory"
	.string "Come on, {PLAYER}. I'm really going to\n"
# 229 "data/maps/EverGrandeCity/scripts.pory"
	.string "beat you this time!\l"
# 230 "data/maps/EverGrandeCity/scripts.pory"
	.string "What do you say?$"
# 231 "data/maps/EverGrandeCity/scripts.pory"

# 232 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_BrendanWontBeBeaten:
# 233 "data/maps/EverGrandeCity/scripts.pory"
	.string "I'll show you how strong I've become!$"
# 234 "data/maps/EverGrandeCity/scripts.pory"

# 235 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_BrendanDefeat:
# 236 "data/maps/EverGrandeCity/scripts.pory"
	.string "… … … … … … … …\p"
# 237 "data/maps/EverGrandeCity/scripts.pory"
	.string "I remember the battle I had with you,\n"
# 238 "data/maps/EverGrandeCity/scripts.pory"
	.string "{PLAYER}{KUN}, on Route 103.\p"
# 239 "data/maps/EverGrandeCity/scripts.pory"
	.string "That battle helped you become this\n"
# 240 "data/maps/EverGrandeCity/scripts.pory"
	.string "strong, {PLAYER}{KUN}, didn't it?$"
# 241 "data/maps/EverGrandeCity/scripts.pory"

# 242 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_BrendanGoingBackToLittleroot:
# 243 "data/maps/EverGrandeCity/scripts.pory"
	.string "Brendan: I…\n"
# 244 "data/maps/EverGrandeCity/scripts.pory"
	.string "I plan on going home to Littleroot.\p"
# 245 "data/maps/EverGrandeCity/scripts.pory"
	.string "You know I'm helping out my dad on his\n"
# 246 "data/maps/EverGrandeCity/scripts.pory"
	.string "Pokédex. It's coming together pretty\l"
# 247 "data/maps/EverGrandeCity/scripts.pory"
	.string "decently, so I should go show him.\p"
# 248 "data/maps/EverGrandeCity/scripts.pory"
	.string "Like Dawn said, you've got this,\n"
# 249 "data/maps/EverGrandeCity/scripts.pory"
	.string "{PLAYER}. I know you're strong enough\l"
# 250 "data/maps/EverGrandeCity/scripts.pory"
	.string "to become the Champion!\p"
# 251 "data/maps/EverGrandeCity/scripts.pory"
	.string "Oh, and one more thing. When we first\n"
# 252 "data/maps/EverGrandeCity/scripts.pory"
	.string "got here, we saw Wally walking into\p"
# 253 "data/maps/EverGrandeCity/scripts.pory"
	.string "Victory Road. He looked really\n"
# 254 "data/maps/EverGrandeCity/scripts.pory"
	.string "determined, he was almost like a\p"
# 255 "data/maps/EverGrandeCity/scripts.pory"
	.string "different person than that timid kid\n"
# 256 "data/maps/EverGrandeCity/scripts.pory"
	.string "you beat in Mauville…\l"
# 257 "data/maps/EverGrandeCity/scripts.pory"
	.string "Just thought I'd give you a heads up!\p"
# 258 "data/maps/EverGrandeCity/scripts.pory"
	.string "Anyway, take care, {PLAYER}, I'm sure\n"
# 259 "data/maps/EverGrandeCity/scripts.pory"
	.string "I'll see you again soon!$"
# 260 "data/maps/EverGrandeCity/scripts.pory"

# 261 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_EnteringVictoryRoad:
# 262 "data/maps/EverGrandeCity/scripts.pory"
	.string "ENTERING VICTORY ROAD$"
# 263 "data/maps/EverGrandeCity/scripts.pory"

# 264 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_EnteringPokemonLeague:
# 265 "data/maps/EverGrandeCity/scripts.pory"
	.string "ENTERING POKéMON LEAGUE\n"
# 266 "data/maps/EverGrandeCity/scripts.pory"
	.string "CENTER GATE$"
# 267 "data/maps/EverGrandeCity/scripts.pory"

# 268 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_CitySign:
# 269 "data/maps/EverGrandeCity/scripts.pory"
	.string "EVER GRANDE CITY\p"
# 270 "data/maps/EverGrandeCity/scripts.pory"
	.string "“The paradise of flowers, the sea,\n"
# 271 "data/maps/EverGrandeCity/scripts.pory"
	.string "and POKéMON.”$"

EverGrandeCity_EventScript_Dawn::
# 276 "data/maps/EverGrandeCity/scripts.pory"
	lockall
# 277 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 2, Common_Movement_FacePlayer
# 278 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_set FLAG_BEAT_DAWN_EVERGRANDE, EverGrandeCity_EventScript_BeatDawnNotRival
# 279 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_set FLAG_DECLINED_DAWN_EVERGRANDE, EverGrandeCity_EventScript_DawnRequestBattleAgain
# 280 "data/maps/EverGrandeCity/scripts.pory"
	msgbox Dawn_GreetingEvergrande, MSGBOX_YESNO
# 281 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_BattleDawnPrompt
	end


EverGrandeCity_EventScript_DawnRequestBattleAgain::
# 286 "data/maps/EverGrandeCity/scripts.pory"
	msgbox ReadyYetFinal, MSGBOX_YESNO
# 287 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_BattleDawnPrompt
	end


EverGrandeCity_EventScript_BattleDawnPrompt::
# 292 "data/maps/EverGrandeCity/scripts.pory"
	call_if_eq VAR_RESULT, YES, EverGrandeCity_EventScript_BattleDawn
# 293 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, EverGrandeCity_EventScript_DeclineDawnBattle
# 294 "data/maps/EverGrandeCity/scripts.pory"
	closemessage
	end


EverGrandeCity_EventScript_DeclineDawnBattle::
# 299 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_DECLINED_DAWN_EVERGRANDE
# 300 "data/maps/EverGrandeCity/scripts.pory"
	msgbox ComeBackWhenReadyFinal, MSGBOX_DEFAULT
# 301 "data/maps/EverGrandeCity/scripts.pory"
	release
	end


EverGrandeCity_EventScript_BattleDawn::
# 306 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_EventScript_BattleDawn_Text_0, MSGBOX_DEFAULT
# 307 "data/maps/EverGrandeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_DAWN_EVERGRANDE, Dawn_OutroEvergrande
# 308 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_DawnDefeated
	return


EverGrandeCity_EventScript_DawnDefeated::
# 314 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_BEAT_DAWN_EVERGRANDE
# 315 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_set FLAG_EVERGRANDE_CITY_BEAT_RIVAL, EverGrandeCity_EventScript_RivalsFlyAway
# 316 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_CanYouBeatRival, MSGBOX_DEFAULT
# 317 "data/maps/EverGrandeCity/scripts.pory"
	releaseall
	end


EverGrandeCity_EventScript_BeatDawnNotRival::
# 322 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_NotMovingUntilRival, MSGBOX_DEFAULT
# 323 "data/maps/EverGrandeCity/scripts.pory"
	releaseall
	end


EverGrandeCity_EventScript_RivalsFlyAway::
# 329 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterDown
# 330 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 0
# 331 "data/maps/EverGrandeCity/scripts.pory"
	msgbox DawnFarewell, MSGBOX_DEFAULT
# 332 "data/maps/EverGrandeCity/scripts.pory"
	closemessage
# 333 "data/maps/EverGrandeCity/scripts.pory"
	delay 30
# 334 "data/maps/EverGrandeCity/scripts.pory"
	setfieldeffectargument 0, 1
# 335 "data/maps/EverGrandeCity/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 336 "data/maps/EverGrandeCity/scripts.pory"
	delay 15
# 337 "data/maps/EverGrandeCity/scripts.pory"
	removeobject 2
# 338 "data/maps/EverGrandeCity/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 339 "data/maps/EverGrandeCity/scripts.pory"
	delay 15
# 340 "data/maps/EverGrandeCity/scripts.pory"
	checkplayergender
# 341 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, EverGrandeCity_EventScript_MayFarewell
# 342 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, EverGrandeCity_EventScript_BrendanFarewell
# 343 "data/maps/EverGrandeCity/scripts.pory"
	releaseall
	end


EverGrandeCity_EventScript_MayFarewell::
# 348 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterDown
# 349 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 0
# 350 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_MayGoingBackToLittleroot, MSGBOX_DEFAULT
# 351 "data/maps/EverGrandeCity/scripts.pory"
	closemessage
# 352 "data/maps/EverGrandeCity/scripts.pory"
	delay 30
# 353 "data/maps/EverGrandeCity/scripts.pory"
	setfieldeffectargument 0, 1
# 354 "data/maps/EverGrandeCity/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 355 "data/maps/EverGrandeCity/scripts.pory"
	delay 15
# 356 "data/maps/EverGrandeCity/scripts.pory"
	removeobject 1
# 357 "data/maps/EverGrandeCity/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 358 "data/maps/EverGrandeCity/scripts.pory"
	delay 15
# 359 "data/maps/EverGrandeCity/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 360 "data/maps/EverGrandeCity/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_PICHU_DOLL
# 361 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_MET_RIVAL_LILYCOVE
# 362 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_BEAT_BOTH_RIVALS
# 363 "data/maps/EverGrandeCity/scripts.pory"
	releaseall
	end


EverGrandeCity_EventScript_BrendanFarewell::
# 368 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterDown
# 369 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 0
# 370 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_BrendanGoingBackToLittleroot, MSGBOX_DEFAULT
# 371 "data/maps/EverGrandeCity/scripts.pory"
	closemessage
# 372 "data/maps/EverGrandeCity/scripts.pory"
	delay 30
# 373 "data/maps/EverGrandeCity/scripts.pory"
	setfieldeffectargument 0, 1
# 374 "data/maps/EverGrandeCity/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 375 "data/maps/EverGrandeCity/scripts.pory"
	delay 15
# 376 "data/maps/EverGrandeCity/scripts.pory"
	removeobject 1
# 377 "data/maps/EverGrandeCity/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 378 "data/maps/EverGrandeCity/scripts.pory"
	delay 15
# 379 "data/maps/EverGrandeCity/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 380 "data/maps/EverGrandeCity/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_SWABLU_DOLL
# 381 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_MET_RIVAL_LILYCOVE
# 382 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_BEAT_BOTH_RIVALS
# 383 "data/maps/EverGrandeCity/scripts.pory"
	releaseall
	end


EverGrandeCity_EventScript_BattleDawn_Text_0:
# 306 "data/maps/EverGrandeCity/scripts.pory"
	.string "Let's do this, one last time!$"

Dawn_GreetingEvergrande::
# 388 "data/maps/EverGrandeCity/scripts.pory"
	.string "Hey, {PLAYER}! After everything that\n"
	.string "happened in Sootopolis, I called up\p"
	.string "{RIVAL}, and we decided to meet up here\n"
	.string "and wait for you. \p"
	.string "You've beaten us both a number of\n"
	.string "times, but we agreed that we can't just\p"
	.string "let you through to Victory Road\n"
	.string "without one more battle for each of us!\p"
	.string "Don't worry, we won't make you fight us\n"
	.string "both at once. But you will have to beat\l"
	.string "us both to get through!\p"
	.string "So what do you say, ready to have our\n"
	.string "final battle?$"

ReadyYetFinal::
# 404 "data/maps/EverGrandeCity/scripts.pory"
	.string "Ready for our final battle now?$"

ComeBackWhenReadyFinal::
# 408 "data/maps/EverGrandeCity/scripts.pory"
	.string "Come back when you're ready, I'll be\n"
	.string "here!$"

Dawn_OutroEvergrande::
# 413 "data/maps/EverGrandeCity/scripts.pory"
	.string "Looks like you passed my final test\n"
	.string "with flying colors, {PLAYER}.\p"
	.string "Not that there was ever any doubt, but\n"
	.string "you're definitely read for the Pokémon\l"
	.string "League.$"

EverGrandeCity_Text_CanYouBeatRival::
# 421 "data/maps/EverGrandeCity/scripts.pory"
	.string "Thanks for one last great battle,\n"
	.string "{PLAYER}. But I'm not going anywhere\l"
	.string "until you beat {RIVAL} too!$"

EverGrandeCity_Text_NotMovingUntilRival::
# 428 "data/maps/EverGrandeCity/scripts.pory"
	.string "I'm not going anywhere until\n"
	.string "you beat {RIVAL} too!$"

EverGrandeCity_Text_CanYouBeatDawn::
# 433 "data/maps/EverGrandeCity/scripts.pory"
	.string "That was a great battle, {PLAYER}, but\n"
	.string "can you beat Dawn too?$"

EverGrandeCity_Text_NotMovingUntilDawn::
# 438 "data/maps/EverGrandeCity/scripts.pory"
	.string "I'm not going anywhere until\n"
	.string "you beat Dawn too!$"

DawnFarewell::
# 443 "data/maps/EverGrandeCity/scripts.pory"
	.string "Dawn: Well, {PLAYER}, neither of us were\n"
	.string "a match for you once again.\p"
	.string "I have nothing more I can give you to\n"
	.string "help, I just want to wish you good luck\p"
	.string "against the Elite Four when you make it\n"
	.string "there.\p"
	.string "Become the Champion, {PLAYER}, I know\n"
	.string "you can do it!\p"
	.string "So long, my friend, until next time!$"
