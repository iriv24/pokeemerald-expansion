# 1 "data/maps/MossdeepCity/scripts.pory"

# 2 "data/maps/MossdeepCity/scripts.pory"
.set LOCALID_GRUNT_1, 10
# 3 "data/maps/MossdeepCity/scripts.pory"
.set LOCALID_GRUNT_2, 11
# 4 "data/maps/MossdeepCity/scripts.pory"
.set LOCALID_GRUNT_3, 12
# 5 "data/maps/MossdeepCity/scripts.pory"
.set LOCALID_GRUNT_4, 13
# 6 "data/maps/MossdeepCity/scripts.pory"
.set LOCALID_MAXIE, 14
# 7 "data/maps/MossdeepCity/scripts.pory"
.set LOCALID_SCOTT, 16
# 8 "data/maps/MossdeepCity/scripts.pory"

# 9 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_MapScripts::
# 10 "data/maps/MossdeepCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MossdeepCity_OnTransition
# 11 "data/maps/MossdeepCity/scripts.pory"
	.byte 0
# 12 "data/maps/MossdeepCity/scripts.pory"

# 13 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_OnTransition:
# 14 "data/maps/MossdeepCity/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_1
# 15 "data/maps/MossdeepCity/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_2
# 16 "data/maps/MossdeepCity/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_3
# 17 "data/maps/MossdeepCity/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_4
# 18 "data/maps/MossdeepCity/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
# 19 "data/maps/MossdeepCity/scripts.pory"
	end
# 20 "data/maps/MossdeepCity/scripts.pory"

# 21 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_PokefanF::
# 22 "data/maps/MossdeepCity/scripts.pory"
	lock
# 23 "data/maps/MossdeepCity/scripts.pory"
	faceplayer
# 24 "data/maps/MossdeepCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_DIVE, MossdeepCity_EventScript_PokefanFMagmaGone
# 25 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SpaceCenterReceivedLetter, MSGBOX_DEFAULT
# 26 "data/maps/MossdeepCity/scripts.pory"
	release
# 27 "data/maps/MossdeepCity/scripts.pory"
	end
# 28 "data/maps/MossdeepCity/scripts.pory"

# 29 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_PokefanFMagmaGone::
# 30 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SpaceCenterLaunchingRockets, MSGBOX_DEFAULT
# 31 "data/maps/MossdeepCity/scripts.pory"
	release
# 32 "data/maps/MossdeepCity/scripts.pory"
	end
# 33 "data/maps/MossdeepCity/scripts.pory"

# 34 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_Sailor::
# 35 "data/maps/MossdeepCity/scripts.pory"
	lock
# 36 "data/maps/MossdeepCity/scripts.pory"
	faceplayer
# 37 "data/maps/MossdeepCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_DIVE, MossdeepCity_EventScript_SailorMagmaGone
# 38 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_MossdeepTargetedByMagma, MSGBOX_DEFAULT
# 39 "data/maps/MossdeepCity/scripts.pory"
	release
# 40 "data/maps/MossdeepCity/scripts.pory"
	end
# 41 "data/maps/MossdeepCity/scripts.pory"

# 42 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_SailorMagmaGone::
# 43 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_FeelReliefOnLand, MSGBOX_DEFAULT
# 44 "data/maps/MossdeepCity/scripts.pory"
	release
# 45 "data/maps/MossdeepCity/scripts.pory"
	end
# 46 "data/maps/MossdeepCity/scripts.pory"

# 47 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_NinjaBoy::
# 48 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_WailmerWatching, MSGBOX_NPC
# 49 "data/maps/MossdeepCity/scripts.pory"
	end
# 50 "data/maps/MossdeepCity/scripts.pory"

# 51 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_ExpertM::
# 52 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_LifeNeedsSeaToLive, MSGBOX_NPC
# 53 "data/maps/MossdeepCity/scripts.pory"
	end
# 54 "data/maps/MossdeepCity/scripts.pory"

# 55 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_Girl::
# 56 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_NiceIfWorldCoveredByFlowers, MSGBOX_NPC
# 57 "data/maps/MossdeepCity/scripts.pory"
	end
# 58 "data/maps/MossdeepCity/scripts.pory"

# 59 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_Woman::
# 60 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SpecialSpaceCenterRock, MSGBOX_NPC
# 61 "data/maps/MossdeepCity/scripts.pory"
	end
# 62 "data/maps/MossdeepCity/scripts.pory"

# 63 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_WhiteRock::
# 64 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_ItsAWhiteRock, MSGBOX_SIGN
# 65 "data/maps/MossdeepCity/scripts.pory"
	end
# 66 "data/maps/MossdeepCity/scripts.pory"

# 67 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_GymSign::
# 68 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_GymSign, MSGBOX_SIGN
# 69 "data/maps/MossdeepCity/scripts.pory"
	end
# 70 "data/maps/MossdeepCity/scripts.pory"

# 71 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_CitySign::
# 72 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_CitySign, MSGBOX_SIGN
# 73 "data/maps/MossdeepCity/scripts.pory"
	end
# 74 "data/maps/MossdeepCity/scripts.pory"

# 75 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_SpaceCenterSign::
# 76 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SpaceCenterSign, MSGBOX_SIGN
# 77 "data/maps/MossdeepCity/scripts.pory"
	end
# 78 "data/maps/MossdeepCity/scripts.pory"

# 79 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_VisitedMossdeep::
# 80 "data/maps/MossdeepCity/scripts.pory"
	setflag FLAG_VISITED_MOSSDEEP_CITY
# 81 "data/maps/MossdeepCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 82 "data/maps/MossdeepCity/scripts.pory"
	end
# 83 "data/maps/MossdeepCity/scripts.pory"

# 84 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_Grunt1::
# 85 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_Grunt1, MSGBOX_NPC
# 86 "data/maps/MossdeepCity/scripts.pory"
	end
# 87 "data/maps/MossdeepCity/scripts.pory"

# 88 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_Grunt2::
# 89 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_Grunt2, MSGBOX_NPC
# 90 "data/maps/MossdeepCity/scripts.pory"
	end
# 91 "data/maps/MossdeepCity/scripts.pory"

# 92 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_Grunt3::
# 93 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_Grunt3, MSGBOX_NPC
# 94 "data/maps/MossdeepCity/scripts.pory"
	end
# 95 "data/maps/MossdeepCity/scripts.pory"

# 96 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_Grunt4::
# 97 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_Grunt4, MSGBOX_NPC
# 98 "data/maps/MossdeepCity/scripts.pory"
	end
# 99 "data/maps/MossdeepCity/scripts.pory"

# 100 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_StevenPreRocket::
# 101 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_StevenPreRocket, MSGBOX_NPC
# 102 "data/maps/MossdeepCity/scripts.pory"
	end
# 103 "data/maps/MossdeepCity/scripts.pory"

# 104 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_DrakePreRocket::
# 105 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_DrakePreRocket, MSGBOX_NPC
# 106 "data/maps/MossdeepCity/scripts.pory"
	end
# 107 "data/maps/MossdeepCity/scripts.pory"

# 108 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_TeamMagmaEnterSpaceCenter::
# 109 "data/maps/MossdeepCity/scripts.pory"
	lockall
# 110 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MAXIE, MossdeepCity_Movement_MaxieGestureToSpaceCenter
# 111 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 112 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_GRUNT_1, MossdeepCity_Movement_GruntFaceSpaceCenter
# 113 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_GRUNT_2, MossdeepCity_Movement_GruntFaceSpaceCenter
# 114 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_GRUNT_3, MossdeepCity_Movement_GruntFaceSpaceCenter
# 115 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_GRUNT_4, MossdeepCity_Movement_GruntFaceSpaceCenter
# 116 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 117 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MAXIE, MossdeepCity_Movement_MaxieEnterSpaceCenter
# 118 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_GRUNT_1, MossdeepCity_Movement_Grunt1EnterSpaceCenter
# 119 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_GRUNT_2, MossdeepCity_Movement_Grunt2EnterSpaceCenter
# 120 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_GRUNT_3, MossdeepCity_Movement_Grunt3EnterSpaceCenter
# 121 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_GRUNT_4, MossdeepCity_Movement_Grunt4EnterSpaceCenter
# 122 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 123 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_MAXIE
# 124 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_GRUNT_1
# 125 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_GRUNT_2
# 126 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_GRUNT_3
# 127 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_GRUNT_4
# 128 "data/maps/MossdeepCity/scripts.pory"
	delay 30
# 129 "data/maps/MossdeepCity/scripts.pory"
	setvar VAR_MOSSDEEP_CITY_STATE, 2
# 130 "data/maps/MossdeepCity/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_TEAM_MAGMA
# 131 "data/maps/MossdeepCity/scripts.pory"
	releaseall
# 132 "data/maps/MossdeepCity/scripts.pory"
	end
# 133 "data/maps/MossdeepCity/scripts.pory"

# 134 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_MaxieGestureToSpaceCenter:
# 135 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 136 "data/maps/MossdeepCity/scripts.pory"
	face_right
# 137 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 138 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 139 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 140 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 141 "data/maps/MossdeepCity/scripts.pory"
	face_left
# 142 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 143 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 144 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 145 "data/maps/MossdeepCity/scripts.pory"

# 146 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_GruntFaceSpaceCenter:
# 147 "data/maps/MossdeepCity/scripts.pory"
	face_right
# 148 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 149 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 150 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 151 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 152 "data/maps/MossdeepCity/scripts.pory"

# 153 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_MaxieEnterSpaceCenter:
# 154 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 155 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 156 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 157 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 158 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 159 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 160 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 161 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 162 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 163 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 164 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 165 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 166 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 167 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 168 "data/maps/MossdeepCity/scripts.pory"

# 169 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_Grunt1EnterSpaceCenter:
# 170 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 171 "data/maps/MossdeepCity/scripts.pory"
	delay_8
# 172 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 173 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 174 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 175 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 176 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 177 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 178 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 179 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 180 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 181 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 182 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 183 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 184 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 185 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 186 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 187 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 188 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 189 "data/maps/MossdeepCity/scripts.pory"

# 190 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_Grunt2EnterSpaceCenter:
# 191 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 192 "data/maps/MossdeepCity/scripts.pory"
	delay_8
# 193 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 194 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 195 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 196 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 197 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 198 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 199 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 200 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 201 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 202 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 203 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 204 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 205 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 206 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 207 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 208 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 209 "data/maps/MossdeepCity/scripts.pory"

# 210 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_Grunt3EnterSpaceCenter:
# 211 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 212 "data/maps/MossdeepCity/scripts.pory"
	delay_8
# 213 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 214 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 215 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 216 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 217 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 218 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 219 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 220 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 221 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 222 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 223 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 224 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 225 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 226 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 227 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 228 "data/maps/MossdeepCity/scripts.pory"

# 229 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_Grunt4EnterSpaceCenter:
# 230 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 231 "data/maps/MossdeepCity/scripts.pory"
	delay_8
# 232 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 233 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 234 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 235 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 236 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 237 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 238 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 239 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 240 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 241 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 242 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 243 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 244 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 245 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 246 "data/maps/MossdeepCity/scripts.pory"

# 247 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_Man::
# 248 "data/maps/MossdeepCity/scripts.pory"
	lock
# 249 "data/maps/MossdeepCity/scripts.pory"
	faceplayer
# 250 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SurfExhilarating, MSGBOX_DEFAULT
# 251 "data/maps/MossdeepCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 252 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 253 "data/maps/MossdeepCity/scripts.pory"
	release
# 254 "data/maps/MossdeepCity/scripts.pory"
	end
# 255 "data/maps/MossdeepCity/scripts.pory"

# 256 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_KingsRockBoy::
# 257 "data/maps/MossdeepCity/scripts.pory"
	lock
# 258 "data/maps/MossdeepCity/scripts.pory"
	faceplayer
# 259 "data/maps/MossdeepCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_KINGS_ROCK, MossdeepCity_EventScript_ReceivedKingsRock
# 260 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_WantKingsRockStevenGaveMe, MSGBOX_YESNO
# 261 "data/maps/MossdeepCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MossdeepCity_EventScript_DeclineKingsRock
# 262 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_YouCanKeepIt, MSGBOX_DEFAULT
# 263 "data/maps/MossdeepCity/scripts.pory"
	giveitem ITEM_KINGS_ROCK
# 264 "data/maps/MossdeepCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 265 "data/maps/MossdeepCity/scripts.pory"
	setflag FLAG_RECEIVED_KINGS_ROCK
# 266 "data/maps/MossdeepCity/scripts.pory"
	release
# 267 "data/maps/MossdeepCity/scripts.pory"
	end
# 268 "data/maps/MossdeepCity/scripts.pory"

# 269 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_ReceivedKingsRock::
# 270 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_StevensHouseOverThere, MSGBOX_DEFAULT
# 271 "data/maps/MossdeepCity/scripts.pory"
	release
# 272 "data/maps/MossdeepCity/scripts.pory"
	end
# 273 "data/maps/MossdeepCity/scripts.pory"

# 274 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_DeclineKingsRock::
# 275 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_WhatToDoWithWeirdRock, MSGBOX_DEFAULT
# 276 "data/maps/MossdeepCity/scripts.pory"
	release
# 277 "data/maps/MossdeepCity/scripts.pory"
	end
# 278 "data/maps/MossdeepCity/scripts.pory"

# 279 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_BlackBelt::
# 280 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SootopolisNewGymLeader, MSGBOX_NPC
# 281 "data/maps/MossdeepCity/scripts.pory"
	end
# 282 "data/maps/MossdeepCity/scripts.pory"

# 283 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_Scott::
# 284 "data/maps/MossdeepCity/scripts.pory"
	lock
# 285 "data/maps/MossdeepCity/scripts.pory"
	faceplayer
# 286 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_ScottSomethingWrongWithTown, MSGBOX_DEFAULT
# 287 "data/maps/MossdeepCity/scripts.pory"
	closemessage
# 288 "data/maps/MossdeepCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MossdeepCity_EventScript_ScottExitNorth
# 289 "data/maps/MossdeepCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MossdeepCity_EventScript_ScottExitEast
# 290 "data/maps/MossdeepCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 291 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_SCOTT
# 292 "data/maps/MossdeepCity/scripts.pory"
	release
# 293 "data/maps/MossdeepCity/scripts.pory"
	end
# 294 "data/maps/MossdeepCity/scripts.pory"

# 295 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_ScottExitNorth::
# 296 "data/maps/MossdeepCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Movement_PlayerWatchScottExit
# 297 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_SCOTT, MossdeepCity_Movement_ScottExitNorth
# 298 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 299 "data/maps/MossdeepCity/scripts.pory"
	return
# 300 "data/maps/MossdeepCity/scripts.pory"

# 301 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_ScottExitEast::
# 302 "data/maps/MossdeepCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Movement_PlayerWatchScottExit
# 303 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_SCOTT, MossdeepCity_Movement_ScottExitEast
# 304 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 305 "data/maps/MossdeepCity/scripts.pory"
	return
# 306 "data/maps/MossdeepCity/scripts.pory"

# 307 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_PlayerWatchScottExit:
# 308 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 309 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 310 "data/maps/MossdeepCity/scripts.pory"
	walk_in_place_faster_left
# 311 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 312 "data/maps/MossdeepCity/scripts.pory"

# 313 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_ScottExitNorth:
# 314 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 315 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 316 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 317 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 318 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 319 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 320 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 321 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 322 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 323 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 324 "data/maps/MossdeepCity/scripts.pory"

# 325 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_ScottExitEast:
# 326 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 327 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 328 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 329 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 330 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 331 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 332 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 333 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 334 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 335 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 336 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 337 "data/maps/MossdeepCity/scripts.pory"

# 338 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_FormerDynamicPunchTutor::
# 339 "data/maps/MossdeepCity/scripts.pory"
	lockall
# 340 "data/maps/MossdeepCity/scripts.pory"
	faceplayer
# 341 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_FormerDynamicPunchTutor, MSGBOX_DEFAULT
# 342 "data/maps/MossdeepCity/scripts.pory"
	releaseall
# 343 "data/maps/MossdeepCity/scripts.pory"
	end
# 344 "data/maps/MossdeepCity/scripts.pory"

# 345 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_FormerDynamicPunchTutor:
# 346 "data/maps/MossdeepCity/scripts.pory"
	.string "I used to be able to punch dynamically.. \n"
# 347 "data/maps/MossdeepCity/scripts.pory"
	.string "Oh, what happened?$"
# 348 "data/maps/MossdeepCity/scripts.pory"

# 349 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_StevenPreRocket:
# 350 "data/maps/MossdeepCity/scripts.pory"
	.string "Oh, hello there, {PLAYER}. We figured\n"
# 351 "data/maps/MossdeepCity/scripts.pory"
	.string "you'd show up here eventually.\p"
# 352 "data/maps/MossdeepCity/scripts.pory"
	.string "Drake and I are planning to stop whatever\n"
# 353 "data/maps/MossdeepCity/scripts.pory"
	.string "Team Magma is planning here.\p"
# 354 "data/maps/MossdeepCity/scripts.pory"
	.string "Why don't you take on the Mossdeep Gym\n"
# 355 "data/maps/MossdeepCity/scripts.pory"
	.string "challenge and then join us afterwards?$"
# 356 "data/maps/MossdeepCity/scripts.pory"

# 357 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_DrakePreRocket:
# 358 "data/maps/MossdeepCity/scripts.pory"
	.string "{PLAYER}. Steven and I will handle\n"
# 359 "data/maps/MossdeepCity/scripts.pory"
	.string "these insolent pups.$"
# 360 "data/maps/MossdeepCity/scripts.pory"

# 361 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_Grunt1:
# 362 "data/maps/MossdeepCity/scripts.pory"
	.string "What are you looking at, brat? Get lost.$"
# 363 "data/maps/MossdeepCity/scripts.pory"

# 364 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_Grunt2:
# 365 "data/maps/MossdeepCity/scripts.pory"
	.string "This mission is gonna be a huge\n"
# 366 "data/maps/MossdeepCity/scripts.pory"
	.string "success!$"
# 367 "data/maps/MossdeepCity/scripts.pory"

# 368 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_Grunt3:
# 369 "data/maps/MossdeepCity/scripts.pory"
	.string "The boss is so smart, I don't know how\n"
# 370 "data/maps/MossdeepCity/scripts.pory"
	.string "he thinks of these plans.$"
# 371 "data/maps/MossdeepCity/scripts.pory"

# 372 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_Grunt4:
# 373 "data/maps/MossdeepCity/scripts.pory"
	.string "Scram!$"
# 374 "data/maps/MossdeepCity/scripts.pory"

# 375 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_WantKingsRockStevenGaveMe:
# 376 "data/maps/MossdeepCity/scripts.pory"
	.string "I got this from STEVEN, but I don't\n"
# 377 "data/maps/MossdeepCity/scripts.pory"
	.string "know what it's good for.\p"
# 378 "data/maps/MossdeepCity/scripts.pory"
	.string "I think it's called KING'S ROCK.\n"
# 379 "data/maps/MossdeepCity/scripts.pory"
	.string "Do you want it?$"
# 380 "data/maps/MossdeepCity/scripts.pory"

# 381 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_YouCanKeepIt:
# 382 "data/maps/MossdeepCity/scripts.pory"
	.string "Why would you want it?\n"
# 383 "data/maps/MossdeepCity/scripts.pory"
	.string "You're weird.\p"
# 384 "data/maps/MossdeepCity/scripts.pory"
	.string "You can keep it, but keep it a secret\n"
# 385 "data/maps/MossdeepCity/scripts.pory"
	.string "from STEVEN.$"
# 386 "data/maps/MossdeepCity/scripts.pory"

# 387 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_StevensHouseOverThere:
# 388 "data/maps/MossdeepCity/scripts.pory"
	.string "STEVEN's house is right over there!$"
# 389 "data/maps/MossdeepCity/scripts.pory"

# 390 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_WhatToDoWithWeirdRock:
# 391 "data/maps/MossdeepCity/scripts.pory"
	.string "Yeah, you think so, too! What are you\n"
# 392 "data/maps/MossdeepCity/scripts.pory"
	.string "supposed to do with some weird rock?$"
# 393 "data/maps/MossdeepCity/scripts.pory"

# 394 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_WailmerWatching:
# 395 "data/maps/MossdeepCity/scripts.pory"
	.string "Around MOSSDEEP, you can see wild\n"
# 396 "data/maps/MossdeepCity/scripts.pory"
	.string "WAILMER.\p"
# 397 "data/maps/MossdeepCity/scripts.pory"
	.string "It's called, uh…\n"
# 398 "data/maps/MossdeepCity/scripts.pory"
	.string "What was it now…\p"
# 399 "data/maps/MossdeepCity/scripts.pory"
	.string "WAI, WAI, WAI…\p"
# 400 "data/maps/MossdeepCity/scripts.pory"
	.string "WAILMER watching!$"
# 401 "data/maps/MossdeepCity/scripts.pory"

# 402 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_SpaceCenterReceivedLetter:
# 403 "data/maps/MossdeepCity/scripts.pory"
	.string "The island's SPACE CENTER has been\n"
# 404 "data/maps/MossdeepCity/scripts.pory"
	.string "launching huge rockets.\p"
# 405 "data/maps/MossdeepCity/scripts.pory"
	.string "There's been some kind of an uproar\n"
# 406 "data/maps/MossdeepCity/scripts.pory"
	.string "over a letter they received recently.$"
# 407 "data/maps/MossdeepCity/scripts.pory"

# 408 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_SpaceCenterLaunchingRockets:
# 409 "data/maps/MossdeepCity/scripts.pory"
	.string "The island's SPACE CENTER has been\n"
# 410 "data/maps/MossdeepCity/scripts.pory"
	.string "launching huge rockets.$"
# 411 "data/maps/MossdeepCity/scripts.pory"

# 412 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_MossdeepTargetedByMagma:
# 413 "data/maps/MossdeepCity/scripts.pory"
	.string "I heard from a SAILOR buddy that\n"
# 414 "data/maps/MossdeepCity/scripts.pory"
	.string "TEAM AQUA set up shop in LILYCOVE.\p"
# 415 "data/maps/MossdeepCity/scripts.pory"
	.string "I also heard that someone came along\n"
# 416 "data/maps/MossdeepCity/scripts.pory"
	.string "and wiped the floor with them!\p"
# 417 "data/maps/MossdeepCity/scripts.pory"
	.string "But MOSSDEEP here's been targeted\n"
# 418 "data/maps/MossdeepCity/scripts.pory"
	.string "by that TEAM MAGMA.\p"
# 419 "data/maps/MossdeepCity/scripts.pory"
	.string "If you want to know what they're up to,\n"
# 420 "data/maps/MossdeepCity/scripts.pory"
	.string "go visit the SPACE CENTER.$"
# 421 "data/maps/MossdeepCity/scripts.pory"

# 422 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_FeelReliefOnLand:
# 423 "data/maps/MossdeepCity/scripts.pory"
	.string "I'm a SAILOR, so the sea's obviously\n"
# 424 "data/maps/MossdeepCity/scripts.pory"
	.string "more important to me.\p"
# 425 "data/maps/MossdeepCity/scripts.pory"
	.string "But you know? When I get back on land\n"
# 426 "data/maps/MossdeepCity/scripts.pory"
	.string "after a long voyage, I do feel relief!$"
# 427 "data/maps/MossdeepCity/scripts.pory"

# 428 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_NiceIfWorldCoveredByFlowers:
# 429 "data/maps/MossdeepCity/scripts.pory"
	.string "Wouldn't it be nice?\p"
# 430 "data/maps/MossdeepCity/scripts.pory"
	.string "If the whole world was covered in\n"
# 431 "data/maps/MossdeepCity/scripts.pory"
	.string "plants and flowers like this island?$"
# 432 "data/maps/MossdeepCity/scripts.pory"

# 433 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_LifeNeedsSeaToLive:
# 434 "data/maps/MossdeepCity/scripts.pory"
	.string "All life needs the sea to live, even\n"
# 435 "data/maps/MossdeepCity/scripts.pory"
	.string "though it makes its home on the land.\p"
# 436 "data/maps/MossdeepCity/scripts.pory"
	.string "Life, having run its course, becomes\n"
# 437 "data/maps/MossdeepCity/scripts.pory"
	.string "soil and returns to the land.\p"
# 438 "data/maps/MossdeepCity/scripts.pory"
	.string "And the sea is always connected to\n"
# 439 "data/maps/MossdeepCity/scripts.pory"
	.string "the land.\p"
# 440 "data/maps/MossdeepCity/scripts.pory"
	.string "Yes, like the very shoreline here.$"
# 441 "data/maps/MossdeepCity/scripts.pory"

# 442 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_SurfExhilarating:
# 443 "data/maps/MossdeepCity/scripts.pory"
	.string "A voyage on a ship is fine.\p"
# 444 "data/maps/MossdeepCity/scripts.pory"
	.string "But crossing the sea with POKéMON\n"
# 445 "data/maps/MossdeepCity/scripts.pory"
	.string "using SURF…\p"
# 446 "data/maps/MossdeepCity/scripts.pory"
	.string "Now that's an exhilarating trip!\n"
# 447 "data/maps/MossdeepCity/scripts.pory"
	.string "Wouldn't you agree, youngster?$"
# 448 "data/maps/MossdeepCity/scripts.pory"

# 449 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_SpecialSpaceCenterRock:
# 450 "data/maps/MossdeepCity/scripts.pory"
	.string "This rock has a special meaning to\n"
# 451 "data/maps/MossdeepCity/scripts.pory"
	.string "the people at the SPACE CENTER.\p"
# 452 "data/maps/MossdeepCity/scripts.pory"
	.string "They put it here as their wish for\n"
# 453 "data/maps/MossdeepCity/scripts.pory"
	.string "their rockets to fly safely.\p"
# 454 "data/maps/MossdeepCity/scripts.pory"
	.string "When you make a wish, what do you use?\n"
# 455 "data/maps/MossdeepCity/scripts.pory"
	.string "Do you wish upon a star?\p"
# 456 "data/maps/MossdeepCity/scripts.pory"
	.string "I use a wish tag to make it happen.\n"
# 457 "data/maps/MossdeepCity/scripts.pory"
	.string "That's what I do.$"
# 458 "data/maps/MossdeepCity/scripts.pory"

# 459 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_ItsAWhiteRock:
# 460 "data/maps/MossdeepCity/scripts.pory"
	.string "It's a white rock.$"
# 461 "data/maps/MossdeepCity/scripts.pory"

# 462 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_GymSign:
# 463 "data/maps/MossdeepCity/scripts.pory"
	.string "MOSSDEEP CITY POKéMON GYM\n"
# 464 "data/maps/MossdeepCity/scripts.pory"
	.string "LEADERS: LIZA & TATE\p"
# 465 "data/maps/MossdeepCity/scripts.pory"
	.string "“The mystic combination!”$"
# 466 "data/maps/MossdeepCity/scripts.pory"

# 467 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_CitySign:
# 468 "data/maps/MossdeepCity/scripts.pory"
	.string "MOSSDEEP CITY\n"
# 469 "data/maps/MossdeepCity/scripts.pory"
	.string "“Our slogan: Cherish POKéMON!”$"
# 470 "data/maps/MossdeepCity/scripts.pory"

# 471 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_SpaceCenterSign:
# 472 "data/maps/MossdeepCity/scripts.pory"
	.string "MOSSDEEP SPACE CENTER\n"
# 473 "data/maps/MossdeepCity/scripts.pory"
	.string "“The closest place to space.”$"
# 474 "data/maps/MossdeepCity/scripts.pory"

# 475 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_ScottSomethingWrongWithTown:
# 476 "data/maps/MossdeepCity/scripts.pory"
	.string "{PLAYER}{KUN}, feeling good?\n"
# 477 "data/maps/MossdeepCity/scripts.pory"
	.string "I'm doing great!\p"
# 478 "data/maps/MossdeepCity/scripts.pory"
	.string "I'd heard Mossdeep's Gym Leader is\n"
# 479 "data/maps/MossdeepCity/scripts.pory"
	.string "pretty strong, so I decided to come\l"
# 480 "data/maps/MossdeepCity/scripts.pory"
	.string "take a look-see for myself.\p"
# 481 "data/maps/MossdeepCity/scripts.pory"
	.string "But Team Magma's presence here... It's\n"
# 482 "data/maps/MossdeepCity/scripts.pory"
	.string "making me a bit uneasy, I'm going to\l"
# 483 "data/maps/MossdeepCity/scripts.pory"
	.string "split before things start going down.\p"
# 484 "data/maps/MossdeepCity/scripts.pory"
	.string "I'm sure you'll take care of business as\n"
# 485 "data/maps/MossdeepCity/scripts.pory"
	.string "usual, {PLAYER}.$"
# 486 "data/maps/MossdeepCity/scripts.pory"

# 487 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_SootopolisNewGymLeader:
# 488 "data/maps/MossdeepCity/scripts.pory"
	.string "Ahh… It feels great letting the waves\n"
# 489 "data/maps/MossdeepCity/scripts.pory"
	.string "wash over my feet…\p"
# 490 "data/maps/MossdeepCity/scripts.pory"
	.string "Speaking of the waves, you know that\n"
# 491 "data/maps/MossdeepCity/scripts.pory"
	.string "island city SOOTOPOLIS?\p"
# 492 "data/maps/MossdeepCity/scripts.pory"
	.string "I think the GYM there had a new\n"
# 493 "data/maps/MossdeepCity/scripts.pory"
	.string "LEADER come in.\p"
# 494 "data/maps/MossdeepCity/scripts.pory"
	.string "People tell me the new LEADER once\n"
# 495 "data/maps/MossdeepCity/scripts.pory"
	.string "mentored WALLACE.$"
