# 1 "data/maps/Route117/scripts.pory"

# 2 "data/maps/Route117/scripts.pory"
.set LOCALID_DAYCARE_MAN, 3
# 3 "data/maps/Route117/scripts.pory"
.set LOCALID_DAYCARE_MON_0, 25
# 4 "data/maps/Route117/scripts.pory"
.set LOCALID_DAYCARE_MON_1, 26
# 5 "data/maps/Route117/scripts.pory"

# 6 "data/maps/Route117/scripts.pory"
Route117_MapScripts::
# 7 "data/maps/Route117/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route117_OnTransition
# 8 "data/maps/Route117/scripts.pory"
	.byte 0
# 9 "data/maps/Route117/scripts.pory"

# 10 "data/maps/Route117/scripts.pory"
Route117_OnTransition:
# 11 "data/maps/Route117/scripts.pory"
	call Route117_EventScript_TryMoveDayCareMan
# 12 "data/maps/Route117/scripts.pory"
	@ set flags for OW daycare mons
# 13 "data/maps/Route117/scripts.pory"
	setflag FLAG_TEMP_1
# 14 "data/maps/Route117/scripts.pory"
	setflag FLAG_TEMP_2
# 15 "data/maps/Route117/scripts.pory"
	getdaycaregfx VAR_OBJ_GFX_ID_0, VAR_OBJ_GFX_ID_1, VAR_TEMP_0, VAR_TEMP_1
# 16 "data/maps/Route117/scripts.pory"
	switch VAR_RESULT
# 17 "data/maps/Route117/scripts.pory"
	case 2, Route117_EventScript_ShowDaycareMon1
# 18 "data/maps/Route117/scripts.pory"
	case 1, Route117_EventScript_ShowDaycareMon0
# 19 "data/maps/Route117/scripts.pory"
	end
# 20 "data/maps/Route117/scripts.pory"

# 21 "data/maps/Route117/scripts.pory"
Route117_EventScript_ShowDaycareMon1:
# 22 "data/maps/Route117/scripts.pory"
	@ set pokemon movement type based on compatibility
# 23 "data/maps/Route117/scripts.pory"
	special SetDaycareCompatibilityString
# 24 "data/maps/Route117/scripts.pory"
	call_if_eq VAR_RESULT, PARENTS_INCOMPATIBLE, Route117_EventScript_DaycareMonIncompatible
# 25 "data/maps/Route117/scripts.pory"
	@ Don't do anything if PARENTS_LOW_COMPATIBILITY
# 26 "data/maps/Route117/scripts.pory"
	call_if_eq VAR_RESULT, PARENTS_MED_COMPATIBILITY, Route117_EventScript_DaycareMonMedCompatibility
# 27 "data/maps/Route117/scripts.pory"
	call_if_eq VAR_RESULT, PARENTS_MAX_COMPATIBILITY, Route117_EventScript_DaycareMonMaxCompatibility
# 28 "data/maps/Route117/scripts.pory"
	clearflag FLAG_TEMP_2
# 29 "data/maps/Route117/scripts.pory"
Route117_EventScript_ShowDaycareMon0:
# 30 "data/maps/Route117/scripts.pory"
	clearflag FLAG_TEMP_1
# 31 "data/maps/Route117/scripts.pory"
	end
# 32 "data/maps/Route117/scripts.pory"

# 33 "data/maps/Route117/scripts.pory"
Route117_EventScript_DaycareMonIncompatible: @ mons never face each other
# 34 "data/maps/Route117/scripts.pory"
	setobjectmovementtype LOCALID_DAYCARE_MON_0, MOVEMENT_TYPE_FACE_DOWN_UP_AND_LEFT
# 35 "data/maps/Route117/scripts.pory"
	setobjectmovementtype LOCALID_DAYCARE_MON_1, MOVEMENT_TYPE_FACE_DOWN_UP_AND_RIGHT
# 36 "data/maps/Route117/scripts.pory"
	return
# 37 "data/maps/Route117/scripts.pory"

# 38 "data/maps/Route117/scripts.pory"
Route117_EventScript_DaycareMonMedCompatibility: @ down and towards each other
# 39 "data/maps/Route117/scripts.pory"
	setobjectmovementtype LOCALID_DAYCARE_MON_0, MOVEMENT_TYPE_FACE_DOWN_AND_RIGHT
# 40 "data/maps/Route117/scripts.pory"
	setobjectmovementtype LOCALID_DAYCARE_MON_1, MOVEMENT_TYPE_FACE_DOWN_AND_LEFT
# 41 "data/maps/Route117/scripts.pory"
	return
# 42 "data/maps/Route117/scripts.pory"

# 43 "data/maps/Route117/scripts.pory"
Route117_EventScript_DaycareMonMaxCompatibility: @ facing; walk in place
# 44 "data/maps/Route117/scripts.pory"
	setobjectmovementtype LOCALID_DAYCARE_MON_0, MOVEMENT_TYPE_WALK_IN_PLACE_RIGHT
# 45 "data/maps/Route117/scripts.pory"
	setobjectmovementtype LOCALID_DAYCARE_MON_1, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
# 46 "data/maps/Route117/scripts.pory"
	return
# 47 "data/maps/Route117/scripts.pory"

# 48 "data/maps/Route117/scripts.pory"
Route117_EventScript_TryMoveDayCareMan::
# 49 "data/maps/Route117/scripts.pory"
	goto_if_unset FLAG_PENDING_DAYCARE_EGG, Route117_EventScript_StopMoveDayCareMan
# 50 "data/maps/Route117/scripts.pory"
	setobjectxyperm LOCALID_DAYCARE_MAN, 47, 6
# 51 "data/maps/Route117/scripts.pory"
Route117_EventScript_StopMoveDayCareMan::
# 52 "data/maps/Route117/scripts.pory"
	return
# 53 "data/maps/Route117/scripts.pory"

# 54 "data/maps/Route117/scripts.pory"
Route117_EventScript_Woman::
# 55 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_ArentTheseFlowersPretty, MSGBOX_NPC
# 56 "data/maps/Route117/scripts.pory"
	end
# 57 "data/maps/Route117/scripts.pory"

# 58 "data/maps/Route117/scripts.pory"
Route117_EventScript_LittleBoyDancing::
# 59 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_LittleBoyDancing, MSGBOX_NPC
# 60 "data/maps/Route117/scripts.pory"
	end
# 61 "data/maps/Route117/scripts.pory"

# 62 "data/maps/Route117/scripts.pory"
Route117_EventScript_MomDancing::
# 63 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MomDancing, MSGBOX_NPC
# 64 "data/maps/Route117/scripts.pory"
	end
# 65 "data/maps/Route117/scripts.pory"

# 66 "data/maps/Route117/scripts.pory"
Route117_EventScript_DadDancing::
# 67 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DadDancing, MSGBOX_NPC
# 68 "data/maps/Route117/scripts.pory"
	end
# 69 "data/maps/Route117/scripts.pory"

# 70 "data/maps/Route117/scripts.pory"
Route117_EventScript_LittleGirlDancing::
# 71 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_LittleGirlDancing, MSGBOX_NPC
# 72 "data/maps/Route117/scripts.pory"
	end
# 73 "data/maps/Route117/scripts.pory"

# 74 "data/maps/Route117/scripts.pory"
Route117_EventScript_DanceInstructorDancing::
# 75 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DanceInstructor, MSGBOX_NPC
# 76 "data/maps/Route117/scripts.pory"
	end
# 77 "data/maps/Route117/scripts.pory"

# 78 "data/maps/Route117/scripts.pory"
Route117_EventScript_Girl::
# 79 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DayCarePokemonHadNewMove, MSGBOX_NPC
# 80 "data/maps/Route117/scripts.pory"
	end
# 81 "data/maps/Route117/scripts.pory"

# 82 "data/maps/Route117/scripts.pory"
Route117_EventScript_RouteSignVerdanturf::
# 83 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_RouteSignVerdanturf, MSGBOX_SIGN
# 84 "data/maps/Route117/scripts.pory"
	end
# 85 "data/maps/Route117/scripts.pory"

# 86 "data/maps/Route117/scripts.pory"
Route117_EventScript_RouteSignMauville::
# 87 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_RouteSignMauville, MSGBOX_SIGN
# 88 "data/maps/Route117/scripts.pory"
	end
# 89 "data/maps/Route117/scripts.pory"

# 90 "data/maps/Route117/scripts.pory"
Route117_EventScript_DayCareSign::
# 91 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DayCareSign, MSGBOX_SIGN
# 92 "data/maps/Route117/scripts.pory"
	end
# 93 "data/maps/Route117/scripts.pory"

# 94 "data/maps/Route117/scripts.pory"
Route117_EventScript_Ezekiel::
# 95 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_EZEKIEL_1, Route117_Text_EzekielIntro, Route117_Text_EzekielDefeat, Route117_EventScript_RegisterEzekiel
# 96 "data/maps/Route117/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 97 "data/maps/Route117/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route117_EventScript_RematchEzekiel
# 98 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_EzekielPostBattle, MSGBOX_DEFAULT
# 99 "data/maps/Route117/scripts.pory"
	release
# 100 "data/maps/Route117/scripts.pory"
	end
# 101 "data/maps/Route117/scripts.pory"

# 102 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterEzekiel::
# 103 "data/maps/Route117/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 104 "data/maps/Route117/scripts.pory"
	waitmovement 0
# 105 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_EzekielRegister, MSGBOX_DEFAULT
# 106 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_EZEKIEL_1
# 107 "data/maps/Route117/scripts.pory"
	release
# 108 "data/maps/Route117/scripts.pory"
	end
# 109 "data/maps/Route117/scripts.pory"

# 110 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchEzekiel::
# 111 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch TRAINER_EZEKIEL_1, Route117_Text_EzekielRematchIntro, Route117_Text_EzekielRematchDefeat
# 112 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_EzekielPostRematch, MSGBOX_AUTOCLOSE
# 113 "data/maps/Route117/scripts.pory"
	end
# 114 "data/maps/Route117/scripts.pory"

# 115 "data/maps/Route117/scripts.pory"
Route117_EventScript_Lydia::
# 116 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_LYDIA_1, Route117_Text_LydiaIntro, Route117_Text_LydiaDefeat, Route117_EventScript_RegisterLydia
# 117 "data/maps/Route117/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 118 "data/maps/Route117/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route117_EventScript_RematchLydia
# 119 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_LydiaPostBattle, MSGBOX_DEFAULT
# 120 "data/maps/Route117/scripts.pory"
	release
# 121 "data/maps/Route117/scripts.pory"
	end
# 122 "data/maps/Route117/scripts.pory"

# 123 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterLydia::
# 124 "data/maps/Route117/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 125 "data/maps/Route117/scripts.pory"
	waitmovement 0
# 126 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_LydiaRegister, MSGBOX_DEFAULT
# 127 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_LYDIA_1
# 128 "data/maps/Route117/scripts.pory"
	release
# 129 "data/maps/Route117/scripts.pory"
	end
# 130 "data/maps/Route117/scripts.pory"

# 131 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchLydia::
# 132 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch TRAINER_LYDIA_1, Route117_Text_LydiaRematchIntro, Route117_Text_LydiaRematchDefeat
# 133 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_LydiaPostRematch, MSGBOX_AUTOCLOSE
# 134 "data/maps/Route117/scripts.pory"
	end
# 135 "data/maps/Route117/scripts.pory"

# 136 "data/maps/Route117/scripts.pory"
Route117_EventScript_Dylan::
# 137 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_DYLAN_1, Route117_Text_DylanIntro, Route117_Text_DylanDefeat, Route117_EventScript_RegisterDylan
# 138 "data/maps/Route117/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 139 "data/maps/Route117/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route117_EventScript_RematchDylan
# 140 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DylanPostBattle, MSGBOX_DEFAULT
# 141 "data/maps/Route117/scripts.pory"
	release
# 142 "data/maps/Route117/scripts.pory"
	end
# 143 "data/maps/Route117/scripts.pory"

# 144 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterDylan::
# 145 "data/maps/Route117/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 146 "data/maps/Route117/scripts.pory"
	waitmovement 0
# 147 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DylanRegister, MSGBOX_DEFAULT
# 148 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_DYLAN_1
# 149 "data/maps/Route117/scripts.pory"
	release
# 150 "data/maps/Route117/scripts.pory"
	end
# 151 "data/maps/Route117/scripts.pory"

# 152 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchDylan::
# 153 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch TRAINER_DYLAN_1, Route117_Text_DylanRematchIntro, Route117_Text_DylanRematchDefeat
# 154 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DylanPostRematch, MSGBOX_AUTOCLOSE
# 155 "data/maps/Route117/scripts.pory"
	end
# 156 "data/maps/Route117/scripts.pory"

# 157 "data/maps/Route117/scripts.pory"
Route117_EventScript_Maria::
# 158 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_MARIA_1, Route117_Text_MariaIntro, Route117_Text_MariaDefeat, Route117_EventScript_RegisterMaria
# 159 "data/maps/Route117/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 160 "data/maps/Route117/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route117_EventScript_RematchMaria
# 161 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MariaPostBattle, MSGBOX_DEFAULT
# 162 "data/maps/Route117/scripts.pory"
	release
# 163 "data/maps/Route117/scripts.pory"
	end
# 164 "data/maps/Route117/scripts.pory"

# 165 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterMaria::
# 166 "data/maps/Route117/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 167 "data/maps/Route117/scripts.pory"
	waitmovement 0
# 168 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MariaRegister, MSGBOX_DEFAULT
# 169 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_MARIA_1
# 170 "data/maps/Route117/scripts.pory"
	release
# 171 "data/maps/Route117/scripts.pory"
	end
# 172 "data/maps/Route117/scripts.pory"

# 173 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchMaria::
# 174 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch TRAINER_MARIA_1, Route117_Text_MariaRematchIntro, Route117_Text_MariaRematchDefeat
# 175 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MariaPostRematch, MSGBOX_AUTOCLOSE
# 176 "data/maps/Route117/scripts.pory"
	end
# 177 "data/maps/Route117/scripts.pory"

# 178 "data/maps/Route117/scripts.pory"
Route117_EventScript_Derek::
# 179 "data/maps/Route117/scripts.pory"
	lock
# 180 "data/maps/Route117/scripts.pory"
	faceplayer
# 181 "data/maps/Route117/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_HIDDEN_POWER, Route114_EventScript_ReceivedHP
# 182 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DerekYouFoundMe, MSGBOX_DEFAULT
# 183 "data/maps/Route117/scripts.pory"
	giveitem ITEM_TM_HIDDEN_POWER
# 184 "data/maps/Route117/scripts.pory"
	setflag FLAG_RECEIVED_TM_HIDDEN_POWER
# 185 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_ExplainHP, MSGBOX_DEFAULT
# 186 "data/maps/Route117/scripts.pory"
	release
# 187 "data/maps/Route117/scripts.pory"
	end
# 188 "data/maps/Route117/scripts.pory"

# 189 "data/maps/Route117/scripts.pory"
Route114_EventScript_ReceivedHP::
# 190 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_ExplainHP, MSGBOX_DEFAULT
# 191 "data/maps/Route117/scripts.pory"
	release
# 192 "data/maps/Route117/scripts.pory"
	end
# 193 "data/maps/Route117/scripts.pory"

# 194 "data/maps/Route117/scripts.pory"
Route117_EventScript_Anna::
# 195 "data/maps/Route117/scripts.pory"
	trainerbattle_double TRAINER_ANNA_AND_MEG_1, Route117_Text_AnnaIntro, Route117_Text_AnnaDefeat, Route117_Text_AnnaNotEnoughMons, Route117_EventScript_RegisterAnna
# 196 "data/maps/Route117/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 197 "data/maps/Route117/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route117_EventScript_RematchAnna
# 198 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AnnaPostBattle, MSGBOX_DEFAULT
# 199 "data/maps/Route117/scripts.pory"
	release
# 200 "data/maps/Route117/scripts.pory"
	end
# 201 "data/maps/Route117/scripts.pory"

# 202 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterAnna::
# 203 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AnnaAndMegRegister, MSGBOX_DEFAULT
# 204 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_ANNA_AND_MEG_1
# 205 "data/maps/Route117/scripts.pory"
	release
# 206 "data/maps/Route117/scripts.pory"
	end
# 207 "data/maps/Route117/scripts.pory"

# 208 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchAnna::
# 209 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch_double TRAINER_ANNA_AND_MEG_1, Route117_Text_AnnaRematchIntro, Route117_Text_AnnaRematchDefeat, Route117_Text_AnnaRematchNotEnoughMons
# 210 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AnnaPostRematch, MSGBOX_AUTOCLOSE
# 211 "data/maps/Route117/scripts.pory"
	end
# 212 "data/maps/Route117/scripts.pory"

# 213 "data/maps/Route117/scripts.pory"
Route117_EventScript_Meg::
# 214 "data/maps/Route117/scripts.pory"
	trainerbattle_double TRAINER_ANNA_AND_MEG_1, Route117_Text_MegIntro, Route117_Text_MegDefeat, Route117_Text_MegNotEnoughMons, Route117_EventScript_RegisterMeg
# 215 "data/maps/Route117/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 216 "data/maps/Route117/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route117_EventScript_RematchMeg
# 217 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MegPostBattle, MSGBOX_DEFAULT
# 218 "data/maps/Route117/scripts.pory"
	release
# 219 "data/maps/Route117/scripts.pory"
	end
# 220 "data/maps/Route117/scripts.pory"

# 221 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterMeg::
# 222 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AnnaAndMegRegister, MSGBOX_DEFAULT
# 223 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_ANNA_AND_MEG_1
# 224 "data/maps/Route117/scripts.pory"
	release
# 225 "data/maps/Route117/scripts.pory"
	end
# 226 "data/maps/Route117/scripts.pory"

# 227 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchMeg::
# 228 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch_double TRAINER_ANNA_AND_MEG_1, Route117_Text_MegRematchIntro, Route117_Text_MegRematchDefeat, Route117_Text_MegRematchNotEnoughMons
# 229 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MegPostRematch, MSGBOX_AUTOCLOSE
# 230 "data/maps/Route117/scripts.pory"
	end
# 231 "data/maps/Route117/scripts.pory"

# 232 "data/maps/Route117/scripts.pory"
Route117_EventScript_Melina::
# 233 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MelinaDaycare, MSGBOX_NPC
# 234 "data/maps/Route117/scripts.pory"
	end
# 235 "data/maps/Route117/scripts.pory"

# 236 "data/maps/Route117/scripts.pory"
Route117_EventScript_Brandi::
# 237 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_BRANDI, Route117_Text_BrandiIntro, Route117_Text_BrandiDefeat
# 238 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_BrandiPostBattle, MSGBOX_AUTOCLOSE
# 239 "data/maps/Route117/scripts.pory"
	end
# 240 "data/maps/Route117/scripts.pory"

# 241 "data/maps/Route117/scripts.pory"
Route117_EventScript_Aisha::
# 242 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_AISHA, Route117_Text_AishaIntro, Route117_Text_AishaDefeat
# 243 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AishaPostBattle, MSGBOX_AUTOCLOSE
# 244 "data/maps/Route117/scripts.pory"
	end
# 245 "data/maps/Route117/scripts.pory"

# 246 "data/maps/Route117/scripts.pory"
Route117_Text_MelinaDaycare:
# 247 "data/maps/Route117/scripts.pory"
	.string "Yo I actually don't know if the eggs out\n"
# 248 "data/maps/Route117/scripts.pory"
	.string "of the day care will have perfect IVs,\l"
# 249 "data/maps/Route117/scripts.pory"
	.string "you sure can try though.$"
# 250 "data/maps/Route117/scripts.pory"

# 251 "data/maps/Route117/scripts.pory"
Route117_Text_DerekYouFoundMe:
# 252 "data/maps/Route117/scripts.pory"
	.string "Wow, you found me! I didn't think anyone\n"
# 253 "data/maps/Route117/scripts.pory"
	.string "ever would! I guess I don't have Hidden\l"
# 254 "data/maps/Route117/scripts.pory"
	.string "Power anymore, so you should have it!$"
# 255 "data/maps/Route117/scripts.pory"

# 256 "data/maps/Route117/scripts.pory"
Route117_Text_ExplainHP:
# 257 "data/maps/Route117/scripts.pory"
	.string "TM10 contains Hidden Power. That\n"
# 258 "data/maps/Route117/scripts.pory"
	.string "move's type can change depending on\l"
# 259 "data/maps/Route117/scripts.pory"
	.string "how your IVs are set. There's a guy\l"
# 260 "data/maps/Route117/scripts.pory"
	.string "somewhere who can change your IVs for\l"
# 261 "data/maps/Route117/scripts.pory"
	.string "that, I think he's further ahead\l"
# 262 "data/maps/Route117/scripts.pory"
	.string "though.$"
# 263 "data/maps/Route117/scripts.pory"

# 264 "data/maps/Route117/scripts.pory"
Route117_Text_DayCarePokemonHadNewMove:
# 265 "data/maps/Route117/scripts.pory"
	.string "I left my Pokémon at the DAY CARE.\p"
# 266 "data/maps/Route117/scripts.pory"
	.string "When I got it back, it had a new move\n"
# 267 "data/maps/Route117/scripts.pory"
	.string "that I didn't teach it.\l"
# 268 "data/maps/Route117/scripts.pory"
	.string "I was really, really surprised.$"
# 269 "data/maps/Route117/scripts.pory"

# 270 "data/maps/Route117/scripts.pory"
Route117_Text_ArentTheseFlowersPretty:
# 271 "data/maps/Route117/scripts.pory"
	.string "What do you think?\n"
# 272 "data/maps/Route117/scripts.pory"
	.string "Aren't these flowers pretty?\p"
# 273 "data/maps/Route117/scripts.pory"
	.string "I planted them all!$"
# 274 "data/maps/Route117/scripts.pory"

# 275 "data/maps/Route117/scripts.pory"
Route117_Text_LittleBoyDancing:
# 276 "data/maps/Route117/scripts.pory"
	.string "Weeee! This dance is so fun!$"
# 277 "data/maps/Route117/scripts.pory"

# 278 "data/maps/Route117/scripts.pory"
Route117_Text_MomDancing:
# 279 "data/maps/Route117/scripts.pory"
	.string "I hope we get to do outdoor lessons\n"
# 280 "data/maps/Route117/scripts.pory"
	.string "more often!$"
# 281 "data/maps/Route117/scripts.pory"

# 282 "data/maps/Route117/scripts.pory"
Route117_Text_DadDancing:
# 283 "data/maps/Route117/scripts.pory"
	.string "I have no idea what I'm doing, but I'm\n"
# 284 "data/maps/Route117/scripts.pory"
	.string "glad my daughter is having fun.$"
# 285 "data/maps/Route117/scripts.pory"

# 286 "data/maps/Route117/scripts.pory"
Route117_Text_LittleGirlDancing:
# 287 "data/maps/Route117/scripts.pory"
	.string "I love spinning!! Thanks for taking me\n"
# 288 "data/maps/Route117/scripts.pory"
	.string "dancing, dad!$"
# 289 "data/maps/Route117/scripts.pory"

# 290 "data/maps/Route117/scripts.pory"
Route117_Text_DanceInstructor:
# 291 "data/maps/Route117/scripts.pory"
	.string "It's such a beautiful day that I\n"
# 292 "data/maps/Route117/scripts.pory"
	.string "thought we'd have class outside!\p"
# 293 "data/maps/Route117/scripts.pory"
	.string "Oh, you must be wondering what the\n"
# 294 "data/maps/Route117/scripts.pory"
	.string "Elite Four member Phoebe is doing way\l"
# 295 "data/maps/Route117/scripts.pory"
	.string "out here…\p"
# 296 "data/maps/Route117/scripts.pory"
	.string "… … …\p"
# 297 "data/maps/Route117/scripts.pory"
	.string "Surprise! I'm her twin sister, Ursula! I\n"
# 298 "data/maps/Route117/scripts.pory"
	.string "may not be as good a battler as Phoebe,\l"
# 299 "data/maps/Route117/scripts.pory"
	.string "but I'm a way better dancer!\p"
# 300 "data/maps/Route117/scripts.pory"
	.string "Tell you what, if you can beat Wattson,\n"
# 301 "data/maps/Route117/scripts.pory"
	.string "come see me in Vendanturf Town and I'll\l"
# 302 "data/maps/Route117/scripts.pory"
	.string "give you a lesson!$"
# 303 "data/maps/Route117/scripts.pory"

# 304 "data/maps/Route117/scripts.pory"
Route117_Text_RouteSignVerdanturf:
# 305 "data/maps/Route117/scripts.pory"
	.string "ROUTE 117\n"
# 306 "data/maps/Route117/scripts.pory"
	.string "{LEFT_ARROW} VERDANTURF TOWN$"
# 307 "data/maps/Route117/scripts.pory"

# 308 "data/maps/Route117/scripts.pory"
Route117_Text_RouteSignMauville:
# 309 "data/maps/Route117/scripts.pory"
	.string "ROUTE 117\n"
# 310 "data/maps/Route117/scripts.pory"
	.string "{RIGHT_ARROW} MAUVILLE CITY$"
# 311 "data/maps/Route117/scripts.pory"

# 312 "data/maps/Route117/scripts.pory"
Route117_Text_DayCareSign:
# 313 "data/maps/Route117/scripts.pory"
	.string "Pokémon DAY CARE\n"
# 314 "data/maps/Route117/scripts.pory"
	.string "“Let us raise your Pokémon.”$"

Route117_EventScript_Fantina::
# 319 "data/maps/Route117/scripts.pory"
	lockall
# 320 "data/maps/Route117/scripts.pory"
	applymovement 29, Common_Movement_FacePlayer
# 321 "data/maps/Route117/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_SHADOW_BALL, Route117_EventScript_FantinaDefeated
# 322 "data/maps/Route117/scripts.pory"
	goto_if_set FLAG_DECLINED_FANTINA_BATTLE_117, Route117_EventScript_FantinaRequestBattleAgain
# 323 "data/maps/Route117/scripts.pory"
	msgbox Fantina_Greeting, MSGBOX_YESNO
# 324 "data/maps/Route117/scripts.pory"
	goto Route117_EventScript_BattleFantinaPrompt
	end


Route117_EventScript_FantinaRequestBattleAgain::
# 329 "data/maps/Route117/scripts.pory"
	msgbox Ready_Yet, MSGBOX_YESNO
# 330 "data/maps/Route117/scripts.pory"
	goto Route117_EventScript_BattleFantinaPrompt
	end


Route117_EventScript_BattleFantinaPrompt::
# 335 "data/maps/Route117/scripts.pory"
	call_if_eq VAR_RESULT, YES, Route117_EventScript_BattleFantina
# 336 "data/maps/Route117/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route117_EventScript_DeclineFantinaBattle
# 337 "data/maps/Route117/scripts.pory"
	closemessage
	end


Route117_EventScript_DeclineFantinaBattle::
# 342 "data/maps/Route117/scripts.pory"
	setflag FLAG_DECLINED_FANTINA_BATTLE_117
# 343 "data/maps/Route117/scripts.pory"
	msgbox Come_Back_When_Ready, MSGBOX_DEFAULT
# 344 "data/maps/Route117/scripts.pory"
	release
	end


Route117_EventScript_BattleFantina::
# 349 "data/maps/Route117/scripts.pory"
	msgbox Route117_EventScript_BattleFantina_Text_0, MSGBOX_DEFAULT
# 350 "data/maps/Route117/scripts.pory"
	trainerbattle_no_intro TRAINER_FANTINA, Fantina_Outro
# 351 "data/maps/Route117/scripts.pory"
	goto Route117_EventScript_FantinaGiveItems
	return


Route117_EventScript_FantinaDefeated::
# 357 "data/maps/Route117/scripts.pory"
	msgbox PostBattle_Fantina, MSGBOX_DEFAULT
# 358 "data/maps/Route117/scripts.pory"
	releaseall
	end


Route117_EventScript_FantinaGiveItems::
# 363 "data/maps/Route117/scripts.pory"
	giveitem ITEM_TM_PSYCHIC
# 364 "data/maps/Route117/scripts.pory"
	giveitem ITEM_TM_SHADOW_BALL
# 365 "data/maps/Route117/scripts.pory"
	giveitem ITEM_TM_BRICK_BREAK
# 366 "data/maps/Route117/scripts.pory"
	giveitem ITEM_BANETTITE
# 367 "data/maps/Route117/scripts.pory"
	giveitem ITEM_SABLENITE
# 368 "data/maps/Route117/scripts.pory"
	giveitem ITEM_GENGARITE
# 369 "data/maps/Route117/scripts.pory"
	giveitem ITEM_EXPERT_BELT
# 370 "data/maps/Route117/scripts.pory"
	giveitem ITEM_LEFTOVERS
# 371 "data/maps/Route117/scripts.pory"
	setflag FLAG_RECEIVED_TM_SHADOW_BALL
# 372 "data/maps/Route117/scripts.pory"
	msgbox Fantina_ExplainItems
# 373 "data/maps/Route117/scripts.pory"
	release
	end


Route117_EventScript_BattleFantina_Text_0:
# 349 "data/maps/Route117/scripts.pory"
	.string "You're on!$"

Fantina_ExplainItems::
# 377 "data/maps/Route117/scripts.pory"
	.string "Those three are some very\n"
	.string "powerful moves. In addition, I had\l"
	.string "a few spare Mega Stones for some\l"
	.string "Ghost-type Pokémon, though you'll need\l"
	.string "a Mega Ring if you want to use them.\p"
	.string "Finally, the Expert Belt is used for\n"
	.string "boosting moves that are super\l"
	.string "effective. I'm, sure you'll put it to\l"
	.string "good use. Best of luck!$"

Fantina_Greeting::
# 389 "data/maps/Route117/scripts.pory"
	.string "Oh, hello there, my name is Fantina.\n"
	.string "Did you come here to enjoy the\l"
	.string "flowers too?\p"
	.string "I've heard tales of the wonderful\n"
	.string "flower patches here in the Hoenn\l"
	.string "region, so I had to come see them\l"
	.string "for myself!\p"
	.string "Oh, you didn't come to admire the\n"
	.string "flowers? That's fine, I also came here\l"
	.string "to battle new trainers.\p"
	.string "Is that what you came here for?$"

Fantina_Outro::
# 403 "data/maps/Route117/scripts.pory"
	.string "My my! To think, there are such strong\n"
	.string "trainers here in the Hoenn region. I\l"
	.string "think you can make good use of these.$"

PostBattle_Fantina::
# 410 "data/maps/Route117/scripts.pory"
	.string "Maybe I'll head to Ever Grande City\n"
	.string "after this, I've heard the flowers\l"
	.string "there are extraordinary.$"
