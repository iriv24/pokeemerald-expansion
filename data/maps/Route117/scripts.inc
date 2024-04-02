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
Route117_EventScript_LittleBoyDancing::
# 23 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_LittleBoyDancing, MSGBOX_NPC
# 24 "data/maps/Route117/scripts.pory"
	end
# 25 "data/maps/Route117/scripts.pory"

# 26 "data/maps/Route117/scripts.pory"
Route117_EventScript_MomDancing::
# 27 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MomDancing, MSGBOX_NPC
# 28 "data/maps/Route117/scripts.pory"
	end
# 29 "data/maps/Route117/scripts.pory"

# 30 "data/maps/Route117/scripts.pory"
Route117_EventScript_DadDancing::
# 31 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DadDancing, MSGBOX_NPC
# 32 "data/maps/Route117/scripts.pory"
	end
# 33 "data/maps/Route117/scripts.pory"

# 34 "data/maps/Route117/scripts.pory"
Route117_EventScript_LittleGirlDancing::
# 35 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_LittleGirlDancing, MSGBOX_NPC
# 36 "data/maps/Route117/scripts.pory"
	end
# 37 "data/maps/Route117/scripts.pory"

# 38 "data/maps/Route117/scripts.pory"
Route117_EventScript_DanceInstructorDancing::
# 39 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DanceInstructor, MSGBOX_NPC
# 40 "data/maps/Route117/scripts.pory"
	end
# 41 "data/maps/Route117/scripts.pory"

# 42 "data/maps/Route117/scripts.pory"
Route117_EventScript_Girl::
# 43 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DayCarePokemonHadNewMove, MSGBOX_NPC
# 44 "data/maps/Route117/scripts.pory"
	end
# 45 "data/maps/Route117/scripts.pory"

# 46 "data/maps/Route117/scripts.pory"
Route117_EventScript_RouteSignVerdanturf::
# 47 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_RouteSignVerdanturf, MSGBOX_SIGN
# 48 "data/maps/Route117/scripts.pory"
	end
# 49 "data/maps/Route117/scripts.pory"

# 50 "data/maps/Route117/scripts.pory"
Route117_EventScript_RouteSignMauville::
# 51 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_RouteSignMauville, MSGBOX_SIGN
# 52 "data/maps/Route117/scripts.pory"
	end
# 53 "data/maps/Route117/scripts.pory"

# 54 "data/maps/Route117/scripts.pory"
Route117_EventScript_DayCareSign::
# 55 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DayCareSign, MSGBOX_SIGN
# 56 "data/maps/Route117/scripts.pory"
	end
# 57 "data/maps/Route117/scripts.pory"

# 58 "data/maps/Route117/scripts.pory"
Route117_EventScript_Ezekiel::
# 59 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_EZEKIEL_1, Route117_Text_EzekielIntro, Route117_Text_EzekielDefeat, Route117_EventScript_RegisterEzekiel
# 60 "data/maps/Route117/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 61 "data/maps/Route117/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route117_EventScript_RematchEzekiel
# 62 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_EzekielPostBattle, MSGBOX_DEFAULT
# 63 "data/maps/Route117/scripts.pory"
	release
# 64 "data/maps/Route117/scripts.pory"
	end
# 65 "data/maps/Route117/scripts.pory"

# 66 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterEzekiel::
# 67 "data/maps/Route117/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 68 "data/maps/Route117/scripts.pory"
	waitmovement 0
# 69 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_EzekielRegister, MSGBOX_DEFAULT
# 70 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_EZEKIEL_1
# 71 "data/maps/Route117/scripts.pory"
	release
# 72 "data/maps/Route117/scripts.pory"
	end
# 73 "data/maps/Route117/scripts.pory"

# 74 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchEzekiel::
# 75 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch TRAINER_EZEKIEL_1, Route117_Text_EzekielRematchIntro, Route117_Text_EzekielRematchDefeat
# 76 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_EzekielPostRematch, MSGBOX_AUTOCLOSE
# 77 "data/maps/Route117/scripts.pory"
	end
# 78 "data/maps/Route117/scripts.pory"

# 79 "data/maps/Route117/scripts.pory"
Route117_EventScript_Lydia::
# 80 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_LYDIA_1, Route117_Text_LydiaIntro, Route117_Text_LydiaDefeat, Route117_EventScript_RegisterLydia
# 81 "data/maps/Route117/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 82 "data/maps/Route117/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route117_EventScript_RematchLydia
# 83 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_LydiaPostBattle, MSGBOX_DEFAULT
# 84 "data/maps/Route117/scripts.pory"
	release
# 85 "data/maps/Route117/scripts.pory"
	end
# 86 "data/maps/Route117/scripts.pory"

# 87 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterLydia::
# 88 "data/maps/Route117/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 89 "data/maps/Route117/scripts.pory"
	waitmovement 0
# 90 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_LydiaRegister, MSGBOX_DEFAULT
# 91 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_LYDIA_1
# 92 "data/maps/Route117/scripts.pory"
	release
# 93 "data/maps/Route117/scripts.pory"
	end
# 94 "data/maps/Route117/scripts.pory"

# 95 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchLydia::
# 96 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch TRAINER_LYDIA_1, Route117_Text_LydiaRematchIntro, Route117_Text_LydiaRematchDefeat
# 97 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_LydiaPostRematch, MSGBOX_AUTOCLOSE
# 98 "data/maps/Route117/scripts.pory"
	end
# 99 "data/maps/Route117/scripts.pory"

# 100 "data/maps/Route117/scripts.pory"
Route117_EventScript_Dylan::
# 101 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_DYLAN_1, Route117_Text_DylanIntro, Route117_Text_DylanDefeat, Route117_EventScript_RegisterDylan
# 102 "data/maps/Route117/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 103 "data/maps/Route117/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route117_EventScript_RematchDylan
# 104 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DylanPostBattle, MSGBOX_DEFAULT
# 105 "data/maps/Route117/scripts.pory"
	release
# 106 "data/maps/Route117/scripts.pory"
	end
# 107 "data/maps/Route117/scripts.pory"

# 108 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterDylan::
# 109 "data/maps/Route117/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 110 "data/maps/Route117/scripts.pory"
	waitmovement 0
# 111 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DylanRegister, MSGBOX_DEFAULT
# 112 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_DYLAN_1
# 113 "data/maps/Route117/scripts.pory"
	release
# 114 "data/maps/Route117/scripts.pory"
	end
# 115 "data/maps/Route117/scripts.pory"

# 116 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchDylan::
# 117 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch TRAINER_DYLAN_1, Route117_Text_DylanRematchIntro, Route117_Text_DylanRematchDefeat
# 118 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DylanPostRematch, MSGBOX_AUTOCLOSE
# 119 "data/maps/Route117/scripts.pory"
	end
# 120 "data/maps/Route117/scripts.pory"

# 121 "data/maps/Route117/scripts.pory"
Route117_EventScript_Maria::
# 122 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_MARIA_1, Route117_Text_MariaIntro, Route117_Text_MariaDefeat, Route117_EventScript_RegisterMaria
# 123 "data/maps/Route117/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 124 "data/maps/Route117/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route117_EventScript_RematchMaria
# 125 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MariaPostBattle, MSGBOX_DEFAULT
# 126 "data/maps/Route117/scripts.pory"
	release
# 127 "data/maps/Route117/scripts.pory"
	end
# 128 "data/maps/Route117/scripts.pory"

# 129 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterMaria::
# 130 "data/maps/Route117/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 131 "data/maps/Route117/scripts.pory"
	waitmovement 0
# 132 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MariaRegister, MSGBOX_DEFAULT
# 133 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_MARIA_1
# 134 "data/maps/Route117/scripts.pory"
	release
# 135 "data/maps/Route117/scripts.pory"
	end
# 136 "data/maps/Route117/scripts.pory"

# 137 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchMaria::
# 138 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch TRAINER_MARIA_1, Route117_Text_MariaRematchIntro, Route117_Text_MariaRematchDefeat
# 139 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MariaPostRematch, MSGBOX_AUTOCLOSE
# 140 "data/maps/Route117/scripts.pory"
	end
# 141 "data/maps/Route117/scripts.pory"

# 142 "data/maps/Route117/scripts.pory"
Route117_EventScript_Derek::
# 143 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_DEREK, Route117_Text_DerekIntro, Route117_Text_DerekDefeat
# 144 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DerekPostBattle, MSGBOX_AUTOCLOSE
# 145 "data/maps/Route117/scripts.pory"
	end
# 146 "data/maps/Route117/scripts.pory"

# 147 "data/maps/Route117/scripts.pory"
Route117_EventScript_Anna::
# 148 "data/maps/Route117/scripts.pory"
	trainerbattle_double TRAINER_ANNA_AND_MEG_1, Route117_Text_AnnaIntro, Route117_Text_AnnaDefeat, Route117_Text_AnnaNotEnoughMons, Route117_EventScript_RegisterAnna
# 149 "data/maps/Route117/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 150 "data/maps/Route117/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route117_EventScript_RematchAnna
# 151 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AnnaPostBattle, MSGBOX_DEFAULT
# 152 "data/maps/Route117/scripts.pory"
	release
# 153 "data/maps/Route117/scripts.pory"
	end
# 154 "data/maps/Route117/scripts.pory"

# 155 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterAnna::
# 156 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AnnaAndMegRegister, MSGBOX_DEFAULT
# 157 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_ANNA_AND_MEG_1
# 158 "data/maps/Route117/scripts.pory"
	release
# 159 "data/maps/Route117/scripts.pory"
	end
# 160 "data/maps/Route117/scripts.pory"

# 161 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchAnna::
# 162 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch_double TRAINER_ANNA_AND_MEG_1, Route117_Text_AnnaRematchIntro, Route117_Text_AnnaRematchDefeat, Route117_Text_AnnaRematchNotEnoughMons
# 163 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AnnaPostRematch, MSGBOX_AUTOCLOSE
# 164 "data/maps/Route117/scripts.pory"
	end
# 165 "data/maps/Route117/scripts.pory"

# 166 "data/maps/Route117/scripts.pory"
Route117_EventScript_Meg::
# 167 "data/maps/Route117/scripts.pory"
	trainerbattle_double TRAINER_ANNA_AND_MEG_1, Route117_Text_MegIntro, Route117_Text_MegDefeat, Route117_Text_MegNotEnoughMons, Route117_EventScript_RegisterMeg
# 168 "data/maps/Route117/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 169 "data/maps/Route117/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route117_EventScript_RematchMeg
# 170 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MegPostBattle, MSGBOX_DEFAULT
# 171 "data/maps/Route117/scripts.pory"
	release
# 172 "data/maps/Route117/scripts.pory"
	end
# 173 "data/maps/Route117/scripts.pory"

# 174 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterMeg::
# 175 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AnnaAndMegRegister, MSGBOX_DEFAULT
# 176 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_ANNA_AND_MEG_1
# 177 "data/maps/Route117/scripts.pory"
	release
# 178 "data/maps/Route117/scripts.pory"
	end
# 179 "data/maps/Route117/scripts.pory"

# 180 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchMeg::
# 181 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch_double TRAINER_ANNA_AND_MEG_1, Route117_Text_MegRematchIntro, Route117_Text_MegRematchDefeat, Route117_Text_MegRematchNotEnoughMons
# 182 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MegPostRematch, MSGBOX_AUTOCLOSE
# 183 "data/maps/Route117/scripts.pory"
	end
# 184 "data/maps/Route117/scripts.pory"

# 185 "data/maps/Route117/scripts.pory"
Route117_EventScript_Melina::
# 186 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MelinaDaycare, MSGBOX_NPC
# 187 "data/maps/Route117/scripts.pory"
	end
# 188 "data/maps/Route117/scripts.pory"

# 189 "data/maps/Route117/scripts.pory"
Route117_EventScript_Brandi::
# 190 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_BRANDI, Route117_Text_BrandiIntro, Route117_Text_BrandiDefeat
# 191 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_BrandiPostBattle, MSGBOX_AUTOCLOSE
# 192 "data/maps/Route117/scripts.pory"
	end
# 193 "data/maps/Route117/scripts.pory"

# 194 "data/maps/Route117/scripts.pory"
Route117_EventScript_Aisha::
# 195 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_AISHA, Route117_Text_AishaIntro, Route117_Text_AishaDefeat
# 196 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AishaPostBattle, MSGBOX_AUTOCLOSE
# 197 "data/maps/Route117/scripts.pory"
	end
# 198 "data/maps/Route117/scripts.pory"

# 199 "data/maps/Route117/scripts.pory"
Route117_Text_MelinaDaycare:
# 200 "data/maps/Route117/scripts.pory"
	.string "Yo I actually don't know if the eggs out\n"
# 201 "data/maps/Route117/scripts.pory"
	.string "of the day care will have perfect IVs,\p"
# 202 "data/maps/Route117/scripts.pory"
	.string "you sure can try though.$"
# 203 "data/maps/Route117/scripts.pory"

# 204 "data/maps/Route117/scripts.pory"
Route117_Text_DayCarePokemonHadNewMove:
# 205 "data/maps/Route117/scripts.pory"
	.string "I left my POKéMON at the DAY CARE.\p"
# 206 "data/maps/Route117/scripts.pory"
	.string "When I got it back, it had a new move\n"
# 207 "data/maps/Route117/scripts.pory"
	.string "that I didn't teach it.\l"
# 208 "data/maps/Route117/scripts.pory"
	.string "I was really, really surprised.$"
# 209 "data/maps/Route117/scripts.pory"

# 210 "data/maps/Route117/scripts.pory"
Route117_Text_ArentTheseFlowersPretty:
# 211 "data/maps/Route117/scripts.pory"
	.string "What do you think?\n"
# 212 "data/maps/Route117/scripts.pory"
	.string "Aren't these flowers pretty?\p"
# 213 "data/maps/Route117/scripts.pory"
	.string "I planted them all!$"
# 214 "data/maps/Route117/scripts.pory"

# 215 "data/maps/Route117/scripts.pory"
Route117_Text_LittleBoyDancing:
# 216 "data/maps/Route117/scripts.pory"
	.string "Weeee! This dance is so fun!$"
# 217 "data/maps/Route117/scripts.pory"

# 218 "data/maps/Route117/scripts.pory"
Route117_Text_MomDancing:
# 219 "data/maps/Route117/scripts.pory"
	.string "I hope we get to do outdoor lessons\n"
# 220 "data/maps/Route117/scripts.pory"
	.string "more often!$"
# 221 "data/maps/Route117/scripts.pory"

# 222 "data/maps/Route117/scripts.pory"
Route117_Text_DadDancing:
# 223 "data/maps/Route117/scripts.pory"
	.string "I have no idea what I'm doing, but I'm\n"
# 224 "data/maps/Route117/scripts.pory"
	.string "glad my daughter is having fun.$"
# 225 "data/maps/Route117/scripts.pory"

# 226 "data/maps/Route117/scripts.pory"
Route117_Text_LittleGirlDancing:
# 227 "data/maps/Route117/scripts.pory"
	.string "I love spinning!! Thanks for taking me\n"
# 228 "data/maps/Route117/scripts.pory"
	.string "dancing, dad!$"
# 229 "data/maps/Route117/scripts.pory"

# 230 "data/maps/Route117/scripts.pory"
Route117_Text_DanceInstructor:
# 231 "data/maps/Route117/scripts.pory"
	.string "It's such a beautiful day that I\n"
# 232 "data/maps/Route117/scripts.pory"
	.string "thought we'd have class outside! Oh,\p"
# 233 "data/maps/Route117/scripts.pory"
	.string "you must be wondering what the Elite\n"
# 234 "data/maps/Route117/scripts.pory"
	.string "Four member Phoebe is doing way out\p"
# 235 "data/maps/Route117/scripts.pory"
	.string "here...\p"
# 236 "data/maps/Route117/scripts.pory"
	.string "...\p"
# 237 "data/maps/Route117/scripts.pory"
	.string "Surprise! I'm her twin sister, Ursula! I\n"
# 238 "data/maps/Route117/scripts.pory"
	.string "may not be as good a battler as Phoebe,\p"
# 239 "data/maps/Route117/scripts.pory"
	.string "but I'm a way better dancer! Tell you\n"
# 240 "data/maps/Route117/scripts.pory"
	.string "what, if you can beat Wattson, come see\p"
# 241 "data/maps/Route117/scripts.pory"
	.string "me in Vendanturf Town and I'll give you\n"
# 242 "data/maps/Route117/scripts.pory"
	.string "a lesson!$"
# 243 "data/maps/Route117/scripts.pory"

# 244 "data/maps/Route117/scripts.pory"
Route117_Text_RouteSignVerdanturf:
# 245 "data/maps/Route117/scripts.pory"
	.string "ROUTE 117\n"
# 246 "data/maps/Route117/scripts.pory"
	.string "{LEFT_ARROW} VERDANTURF TOWN$"
# 247 "data/maps/Route117/scripts.pory"

# 248 "data/maps/Route117/scripts.pory"
Route117_Text_RouteSignMauville:
# 249 "data/maps/Route117/scripts.pory"
	.string "ROUTE 117\n"
# 250 "data/maps/Route117/scripts.pory"
	.string "{RIGHT_ARROW} MAUVILLE CITY$"
# 251 "data/maps/Route117/scripts.pory"

# 252 "data/maps/Route117/scripts.pory"
Route117_Text_DayCareSign:
# 253 "data/maps/Route117/scripts.pory"
	.string "POKéMON DAY CARE\n"
# 254 "data/maps/Route117/scripts.pory"
	.string "“Let us raise your POKéMON.”$"

Route117_EventScript_FantinaBattle::
# 259 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_FANTINA, Fantina_Greeting, Fantina_Outro, Route117_EventScript_FantinaDefeated, NO_MUSIC
# 260 "data/maps/Route117/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_SHADOW_BALL, Route117_EventScript_FantinaGiveItems
# 261 "data/maps/Route117/scripts.pory"
	msgbox PostBattle_Fantina, MSGBOX_AUTOCLOSE
# 262 "data/maps/Route117/scripts.pory"
	waitmessage
	end


Route117_EventScript_FantinaDefeated::
# 267 "data/maps/Route117/scripts.pory"
	goto Route117_EventScript_FantinaGiveItems
	end


Route117_EventScript_FantinaGiveItems::
# 273 "data/maps/Route117/scripts.pory"
	giveitem ITEM_TM_SHADOW_BALL
# 274 "data/maps/Route117/scripts.pory"
	giveitem ITEM_TM_BRICK_BREAK
# 275 "data/maps/Route117/scripts.pory"
	giveitem ITEM_BANETTITE
# 276 "data/maps/Route117/scripts.pory"
	giveitem ITEM_SABLENITE
# 277 "data/maps/Route117/scripts.pory"
	giveitem ITEM_GENGARITE
# 278 "data/maps/Route117/scripts.pory"
	giveitem ITEM_EXPERT_BELT
# 279 "data/maps/Route117/scripts.pory"
	setflag FLAG_RECEIVED_TM_SHADOW_BALL
# 280 "data/maps/Route117/scripts.pory"
	msgbox Fantina_ExplainItems
# 281 "data/maps/Route117/scripts.pory"
	release
	end


Fantina_ExplainItems::
# 285 "data/maps/Route117/scripts.pory"
	.string "Shadow Ball and Brick Break are two\n"
	.string "very powerful moves. In addition, I had\p"
	.string "a few spare Mega Stones for some\n"
	.string "Ghost-type Pokémon, though you'll need\p"
	.string "a Mega Ring if you want to use them.\n"
	.string "Finally, the Expert Belt is used for\p"
	.string "boosting moves that are super\n"
	.string "effective. I'm, sure you'll put it to\p"
	.string "good use. Best of luck!$"

Fantina_Greeting::
# 297 "data/maps/Route117/scripts.pory"
	.string "Oh, hello there, my name is Fantina. Did\n"
	.string "you come here to enjoy the flowers,\p"
	.string "too? Or were you looking for a battle?$"

Fantina_Outro::
# 303 "data/maps/Route117/scripts.pory"
	.string "My my! To think, there are such strong\n"
	.string "trainers here in the Hoenn region. I\p"
	.string "think you can make good use of these.$"

PostBattle_Fantina::
# 310 "data/maps/Route117/scripts.pory"
	.string "It's much prettier here than back home.$"
