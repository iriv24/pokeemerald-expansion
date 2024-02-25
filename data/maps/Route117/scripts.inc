# 1 "data/maps/Route117/scripts.pory"

# 2 "data/maps/Route117/scripts.pory"
.set LOCALID_DAYCARE_MAN, 3
# 3 "data/maps/Route117/scripts.pory"

# 4 "data/maps/Route117/scripts.pory"
Route117_MapScripts::
# 5 "data/maps/Route117/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route117_OnTransition
# 6 "data/maps/Route117/scripts.pory"
	.byte 0
# 7 "data/maps/Route117/scripts.pory"

# 8 "data/maps/Route117/scripts.pory"
Route117_OnTransition:
# 9 "data/maps/Route117/scripts.pory"
	call Route117_EventScript_TryMoveDayCareMan
# 10 "data/maps/Route117/scripts.pory"
	end
# 11 "data/maps/Route117/scripts.pory"

# 12 "data/maps/Route117/scripts.pory"
Route117_EventScript_TryMoveDayCareMan::
# 13 "data/maps/Route117/scripts.pory"
	goto_if_unset FLAG_PENDING_DAYCARE_EGG, Route117_EventScript_StopMoveDayCareMan
# 14 "data/maps/Route117/scripts.pory"
	setobjectxyperm LOCALID_DAYCARE_MAN, 47, 6
# 15 "data/maps/Route117/scripts.pory"
Route117_EventScript_StopMoveDayCareMan::
# 16 "data/maps/Route117/scripts.pory"
	return
# 17 "data/maps/Route117/scripts.pory"

# 18 "data/maps/Route117/scripts.pory"
Route117_EventScript_Woman::
# 19 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_ArentTheseFlowersPretty, MSGBOX_NPC
# 20 "data/maps/Route117/scripts.pory"
	end
# 21 "data/maps/Route117/scripts.pory"

# 22 "data/maps/Route117/scripts.pory"
Route117_EventScript_LittleBoy::
# 23 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AirIsTastyHere, MSGBOX_NPC
# 24 "data/maps/Route117/scripts.pory"
	end
# 25 "data/maps/Route117/scripts.pory"

# 26 "data/maps/Route117/scripts.pory"
Route117_EventScript_Girl::
# 27 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DayCarePokemonHadNewMove, MSGBOX_NPC
# 28 "data/maps/Route117/scripts.pory"
	end
# 29 "data/maps/Route117/scripts.pory"

# 30 "data/maps/Route117/scripts.pory"
Route117_EventScript_RouteSignVerdanturf::
# 31 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_RouteSignVerdanturf, MSGBOX_SIGN
# 32 "data/maps/Route117/scripts.pory"
	end
# 33 "data/maps/Route117/scripts.pory"

# 34 "data/maps/Route117/scripts.pory"
Route117_EventScript_RouteSignMauville::
# 35 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_RouteSignMauville, MSGBOX_SIGN
# 36 "data/maps/Route117/scripts.pory"
	end
# 37 "data/maps/Route117/scripts.pory"

# 38 "data/maps/Route117/scripts.pory"
Route117_EventScript_DayCareSign::
# 39 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DayCareSign, MSGBOX_SIGN
# 40 "data/maps/Route117/scripts.pory"
	end
# 41 "data/maps/Route117/scripts.pory"

# 42 "data/maps/Route117/scripts.pory"
Route117_EventScript_Isaac::
# 43 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_ISAAC_1, Route117_Text_IsaacIntro, Route117_Text_IsaacDefeat, Route117_EventScript_RegisterIsaac
# 44 "data/maps/Route117/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 45 "data/maps/Route117/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route117_EventScript_RematchIsaac
# 46 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_IsaacPostBattle, MSGBOX_DEFAULT
# 47 "data/maps/Route117/scripts.pory"
	release
# 48 "data/maps/Route117/scripts.pory"
	end
# 49 "data/maps/Route117/scripts.pory"

# 50 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterIsaac::
# 51 "data/maps/Route117/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 52 "data/maps/Route117/scripts.pory"
	waitmovement 0
# 53 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_IsaacRegister, MSGBOX_DEFAULT
# 54 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_ISAAC_1
# 55 "data/maps/Route117/scripts.pory"
	release
# 56 "data/maps/Route117/scripts.pory"
	end
# 57 "data/maps/Route117/scripts.pory"

# 58 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchIsaac::
# 59 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch TRAINER_ISAAC_1, Route117_Text_IsaacRematchIntro, Route117_Text_IsaacRematchDefeat
# 60 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_IsaacPostRematch, MSGBOX_AUTOCLOSE
# 61 "data/maps/Route117/scripts.pory"
	end
# 62 "data/maps/Route117/scripts.pory"

# 63 "data/maps/Route117/scripts.pory"
Route117_EventScript_Lydia::
# 64 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_LYDIA_1, Route117_Text_LydiaIntro, Route117_Text_LydiaDefeat, Route117_EventScript_RegisterLydia
# 65 "data/maps/Route117/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 66 "data/maps/Route117/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route117_EventScript_RematchLydia
# 67 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_LydiaPostBattle, MSGBOX_DEFAULT
# 68 "data/maps/Route117/scripts.pory"
	release
# 69 "data/maps/Route117/scripts.pory"
	end
# 70 "data/maps/Route117/scripts.pory"

# 71 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterLydia::
# 72 "data/maps/Route117/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 73 "data/maps/Route117/scripts.pory"
	waitmovement 0
# 74 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_LydiaRegister, MSGBOX_DEFAULT
# 75 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_LYDIA_1
# 76 "data/maps/Route117/scripts.pory"
	release
# 77 "data/maps/Route117/scripts.pory"
	end
# 78 "data/maps/Route117/scripts.pory"

# 79 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchLydia::
# 80 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch TRAINER_LYDIA_1, Route117_Text_LydiaRematchIntro, Route117_Text_LydiaRematchDefeat
# 81 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_LydiaPostRematch, MSGBOX_AUTOCLOSE
# 82 "data/maps/Route117/scripts.pory"
	end
# 83 "data/maps/Route117/scripts.pory"

# 84 "data/maps/Route117/scripts.pory"
Route117_EventScript_Dylan::
# 85 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_DYLAN_1, Route117_Text_DylanIntro, Route117_Text_DylanDefeat, Route117_EventScript_RegisterDylan
# 86 "data/maps/Route117/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 87 "data/maps/Route117/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route117_EventScript_RematchDylan
# 88 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DylanPostBattle, MSGBOX_DEFAULT
# 89 "data/maps/Route117/scripts.pory"
	release
# 90 "data/maps/Route117/scripts.pory"
	end
# 91 "data/maps/Route117/scripts.pory"

# 92 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterDylan::
# 93 "data/maps/Route117/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 94 "data/maps/Route117/scripts.pory"
	waitmovement 0
# 95 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DylanRegister, MSGBOX_DEFAULT
# 96 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_DYLAN_1
# 97 "data/maps/Route117/scripts.pory"
	release
# 98 "data/maps/Route117/scripts.pory"
	end
# 99 "data/maps/Route117/scripts.pory"

# 100 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchDylan::
# 101 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch TRAINER_DYLAN_1, Route117_Text_DylanRematchIntro, Route117_Text_DylanRematchDefeat
# 102 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DylanPostRematch, MSGBOX_AUTOCLOSE
# 103 "data/maps/Route117/scripts.pory"
	end
# 104 "data/maps/Route117/scripts.pory"

# 105 "data/maps/Route117/scripts.pory"
Route117_EventScript_Maria::
# 106 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_MARIA_1, Route117_Text_MariaIntro, Route117_Text_MariaDefeat, Route117_EventScript_RegisterMaria
# 107 "data/maps/Route117/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 108 "data/maps/Route117/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route117_EventScript_RematchMaria
# 109 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MariaPostBattle, MSGBOX_DEFAULT
# 110 "data/maps/Route117/scripts.pory"
	release
# 111 "data/maps/Route117/scripts.pory"
	end
# 112 "data/maps/Route117/scripts.pory"

# 113 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterMaria::
# 114 "data/maps/Route117/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 115 "data/maps/Route117/scripts.pory"
	waitmovement 0
# 116 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MariaRegister, MSGBOX_DEFAULT
# 117 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_MARIA_1
# 118 "data/maps/Route117/scripts.pory"
	release
# 119 "data/maps/Route117/scripts.pory"
	end
# 120 "data/maps/Route117/scripts.pory"

# 121 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchMaria::
# 122 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch TRAINER_MARIA_1, Route117_Text_MariaRematchIntro, Route117_Text_MariaRematchDefeat
# 123 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MariaPostRematch, MSGBOX_AUTOCLOSE
# 124 "data/maps/Route117/scripts.pory"
	end
# 125 "data/maps/Route117/scripts.pory"

# 126 "data/maps/Route117/scripts.pory"
Route117_EventScript_Derek::
# 127 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_DEREK, Route117_Text_DerekIntro, Route117_Text_DerekDefeat
# 128 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DerekPostBattle, MSGBOX_AUTOCLOSE
# 129 "data/maps/Route117/scripts.pory"
	end
# 130 "data/maps/Route117/scripts.pory"

# 131 "data/maps/Route117/scripts.pory"
Route117_EventScript_Anna::
# 132 "data/maps/Route117/scripts.pory"
	trainerbattle_double TRAINER_ANNA_AND_MEG_1, Route117_Text_AnnaIntro, Route117_Text_AnnaDefeat, Route117_Text_AnnaNotEnoughMons, Route117_EventScript_RegisterAnna
# 133 "data/maps/Route117/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 134 "data/maps/Route117/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route117_EventScript_RematchAnna
# 135 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AnnaPostBattle, MSGBOX_DEFAULT
# 136 "data/maps/Route117/scripts.pory"
	release
# 137 "data/maps/Route117/scripts.pory"
	end
# 138 "data/maps/Route117/scripts.pory"

# 139 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterAnna::
# 140 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AnnaAndMegRegister, MSGBOX_DEFAULT
# 141 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_ANNA_AND_MEG_1
# 142 "data/maps/Route117/scripts.pory"
	release
# 143 "data/maps/Route117/scripts.pory"
	end
# 144 "data/maps/Route117/scripts.pory"

# 145 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchAnna::
# 146 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch_double TRAINER_ANNA_AND_MEG_1, Route117_Text_AnnaRematchIntro, Route117_Text_AnnaRematchDefeat, Route117_Text_AnnaRematchNotEnoughMons
# 147 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AnnaPostRematch, MSGBOX_AUTOCLOSE
# 148 "data/maps/Route117/scripts.pory"
	end
# 149 "data/maps/Route117/scripts.pory"

# 150 "data/maps/Route117/scripts.pory"
Route117_EventScript_Meg::
# 151 "data/maps/Route117/scripts.pory"
	trainerbattle_double TRAINER_ANNA_AND_MEG_1, Route117_Text_MegIntro, Route117_Text_MegDefeat, Route117_Text_MegNotEnoughMons, Route117_EventScript_RegisterMeg
# 152 "data/maps/Route117/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 153 "data/maps/Route117/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route117_EventScript_RematchMeg
# 154 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MegPostBattle, MSGBOX_DEFAULT
# 155 "data/maps/Route117/scripts.pory"
	release
# 156 "data/maps/Route117/scripts.pory"
	end
# 157 "data/maps/Route117/scripts.pory"

# 158 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterMeg::
# 159 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AnnaAndMegRegister, MSGBOX_DEFAULT
# 160 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_ANNA_AND_MEG_1
# 161 "data/maps/Route117/scripts.pory"
	release
# 162 "data/maps/Route117/scripts.pory"
	end
# 163 "data/maps/Route117/scripts.pory"

# 164 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchMeg::
# 165 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch_double TRAINER_ANNA_AND_MEG_1, Route117_Text_MegRematchIntro, Route117_Text_MegRematchDefeat, Route117_Text_MegRematchNotEnoughMons
# 166 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MegPostRematch, MSGBOX_AUTOCLOSE
# 167 "data/maps/Route117/scripts.pory"
	end
# 168 "data/maps/Route117/scripts.pory"

# 169 "data/maps/Route117/scripts.pory"
Route117_EventScript_Melina::
# 170 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_MELINA, Route117_Text_MelinaIntro, Route117_Text_MelinaDefeat
# 171 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MelinaPostBattle, MSGBOX_AUTOCLOSE
# 172 "data/maps/Route117/scripts.pory"
	end
# 173 "data/maps/Route117/scripts.pory"

# 174 "data/maps/Route117/scripts.pory"
Route117_EventScript_Brandi::
# 175 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_BRANDI, Route117_Text_BrandiIntro, Route117_Text_BrandiDefeat
# 176 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_BrandiPostBattle, MSGBOX_AUTOCLOSE
# 177 "data/maps/Route117/scripts.pory"
	end
# 178 "data/maps/Route117/scripts.pory"

# 179 "data/maps/Route117/scripts.pory"
Route117_EventScript_Aisha::
# 180 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_AISHA, Route117_Text_AishaIntro, Route117_Text_AishaDefeat
# 181 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AishaPostBattle, MSGBOX_AUTOCLOSE
# 182 "data/maps/Route117/scripts.pory"
	end
# 183 "data/maps/Route117/scripts.pory"

# 184 "data/maps/Route117/scripts.pory"
Route117_Text_DayCarePokemonHadNewMove:
# 185 "data/maps/Route117/scripts.pory"
	.string "I left my POKéMON at the DAY CARE.\p"
# 186 "data/maps/Route117/scripts.pory"
	.string "When I got it back, it had a new move\n"
# 187 "data/maps/Route117/scripts.pory"
	.string "that I didn't teach it.\l"
# 188 "data/maps/Route117/scripts.pory"
	.string "I was really, really surprised.$"
# 189 "data/maps/Route117/scripts.pory"

# 190 "data/maps/Route117/scripts.pory"
Route117_Text_ArentTheseFlowersPretty:
# 191 "data/maps/Route117/scripts.pory"
	.string "What do you think?\n"
# 192 "data/maps/Route117/scripts.pory"
	.string "Aren't these flowers pretty?\p"
# 193 "data/maps/Route117/scripts.pory"
	.string "I planted them all!$"
# 194 "data/maps/Route117/scripts.pory"

# 195 "data/maps/Route117/scripts.pory"
Route117_Text_AirIsTastyHere:
# 196 "data/maps/Route117/scripts.pory"
	.string "The air is tasty here!$"
# 197 "data/maps/Route117/scripts.pory"

# 198 "data/maps/Route117/scripts.pory"
Route117_Text_RouteSignVerdanturf:
# 199 "data/maps/Route117/scripts.pory"
	.string "ROUTE 117\n"
# 200 "data/maps/Route117/scripts.pory"
	.string "{LEFT_ARROW} VERDANTURF TOWN$"
# 201 "data/maps/Route117/scripts.pory"

# 202 "data/maps/Route117/scripts.pory"
Route117_Text_RouteSignMauville:
# 203 "data/maps/Route117/scripts.pory"
	.string "ROUTE 117\n"
# 204 "data/maps/Route117/scripts.pory"
	.string "{RIGHT_ARROW} MAUVILLE CITY$"
# 205 "data/maps/Route117/scripts.pory"

# 206 "data/maps/Route117/scripts.pory"
Route117_Text_DayCareSign:
# 207 "data/maps/Route117/scripts.pory"
	.string "POKéMON DAY CARE\n"
# 208 "data/maps/Route117/scripts.pory"
	.string "“Let us raise your POKéMON.”$"
