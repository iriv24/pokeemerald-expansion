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
	playbgm MUS_ENCOUNTER_MAY, TRUE
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
	savebgm MUS_DUMMY
# 54 "data/maps/EverGrandeCity/scripts.pory"
	fadedefaultbgm
# 55 "data/maps/EverGrandeCity/scripts.pory"
	release
# 56 "data/maps/EverGrandeCity/scripts.pory"
	end
# 57 "data/maps/EverGrandeCity/scripts.pory"

# 58 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_Brendan::
# 59 "data/maps/EverGrandeCity/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 60 "data/maps/EverGrandeCity/scripts.pory"
	call_if_set FLAG_DECLINED_RIVAL_BATTLE_EVERGRANDE, EverGrandeCity_EventScript_BrendanAskToBattleAgain
# 61 "data/maps/EverGrandeCity/scripts.pory"
	call_if_unset FLAG_DECLINED_RIVAL_BATTLE_EVERGRANDE, EverGrandeCity_EventScript_BrendanAskToBattle
# 62 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, EverGrandeCity_EventScript_DeclineBrendanBattle
# 63 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_BrendanWontBeBeaten, MSGBOX_DEFAULT
# 64 "data/maps/EverGrandeCity/scripts.pory"
	switch VAR_STARTER_MON
# 65 "data/maps/EverGrandeCity/scripts.pory"
	case 0, EverGrandeCity_EventScript_BattleBrendanTreecko
# 66 "data/maps/EverGrandeCity/scripts.pory"
	case 1, EverGrandeCity_EventScript_BattleBrendanTorchic
# 67 "data/maps/EverGrandeCity/scripts.pory"
	case 2, EverGrandeCity_EventScript_BattleBrendanMudkip
# 68 "data/maps/EverGrandeCity/scripts.pory"
	end
# 69 "data/maps/EverGrandeCity/scripts.pory"

# 70 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_BrendanAskToBattleAgain::
# 71 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_BrendanBattleMe, MSGBOX_YESNO
# 72 "data/maps/EverGrandeCity/scripts.pory"
	return
# 73 "data/maps/EverGrandeCity/scripts.pory"

# 74 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_BrendanAskToBattle::
# 75 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_BrendanShoppingLetsBattle, MSGBOX_YESNO
# 76 "data/maps/EverGrandeCity/scripts.pory"
	return
# 77 "data/maps/EverGrandeCity/scripts.pory"

# 78 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_DeclineBrendanBattle::
# 79 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_DECLINED_RIVAL_BATTLE_EVERGRANDE
# 80 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_BrendanNoConfidence, MSGBOX_DEFAULT
# 81 "data/maps/EverGrandeCity/scripts.pory"
	savebgm MUS_DUMMY
# 82 "data/maps/EverGrandeCity/scripts.pory"
	fadedefaultbgm
# 83 "data/maps/EverGrandeCity/scripts.pory"
	release
# 84 "data/maps/EverGrandeCity/scripts.pory"
	end
# 85 "data/maps/EverGrandeCity/scripts.pory"

# 86 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_BattleMayTreecko::
# 87 "data/maps/EverGrandeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_LILYCOVE_TREECKO, EverGrandeCity_Text_MayDefeat
# 88 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_DefeatedMay
# 89 "data/maps/EverGrandeCity/scripts.pory"
	end
# 90 "data/maps/EverGrandeCity/scripts.pory"

# 91 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_BattleMayTorchic::
# 92 "data/maps/EverGrandeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_LILYCOVE_TORCHIC, EverGrandeCity_Text_MayDefeat
# 93 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_DefeatedMay
# 94 "data/maps/EverGrandeCity/scripts.pory"
	end
# 95 "data/maps/EverGrandeCity/scripts.pory"

# 96 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_BattleMayMudkip::
# 97 "data/maps/EverGrandeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_LILYCOVE_MUDKIP, EverGrandeCity_Text_MayDefeat
# 98 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_DefeatedMay
# 99 "data/maps/EverGrandeCity/scripts.pory"
	end
# 100 "data/maps/EverGrandeCity/scripts.pory"

# 101 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_BattleBrendanTreecko::
# 102 "data/maps/EverGrandeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_LILYCOVE_TREECKO, EverGrandeCity_Text_BrendanDefeat
# 103 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_DefeatedBrendan
# 104 "data/maps/EverGrandeCity/scripts.pory"
	end
# 105 "data/maps/EverGrandeCity/scripts.pory"

# 106 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_BattleBrendanTorchic::
# 107 "data/maps/EverGrandeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_LILYCOVE_TORCHIC, EverGrandeCity_Text_BrendanDefeat
# 108 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_DefeatedBrendan
# 109 "data/maps/EverGrandeCity/scripts.pory"
	end
# 110 "data/maps/EverGrandeCity/scripts.pory"

# 111 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_BattleBrendanMudkip::
# 112 "data/maps/EverGrandeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_LILYCOVE_MUDKIP, EverGrandeCity_Text_BrendanDefeat
# 113 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_DefeatedBrendan
# 114 "data/maps/EverGrandeCity/scripts.pory"
	end
# 115 "data/maps/EverGrandeCity/scripts.pory"

# 116 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_DefeatedMay::
# 117 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_MayGoingBackToLittleroot, MSGBOX_DEFAULT
# 118 "data/maps/EverGrandeCity/scripts.pory"
	setvar VAR_RESULT, FALSE
# 119 "data/maps/EverGrandeCity/scripts.pory"
	call_if_set FLAG_BADGE06_GET, EverGrandeCity_EventScript_CheckFinalBadge
# 120 "data/maps/EverGrandeCity/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, EverGrandeCity_EventScript_MayCollectBadges
# 121 "data/maps/EverGrandeCity/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, EverGrandeCity_EventScript_MayPokemonLeague
# 122 "data/maps/EverGrandeCity/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 123 "data/maps/EverGrandeCity/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_PICHU_DOLL
# 124 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_RivalFlyAway
# 125 "data/maps/EverGrandeCity/scripts.pory"
	end
# 126 "data/maps/EverGrandeCity/scripts.pory"

# 127 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_CheckFinalBadge::
# 128 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, EverGrandeCity_EventScript_HasFinalBadge
# 129 "data/maps/EverGrandeCity/scripts.pory"
	return
# 130 "data/maps/EverGrandeCity/scripts.pory"

# 131 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_HasFinalBadge::
# 132 "data/maps/EverGrandeCity/scripts.pory"
	setvar VAR_RESULT, TRUE
# 133 "data/maps/EverGrandeCity/scripts.pory"
	return
# 134 "data/maps/EverGrandeCity/scripts.pory"

# 135 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_MayCollectBadges::
# 136 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_MayYouGoingToCollectBadges, MSGBOX_DEFAULT
# 137 "data/maps/EverGrandeCity/scripts.pory"
	return
# 138 "data/maps/EverGrandeCity/scripts.pory"

# 139 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_MayPokemonLeague::
# 140 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, EverGrandeCity_EventScript_MayBattleFrontier
# 141 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_MayYouGoingToPokemonLeague, MSGBOX_DEFAULT
# 142 "data/maps/EverGrandeCity/scripts.pory"
	return
# 143 "data/maps/EverGrandeCity/scripts.pory"

# 144 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_MayBattleFrontier::
# 145 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_MayYouGoingToBattleFrontier, MSGBOX_DEFAULT
# 146 "data/maps/EverGrandeCity/scripts.pory"
	return
# 147 "data/maps/EverGrandeCity/scripts.pory"

# 148 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_DefeatedBrendan::
# 149 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_BrendanGoingBackToLittleroot, MSGBOX_DEFAULT
# 150 "data/maps/EverGrandeCity/scripts.pory"
	setvar VAR_RESULT, FALSE
# 151 "data/maps/EverGrandeCity/scripts.pory"
	call_if_set FLAG_BADGE06_GET, EverGrandeCity_EventScript_CheckFinalBadge
# 152 "data/maps/EverGrandeCity/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, EverGrandeCity_EventScript_BrendanCollectBadges
# 153 "data/maps/EverGrandeCity/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, EverGrandeCity_EventScript_BrendanPokemonLeague
# 154 "data/maps/EverGrandeCity/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 155 "data/maps/EverGrandeCity/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_SWABLU_DOLL
# 156 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_RivalFlyAway
# 157 "data/maps/EverGrandeCity/scripts.pory"
	end
# 158 "data/maps/EverGrandeCity/scripts.pory"

# 159 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_BrendanCollectBadges::
# 160 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_BrendanYouGoingToCollectBadges, MSGBOX_DEFAULT
# 161 "data/maps/EverGrandeCity/scripts.pory"
	return
# 162 "data/maps/EverGrandeCity/scripts.pory"

# 163 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_BrendanPokemonLeague::
# 164 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, EverGrandeCity_EventScript_BrendanBattleFrontier
# 165 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_BrendanYouGoingToPokemonLeague, MSGBOX_DEFAULT
# 166 "data/maps/EverGrandeCity/scripts.pory"
	return
# 167 "data/maps/EverGrandeCity/scripts.pory"

# 168 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_BrendanBattleFrontier::
# 169 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_BrendanYouGoingToBattleFrontier, MSGBOX_DEFAULT
# 170 "data/maps/EverGrandeCity/scripts.pory"
	return
# 171 "data/maps/EverGrandeCity/scripts.pory"

# 172 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_RivalFlyAway::
# 173 "data/maps/EverGrandeCity/scripts.pory"
	closemessage
# 174 "data/maps/EverGrandeCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
# 175 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 0
# 176 "data/maps/EverGrandeCity/scripts.pory"
	delay 50
# 177 "data/maps/EverGrandeCity/scripts.pory"
	setfieldeffectargument 0, 1
# 178 "data/maps/EverGrandeCity/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 179 "data/maps/EverGrandeCity/scripts.pory"
	delay 15
# 180 "data/maps/EverGrandeCity/scripts.pory"
	removeobject VAR_LAST_TALKED
# 181 "data/maps/EverGrandeCity/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 182 "data/maps/EverGrandeCity/scripts.pory"
	savebgm MUS_DUMMY
# 183 "data/maps/EverGrandeCity/scripts.pory"
	fadedefaultbgm
# 184 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_MET_RIVAL_LILYCOVE
# 185 "data/maps/EverGrandeCity/scripts.pory"
	release
# 186 "data/maps/EverGrandeCity/scripts.pory"
	end
# 187 "data/maps/EverGrandeCity/scripts.pory"

# 188 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_SetVisitedEverGrande::
# 189 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_VISITED_EVER_GRANDE_CITY
# 190 "data/maps/EverGrandeCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 191 "data/maps/EverGrandeCity/scripts.pory"
	end
# 192 "data/maps/EverGrandeCity/scripts.pory"

# 193 "data/maps/EverGrandeCity/scripts.pory"

# 194 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_MayShoppingLetsBattle:
# 195 "data/maps/EverGrandeCity/scripts.pory"
	.string "MAY: Oh, hey?\n"
# 196 "data/maps/EverGrandeCity/scripts.pory"
	.string "{PLAYER}{KUN}, are you shopping, too?\p"
# 197 "data/maps/EverGrandeCity/scripts.pory"
	.string "I bought a whole bunch of DOLLS and\n"
# 198 "data/maps/EverGrandeCity/scripts.pory"
	.string "POSTERS.\p"
# 199 "data/maps/EverGrandeCity/scripts.pory"
	.string "Of course, I've also caught a lot of\n"
# 200 "data/maps/EverGrandeCity/scripts.pory"
	.string "POKéMON, and I'm raising them\l"
# 201 "data/maps/EverGrandeCity/scripts.pory"
	.string "properly, too.\p"
# 202 "data/maps/EverGrandeCity/scripts.pory"
	.string "Actually, I'm more worried if you're\n"
# 203 "data/maps/EverGrandeCity/scripts.pory"
	.string "raising POKéMON properly, {PLAYER}{KUN}.\p"
# 204 "data/maps/EverGrandeCity/scripts.pory"
	.string "I'll battle with you, so you can show\n"
# 205 "data/maps/EverGrandeCity/scripts.pory"
	.string "me your POKéMON, {PLAYER}{KUN}.$"
# 206 "data/maps/EverGrandeCity/scripts.pory"

# 207 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_MayNotRaisingPokemon:
# 208 "data/maps/EverGrandeCity/scripts.pory"
	.string "MAY: Oh, why? {PLAYER}{KUN}, haven't you\n"
# 209 "data/maps/EverGrandeCity/scripts.pory"
	.string "been raising your POKéMON?\p"
# 210 "data/maps/EverGrandeCity/scripts.pory"
	.string "That's not a very good showing as a\n"
# 211 "data/maps/EverGrandeCity/scripts.pory"
	.string "TRAINER…$"
# 212 "data/maps/EverGrandeCity/scripts.pory"

# 213 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_MayBattleMe:
# 214 "data/maps/EverGrandeCity/scripts.pory"
	.string "MAY: Come on, battle with me, so I can\n"
# 215 "data/maps/EverGrandeCity/scripts.pory"
	.string "check out your POKéMON!$"
# 216 "data/maps/EverGrandeCity/scripts.pory"

# 217 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_MayWontBeBeaten:
# 218 "data/maps/EverGrandeCity/scripts.pory"
	.string "MAY: The POKéMON I raised won't be\n"
# 219 "data/maps/EverGrandeCity/scripts.pory"
	.string "beaten by your POKéMON, {PLAYER}{KUN}!$"
# 220 "data/maps/EverGrandeCity/scripts.pory"

# 221 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_MayDefeat:
# 222 "data/maps/EverGrandeCity/scripts.pory"
	.string "… … … … … … … …\p"
# 223 "data/maps/EverGrandeCity/scripts.pory"
	.string "I remember the battle I had with you,\n"
# 224 "data/maps/EverGrandeCity/scripts.pory"
	.string "{PLAYER}{KUN}, on ROUTE 103.\p"
# 225 "data/maps/EverGrandeCity/scripts.pory"
	.string "That battle helped you become this\n"
# 226 "data/maps/EverGrandeCity/scripts.pory"
	.string "strong, {PLAYER}{KUN}, didn't it?$"
# 227 "data/maps/EverGrandeCity/scripts.pory"

# 228 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_MayGoingBackToLittleroot:
# 229 "data/maps/EverGrandeCity/scripts.pory"
	.string "MAY: I'm thinking of going back to\n"
# 230 "data/maps/EverGrandeCity/scripts.pory"
	.string "LITTLEROOT soon.\p"
# 231 "data/maps/EverGrandeCity/scripts.pory"
	.string "I've caught a decent group of POKéMON,\n"
# 232 "data/maps/EverGrandeCity/scripts.pory"
	.string "and my POKéDEX is coming along, so\l"
# 233 "data/maps/EverGrandeCity/scripts.pory"
	.string "I'm going home to show my dad.$"
# 234 "data/maps/EverGrandeCity/scripts.pory"

# 235 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_MayYouGoingToCollectBadges:
# 236 "data/maps/EverGrandeCity/scripts.pory"
	.string "{PLAYER}{KUN}, what are you going to do?\p"
# 237 "data/maps/EverGrandeCity/scripts.pory"
	.string "Collect all the GYM BADGES and take\n"
# 238 "data/maps/EverGrandeCity/scripts.pory"
	.string "the POKéMON LEAGUE challenge?\p"
# 239 "data/maps/EverGrandeCity/scripts.pory"
	.string "Well, while you're collecting BADGES,\n"
# 240 "data/maps/EverGrandeCity/scripts.pory"
	.string "{PLAYER}{KUN}, I'm going to work on my\l"
# 241 "data/maps/EverGrandeCity/scripts.pory"
	.string "POKéDEX. I'll complete it before you!\p"
# 242 "data/maps/EverGrandeCity/scripts.pory"
	.string "See you!$"
# 243 "data/maps/EverGrandeCity/scripts.pory"

# 244 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_MayYouGoingToPokemonLeague:
# 245 "data/maps/EverGrandeCity/scripts.pory"
	.string "{PLAYER}{KUN}, what are you going to do?\p"
# 246 "data/maps/EverGrandeCity/scripts.pory"
	.string "Are you taking the POKéMON LEAGUE\n"
# 247 "data/maps/EverGrandeCity/scripts.pory"
	.string "challenge?\p"
# 248 "data/maps/EverGrandeCity/scripts.pory"
	.string "Or, are you going to complete your\n"
# 249 "data/maps/EverGrandeCity/scripts.pory"
	.string "POKéDEX?\p"
# 250 "data/maps/EverGrandeCity/scripts.pory"
	.string "I might've lost to you in battling,\n"
# 251 "data/maps/EverGrandeCity/scripts.pory"
	.string "but I'll finish my POKéDEX before you!\p"
# 252 "data/maps/EverGrandeCity/scripts.pory"
	.string "See you!$"
# 253 "data/maps/EverGrandeCity/scripts.pory"

# 254 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_MayYouGoingToBattleFrontier:
# 255 "data/maps/EverGrandeCity/scripts.pory"
	.string "{PLAYER}{KUN}, what are you going to do?\p"
# 256 "data/maps/EverGrandeCity/scripts.pory"
	.string "Are you taking the BATTLE FRONTIER\n"
# 257 "data/maps/EverGrandeCity/scripts.pory"
	.string "challenge?\p"
# 258 "data/maps/EverGrandeCity/scripts.pory"
	.string "Or, are you going to complete your\n"
# 259 "data/maps/EverGrandeCity/scripts.pory"
	.string "POKéDEX?\p"
# 260 "data/maps/EverGrandeCity/scripts.pory"
	.string "I might've lost to you in battling,\n"
# 261 "data/maps/EverGrandeCity/scripts.pory"
	.string "but I'll finish my POKéDEX before you!\p"
# 262 "data/maps/EverGrandeCity/scripts.pory"
	.string "See you!$"
# 263 "data/maps/EverGrandeCity/scripts.pory"

# 264 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_BrendanShoppingLetsBattle:
# 265 "data/maps/EverGrandeCity/scripts.pory"
	.string "BRENDAN: Oh, hey, it's {PLAYER}.\p"
# 266 "data/maps/EverGrandeCity/scripts.pory"
	.string "I'm running an errand for my dad.\n"
# 267 "data/maps/EverGrandeCity/scripts.pory"
	.string "No, I'm not buying any DOLLS.\p"
# 268 "data/maps/EverGrandeCity/scripts.pory"
	.string "Anyways, it's been a while.\p"
# 269 "data/maps/EverGrandeCity/scripts.pory"
	.string "Want to have a battle to see who's been\n"
# 270 "data/maps/EverGrandeCity/scripts.pory"
	.string "raising POKéMON better?$"
# 271 "data/maps/EverGrandeCity/scripts.pory"

# 272 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_BrendanNoConfidence:
# 273 "data/maps/EverGrandeCity/scripts.pory"
	.string "BRENDAN: Oh, what's the matter?\n"
# 274 "data/maps/EverGrandeCity/scripts.pory"
	.string "Don't have the confidence?$"
# 275 "data/maps/EverGrandeCity/scripts.pory"

# 276 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_BrendanBattleMe:
# 277 "data/maps/EverGrandeCity/scripts.pory"
	.string "BRENDAN: Want to battle to see who's\n"
# 278 "data/maps/EverGrandeCity/scripts.pory"
	.string "been raising POKéMON better?$"
# 279 "data/maps/EverGrandeCity/scripts.pory"

# 280 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_BrendanWontBeBeaten:
# 281 "data/maps/EverGrandeCity/scripts.pory"
	.string "BRENDAN: Aww, but you know I'm not\n"
# 282 "data/maps/EverGrandeCity/scripts.pory"
	.string "going to lose to no {PLAYER}.$"
# 283 "data/maps/EverGrandeCity/scripts.pory"

# 284 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_BrendanDefeat:
# 285 "data/maps/EverGrandeCity/scripts.pory"
	.string "Humph…\n"
# 286 "data/maps/EverGrandeCity/scripts.pory"
	.string "You've done a lot of raising.\p"
# 287 "data/maps/EverGrandeCity/scripts.pory"
	.string "That stings a bit--I had a head start\n"
# 288 "data/maps/EverGrandeCity/scripts.pory"
	.string "on you as a TRAINER…$"
# 289 "data/maps/EverGrandeCity/scripts.pory"

# 290 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_BrendanGoingBackToLittleroot:
# 291 "data/maps/EverGrandeCity/scripts.pory"
	.string "BRENDAN: I…\n"
# 292 "data/maps/EverGrandeCity/scripts.pory"
	.string "I plan on going home to LITTLEROOT.\p"
# 293 "data/maps/EverGrandeCity/scripts.pory"
	.string "You know I'm helping out my dad on his\n"
# 294 "data/maps/EverGrandeCity/scripts.pory"
	.string "POKéDEX. It's coming together pretty\l"
# 295 "data/maps/EverGrandeCity/scripts.pory"
	.string "decently, so I should go show him.$"
# 296 "data/maps/EverGrandeCity/scripts.pory"

# 297 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_BrendanYouGoingToCollectBadges:
# 298 "data/maps/EverGrandeCity/scripts.pory"
	.string "{PLAYER}, what are you going to do?\p"
# 299 "data/maps/EverGrandeCity/scripts.pory"
	.string "Collect all the GYM BADGES and take\n"
# 300 "data/maps/EverGrandeCity/scripts.pory"
	.string "the POKéMON LEAGUE challenge?\p"
# 301 "data/maps/EverGrandeCity/scripts.pory"
	.string "Maybe I'll do that, too…\p"
# 302 "data/maps/EverGrandeCity/scripts.pory"
	.string "Well, anyway, hang in there!$"
# 303 "data/maps/EverGrandeCity/scripts.pory"

# 304 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_BrendanYouGoingToPokemonLeague:
# 305 "data/maps/EverGrandeCity/scripts.pory"
	.string "{PLAYER}, what are you going to do?\p"
# 306 "data/maps/EverGrandeCity/scripts.pory"
	.string "Since you're that strong, are you\n"
# 307 "data/maps/EverGrandeCity/scripts.pory"
	.string "taking the POKéMON LEAGUE challenge?\p"
# 308 "data/maps/EverGrandeCity/scripts.pory"
	.string "Heh, even me--if I trained my POKéMON\n"
# 309 "data/maps/EverGrandeCity/scripts.pory"
	.string "a bit more, I should be stronger than\l"
# 310 "data/maps/EverGrandeCity/scripts.pory"
	.string "you, {PLAYER}.\p"
# 311 "data/maps/EverGrandeCity/scripts.pory"
	.string "Well, anyway, hang in there!$"
# 312 "data/maps/EverGrandeCity/scripts.pory"

# 313 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_BrendanYouGoingToBattleFrontier:
# 314 "data/maps/EverGrandeCity/scripts.pory"
	.string "{PLAYER}, what are you going to do?\p"
# 315 "data/maps/EverGrandeCity/scripts.pory"
	.string "Are you taking the BATTLE FRONTIER\n"
# 316 "data/maps/EverGrandeCity/scripts.pory"
	.string "challenge?\p"
# 317 "data/maps/EverGrandeCity/scripts.pory"
	.string "Or, are you going to complete your\n"
# 318 "data/maps/EverGrandeCity/scripts.pory"
	.string "POKéDEX?\p"
# 319 "data/maps/EverGrandeCity/scripts.pory"
	.string "Since you're that strong, you should\n"
# 320 "data/maps/EverGrandeCity/scripts.pory"
	.string "consider the BATTLE FRONTIER.\p"
# 321 "data/maps/EverGrandeCity/scripts.pory"
	.string "Heh, if I train my POKéMON a bit more,\n"
# 322 "data/maps/EverGrandeCity/scripts.pory"
	.string "I'll get stronger than you, {PLAYER}.\p"
# 323 "data/maps/EverGrandeCity/scripts.pory"
	.string "Maybe I should go to the BATTLE\n"
# 324 "data/maps/EverGrandeCity/scripts.pory"
	.string "FRONTIER.\p"
# 325 "data/maps/EverGrandeCity/scripts.pory"
	.string "Well, anyway, hang in there!$"
# 326 "data/maps/EverGrandeCity/scripts.pory"

# 327 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_EnteringVictoryRoad:
# 328 "data/maps/EverGrandeCity/scripts.pory"
	.string "ENTERING VICTORY ROAD$"
# 329 "data/maps/EverGrandeCity/scripts.pory"

# 330 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_EnteringPokemonLeague:
# 331 "data/maps/EverGrandeCity/scripts.pory"
	.string "ENTERING POKéMON LEAGUE\n"
# 332 "data/maps/EverGrandeCity/scripts.pory"
	.string "CENTER GATE$"
# 333 "data/maps/EverGrandeCity/scripts.pory"

# 334 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_CitySign:
# 335 "data/maps/EverGrandeCity/scripts.pory"
	.string "EVER GRANDE CITY\p"
# 336 "data/maps/EverGrandeCity/scripts.pory"
	.string "“The paradise of flowers, the sea,\n"
# 337 "data/maps/EverGrandeCity/scripts.pory"
	.string "and POKéMON.”$"
