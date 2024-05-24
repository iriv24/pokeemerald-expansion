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
	end
# 11 "data/maps/EverGrandeCity/scripts.pory"

# 12 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_VictoryRoadSign::
# 13 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_EnteringVictoryRoad, MSGBOX_SIGN
# 14 "data/maps/EverGrandeCity/scripts.pory"
	end
# 15 "data/maps/EverGrandeCity/scripts.pory"

# 16 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_CitySign::
# 17 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_CitySign, MSGBOX_SIGN
# 18 "data/maps/EverGrandeCity/scripts.pory"
	end
# 19 "data/maps/EverGrandeCity/scripts.pory"

# 20 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_PokemonLeagueSign::
# 21 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_EnteringPokemonLeague, MSGBOX_SIGN
# 22 "data/maps/EverGrandeCity/scripts.pory"
	end
# 23 "data/maps/EverGrandeCity/scripts.pory"

# 24 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_Rival::
# 25 "data/maps/EverGrandeCity/scripts.pory"
	lock
# 26 "data/maps/EverGrandeCity/scripts.pory"
	faceplayer
# 27 "data/maps/EverGrandeCity/scripts.pory"
	checkplayergender
# 28 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, EverGrandeCity_EventScript_May
# 29 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, EverGrandeCity_EventScript_Brendan
# 30 "data/maps/EverGrandeCity/scripts.pory"
	end
# 31 "data/maps/EverGrandeCity/scripts.pory"

# 32 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_May::
# 33 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_set FLAG_EVERGRANDE_CITY_BEAT_RIVAL, EverGrandeCity_EventScript_BeatRivalNotDawn
# 34 "data/maps/EverGrandeCity/scripts.pory"
	call_if_set FLAG_DECLINED_RIVAL_BATTLE_EVERGRANDE, EverGrandeCity_EventScript_MayAskToBattleAgain
# 35 "data/maps/EverGrandeCity/scripts.pory"
	call_if_unset FLAG_DECLINED_RIVAL_BATTLE_EVERGRANDE, EverGrandeCity_EventScript_MayAskToBattle
# 36 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, EverGrandeCity_EventScript_DeclineMayBattle
# 37 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_MayWontBeBeaten, MSGBOX_DEFAULT
# 38 "data/maps/EverGrandeCity/scripts.pory"
	switch VAR_STARTER_MON
# 39 "data/maps/EverGrandeCity/scripts.pory"
	case 0, EverGrandeCity_EventScript_BattleMayTreecko
# 40 "data/maps/EverGrandeCity/scripts.pory"
	case 1, EverGrandeCity_EventScript_BattleMayTorchic
# 41 "data/maps/EverGrandeCity/scripts.pory"
	case 2, EverGrandeCity_EventScript_BattleMayMudkip
# 42 "data/maps/EverGrandeCity/scripts.pory"
	end
# 43 "data/maps/EverGrandeCity/scripts.pory"

# 44 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_MayAskToBattleAgain::
# 45 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_MayBattleMe, MSGBOX_YESNO
# 46 "data/maps/EverGrandeCity/scripts.pory"
	return
# 47 "data/maps/EverGrandeCity/scripts.pory"

# 48 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_MayAskToBattle::
# 49 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_MayShoppingLetsBattle, MSGBOX_YESNO
# 50 "data/maps/EverGrandeCity/scripts.pory"
	return
# 51 "data/maps/EverGrandeCity/scripts.pory"

# 52 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_DeclineMayBattle::
# 53 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_DECLINED_RIVAL_BATTLE_EVERGRANDE
# 54 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_MayNotRaisingPokemon, MSGBOX_DEFAULT
# 55 "data/maps/EverGrandeCity/scripts.pory"
	release
# 56 "data/maps/EverGrandeCity/scripts.pory"
	end
# 57 "data/maps/EverGrandeCity/scripts.pory"

# 58 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_BattleMayTreecko::
# 59 "data/maps/EverGrandeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_EVERGRANDE_TREECKO, EverGrandeCity_Text_MayDefeat
# 60 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_DefeatedMay
# 61 "data/maps/EverGrandeCity/scripts.pory"
	end
# 62 "data/maps/EverGrandeCity/scripts.pory"

# 63 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_BattleMayTorchic::
# 64 "data/maps/EverGrandeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_EVERGRANDE_TORCHIC, EverGrandeCity_Text_MayDefeat
# 65 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_DefeatedMay
# 66 "data/maps/EverGrandeCity/scripts.pory"
	end
# 67 "data/maps/EverGrandeCity/scripts.pory"

# 68 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_BattleMayMudkip::
# 69 "data/maps/EverGrandeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_EVERGRANDE_MUDKIP, EverGrandeCity_Text_MayDefeat
# 70 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_DefeatedMay
# 71 "data/maps/EverGrandeCity/scripts.pory"
	end
# 72 "data/maps/EverGrandeCity/scripts.pory"

# 73 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_DefeatedMay::
# 74 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_EVERGRANDE_CITY_BEAT_RIVAL
# 75 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_set FLAG_BEAT_DAWN_EVERGRANDE, EverGrandeCity_EventScript_RivalsFlyAway
# 76 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_CanYouBeatDawn, MSGBOX_DEFAULT
# 77 "data/maps/EverGrandeCity/scripts.pory"
	releaseall
# 78 "data/maps/EverGrandeCity/scripts.pory"
	end
# 79 "data/maps/EverGrandeCity/scripts.pory"

# 80 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_Brendan::
# 81 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_set FLAG_EVERGRANDE_CITY_BEAT_RIVAL, EverGrandeCity_EventScript_BeatRivalNotDawn
# 82 "data/maps/EverGrandeCity/scripts.pory"
	call_if_set FLAG_DECLINED_RIVAL_BATTLE_EVERGRANDE, EverGrandeCity_EventScript_BrendanAskToBattleAgain
# 83 "data/maps/EverGrandeCity/scripts.pory"
	call_if_unset FLAG_DECLINED_RIVAL_BATTLE_EVERGRANDE, EverGrandeCity_EventScript_BrendanAskToBattle
# 84 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, EverGrandeCity_EventScript_DeclineBrendanBattle
# 85 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_BrendanWontBeBeaten, MSGBOX_DEFAULT
# 86 "data/maps/EverGrandeCity/scripts.pory"
	switch VAR_STARTER_MON
# 87 "data/maps/EverGrandeCity/scripts.pory"
	case 0, EverGrandeCity_EventScript_BattleBrendanTreecko
# 88 "data/maps/EverGrandeCity/scripts.pory"
	case 1, EverGrandeCity_EventScript_BattleBrendanTorchic
# 89 "data/maps/EverGrandeCity/scripts.pory"
	case 2, EverGrandeCity_EventScript_BattleBrendanMudkip
# 90 "data/maps/EverGrandeCity/scripts.pory"
	end
# 91 "data/maps/EverGrandeCity/scripts.pory"

# 92 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_BrendanAskToBattleAgain::
# 93 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_BrendanBattleMe, MSGBOX_YESNO
# 94 "data/maps/EverGrandeCity/scripts.pory"
	return
# 95 "data/maps/EverGrandeCity/scripts.pory"

# 96 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_BrendanAskToBattle::
# 97 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_BrendanShoppingLetsBattle, MSGBOX_YESNO
# 98 "data/maps/EverGrandeCity/scripts.pory"
	return
# 99 "data/maps/EverGrandeCity/scripts.pory"

# 100 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_DeclineBrendanBattle::
# 101 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_DECLINED_RIVAL_BATTLE_EVERGRANDE
# 102 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_BrendanNoConfidence, MSGBOX_DEFAULT
# 103 "data/maps/EverGrandeCity/scripts.pory"
	release
# 104 "data/maps/EverGrandeCity/scripts.pory"
	end
# 105 "data/maps/EverGrandeCity/scripts.pory"

# 106 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_BattleBrendanTreecko::
# 107 "data/maps/EverGrandeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_EVERGRANDE_TREECKO, EverGrandeCity_Text_BrendanDefeat
# 108 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_DefeatedBrendan
# 109 "data/maps/EverGrandeCity/scripts.pory"
	end
# 110 "data/maps/EverGrandeCity/scripts.pory"

# 111 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_BattleBrendanTorchic::
# 112 "data/maps/EverGrandeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_EVERGRANDE_TORCHIC, EverGrandeCity_Text_BrendanDefeat
# 113 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_DefeatedBrendan
# 114 "data/maps/EverGrandeCity/scripts.pory"
	end
# 115 "data/maps/EverGrandeCity/scripts.pory"

# 116 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_BattleBrendanMudkip::
# 117 "data/maps/EverGrandeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_EVERGRANDE_MUDKIP, EverGrandeCity_Text_BrendanDefeat
# 118 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_DefeatedBrendan
# 119 "data/maps/EverGrandeCity/scripts.pory"
	end
# 120 "data/maps/EverGrandeCity/scripts.pory"

# 121 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_DefeatedBrendan::
# 122 "data/maps/EverGrandeCity/scripts.pory"
    setflag FLAG_EVERGRANDE_CITY_BEAT_RIVAL
# 123 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_set FLAG_BEAT_DAWN_EVERGRANDE, EverGrandeCity_EventScript_RivalsFlyAway
# 124 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_CanYouBeatDawn, MSGBOX_DEFAULT
# 125 "data/maps/EverGrandeCity/scripts.pory"
	releaseall
# 126 "data/maps/EverGrandeCity/scripts.pory"
	end
# 127 "data/maps/EverGrandeCity/scripts.pory"

# 128 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_BeatRivalNotDawn::
# 129 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_NotMovingUntilDawn, MSGBOX_DEFAULT
# 130 "data/maps/EverGrandeCity/scripts.pory"
	releaseall
# 131 "data/maps/EverGrandeCity/scripts.pory"
	end
# 132 "data/maps/EverGrandeCity/scripts.pory"

# 133 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_RivalFlyAway::
# 134 "data/maps/EverGrandeCity/scripts.pory"
	closemessage
# 135 "data/maps/EverGrandeCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
# 136 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 0
# 137 "data/maps/EverGrandeCity/scripts.pory"
	delay 50
# 138 "data/maps/EverGrandeCity/scripts.pory"
	setfieldeffectargument 0, 1
# 139 "data/maps/EverGrandeCity/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 140 "data/maps/EverGrandeCity/scripts.pory"
	delay 15
# 141 "data/maps/EverGrandeCity/scripts.pory"
	removeobject VAR_LAST_TALKED
# 142 "data/maps/EverGrandeCity/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 143 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_MET_RIVAL_LILYCOVE
# 144 "data/maps/EverGrandeCity/scripts.pory"
	release
# 145 "data/maps/EverGrandeCity/scripts.pory"
	end
# 146 "data/maps/EverGrandeCity/scripts.pory"

# 147 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_SetVisitedEverGrande::
# 148 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_VISITED_EVER_GRANDE_CITY
# 149 "data/maps/EverGrandeCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 150 "data/maps/EverGrandeCity/scripts.pory"
	end
# 151 "data/maps/EverGrandeCity/scripts.pory"

# 152 "data/maps/EverGrandeCity/scripts.pory"

# 153 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_MayShoppingLetsBattle:
# 154 "data/maps/EverGrandeCity/scripts.pory"
	.string "{PLAYER}! Dawn told me about\n"
# 155 "data/maps/EverGrandeCity/scripts.pory"
	.string "everything that happened with Team\p"
# 156 "data/maps/EverGrandeCity/scripts.pory"
	.string "Aqua, Team Magma, and Drake! I can't\n"
# 157 "data/maps/EverGrandeCity/scripts.pory"
	.string "believe what he did, but I'm more\p"
# 158 "data/maps/EverGrandeCity/scripts.pory"
	.string "impressed with how you were able to\n"
# 159 "data/maps/EverGrandeCity/scripts.pory"
	.string "stop all of them by yourself! It feels\p"
# 160 "data/maps/EverGrandeCity/scripts.pory"
	.string "silly to even say this, but we wanted to\n"
# 161 "data/maps/EverGrandeCity/scripts.pory"
	.string "give you one final test before you head\p"
# 162 "data/maps/EverGrandeCity/scripts.pory"
	.string "into Victory Road! We are rivals after\n"
# 163 "data/maps/EverGrandeCity/scripts.pory"
	.string "all!\p"
# 164 "data/maps/EverGrandeCity/scripts.pory"
	.string "Don't worry, we won't make you fight us\n"
# 165 "data/maps/EverGrandeCity/scripts.pory"
	.string "both at once. But you will have to beat\l"
# 166 "data/maps/EverGrandeCity/scripts.pory"
	.string "us both to get through! So…\p"
# 167 "data/maps/EverGrandeCity/scripts.pory"
	.string "What do you say to one last battle?$"
# 168 "data/maps/EverGrandeCity/scripts.pory"

# 169 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_MayNotRaisingPokemon:
# 170 "data/maps/EverGrandeCity/scripts.pory"
	.string "Oh, alright then. But just so you know,\n"
# 171 "data/maps/EverGrandeCity/scripts.pory"
	.string "I'm not going anywhere until you beat\l"
# 172 "data/maps/EverGrandeCity/scripts.pory"
	.string "Dawn and me!$"
# 173 "data/maps/EverGrandeCity/scripts.pory"

# 174 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_MayBattleMe:
# 175 "data/maps/EverGrandeCity/scripts.pory"
	.string "Come on, battle with me one more time!\n"
# 176 "data/maps/EverGrandeCity/scripts.pory"
	.string "What do you say?$"
# 177 "data/maps/EverGrandeCity/scripts.pory"

# 178 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_MayWontBeBeaten:
# 179 "data/maps/EverGrandeCity/scripts.pory"
	.string "I'll show you how strong I've become!$"
# 180 "data/maps/EverGrandeCity/scripts.pory"

# 181 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_MayDefeat:
# 182 "data/maps/EverGrandeCity/scripts.pory"
	.string "… … … … … … … …\p"
# 183 "data/maps/EverGrandeCity/scripts.pory"
	.string "I remember the battle I had with you,\n"
# 184 "data/maps/EverGrandeCity/scripts.pory"
	.string "{PLAYER}{KUN}, on Route 103.\p"
# 185 "data/maps/EverGrandeCity/scripts.pory"
	.string "That battle helped you become this\n"
# 186 "data/maps/EverGrandeCity/scripts.pory"
	.string "strong, {PLAYER}{KUN}, didn't it?$"
# 187 "data/maps/EverGrandeCity/scripts.pory"

# 188 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_MayGoingBackToLittleroot:
# 189 "data/maps/EverGrandeCity/scripts.pory"
	.string "May: I'm thinking of going back to\n"
# 190 "data/maps/EverGrandeCity/scripts.pory"
	.string "Littleroot soon.\p"
# 191 "data/maps/EverGrandeCity/scripts.pory"
	.string "I've caught a decent group of Pokémon,\n"
# 192 "data/maps/EverGrandeCity/scripts.pory"
	.string "and my Pokédex is coming along, so\l"
# 193 "data/maps/EverGrandeCity/scripts.pory"
	.string "I'm going home to show my dad.\p"
# 194 "data/maps/EverGrandeCity/scripts.pory"
	.string "Like Dawn said, you've got this,\n"
# 195 "data/maps/EverGrandeCity/scripts.pory"
	.string "{PLAYER}. I know you're strong enough\l"
# 196 "data/maps/EverGrandeCity/scripts.pory"
	.string "to become the Champion!\p"
# 197 "data/maps/EverGrandeCity/scripts.pory"
	.string "Oh, and one more thing. When we first\n"
# 198 "data/maps/EverGrandeCity/scripts.pory"
	.string "got here, we saw Wally walking into\p"
# 199 "data/maps/EverGrandeCity/scripts.pory"
	.string "Victory Road. He looked really\n"
# 200 "data/maps/EverGrandeCity/scripts.pory"
	.string "determined, he was almost like a\p"
# 201 "data/maps/EverGrandeCity/scripts.pory"
	.string "different person than that timid kid\n"
# 202 "data/maps/EverGrandeCity/scripts.pory"
	.string "you beat in Mauville…\l"
# 203 "data/maps/EverGrandeCity/scripts.pory"
	.string "Just thought I'd give you a heads up!\p"
# 204 "data/maps/EverGrandeCity/scripts.pory"
	.string "Anyway, take care, {PLAYER}, I'm sure\n"
# 205 "data/maps/EverGrandeCity/scripts.pory"
	.string "I'll see you again soon!$"
# 206 "data/maps/EverGrandeCity/scripts.pory"

# 207 "data/maps/EverGrandeCity/scripts.pory"

# 208 "data/maps/EverGrandeCity/scripts.pory"

# 209 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_BrendanShoppingLetsBattle:
# 210 "data/maps/EverGrandeCity/scripts.pory"
	.string "{PLAYER}! Dawn told me about\n"
# 211 "data/maps/EverGrandeCity/scripts.pory"
	.string "everything that happened with Team\p"
# 212 "data/maps/EverGrandeCity/scripts.pory"
	.string "Aqua, Team Magma, and Drake! I can't\n"
# 213 "data/maps/EverGrandeCity/scripts.pory"
	.string "believe what he did, but I'm more\p"
# 214 "data/maps/EverGrandeCity/scripts.pory"
	.string "impressed with how you were able to\n"
# 215 "data/maps/EverGrandeCity/scripts.pory"
	.string "stop all of them by yourself! It feels\p"
# 216 "data/maps/EverGrandeCity/scripts.pory"
	.string "silly to even say this, but we wanted to\n"
# 217 "data/maps/EverGrandeCity/scripts.pory"
	.string "give you one final test before you head\p"
# 218 "data/maps/EverGrandeCity/scripts.pory"
	.string "into Victory Road! We are rivals after\n"
# 219 "data/maps/EverGrandeCity/scripts.pory"
	.string "all!\p"
# 220 "data/maps/EverGrandeCity/scripts.pory"
	.string "Don't worry, we won't make you fight us\n"
# 221 "data/maps/EverGrandeCity/scripts.pory"
	.string "both at once. But you will have to beat\l"
# 222 "data/maps/EverGrandeCity/scripts.pory"
	.string "us both to get through! So…\p"
# 223 "data/maps/EverGrandeCity/scripts.pory"
	.string "What do you say to one last battle?$"
# 224 "data/maps/EverGrandeCity/scripts.pory"

# 225 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_BrendanNoConfidence:
# 226 "data/maps/EverGrandeCity/scripts.pory"
	.string "If you say so, but I'm not going\n"
# 227 "data/maps/EverGrandeCity/scripts.pory"
	.string "anywhere until we battle!$"
# 228 "data/maps/EverGrandeCity/scripts.pory"

# 229 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_BrendanBattleMe:
# 230 "data/maps/EverGrandeCity/scripts.pory"
	.string "Come on, {PLAYER}. I'm really going to\n"
# 231 "data/maps/EverGrandeCity/scripts.pory"
	.string "beat you this time!\l"
# 232 "data/maps/EverGrandeCity/scripts.pory"
	.string "What do you say?$"
# 233 "data/maps/EverGrandeCity/scripts.pory"

# 234 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_BrendanWontBeBeaten:
# 235 "data/maps/EverGrandeCity/scripts.pory"
	.string "I'll show you how strong I've become!$"
# 236 "data/maps/EverGrandeCity/scripts.pory"

# 237 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_BrendanDefeat:
# 238 "data/maps/EverGrandeCity/scripts.pory"
	.string "… … … … … … … …\p"
# 239 "data/maps/EverGrandeCity/scripts.pory"
	.string "I remember the battle I had with you,\n"
# 240 "data/maps/EverGrandeCity/scripts.pory"
	.string "{PLAYER}{KUN}, on Route 103.\p"
# 241 "data/maps/EverGrandeCity/scripts.pory"
	.string "That battle helped you become this\n"
# 242 "data/maps/EverGrandeCity/scripts.pory"
	.string "strong, {PLAYER}{KUN}, didn't it?$"
# 243 "data/maps/EverGrandeCity/scripts.pory"

# 244 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_BrendanGoingBackToLittleroot:
# 245 "data/maps/EverGrandeCity/scripts.pory"
	.string "Brendan: I…\n"
# 246 "data/maps/EverGrandeCity/scripts.pory"
	.string "I plan on going home to Littleroot.\p"
# 247 "data/maps/EverGrandeCity/scripts.pory"
	.string "You know I'm helping out my dad on his\n"
# 248 "data/maps/EverGrandeCity/scripts.pory"
	.string "Pokédex. It's coming together pretty\l"
# 249 "data/maps/EverGrandeCity/scripts.pory"
	.string "decently, so I should go show him.\p"
# 250 "data/maps/EverGrandeCity/scripts.pory"
	.string "Like Dawn said, you've got this,\n"
# 251 "data/maps/EverGrandeCity/scripts.pory"
	.string "{PLAYER}. I know you're strong enough\l"
# 252 "data/maps/EverGrandeCity/scripts.pory"
	.string "to become the Champion!\p"
# 253 "data/maps/EverGrandeCity/scripts.pory"
	.string "Oh, and one more thing. When we first\n"
# 254 "data/maps/EverGrandeCity/scripts.pory"
	.string "got here, we saw Wally walking into\p"
# 255 "data/maps/EverGrandeCity/scripts.pory"
	.string "Victory Road. He looked really\n"
# 256 "data/maps/EverGrandeCity/scripts.pory"
	.string "determined, he was almost like a\p"
# 257 "data/maps/EverGrandeCity/scripts.pory"
	.string "different person than that timid kid\n"
# 258 "data/maps/EverGrandeCity/scripts.pory"
	.string "you beat in Mauville…\l"
# 259 "data/maps/EverGrandeCity/scripts.pory"
	.string "Just thought I'd give you a heads up!\p"
# 260 "data/maps/EverGrandeCity/scripts.pory"
	.string "Anyway, take care, {PLAYER}, I'm sure\n"
# 261 "data/maps/EverGrandeCity/scripts.pory"
	.string "I'll see you again soon!$"
# 262 "data/maps/EverGrandeCity/scripts.pory"

# 263 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_EnteringVictoryRoad:
# 264 "data/maps/EverGrandeCity/scripts.pory"
	.string "ENTERING VICTORY ROAD$"
# 265 "data/maps/EverGrandeCity/scripts.pory"

# 266 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_EnteringPokemonLeague:
# 267 "data/maps/EverGrandeCity/scripts.pory"
	.string "ENTERING POKéMON LEAGUE\n"
# 268 "data/maps/EverGrandeCity/scripts.pory"
	.string "CENTER GATE$"
# 269 "data/maps/EverGrandeCity/scripts.pory"

# 270 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_CitySign:
# 271 "data/maps/EverGrandeCity/scripts.pory"
	.string "EVER GRANDE CITY\p"
# 272 "data/maps/EverGrandeCity/scripts.pory"
	.string "“The paradise of flowers, the sea,\n"
# 273 "data/maps/EverGrandeCity/scripts.pory"
	.string "and POKéMON.”$"

EverGrandeCity_EventScript_Dawn::
# 278 "data/maps/EverGrandeCity/scripts.pory"
	lockall
# 279 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 2, Common_Movement_FacePlayer
# 280 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_set FLAG_BEAT_DAWN_EVERGRANDE, EverGrandeCity_EventScript_BeatDawnNotRival
# 281 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_set FLAG_DECLINED_DAWN_EVERGRANDE, EverGrandeCity_EventScript_DawnRequestBattleAgain
# 282 "data/maps/EverGrandeCity/scripts.pory"
	msgbox Dawn_GreetingEvergrande, MSGBOX_YESNO
# 283 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_BattleDawnPrompt
	end


EverGrandeCity_EventScript_DawnRequestBattleAgain::
# 288 "data/maps/EverGrandeCity/scripts.pory"
	msgbox ReadyYetFinal, MSGBOX_YESNO
# 289 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_BattleDawnPrompt
	end


EverGrandeCity_EventScript_BattleDawnPrompt::
# 294 "data/maps/EverGrandeCity/scripts.pory"
	call_if_eq VAR_RESULT, YES, EverGrandeCity_EventScript_BattleDawn
# 295 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, EverGrandeCity_EventScript_DeclineDawnBattle
# 296 "data/maps/EverGrandeCity/scripts.pory"
	closemessage
	end


EverGrandeCity_EventScript_DeclineDawnBattle::
# 301 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_DECLINED_DAWN_EVERGRANDE
# 302 "data/maps/EverGrandeCity/scripts.pory"
	msgbox ComeBackWhenReadyFinal, MSGBOX_DEFAULT
# 303 "data/maps/EverGrandeCity/scripts.pory"
	release
	end


EverGrandeCity_EventScript_BattleDawn::
# 308 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_EventScript_BattleDawn_Text_0, MSGBOX_DEFAULT
# 309 "data/maps/EverGrandeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_DAWN_EVERGRANDE, Dawn_OutroEvergrande
# 310 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_DawnDefeated
	return


EverGrandeCity_EventScript_DawnDefeated::
# 316 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_BEAT_DAWN_EVERGRANDE
# 317 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_set FLAG_EVERGRANDE_CITY_BEAT_RIVAL, EverGrandeCity_EventScript_RivalsFlyAway
# 318 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_CanYouBeatRival, MSGBOX_DEFAULT
# 319 "data/maps/EverGrandeCity/scripts.pory"
	releaseall
	end


EverGrandeCity_EventScript_BeatDawnNotRival::
# 324 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_NotMovingUntilRival, MSGBOX_DEFAULT
# 325 "data/maps/EverGrandeCity/scripts.pory"
	releaseall
	end


EverGrandeCity_EventScript_RivalsFlyAway::
# 331 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterDown
# 332 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 0
# 333 "data/maps/EverGrandeCity/scripts.pory"
	msgbox DawnFarewell, MSGBOX_DEFAULT
# 334 "data/maps/EverGrandeCity/scripts.pory"
	giveitem ITEM_TM_DRACO_METEOR
# 335 "data/maps/EverGrandeCity/scripts.pory"
	msgbox DawnFarewell2, MSGBOX_DEFAULT
# 336 "data/maps/EverGrandeCity/scripts.pory"
	closemessage
# 337 "data/maps/EverGrandeCity/scripts.pory"
	delay 30
# 338 "data/maps/EverGrandeCity/scripts.pory"
	setfieldeffectargument 0, 1
# 339 "data/maps/EverGrandeCity/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 340 "data/maps/EverGrandeCity/scripts.pory"
	delay 15
# 341 "data/maps/EverGrandeCity/scripts.pory"
	removeobject 2
# 342 "data/maps/EverGrandeCity/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 343 "data/maps/EverGrandeCity/scripts.pory"
	delay 15
# 344 "data/maps/EverGrandeCity/scripts.pory"
	checkplayergender
# 345 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, EverGrandeCity_EventScript_MayFarewell
# 346 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, EverGrandeCity_EventScript_BrendanFarewell
# 347 "data/maps/EverGrandeCity/scripts.pory"
	releaseall
	end


EverGrandeCity_EventScript_MayFarewell::
# 352 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterDown
# 353 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 0
# 354 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_MayGoingBackToLittleroot, MSGBOX_DEFAULT
# 355 "data/maps/EverGrandeCity/scripts.pory"
	closemessage
# 356 "data/maps/EverGrandeCity/scripts.pory"
	delay 30
# 357 "data/maps/EverGrandeCity/scripts.pory"
	setfieldeffectargument 0, 1
# 358 "data/maps/EverGrandeCity/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 359 "data/maps/EverGrandeCity/scripts.pory"
	delay 15
# 360 "data/maps/EverGrandeCity/scripts.pory"
	removeobject 1
# 361 "data/maps/EverGrandeCity/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 362 "data/maps/EverGrandeCity/scripts.pory"
	delay 15
# 363 "data/maps/EverGrandeCity/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 364 "data/maps/EverGrandeCity/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_PICHU_DOLL
# 365 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_MET_RIVAL_LILYCOVE
# 366 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_BEAT_BOTH_RIVALS
# 367 "data/maps/EverGrandeCity/scripts.pory"
	releaseall
	end


EverGrandeCity_EventScript_BrendanFarewell::
# 372 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterDown
# 373 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 0
# 374 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_BrendanGoingBackToLittleroot, MSGBOX_DEFAULT
# 375 "data/maps/EverGrandeCity/scripts.pory"
	closemessage
# 376 "data/maps/EverGrandeCity/scripts.pory"
	delay 30
# 377 "data/maps/EverGrandeCity/scripts.pory"
	setfieldeffectargument 0, 1
# 378 "data/maps/EverGrandeCity/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 379 "data/maps/EverGrandeCity/scripts.pory"
	delay 15
# 380 "data/maps/EverGrandeCity/scripts.pory"
	removeobject 1
# 381 "data/maps/EverGrandeCity/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 382 "data/maps/EverGrandeCity/scripts.pory"
	delay 15
# 383 "data/maps/EverGrandeCity/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 384 "data/maps/EverGrandeCity/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_SWABLU_DOLL
# 385 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_MET_RIVAL_LILYCOVE
# 386 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_BEAT_BOTH_RIVALS
# 387 "data/maps/EverGrandeCity/scripts.pory"
	releaseall
	end


EverGrandeCity_EventScript_Volkner::
# 465 "data/maps/EverGrandeCity/scripts.pory"
	lockall
# 466 "data/maps/EverGrandeCity/scripts.pory"
	applymovement LOCALID_VOLKNER, Common_Movement_FacePlayer
# 467 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_ZERAORA, EverGrandeCity_EventScript_VolknerDefeated
# 468 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_set FLAG_DECLINED_VOLKNER_BATTLE, EverGrandeCity_EventScript_VolknerRequestBattleAgain
# 469 "data/maps/EverGrandeCity/scripts.pory"
	msgbox Volkner_Greeting, MSGBOX_YESNO
# 470 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_BattleVolknerPrompt
	end


EverGrandeCity_EventScript_VolknerRequestBattleAgain::
# 475 "data/maps/EverGrandeCity/scripts.pory"
	msgbox Ready_Yet, MSGBOX_YESNO
# 476 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_BattleVolknerPrompt
	end


EverGrandeCity_EventScript_BattleVolknerPrompt::
# 481 "data/maps/EverGrandeCity/scripts.pory"
	call_if_eq VAR_RESULT, YES, EverGrandeCity_EventScript_BattleVolkner
# 482 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, EverGrandeCity_EventScript_DeclineVolknerBattle
# 483 "data/maps/EverGrandeCity/scripts.pory"
	closemessage
	end


EverGrandeCity_EventScript_DeclineVolknerBattle::
# 488 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_DECLINED_VOLKNER_BATTLE
# 489 "data/maps/EverGrandeCity/scripts.pory"
	msgbox Come_Back_When_Ready, MSGBOX_DEFAULT
# 490 "data/maps/EverGrandeCity/scripts.pory"
	release
	end


EverGrandeCity_EventScript_BattleVolkner::
# 495 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_EventScript_BattleVolkner_Text_0, MSGBOX_DEFAULT
# 496 "data/maps/EverGrandeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_VOLKNER, Volkner_Outro
# 497 "data/maps/EverGrandeCity/scripts.pory"
	giveitem ITEM_TM_RISING_VOLTAGE
# 498 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_VolknerGiveZeraora
	return


EverGrandeCity_EventScript_VolknerDefeated::
# 504 "data/maps/EverGrandeCity/scripts.pory"
	msgbox PostBattle_Volkner, MSGBOX_DEFAULT
# 505 "data/maps/EverGrandeCity/scripts.pory"
	releaseall
	end


EverGrandeCity_EventScript_VolknerGiveZeraora::
# 510 "data/maps/EverGrandeCity/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_ZERAORA
# 511 "data/maps/EverGrandeCity/scripts.pory"
	givemon SPECIES_ZERAORA, 50
# 512 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, EverGrandeCity_EventScript_ReceiveZeraoraParty
# 513 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, EverGrandeCity_EventScript_ReceiveZeraoraPC
# 514 "data/maps/EverGrandeCity/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 515 "data/maps/EverGrandeCity/scripts.pory"
	release
	end


EverGrandeCity_EventScript_ReceiveZeraoraParty::
# 520 "data/maps/EverGrandeCity/scripts.pory"
	call EverGrandeCity_EventScript_ReceivedZeraoraFanfare
# 521 "data/maps/EverGrandeCity/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 522 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, EverGrandeCity_EventScript_ExplainZeraora
# 523 "data/maps/EverGrandeCity/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 524 "data/maps/EverGrandeCity/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 525 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_ExplainZeraora
	end


EverGrandeCity_EventScript_ReceiveZeraoraPC::
# 531 "data/maps/EverGrandeCity/scripts.pory"
	call EverGrandeCity_EventScript_ReceivedZeraoraFanfare
# 532 "data/maps/EverGrandeCity/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 533 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, EverGrandeCity_EventScript_SendZeraoraToPC
# 534 "data/maps/EverGrandeCity/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 535 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_SendZeraoraToPC
	end


EverGrandeCity_EventScript_SendZeraoraToPC::
# 541 "data/maps/EverGrandeCity/scripts.pory"
	call Common_EventScript_TransferredToPC
# 542 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_ExplainZeraora
	end


EverGrandeCity_EventScript_ReceivedZeraoraFanfare::
# 548 "data/maps/EverGrandeCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 549 "data/maps/EverGrandeCity/scripts.pory"
	message EverGrandeCity_Text_PlayerReceivedZeraora
# 550 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 551 "data/maps/EverGrandeCity/scripts.pory"
	waitfanfare
# 552 "data/maps/EverGrandeCity/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_ZERAORA
	return


EverGrandeCity_EventScript_ExplainZeraora::
# 558 "data/maps/EverGrandeCity/scripts.pory"
	msgbox Volkner_ExplainZeraora, MSGBOX_DEFAULT
# 559 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_RECEIVED_ZERAORA
# 560 "data/maps/EverGrandeCity/scripts.pory"
	release
	end


EverGrandeCity_EventScript_BattleDawn_Text_0:
# 308 "data/maps/EverGrandeCity/scripts.pory"
	.string "Let's do this, one last time!$"

EverGrandeCity_EventScript_BattleVolkner_Text_0:
# 495 "data/maps/EverGrandeCity/scripts.pory"
	.string "This is going to be electric!$"

Dawn_GreetingEvergrande::
# 392 "data/maps/EverGrandeCity/scripts.pory"
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
# 408 "data/maps/EverGrandeCity/scripts.pory"
	.string "Ready for our final battle now?$"

ComeBackWhenReadyFinal::
# 412 "data/maps/EverGrandeCity/scripts.pory"
	.string "Come back when you're ready, I'll be\n"
	.string "here!$"

Dawn_OutroEvergrande::
# 417 "data/maps/EverGrandeCity/scripts.pory"
	.string "Looks like you passed my final test\n"
	.string "with flying colors, {PLAYER}.\p"
	.string "Not that there was ever any doubt, but\n"
	.string "you're definitely read for the Pokémon\l"
	.string "League.$"

EverGrandeCity_Text_CanYouBeatRival::
# 425 "data/maps/EverGrandeCity/scripts.pory"
	.string "Thanks for one last great battle,\n"
	.string "{PLAYER}. But I'm not going anywhere\l"
	.string "until you beat {RIVAL} too!$"

EverGrandeCity_Text_NotMovingUntilRival::
# 432 "data/maps/EverGrandeCity/scripts.pory"
	.string "I'm not going anywhere until\n"
	.string "you beat {RIVAL} too!$"

EverGrandeCity_Text_CanYouBeatDawn::
# 437 "data/maps/EverGrandeCity/scripts.pory"
	.string "That was a great battle, {PLAYER}, but\n"
	.string "can you beat Dawn too?$"

EverGrandeCity_Text_NotMovingUntilDawn::
# 442 "data/maps/EverGrandeCity/scripts.pory"
	.string "I'm not going anywhere until\n"
	.string "you beat Dawn too!$"

DawnFarewell::
# 447 "data/maps/EverGrandeCity/scripts.pory"
	.string "Dawn: Well, {PLAYER}, neither of us were\n"
	.string "a match for you once again.\p"
	.string "I have one more TM I can give you to\n"
	.string "help, I hope you can use it against\p"
	.string "against the Elite Four when you make it\n"
	.string "there.$"

DawnFarewell2::
# 456 "data/maps/EverGrandeCity/scripts.pory"
	.string "Become the Champion, {PLAYER}, I know\n"
	.string "you can do it!\p"
	.string "So long, my friend, until next time!$"

EverGrandeCity_Text_PlayerReceivedZeraora::
# 564 "data/maps/EverGrandeCity/scripts.pory"
	.string "{PLAYER} received Zeraora!$"

Volkner_ExplainZeraora::
# 568 "data/maps/EverGrandeCity/scripts.pory"
	.string "Zeraora is definitely a favorite of\n"
	.string "mine. His electrifying fists light up\l"
	.string "any battle!\p"
	.string "I hope you raise it well!$"

Volkner_Greeting::
# 575 "data/maps/EverGrandeCity/scripts.pory"
	.string "Wow, another trainer showed up here. It\n"
	.string "gets pretty boring being the strongest\p"
	.string "Gym Leader in a given region… The weak\n"
	.string "trainers get weeded out before they\p"
	.string "can make it to me, usually. But you're\n"
	.string "now the fourth strong-looking trainer\p"
	.string "I've seen come through here, it's really\n"
	.string "got me itching for a battle.\p"
	.string "So, will you battle me?$"

Volkner_Outro::
# 587 "data/maps/EverGrandeCity/scripts.pory"
	.string "Ha! Wow, the trainers here are way\n"
	.string "stronger than in Sinnoh, how exciting!$"

PostBattle_Volkner::
# 593 "data/maps/EverGrandeCity/scripts.pory"
	.string "I think I'll just stay here and wait for\n"
	.string "more strong trainers, someone else can\l"
	.string "run my Gym for all I care.$"
