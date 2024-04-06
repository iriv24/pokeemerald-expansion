# 1 "data/maps/Route110/scripts.pory"

# 2 "data/maps/Route110/scripts.pory"
.set LOCALID_CHALLENGE_BIKER, 21
# 3 "data/maps/Route110/scripts.pory"
.set LOCALID_RIVAL, 28
# 4 "data/maps/Route110/scripts.pory"
.set LOCALID_RIVAL_ON_BIKE, 29
# 5 "data/maps/Route110/scripts.pory"
.set LOCALID_BIRCH, 36
# 6 "data/maps/Route110/scripts.pory"

# 7 "data/maps/Route110/scripts.pory"
Route110_MapScripts::
# 8 "data/maps/Route110/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route110_OnResume
# 9 "data/maps/Route110/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route110_OnTransition
# 10 "data/maps/Route110/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route110_OnFrame
# 11 "data/maps/Route110/scripts.pory"
	.byte 0
# 12 "data/maps/Route110/scripts.pory"

# 13 "data/maps/Route110/scripts.pory"
Route110_OnResume:
# 14 "data/maps/Route110/scripts.pory"
	special UpdateCyclingRoadState
# 15 "data/maps/Route110/scripts.pory"
	end
# 16 "data/maps/Route110/scripts.pory"

# 17 "data/maps/Route110/scripts.pory"
Route110_OnTransition:
# 18 "data/maps/Route110/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 19 "data/maps/Route110/scripts.pory"
	call Common_EventScript_SetupRivalOnBikeGfxId
# 20 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_CYCLING_CHALLENGE_STATE, 1, Route110_EventScript_SaveCyclingMusic
# 21 "data/maps/Route110/scripts.pory"
	end
# 22 "data/maps/Route110/scripts.pory"

# 23 "data/maps/Route110/scripts.pory"
Route110_EventScript_SaveCyclingMusic::
# 24 "data/maps/Route110/scripts.pory"
	savebgm MUS_CYCLING
# 25 "data/maps/Route110/scripts.pory"
	return
# 26 "data/maps/Route110/scripts.pory"

# 27 "data/maps/Route110/scripts.pory"
Route110_OnFrame:
# 28 "data/maps/Route110/scripts.pory"
	map_script_2 VAR_CYCLING_CHALLENGE_STATE, 1, Route110_EventScript_BeginCylcingRoadChallenge
# 29 "data/maps/Route110/scripts.pory"
	.2byte 0
# 30 "data/maps/Route110/scripts.pory"

# 31 "data/maps/Route110/scripts.pory"
Route110_EventScript_BeginCylcingRoadChallenge::
# 32 "data/maps/Route110/scripts.pory"
	special Special_BeginCyclingRoadChallenge
# 33 "data/maps/Route110/scripts.pory"
	setvar VAR_CYCLING_CHALLENGE_STATE, 2
# 34 "data/maps/Route110/scripts.pory"
	return
# 35 "data/maps/Route110/scripts.pory"

# 36 "data/maps/Route110/scripts.pory"
Route110_EventScript_AquaGrunt1::
# 37 "data/maps/Route110/scripts.pory"
	lock
# 38 "data/maps/Route110/scripts.pory"
	faceplayer
# 39 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_WeCantTalkAboutAquaActivities, MSGBOX_DEFAULT
# 40 "data/maps/Route110/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 41 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 42 "data/maps/Route110/scripts.pory"
	release
# 43 "data/maps/Route110/scripts.pory"
	end
# 44 "data/maps/Route110/scripts.pory"

# 45 "data/maps/Route110/scripts.pory"
Route110_EventScript_AquaGrunt2::
# 46 "data/maps/Route110/scripts.pory"
	lock
# 47 "data/maps/Route110/scripts.pory"
	faceplayer
# 48 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KickUpARuckus, MSGBOX_DEFAULT
# 49 "data/maps/Route110/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 50 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 51 "data/maps/Route110/scripts.pory"
	release
# 52 "data/maps/Route110/scripts.pory"
	end
# 53 "data/maps/Route110/scripts.pory"

# 54 "data/maps/Route110/scripts.pory"
Route110_EventScript_AquaGrunt3::
# 55 "data/maps/Route110/scripts.pory"
	lock
# 56 "data/maps/Route110/scripts.pory"
	faceplayer
# 57 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MyFirstJobInAqua, MSGBOX_DEFAULT
# 58 "data/maps/Route110/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 59 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 60 "data/maps/Route110/scripts.pory"
	release
# 61 "data/maps/Route110/scripts.pory"
	end
# 62 "data/maps/Route110/scripts.pory"

# 63 "data/maps/Route110/scripts.pory"
Route110_EventScript_AquaGrunt4::
# 64 "data/maps/Route110/scripts.pory"
	lock
# 65 "data/maps/Route110/scripts.pory"
	faceplayer
# 66 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AquaActionsBringSmiles, MSGBOX_DEFAULT
# 67 "data/maps/Route110/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 68 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 69 "data/maps/Route110/scripts.pory"
	release
# 70 "data/maps/Route110/scripts.pory"
	end
# 71 "data/maps/Route110/scripts.pory"

# 72 "data/maps/Route110/scripts.pory"
Route110_EventScript_Boy1::
# 73 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_RideBikeAtFullSpeed, MSGBOX_NPC
# 74 "data/maps/Route110/scripts.pory"
	end
# 75 "data/maps/Route110/scripts.pory"

# 76 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingGirl1::
# 77 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_HairStreamsBehindMe, MSGBOX_NPC
# 78 "data/maps/Route110/scripts.pory"
	end
# 79 "data/maps/Route110/scripts.pory"

# 80 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingGuy1::
# 81 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_YouGotBikeFromRydel, MSGBOX_NPC
# 82 "data/maps/Route110/scripts.pory"
	end
# 83 "data/maps/Route110/scripts.pory"

# 84 "data/maps/Route110/scripts.pory"
Route110_EventScript_OldMan::
# 85 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TwoRoads, MSGBOX_NPC
# 86 "data/maps/Route110/scripts.pory"
	end
# 87 "data/maps/Route110/scripts.pory"

# 88 "data/maps/Route110/scripts.pory"
Route110_EventScript_OldWoman::
# 89 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_WalkOnTheLowRoad, MSGBOX_NPC
# 90 "data/maps/Route110/scripts.pory"
	end
# 91 "data/maps/Route110/scripts.pory"

# 92 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingGuy2::
# 93 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BikeTechniques, MSGBOX_NPC
# 94 "data/maps/Route110/scripts.pory"
	end
# 95 "data/maps/Route110/scripts.pory"

# 96 "data/maps/Route110/scripts.pory"
Route110_EventScript_Boy2::
# 97 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_WhichShouldIChoose, MSGBOX_NPC
# 98 "data/maps/Route110/scripts.pory"
	end
# 99 "data/maps/Route110/scripts.pory"

# 100 "data/maps/Route110/scripts.pory"
Route110_EventScript_SlateportCitySign::
# 101 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_SlateportCitySign, MSGBOX_SIGN
# 102 "data/maps/Route110/scripts.pory"
	end
# 103 "data/maps/Route110/scripts.pory"

# 104 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingRoadSign::
# 105 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_CyclingRoadSign, MSGBOX_SIGN
# 106 "data/maps/Route110/scripts.pory"
	end
# 107 "data/maps/Route110/scripts.pory"

# 108 "data/maps/Route110/scripts.pory"
Route110_EventScript_VandalizedSign::
# 109 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AquaWasHere, MSGBOX_SIGN
# 110 "data/maps/Route110/scripts.pory"
	end
# 111 "data/maps/Route110/scripts.pory"

# 112 "data/maps/Route110/scripts.pory"
Route110_EventScript_Route103Sign::
# 113 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_Route103Sign, MSGBOX_SIGN
# 114 "data/maps/Route110/scripts.pory"
	end
# 115 "data/maps/Route110/scripts.pory"

# 116 "data/maps/Route110/scripts.pory"
Route110_EventScript_SeasideParkingSign::
# 117 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_SeasideParkingSign, MSGBOX_SIGN
# 118 "data/maps/Route110/scripts.pory"
	end
# 119 "data/maps/Route110/scripts.pory"

# 120 "data/maps/Route110/scripts.pory"
Route110_EventScript_MauvilleCitySign::
# 121 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MauvilleCitySign, MSGBOX_SIGN
# 122 "data/maps/Route110/scripts.pory"
	end
# 123 "data/maps/Route110/scripts.pory"

# 124 "data/maps/Route110/scripts.pory"
Route110_EventScript_TrainerTipsPrlzSleep::
# 125 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TrainerTipsPrlzSleep, MSGBOX_SIGN
# 126 "data/maps/Route110/scripts.pory"
	end
# 127 "data/maps/Route110/scripts.pory"

# 128 "data/maps/Route110/scripts.pory"
Route110_EventScript_TrainerTipsRegisterItems::
# 129 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TrainerTipsRegisterItems, MSGBOX_SIGN
# 130 "data/maps/Route110/scripts.pory"
	end
# 131 "data/maps/Route110/scripts.pory"

# 132 "data/maps/Route110/scripts.pory"
Route110_EventScript_TrickHouseSign::
# 133 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TrickHouseSign, MSGBOX_SIGN
# 134 "data/maps/Route110/scripts.pory"
	end
# 135 "data/maps/Route110/scripts.pory"

# 136 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingRoadResultsSign::
# 137 "data/maps/Route110/scripts.pory"
	lockall
# 138 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, GetRecordedCyclingRoadResults
# 139 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route110_EventScript_NoRecordSet
# 140 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BestRecord, MSGBOX_DEFAULT
# 141 "data/maps/Route110/scripts.pory"
	releaseall
# 142 "data/maps/Route110/scripts.pory"
	end
# 143 "data/maps/Route110/scripts.pory"

# 144 "data/maps/Route110/scripts.pory"
Route110_EventScript_NoRecordSet::
# 145 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ThereIsNoRecord, MSGBOX_DEFAULT
# 146 "data/maps/Route110/scripts.pory"
	releaseall
# 147 "data/maps/Route110/scripts.pory"
	end
# 148 "data/maps/Route110/scripts.pory"

# 149 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeGuy::
# 150 "data/maps/Route110/scripts.pory"
	lock
# 151 "data/maps/Route110/scripts.pory"
	faceplayer
# 152 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, GetPlayerAvatarBike
# 153 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, 1, Route110_EventScript_PlayerRidingAcroBike
# 154 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_CYCLING_CHALLENGE_STATE, 0, Route110_EventScript_PlayerNotRidingBike
# 155 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AlwaysAimHigher, MSGBOX_DEFAULT
# 156 "data/maps/Route110/scripts.pory"
	release
# 157 "data/maps/Route110/scripts.pory"
	end
# 158 "data/maps/Route110/scripts.pory"

# 159 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayerNotRidingBike::
# 160 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_RatedForNumberOfCollisions, MSGBOX_DEFAULT
# 161 "data/maps/Route110/scripts.pory"
	release
# 162 "data/maps/Route110/scripts.pory"
	end
# 163 "data/maps/Route110/scripts.pory"

# 164 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayerRidingAcroBike::
# 165 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AcroBikesDoNotQualify, MSGBOX_DEFAULT
# 166 "data/maps/Route110/scripts.pory"
	release
# 167 "data/maps/Route110/scripts.pory"
	end
# 168 "data/maps/Route110/scripts.pory"

# 169 "data/maps/Route110/scripts.pory"
Route110_EventScript_Edward::
# 170 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_EDWARD, Route110_Text_EdwardIntro, Route110_Text_EdwardDefeated
# 171 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwardPostBattle, MSGBOX_AUTOCLOSE
# 172 "data/maps/Route110/scripts.pory"
	end
# 173 "data/maps/Route110/scripts.pory"

# 174 "data/maps/Route110/scripts.pory"
Route110_EventScript_Jaclyn::
# 175 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JACLYN, Route110_Text_JaclynIntro, Route110_Text_JaclynDefeated
# 176 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JaclynPostBattle, MSGBOX_AUTOCLOSE
# 177 "data/maps/Route110/scripts.pory"
	end
# 178 "data/maps/Route110/scripts.pory"

# 179 "data/maps/Route110/scripts.pory"
Route110_EventScript_Edwin::
# 180 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_EDWIN_1, Route110_Text_EdwinIntro, Route110_Text_EdwinDefeated, Route110_EventScript_EdwinRegisterMatchCallAfterBattle
# 181 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 182 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_EventScript_EdwinRematch
# 183 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwinPostBattle, MSGBOX_DEFAULT
# 184 "data/maps/Route110/scripts.pory"
	release
# 185 "data/maps/Route110/scripts.pory"
	end
# 186 "data/maps/Route110/scripts.pory"

# 187 "data/maps/Route110/scripts.pory"
Route110_EventScript_EdwinRegisterMatchCallAfterBattle::
# 188 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 189 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 190 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwinRegister, MSGBOX_DEFAULT
# 191 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_EDWIN_1
# 192 "data/maps/Route110/scripts.pory"
	release
# 193 "data/maps/Route110/scripts.pory"
	end
# 194 "data/maps/Route110/scripts.pory"

# 195 "data/maps/Route110/scripts.pory"
Route110_EventScript_EdwinRematch::
# 196 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_EDWIN_1, Route110_Text_EdwinRematchIntro, Route110_Text_EdwinRematchDefeated
# 197 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwinRematchPostBattle, MSGBOX_AUTOCLOSE
# 198 "data/maps/Route110/scripts.pory"
	end
# 199 "data/maps/Route110/scripts.pory"

# 200 "data/maps/Route110/scripts.pory"
Route110_EventScript_Dale::
# 201 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_DALE, Route110_Text_DaleIntro, Route110_Text_DaleDefeated
# 202 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_DalePostBattle, MSGBOX_AUTOCLOSE
# 203 "data/maps/Route110/scripts.pory"
	end
# 204 "data/maps/Route110/scripts.pory"

# 205 "data/maps/Route110/scripts.pory"
Route110_EventScript_Jacob::
# 206 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JACOB, Route110_Text_JacobIntro, Route110_Text_JacobDefeated
# 207 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JacobPostBattle, MSGBOX_AUTOCLOSE
# 208 "data/maps/Route110/scripts.pory"
	end
# 209 "data/maps/Route110/scripts.pory"

# 210 "data/maps/Route110/scripts.pory"
Route110_EventScript_Anthony::
# 211 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ANTHONY, Route110_Text_AnthonyIntro, Route110_Text_AnthonyDefeated
# 212 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AnthonyPostBattle, MSGBOX_AUTOCLOSE
# 213 "data/maps/Route110/scripts.pory"
	end
# 214 "data/maps/Route110/scripts.pory"

# 215 "data/maps/Route110/scripts.pory"
Route110_EventScript_Benjamin::
# 216 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_BENJAMIN_1, Route110_Text_BenjaminIntro, Route110_Text_BenjaminDefeated, Route110_EventScript_BenjaminRegisterMatchCallAfterBattle
# 217 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 218 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_EventScript_BenjaminRematch
# 219 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BenjaminPostBattle, MSGBOX_DEFAULT
# 220 "data/maps/Route110/scripts.pory"
	release
# 221 "data/maps/Route110/scripts.pory"
	end
# 222 "data/maps/Route110/scripts.pory"

# 223 "data/maps/Route110/scripts.pory"
Route110_EventScript_BenjaminRegisterMatchCallAfterBattle::
# 224 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 225 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 226 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BenjaminRegister, MSGBOX_DEFAULT
# 227 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_BENJAMIN_1
# 228 "data/maps/Route110/scripts.pory"
	release
# 229 "data/maps/Route110/scripts.pory"
	end
# 230 "data/maps/Route110/scripts.pory"

# 231 "data/maps/Route110/scripts.pory"
Route110_EventScript_BenjaminRematch::
# 232 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_BENJAMIN_1, Route110_Text_BenjaminRematchIntro, Route110_Text_BenjaminRematchDefeated
# 233 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BenjaminRematchPostBattle, MSGBOX_AUTOCLOSE
# 234 "data/maps/Route110/scripts.pory"
	end
# 235 "data/maps/Route110/scripts.pory"

# 236 "data/maps/Route110/scripts.pory"
Route110_EventScript_Jasmine::
# 237 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JASMINE, Route110_Text_JasmineIntro, Route110_Text_JasmineDefeated
# 238 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JasminePostBattle, MSGBOX_AUTOCLOSE
# 239 "data/maps/Route110/scripts.pory"
	end
# 240 "data/maps/Route110/scripts.pory"

# 241 "data/maps/Route110/scripts.pory"
Route110_EventScript_Abigail::
# 242 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ABIGAIL_1, Route110_Text_AbigailIntro, Route110_Text_AbigailDefeated, Route110_EventScript_AbigailRegisterMatchCallAfterBattle
# 243 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 244 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_EventScript_AbigailRematch
# 245 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AbigailPostBattle, MSGBOX_DEFAULT
# 246 "data/maps/Route110/scripts.pory"
	release
# 247 "data/maps/Route110/scripts.pory"
	end
# 248 "data/maps/Route110/scripts.pory"

# 249 "data/maps/Route110/scripts.pory"
Route110_EventScript_AbigailRegisterMatchCallAfterBattle::
# 250 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 251 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 252 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AbigailRegister, MSGBOX_DEFAULT
# 253 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_ABIGAIL_1
# 254 "data/maps/Route110/scripts.pory"
	release
# 255 "data/maps/Route110/scripts.pory"
	end
# 256 "data/maps/Route110/scripts.pory"

# 257 "data/maps/Route110/scripts.pory"
Route110_EventScript_AbigailRematch::
# 258 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_ABIGAIL_1, Route110_Text_AbigailRematchIntro, Route110_Text_AbigailRematchDefeated
# 259 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AbigailRematchPostBattle, MSGBOX_AUTOCLOSE
# 260 "data/maps/Route110/scripts.pory"
	end
# 261 "data/maps/Route110/scripts.pory"

# 262 "data/maps/Route110/scripts.pory"
Route110_EventScript_Isabel::
# 263 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ISABEL_1, Route110_Text_IsabelIntro, Route110_Text_IsabelDefeated, Route110_EventScript_IsabelRegisterMatchCallAfterBattle
# 264 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 265 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_EventScript_IsabelRematch
# 266 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_IsabelPostBattle, MSGBOX_DEFAULT
# 267 "data/maps/Route110/scripts.pory"
	release
# 268 "data/maps/Route110/scripts.pory"
	end
# 269 "data/maps/Route110/scripts.pory"

# 270 "data/maps/Route110/scripts.pory"
Route110_EventScript_IsabelRegisterMatchCallAfterBattle::
# 271 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 272 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 273 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_IsabelRegister, MSGBOX_DEFAULT
# 274 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_ISABEL_1
# 275 "data/maps/Route110/scripts.pory"
	release
# 276 "data/maps/Route110/scripts.pory"
	end
# 277 "data/maps/Route110/scripts.pory"

# 278 "data/maps/Route110/scripts.pory"
Route110_EventScript_IsabelRematch::
# 279 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_ISABEL_1, Route110_Text_IsabelRematchIntro, Route110_Text_IsabelRematchDefeated
# 280 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_IsabelRematchPostBattle, MSGBOX_AUTOCLOSE
# 281 "data/maps/Route110/scripts.pory"
	end
# 282 "data/maps/Route110/scripts.pory"

# 283 "data/maps/Route110/scripts.pory"
Route110_EventScript_Timmy::
# 284 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_TIMMY, Route110_Text_TimmyIntro, Route110_Text_TimmyDefeated
# 285 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TimmyPostBattle, MSGBOX_AUTOCLOSE
# 286 "data/maps/Route110/scripts.pory"
	end
# 287 "data/maps/Route110/scripts.pory"

# 288 "data/maps/Route110/scripts.pory"
Route110_EventScript_Unused::
# 289 "data/maps/Route110/scripts.pory"
	end
# 290 "data/maps/Route110/scripts.pory"

# 291 "data/maps/Route110/scripts.pory"
Route110_EventScript_Kaleb::
# 292 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_KALEB, Route110_Text_KalebIntro, Route110_Text_KalebDefeated
# 293 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KalebPostBattle, MSGBOX_AUTOCLOSE
# 294 "data/maps/Route110/scripts.pory"
	end
# 295 "data/maps/Route110/scripts.pory"

# 296 "data/maps/Route110/scripts.pory"
Route110_EventScript_Joseph::
# 297 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JOSEPH, Route110_Text_JosephIntro, Route110_Text_JosephDefeated
# 298 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JosephPostBattle, MSGBOX_AUTOCLOSE
# 299 "data/maps/Route110/scripts.pory"
	end
# 300 "data/maps/Route110/scripts.pory"

# 301 "data/maps/Route110/scripts.pory"
Route110_EventScript_Alyssa::
# 302 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ALYSSA, Route110_Text_AlyssaIntro, Route110_Text_AlyssaDefeated
# 303 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AlyssaPostBattle, MSGBOX_AUTOCLOSE
# 304 "data/maps/Route110/scripts.pory"
	end
# 305 "data/maps/Route110/scripts.pory"

# 306 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingChallengeEnd::
# 307 "data/maps/Route110/scripts.pory"
	lockall
# 308 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_CHALLENGE_BIKER, Common_Movement_WalkInPlaceFasterRight
# 309 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 310 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_CyclingChallengeResults
# 311 "data/maps/Route110/scripts.pory"
	releaseall
# 312 "data/maps/Route110/scripts.pory"
	end
# 313 "data/maps/Route110/scripts.pory"

# 314 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingChallengeResults::
# 315 "data/maps/Route110/scripts.pory"
	special FinishCyclingRoadChallenge
# 316 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_CyclingChallengeResultSummary, MSGBOX_DEFAULT
# 317 "data/maps/Route110/scripts.pory"
	switch VAR_RESULT
# 318 "data/maps/Route110/scripts.pory"
	case 10, Route110_EventScript_ChallengeReactionBest
# 319 "data/maps/Route110/scripts.pory"
	case 9, Route110_EventScript_ChallengeReactionGood
# 320 "data/maps/Route110/scripts.pory"
	case 8, Route110_EventScript_ChallengeReactionGood
# 321 "data/maps/Route110/scripts.pory"
	case 7, Route110_EventScript_ChallengeReactionGood
# 322 "data/maps/Route110/scripts.pory"
	case 6, Route110_EventScript_ChallengeReactionOk
# 323 "data/maps/Route110/scripts.pory"
	case 5, Route110_EventScript_ChallengeReactionOk
# 324 "data/maps/Route110/scripts.pory"
	case 4, Route110_EventScript_ChallengeReactionOk
# 325 "data/maps/Route110/scripts.pory"
	case 3, Route110_EventScript_ChallengeReactionBad
# 326 "data/maps/Route110/scripts.pory"
	case 2, Route110_EventScript_ChallengeReactionBad
# 327 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_ChallengeReactionBad
# 328 "data/maps/Route110/scripts.pory"
	case 0, Route110_EventScript_ChallengeReactionWorst
# 329 "data/maps/Route110/scripts.pory"
	end
# 330 "data/maps/Route110/scripts.pory"

# 331 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionBest::
# 332 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionBest, MSGBOX_DEFAULT
# 333 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 334 "data/maps/Route110/scripts.pory"
	end
# 335 "data/maps/Route110/scripts.pory"

# 336 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionGood::
# 337 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionGood, MSGBOX_DEFAULT
# 338 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 339 "data/maps/Route110/scripts.pory"
	end
# 340 "data/maps/Route110/scripts.pory"

# 341 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionOk::
# 342 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionOk, MSGBOX_DEFAULT
# 343 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 344 "data/maps/Route110/scripts.pory"
	end
# 345 "data/maps/Route110/scripts.pory"

# 346 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionBad::
# 347 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionBad, MSGBOX_DEFAULT
# 348 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 349 "data/maps/Route110/scripts.pory"
	end
# 350 "data/maps/Route110/scripts.pory"

# 351 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionWorst::
# 352 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionWorst, MSGBOX_DEFAULT
# 353 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 354 "data/maps/Route110/scripts.pory"
	end
# 355 "data/maps/Route110/scripts.pory"

# 356 "data/maps/Route110/scripts.pory"
Route110_EventScript_EndChallenge::
# 357 "data/maps/Route110/scripts.pory"
	setvar VAR_CYCLING_CHALLENGE_STATE, 3
# 358 "data/maps/Route110/scripts.pory"
	savebgm MUS_DUMMY
# 359 "data/maps/Route110/scripts.pory"
	fadedefaultbgm
# 360 "data/maps/Route110/scripts.pory"
	return
# 361 "data/maps/Route110/scripts.pory"

# 362 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalTrigger1::
# 363 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 1
# 364 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalScene
# 365 "data/maps/Route110/scripts.pory"
	end
# 366 "data/maps/Route110/scripts.pory"

# 367 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalTrigger2::
# 368 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 2
# 369 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalScene
# 370 "data/maps/Route110/scripts.pory"
	end
# 371 "data/maps/Route110/scripts.pory"

# 372 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalTrigger3::
# 373 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 3
# 374 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalScene
# 375 "data/maps/Route110/scripts.pory"
	end
# 376 "data/maps/Route110/scripts.pory"

# 377 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalScene::
# 378 "data/maps/Route110/scripts.pory"
	lockall
# 379 "data/maps/Route110/scripts.pory"
	checkplayergender
# 380 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route110_EventScript_PlayMayMusic
# 381 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route110_EventScript_PlayBrendanMusic
# 382 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 383 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 384 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 385 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 386 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 387 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 388 "data/maps/Route110/scripts.pory"
	delay 30
# 389 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_RivalApproachPlayer1
# 390 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_RivalApproachPlayer2
# 391 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_RivalApproachPlayer3
# 392 "data/maps/Route110/scripts.pory"
	checkplayergender
# 393 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route110_EventScript_MayBattle
# 394 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route110_EventScript_BrendanBattle
# 395 "data/maps/Route110/scripts.pory"
	releaseall
# 396 "data/maps/Route110/scripts.pory"
	end
# 397 "data/maps/Route110/scripts.pory"

# 398 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayMayMusic::
# 399 "data/maps/Route110/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 400 "data/maps/Route110/scripts.pory"
	return
# 401 "data/maps/Route110/scripts.pory"

# 402 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayBrendanMusic::
# 403 "data/maps/Route110/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 404 "data/maps/Route110/scripts.pory"
	return
# 405 "data/maps/Route110/scripts.pory"

# 406 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattle::
# 407 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MayLetsBattle, MSGBOX_DEFAULT
# 408 "data/maps/Route110/scripts.pory"
	switch VAR_STARTER_MON
# 409 "data/maps/Route110/scripts.pory"
	case 0, Route110_EventScript_MayBattleTreecko
# 410 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_MayBattleTorchic
# 411 "data/maps/Route110/scripts.pory"
	case 2, Route110_EventScript_MayBattleMudkip
# 412 "data/maps/Route110/scripts.pory"
	end
# 413 "data/maps/Route110/scripts.pory"

# 414 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattleTreecko::
# 415 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_110_TREECKO, Route110_Text_MayDefeated
# 416 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_MayDefeated
# 417 "data/maps/Route110/scripts.pory"
	end
# 418 "data/maps/Route110/scripts.pory"

# 419 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattleTorchic::
# 420 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_110_TORCHIC, Route110_Text_MayDefeated
# 421 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_MayDefeated
# 422 "data/maps/Route110/scripts.pory"
	end
# 423 "data/maps/Route110/scripts.pory"

# 424 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattleMudkip::
# 425 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_110_MUDKIP, Route110_Text_MayDefeated
# 426 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_MayDefeated
# 427 "data/maps/Route110/scripts.pory"
	end
# 428 "data/maps/Route110/scripts.pory"

# 429 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayDefeated::
# 430 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MayTakeThis, MSGBOX_DEFAULT
# 431 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_GiveItemfinder
# 432 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MayExplainItemfinder, MSGBOX_DEFAULT
# 433 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalExit
# 434 "data/maps/Route110/scripts.pory"
	end
# 435 "data/maps/Route110/scripts.pory"

# 436 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattle::
# 437 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BrendanLetsBattle, MSGBOX_DEFAULT
# 438 "data/maps/Route110/scripts.pory"
	switch VAR_STARTER_MON
# 439 "data/maps/Route110/scripts.pory"
	case 0, Route110_EventScript_BrendanBattleTreecko
# 440 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_BrendanBattleTorchic
# 441 "data/maps/Route110/scripts.pory"
	case 2, Route110_EventScript_BrendanBattleMudkip
# 442 "data/maps/Route110/scripts.pory"
	end
# 443 "data/maps/Route110/scripts.pory"

# 444 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattleTreecko::
# 445 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_TREECKO, Route110_Text_BrendanDefeated
# 446 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BrendanDefeated
# 447 "data/maps/Route110/scripts.pory"
	end
# 448 "data/maps/Route110/scripts.pory"

# 449 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattleTorchic::
# 450 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_TORCHIC, Route110_Text_BrendanDefeated
# 451 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BrendanDefeated
# 452 "data/maps/Route110/scripts.pory"
	end
# 453 "data/maps/Route110/scripts.pory"

# 454 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattleMudkip::
# 455 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_MUDKIP, Route110_Text_BrendanDefeated
# 456 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BrendanDefeated
# 457 "data/maps/Route110/scripts.pory"
	end
# 458 "data/maps/Route110/scripts.pory"

# 459 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanDefeated::
# 460 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BrendanTakeThis, MSGBOX_DEFAULT
# 461 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_GiveItemfinder
# 462 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BrendanExplainItemfinder, MSGBOX_DEFAULT
# 463 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalExit
# 464 "data/maps/Route110/scripts.pory"
	end
# 465 "data/maps/Route110/scripts.pory"

# 466 "data/maps/Route110/scripts.pory"
Route110_EventScript_GiveItemfinder::
# 467 "data/maps/Route110/scripts.pory"
	giveitem ITEM_DOWSING_MACHINE
# 468 "data/maps/Route110/scripts.pory"
	giveitem ITEM_CHARCOAL, 10
# 469 "data/maps/Route110/scripts.pory"
	giveitem ITEM_HABAN_BERRY, 10
# 470 "data/maps/Route110/scripts.pory"
	giveitem ITEM_ROSELI_BERRY, 10
# 471 "data/maps/Route110/scripts.pory"
	giveitem ITEM_SHUCA_BERRY, 10
# 472 "data/maps/Route110/scripts.pory"
	giveitem ITEM_AIR_BALLOON, 10
# 473 "data/maps/Route110/scripts.pory"
	giveitem ITEM_TERRAIN_EXTENDER, 10
# 474 "data/maps/Route110/scripts.pory"
	giveitem ITEM_GREAT_BALL, 99
# 475 "data/maps/Route110/scripts.pory"
	giveitem ITEM_ULTRA_BALL, 99
# 476 "data/maps/Route110/scripts.pory"
	setflag FLAG_RIVAL_110
# 477 "data/maps/Route110/scripts.pory"
	return
# 478 "data/maps/Route110/scripts.pory"

# 479 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit::
# 480 "data/maps/Route110/scripts.pory"
	closemessage
# 481 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_MoveRival1
# 482 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_MoveRival2
# 483 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_MoveRival3
# 484 "data/maps/Route110/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL, MOVEMENT_TYPE_FACE_RIGHT
# 485 "data/maps/Route110/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL_ON_BIKE, MOVEMENT_TYPE_FACE_RIGHT
# 486 "data/maps/Route110/scripts.pory"
	removeobject LOCALID_RIVAL
# 487 "data/maps/Route110/scripts.pory"
	addobject LOCALID_RIVAL_ON_BIKE
# 488 "data/maps/Route110/scripts.pory"
	delay 45
# 489 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_RivalExit1
# 490 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_RivalExit2
# 491 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_RivalExit3
# 492 "data/maps/Route110/scripts.pory"
	removeobject LOCALID_RIVAL_ON_BIKE
# 493 "data/maps/Route110/scripts.pory"
	setvar VAR_ROUTE110_STATE, 1
# 494 "data/maps/Route110/scripts.pory"
	savebgm MUS_DUMMY
# 495 "data/maps/Route110/scripts.pory"
	fadedefaultbgm
# 496 "data/maps/Route110/scripts.pory"
	releaseall
# 497 "data/maps/Route110/scripts.pory"
	end
# 498 "data/maps/Route110/scripts.pory"

# 499 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalApproachPlayer1::
# 500 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL, Route110_Movement_RivalApproachPlayer1
# 501 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 502 "data/maps/Route110/scripts.pory"
	return
# 503 "data/maps/Route110/scripts.pory"

# 504 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalApproachPlayer2::
# 505 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL, Route110_Movement_RivalApproachPlayer2
# 506 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 507 "data/maps/Route110/scripts.pory"
	return
# 508 "data/maps/Route110/scripts.pory"

# 509 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalApproachPlayer3::
# 510 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL, Route110_Movement_RivalApproachPlayer3
# 511 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 512 "data/maps/Route110/scripts.pory"
	return
# 513 "data/maps/Route110/scripts.pory"

# 514 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit1::
# 515 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, Route110_Movement_RivalExit1
# 516 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 517 "data/maps/Route110/scripts.pory"
	return
# 518 "data/maps/Route110/scripts.pory"

# 519 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit2::
# 520 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, Route110_Movement_RivalExit2
# 521 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 522 "data/maps/Route110/scripts.pory"
	return
# 523 "data/maps/Route110/scripts.pory"

# 524 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit3::
# 525 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, Route110_Movement_RivalExit3
# 526 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 527 "data/maps/Route110/scripts.pory"
	return
# 528 "data/maps/Route110/scripts.pory"

# 529 "data/maps/Route110/scripts.pory"
Route110_EventScript_MoveRival1::
# 530 "data/maps/Route110/scripts.pory"
	setobjectxyperm LOCALID_RIVAL_ON_BIKE, 33, 55
# 531 "data/maps/Route110/scripts.pory"
	return
# 532 "data/maps/Route110/scripts.pory"

# 533 "data/maps/Route110/scripts.pory"
Route110_EventScript_MoveRival2::
# 534 "data/maps/Route110/scripts.pory"
	setobjectxyperm LOCALID_RIVAL_ON_BIKE, 34, 55
# 535 "data/maps/Route110/scripts.pory"
	return
# 536 "data/maps/Route110/scripts.pory"

# 537 "data/maps/Route110/scripts.pory"
Route110_EventScript_MoveRival3::
# 538 "data/maps/Route110/scripts.pory"
	setobjectxyperm LOCALID_RIVAL_ON_BIKE, 35, 55
# 539 "data/maps/Route110/scripts.pory"
	return
# 540 "data/maps/Route110/scripts.pory"

# 541 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalApproachPlayer1:
# 542 "data/maps/Route110/scripts.pory"
	walk_down
# 543 "data/maps/Route110/scripts.pory"
	walk_left
# 544 "data/maps/Route110/scripts.pory"
	walk_in_place_faster_down
# 545 "data/maps/Route110/scripts.pory"
	step_end
# 546 "data/maps/Route110/scripts.pory"

# 547 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalApproachPlayer2:
# 548 "data/maps/Route110/scripts.pory"
	walk_down
# 549 "data/maps/Route110/scripts.pory"
	step_end
# 550 "data/maps/Route110/scripts.pory"

# 551 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalApproachPlayer3:
# 552 "data/maps/Route110/scripts.pory"
	walk_down
# 553 "data/maps/Route110/scripts.pory"
	walk_right
# 554 "data/maps/Route110/scripts.pory"
	walk_in_place_faster_down
# 555 "data/maps/Route110/scripts.pory"
	step_end
# 556 "data/maps/Route110/scripts.pory"

# 557 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalExit1:
# 558 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 559 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 560 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 561 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 562 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 563 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 564 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 565 "data/maps/Route110/scripts.pory"
	step_end
# 566 "data/maps/Route110/scripts.pory"

# 567 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalExit2:
# 568 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 569 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 570 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 571 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 572 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 573 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 574 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 575 "data/maps/Route110/scripts.pory"
	walk_fast_down
# 576 "data/maps/Route110/scripts.pory"
	step_end
# 577 "data/maps/Route110/scripts.pory"

# 578 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalExit3:
# 579 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 580 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 581 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 582 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 583 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 584 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 585 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 586 "data/maps/Route110/scripts.pory"
	step_end
# 587 "data/maps/Route110/scripts.pory"

# 588 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene1::
# 589 "data/maps/Route110/scripts.pory"
	lockall
# 590 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 1
# 591 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 592 "data/maps/Route110/scripts.pory"

# 593 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene2::
# 594 "data/maps/Route110/scripts.pory"
	lockall
# 595 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 2
# 596 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 597 "data/maps/Route110/scripts.pory"

# 598 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene3::
# 599 "data/maps/Route110/scripts.pory"
	lockall
# 600 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 3
# 601 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 602 "data/maps/Route110/scripts.pory"

# 603 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene4::
# 604 "data/maps/Route110/scripts.pory"
	lockall
# 605 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 4
# 606 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 607 "data/maps/Route110/scripts.pory"

# 608 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene::
# 609 "data/maps/Route110/scripts.pory"
	addobject LOCALID_BIRCH
# 610 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchEntrance
# 611 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 612 "data/maps/Route110/scripts.pory"
	playse SE_PIN
# 613 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_ExclamationMark
# 614 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 615 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_Delay48
# 616 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 617 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_BirchApproachPlayer1
# 618 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_BirchApproachPlayer2
# 619 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_BirchApproachPlayer3
# 620 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 4, Route110_EventScript_BirchApproachPlayer4
# 621 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ImagineSeeingYouHere, MSGBOX_DEFAULT
# 622 "data/maps/Route110/scripts.pory"
	closemessage
# 623 "data/maps/Route110/scripts.pory"
	delay 20
# 624 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterLeft
# 625 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 626 "data/maps/Route110/scripts.pory"
	delay 10
# 627 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 628 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 629 "data/maps/Route110/scripts.pory"
	delay 20
# 630 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterDown
# 631 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 632 "data/maps/Route110/scripts.pory"
	delay 30
# 633 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_HeardYouInstallMatchCall, MSGBOX_DEFAULT
# 634 "data/maps/Route110/scripts.pory"
	closemessage
# 635 "data/maps/Route110/scripts.pory"
	delay 30
# 636 "data/maps/Route110/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 637 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_RegisteredBirchInPokenav, MSGBOX_DEFAULT
# 638 "data/maps/Route110/scripts.pory"
	waitfanfare
# 639 "data/maps/Route110/scripts.pory"
	closemessage
# 640 "data/maps/Route110/scripts.pory"
	delay 30
# 641 "data/maps/Route110/scripts.pory"
	setflag FLAG_ENABLE_PROF_BIRCH_MATCH_CALL
# 642 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KeepAnEyeOutForRival, MSGBOX_DEFAULT
# 643 "data/maps/Route110/scripts.pory"
	closemessage
# 644 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_BirchExit1
# 645 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_BirchExit2
# 646 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_BirchExit3
# 647 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 4, Route110_EventScript_BirchExit4
# 648 "data/maps/Route110/scripts.pory"
	removeobject LOCALID_BIRCH
# 649 "data/maps/Route110/scripts.pory"
	setvar VAR_REGISTER_BIRCH_STATE, 2
# 650 "data/maps/Route110/scripts.pory"
	releaseall
# 651 "data/maps/Route110/scripts.pory"
	end
# 652 "data/maps/Route110/scripts.pory"

# 653 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer1::
# 654 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchApproachPlayer1
# 655 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 656 "data/maps/Route110/scripts.pory"
	return
# 657 "data/maps/Route110/scripts.pory"

# 658 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer2::
# 659 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchApproachPlayer2
# 660 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 661 "data/maps/Route110/scripts.pory"
	return
# 662 "data/maps/Route110/scripts.pory"

# 663 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer3::
# 664 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchApproachPlayer3
# 665 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 666 "data/maps/Route110/scripts.pory"
	return
# 667 "data/maps/Route110/scripts.pory"

# 668 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer4::
# 669 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchApproachPlayer4
# 670 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 671 "data/maps/Route110/scripts.pory"
	return
# 672 "data/maps/Route110/scripts.pory"

# 673 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit1::
# 674 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchExit1
# 675 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 676 "data/maps/Route110/scripts.pory"
	return
# 677 "data/maps/Route110/scripts.pory"

# 678 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit2::
# 679 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchExit2
# 680 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 681 "data/maps/Route110/scripts.pory"
	return
# 682 "data/maps/Route110/scripts.pory"

# 683 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit3::
# 684 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchExit3
# 685 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 686 "data/maps/Route110/scripts.pory"
	return
# 687 "data/maps/Route110/scripts.pory"

# 688 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit4::
# 689 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchExit4
# 690 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 691 "data/maps/Route110/scripts.pory"
	return
# 692 "data/maps/Route110/scripts.pory"

# 693 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchEntrance:
# 694 "data/maps/Route110/scripts.pory"
	walk_down
# 695 "data/maps/Route110/scripts.pory"
	walk_down
# 696 "data/maps/Route110/scripts.pory"
	walk_down
# 697 "data/maps/Route110/scripts.pory"
	step_end
# 698 "data/maps/Route110/scripts.pory"

# 699 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer1:
# 700 "data/maps/Route110/scripts.pory"
	walk_down
# 701 "data/maps/Route110/scripts.pory"
	walk_left
# 702 "data/maps/Route110/scripts.pory"
	walk_left
# 703 "data/maps/Route110/scripts.pory"
	walk_down
# 704 "data/maps/Route110/scripts.pory"
	step_end
# 705 "data/maps/Route110/scripts.pory"

# 706 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer2:
# 707 "data/maps/Route110/scripts.pory"
	walk_down
# 708 "data/maps/Route110/scripts.pory"
	walk_left
# 709 "data/maps/Route110/scripts.pory"
	walk_down
# 710 "data/maps/Route110/scripts.pory"
	step_end
# 711 "data/maps/Route110/scripts.pory"

# 712 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer3:
# 713 "data/maps/Route110/scripts.pory"
	walk_down
# 714 "data/maps/Route110/scripts.pory"
	walk_down
# 715 "data/maps/Route110/scripts.pory"
	step_end
# 716 "data/maps/Route110/scripts.pory"

# 717 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer4:
# 718 "data/maps/Route110/scripts.pory"
	walk_down
# 719 "data/maps/Route110/scripts.pory"
	walk_right
# 720 "data/maps/Route110/scripts.pory"
	walk_down
# 721 "data/maps/Route110/scripts.pory"
	step_end
# 722 "data/maps/Route110/scripts.pory"

# 723 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit1:
# 724 "data/maps/Route110/scripts.pory"
	walk_up
# 725 "data/maps/Route110/scripts.pory"
	walk_up
# 726 "data/maps/Route110/scripts.pory"
	walk_right
# 727 "data/maps/Route110/scripts.pory"
	walk_up
# 728 "data/maps/Route110/scripts.pory"
	walk_up
# 729 "data/maps/Route110/scripts.pory"
	walk_up
# 730 "data/maps/Route110/scripts.pory"
	step_end
# 731 "data/maps/Route110/scripts.pory"

# 732 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit2:
# 733 "data/maps/Route110/scripts.pory"
	walk_up
# 734 "data/maps/Route110/scripts.pory"
	walk_up
# 735 "data/maps/Route110/scripts.pory"
	walk_up
# 736 "data/maps/Route110/scripts.pory"
	walk_up
# 737 "data/maps/Route110/scripts.pory"
	walk_up
# 738 "data/maps/Route110/scripts.pory"
	step_end
# 739 "data/maps/Route110/scripts.pory"

# 740 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit3:
# 741 "data/maps/Route110/scripts.pory"
	walk_up
# 742 "data/maps/Route110/scripts.pory"
	walk_up
# 743 "data/maps/Route110/scripts.pory"
	walk_up
# 744 "data/maps/Route110/scripts.pory"
	walk_up
# 745 "data/maps/Route110/scripts.pory"
	walk_up
# 746 "data/maps/Route110/scripts.pory"
	step_end
# 747 "data/maps/Route110/scripts.pory"

# 748 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit4:
# 749 "data/maps/Route110/scripts.pory"
	walk_up
# 750 "data/maps/Route110/scripts.pory"
	walk_up
# 751 "data/maps/Route110/scripts.pory"
	walk_up
# 752 "data/maps/Route110/scripts.pory"
	walk_up
# 753 "data/maps/Route110/scripts.pory"
	walk_up
# 754 "data/maps/Route110/scripts.pory"
	step_end
# 755 "data/maps/Route110/scripts.pory"

# 756 "data/maps/Route110/scripts.pory"
Route110_Text_WeCantTalkAboutAquaActivities:
# 757 "data/maps/Route110/scripts.pory"
	.string "TEAM AQUA's activities…\n"
# 758 "data/maps/Route110/scripts.pory"
	.string "We can't talk about them yet.$"
# 759 "data/maps/Route110/scripts.pory"

# 760 "data/maps/Route110/scripts.pory"
Route110_Text_KickUpARuckus:
# 761 "data/maps/Route110/scripts.pory"
	.string "I want to get going to SLATEPORT and\n"
# 762 "data/maps/Route110/scripts.pory"
	.string "kick up a ruckus!$"
# 763 "data/maps/Route110/scripts.pory"

# 764 "data/maps/Route110/scripts.pory"
Route110_Text_MyFirstJobInAqua:
# 765 "data/maps/Route110/scripts.pory"
	.string "This is my first job after joining\n"
# 766 "data/maps/Route110/scripts.pory"
	.string "TEAM AQUA. It's a little scary.$"
# 767 "data/maps/Route110/scripts.pory"

# 768 "data/maps/Route110/scripts.pory"
Route110_Text_AquaActionsBringSmiles:
# 769 "data/maps/Route110/scripts.pory"
	.string "TEAM AQUA's actions should bring\n"
# 770 "data/maps/Route110/scripts.pory"
	.string "smiles to people's faces!$"
# 771 "data/maps/Route110/scripts.pory"

# 772 "data/maps/Route110/scripts.pory"
Route110_Text_MayLetsBattle:
# 773 "data/maps/Route110/scripts.pory"
	.string "MAY: Hi, {PLAYER}{KUN}, long time no see!\p"
# 774 "data/maps/Route110/scripts.pory"
	.string "While I was searching for other\n"
# 775 "data/maps/Route110/scripts.pory"
	.string "POKéMON, my POKéMON grew stronger.\p"
# 776 "data/maps/Route110/scripts.pory"
	.string "So…\n"
# 777 "data/maps/Route110/scripts.pory"
	.string "How about a little battle?$"
# 778 "data/maps/Route110/scripts.pory"

# 779 "data/maps/Route110/scripts.pory"
Route110_Text_MayDefeated:
# 780 "data/maps/Route110/scripts.pory"
	.string "Yikes!\n"
# 781 "data/maps/Route110/scripts.pory"
	.string "You're better than I expected!$"
# 782 "data/maps/Route110/scripts.pory"

# 783 "data/maps/Route110/scripts.pory"
Route110_Text_MayTakeThis:
# 784 "data/maps/Route110/scripts.pory"
	.string "MAY: {PLAYER}{KUN}, you've been busy\n"
# 785 "data/maps/Route110/scripts.pory"
	.string "training, too, haven't you?\p"
# 786 "data/maps/Route110/scripts.pory"
	.string "I think you deserve a reward!\n"
# 787 "data/maps/Route110/scripts.pory"
	.string "This is from me!$"
# 788 "data/maps/Route110/scripts.pory"

# 789 "data/maps/Route110/scripts.pory"
Route110_Text_MayExplainItemfinder:
# 790 "data/maps/Route110/scripts.pory"
	.string "MAY: That's an ITEMFINDER.\p"
# 791 "data/maps/Route110/scripts.pory"
	.string "Try it out. If there is an item that's\n"
# 792 "data/maps/Route110/scripts.pory"
	.string "not visible, it emits a sound.\p"
# 793 "data/maps/Route110/scripts.pory"
	.string "Okay, {PLAYER}{KUN}, let's meet again!\p"
# 794 "data/maps/Route110/scripts.pory"
	.string "I know it's a little silly coming from\n"
# 795 "data/maps/Route110/scripts.pory"
	.string "me, but I think you should train a lot\l"
# 796 "data/maps/Route110/scripts.pory"
	.string "harder for the next time.$"
# 797 "data/maps/Route110/scripts.pory"

# 798 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanLetsBattle:
# 799 "data/maps/Route110/scripts.pory"
	.string "BRENDAN: Hey, {PLAYER}.\n"
# 800 "data/maps/Route110/scripts.pory"
	.string "So this is where you were.\l"
# 801 "data/maps/Route110/scripts.pory"
	.string "How's it going?\p"
# 802 "data/maps/Route110/scripts.pory"
	.string "Have you been raising your POKéMON?\n"
# 803 "data/maps/Route110/scripts.pory"
	.string "I'll check for you.$"
# 804 "data/maps/Route110/scripts.pory"

# 805 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanDefeated:
# 806 "data/maps/Route110/scripts.pory"
	.string "Hmm…\n"
# 807 "data/maps/Route110/scripts.pory"
	.string "You're pretty good.$"
# 808 "data/maps/Route110/scripts.pory"

# 809 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanTakeThis:
# 810 "data/maps/Route110/scripts.pory"
	.string "BRENDAN: {PLAYER}, you've trained\n"
# 811 "data/maps/Route110/scripts.pory"
	.string "without me noticing…\p"
# 812 "data/maps/Route110/scripts.pory"
	.string "Good enough!\n"
# 813 "data/maps/Route110/scripts.pory"
	.string "Here, take this.$"
# 814 "data/maps/Route110/scripts.pory"

# 815 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanExplainItemfinder:
# 816 "data/maps/Route110/scripts.pory"
	.string "BRENDAN: That's an ITEMFINDER.\p"
# 817 "data/maps/Route110/scripts.pory"
	.string "Use it to root around for items that\n"
# 818 "data/maps/Route110/scripts.pory"
	.string "aren't visible.\p"
# 819 "data/maps/Route110/scripts.pory"
	.string "If it senses something, it emits\n"
# 820 "data/maps/Route110/scripts.pory"
	.string "a sound.\p"
# 821 "data/maps/Route110/scripts.pory"
	.string "Anyway, I'm off to look for new\n"
# 822 "data/maps/Route110/scripts.pory"
	.string "POKéMON.$"
# 823 "data/maps/Route110/scripts.pory"

# 824 "data/maps/Route110/scripts.pory"
Route110_Text_RideBikeAtFullSpeed:
# 825 "data/maps/Route110/scripts.pory"
	.string "Wouldn't it be great to ride a BIKE\n"
# 826 "data/maps/Route110/scripts.pory"
	.string "at full speed on CYCLING ROAD?$"
# 827 "data/maps/Route110/scripts.pory"

# 828 "data/maps/Route110/scripts.pory"
Route110_Text_HairStreamsBehindMe:
# 829 "data/maps/Route110/scripts.pory"
	.string "How do you like the way my raven-\n"
# 830 "data/maps/Route110/scripts.pory"
	.string "colored hair streams behind me?\p"
# 831 "data/maps/Route110/scripts.pory"
	.string "I grew my hair out just for that.$"
# 832 "data/maps/Route110/scripts.pory"

# 833 "data/maps/Route110/scripts.pory"
Route110_Text_YouGotBikeFromRydel:
# 834 "data/maps/Route110/scripts.pory"
	.string "Oh, hey, you got that BIKE from RYDEL!\p"
# 835 "data/maps/Route110/scripts.pory"
	.string "Oh, it's glaringly obvious.\n"
# 836 "data/maps/Route110/scripts.pory"
	.string "It says right on your bike…\p"
# 837 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
# 838 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
# 839 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
# 840 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
# 841 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
# 842 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
# 843 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
# 844 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
# 845 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL…\n"
# 846 "data/maps/Route110/scripts.pory"
	.string "That name's everywhere.\p"
# 847 "data/maps/Route110/scripts.pory"
	.string "You should ride it around all over\n"
# 848 "data/maps/Route110/scripts.pory"
	.string "the place--it's good advertising!$"
# 849 "data/maps/Route110/scripts.pory"

# 850 "data/maps/Route110/scripts.pory"
Route110_Text_TwoRoads:
# 851 "data/maps/Route110/scripts.pory"
	.string "The two roads, one above, one below…\p"
# 852 "data/maps/Route110/scripts.pory"
	.string "A road each for people and POKéMON.\n"
# 853 "data/maps/Route110/scripts.pory"
	.string "Perhaps that is right and fair.$"
# 854 "data/maps/Route110/scripts.pory"

# 855 "data/maps/Route110/scripts.pory"
Route110_Text_WalkOnTheLowRoad:
# 856 "data/maps/Route110/scripts.pory"
	.string "I don't have a BIKE, so I'll take\n"
# 857 "data/maps/Route110/scripts.pory"
	.string "a leisurely walk on the low road.$"
# 858 "data/maps/Route110/scripts.pory"

# 859 "data/maps/Route110/scripts.pory"
Route110_Text_BikeTechniques:
# 860 "data/maps/Route110/scripts.pory"
	.string "Learning techniques will make BIKE\n"
# 861 "data/maps/Route110/scripts.pory"
	.string "riding even more fun.\p"
# 862 "data/maps/Route110/scripts.pory"
	.string "There are some places that you can\n"
# 863 "data/maps/Route110/scripts.pory"
	.string "reach only by using a BIKE technique.$"
# 864 "data/maps/Route110/scripts.pory"

# 865 "data/maps/Route110/scripts.pory"
Route110_Text_WhichShouldIChoose:
# 866 "data/maps/Route110/scripts.pory"
	.string "Which should I choose?\p"
# 867 "data/maps/Route110/scripts.pory"
	.string "Make a beeline for MAUVILLE on\n"
# 868 "data/maps/Route110/scripts.pory"
	.string "CYCLING ROAD, or take the low road\l"
# 869 "data/maps/Route110/scripts.pory"
	.string "and look for POKéMON?$"
# 870 "data/maps/Route110/scripts.pory"

# 871 "data/maps/Route110/scripts.pory"
Route110_Text_CyclingChallengeResultSummary:
# 872 "data/maps/Route110/scripts.pory"
	.string "Number of collisions:\n"
# 873 "data/maps/Route110/scripts.pory"
	.string "… … {STR_VAR_1}!\p"
# 874 "data/maps/Route110/scripts.pory"
	.string "Total time:\n"
# 875 "data/maps/Route110/scripts.pory"
	.string "… … {STR_VAR_2}!$"
# 876 "data/maps/Route110/scripts.pory"

# 877 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionBest:
# 878 "data/maps/Route110/scripts.pory"
	.string "Bravo! Splendid showing!\p"
# 879 "data/maps/Route110/scripts.pory"
	.string "Your love of cycling comes from deep\n"
# 880 "data/maps/Route110/scripts.pory"
	.string "within your heart.\l"
# 881 "data/maps/Route110/scripts.pory"
	.string "You've shaken me to my very soul!$"
# 882 "data/maps/Route110/scripts.pory"

# 883 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionGood:
# 884 "data/maps/Route110/scripts.pory"
	.string "Your technique is remarkable.\p"
# 885 "data/maps/Route110/scripts.pory"
	.string "I suggest you speed up a bit while\n"
# 886 "data/maps/Route110/scripts.pory"
	.string "still avoiding collisions.$"
# 887 "data/maps/Route110/scripts.pory"

# 888 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionOk:
# 889 "data/maps/Route110/scripts.pory"
	.string "I would consider you a work in\n"
# 890 "data/maps/Route110/scripts.pory"
	.string "progress.\p"
# 891 "data/maps/Route110/scripts.pory"
	.string "Still, I hope you don't forget the\n"
# 892 "data/maps/Route110/scripts.pory"
	.string "sheer pleasure of cycling.$"
# 893 "data/maps/Route110/scripts.pory"

# 894 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionBad:
# 895 "data/maps/Route110/scripts.pory"
	.string "My word… Your cycling skills border\n"
# 896 "data/maps/Route110/scripts.pory"
	.string "on terrifying.\p"
# 897 "data/maps/Route110/scripts.pory"
	.string "Most certainly, you need much more\n"
# 898 "data/maps/Route110/scripts.pory"
	.string "practice riding.$"
# 899 "data/maps/Route110/scripts.pory"

# 900 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionWorst:
# 901 "data/maps/Route110/scripts.pory"
	.string "…I am aghast…\p"
# 902 "data/maps/Route110/scripts.pory"
	.string "You're perhaps not cut out for this\n"
# 903 "data/maps/Route110/scripts.pory"
	.string "unfortunate cycling business.\p"
# 904 "data/maps/Route110/scripts.pory"
	.string "You ought to give serious thought to\n"
# 905 "data/maps/Route110/scripts.pory"
	.string "returning that BIKE to RYDEL.$"
# 906 "data/maps/Route110/scripts.pory"

# 907 "data/maps/Route110/scripts.pory"
Route110_Text_RatedForNumberOfCollisions:
# 908 "data/maps/Route110/scripts.pory"
	.string "This is CYCLING ROAD.\p"
# 909 "data/maps/Route110/scripts.pory"
	.string "If you were to ride from MAUVILLE to\n"
# 910 "data/maps/Route110/scripts.pory"
	.string "SLATEPORT on a MACH BIKE, you would\l"
# 911 "data/maps/Route110/scripts.pory"
	.string "be rated for the number of collisions\l"
# 912 "data/maps/Route110/scripts.pory"
	.string "and your total time.$"
# 913 "data/maps/Route110/scripts.pory"

# 914 "data/maps/Route110/scripts.pory"
Route110_Text_AlwaysAimHigher:
# 915 "data/maps/Route110/scripts.pory"
	.string "Regardless of the results, I count on\n"
# 916 "data/maps/Route110/scripts.pory"
	.string "seeing more challenges from you.\l"
# 917 "data/maps/Route110/scripts.pory"
	.string "Always aim higher!$"
# 918 "data/maps/Route110/scripts.pory"

# 919 "data/maps/Route110/scripts.pory"
Route110_Text_AcroBikesDoNotQualify:
# 920 "data/maps/Route110/scripts.pory"
	.string "On this CYCLING ROAD, those riding\n"
# 921 "data/maps/Route110/scripts.pory"
	.string "MACH BIKES are rated for their number\l"
# 922 "data/maps/Route110/scripts.pory"
	.string "of collisions and their total times.\p"
# 923 "data/maps/Route110/scripts.pory"
	.string "ACRO BIKES do not qualify for rating.\n"
# 924 "data/maps/Route110/scripts.pory"
	.string "They are easy to turn, so it's not fair.$"
# 925 "data/maps/Route110/scripts.pory"

# 926 "data/maps/Route110/scripts.pory"
Route110_Text_SlateportCitySign:
# 927 "data/maps/Route110/scripts.pory"
	.string "ROUTE 110\n"
# 928 "data/maps/Route110/scripts.pory"
	.string "{DOWN_ARROW} SLATEPORT CITY$"
# 929 "data/maps/Route110/scripts.pory"

# 930 "data/maps/Route110/scripts.pory"
Route110_Text_CyclingRoadSign:
# 931 "data/maps/Route110/scripts.pory"
	.string "SEASIDE CYCLING ROAD$"
# 932 "data/maps/Route110/scripts.pory"

# 933 "data/maps/Route110/scripts.pory"
Route110_Text_AquaWasHere:
# 934 "data/maps/Route110/scripts.pory"
	.string "“TEAM AQUA was here!”\p"
# 935 "data/maps/Route110/scripts.pory"
	.string "Someone painted that onto this sign,\n"
# 936 "data/maps/Route110/scripts.pory"
	.string "but then someone else painted over it.\p"
# 937 "data/maps/Route110/scripts.pory"
	.string "“TEAM MAGMA rules!” is what it\n"
# 938 "data/maps/Route110/scripts.pory"
	.string "says now.$"
# 939 "data/maps/Route110/scripts.pory"

# 940 "data/maps/Route110/scripts.pory"
Route110_Text_Route103Sign:
# 941 "data/maps/Route110/scripts.pory"
	.string "ROUTE 110\n"
# 942 "data/maps/Route110/scripts.pory"
	.string "{LEFT_ARROW} ROUTE 103$"
# 943 "data/maps/Route110/scripts.pory"

# 944 "data/maps/Route110/scripts.pory"
Route110_Text_SeasideParkingSign:
# 945 "data/maps/Route110/scripts.pory"
	.string "SEASIDE PARKING$"
# 946 "data/maps/Route110/scripts.pory"

# 947 "data/maps/Route110/scripts.pory"
Route110_Text_MauvilleCitySign:
# 948 "data/maps/Route110/scripts.pory"
	.string "ROUTE 110\n"
# 949 "data/maps/Route110/scripts.pory"
	.string "{UP_ARROW} MAUVILLE CITY$"
# 950 "data/maps/Route110/scripts.pory"

# 951 "data/maps/Route110/scripts.pory"
Route110_Text_TrainerTipsPrlzSleep:
# 952 "data/maps/Route110/scripts.pory"
	.string "TRAINER TIPS\p"
# 953 "data/maps/Route110/scripts.pory"
	.string "The foe can be made helpless by\n"
# 954 "data/maps/Route110/scripts.pory"
	.string "paralyzing it or causing it to sleep.\p"
# 955 "data/maps/Route110/scripts.pory"
	.string "It is an important technique for\n"
# 956 "data/maps/Route110/scripts.pory"
	.string "POKéMON battles.$"
# 957 "data/maps/Route110/scripts.pory"

# 958 "data/maps/Route110/scripts.pory"
Route110_Text_TrainerTipsRegisterItems:
# 959 "data/maps/Route110/scripts.pory"
	.string "TRAINER TIPS\p"
# 960 "data/maps/Route110/scripts.pory"
	.string "The items in the BAG can be reorganized\n"
# 961 "data/maps/Route110/scripts.pory"
	.string "by pressing SELECT.$"
# 962 "data/maps/Route110/scripts.pory"

# 963 "data/maps/Route110/scripts.pory"
Route110_Text_TrickHouseSign:
# 964 "data/maps/Route110/scripts.pory"
	.string "“Three steps {RIGHT_ARROW} and two steps {UP_ARROW}\n"
# 965 "data/maps/Route110/scripts.pory"
	.string "to reach the wondrous TRICK HOUSE.”$"
# 966 "data/maps/Route110/scripts.pory"

# 967 "data/maps/Route110/scripts.pory"
Route110_Text_BestRecord:
# 968 "data/maps/Route110/scripts.pory"
	.string "THE BEST RECORD TO DATE…\p"
# 969 "data/maps/Route110/scripts.pory"
	.string "No. of collisions: {STR_VAR_1}\p"
# 970 "data/maps/Route110/scripts.pory"
	.string "Elapsed time: {STR_VAR_2}$"
# 971 "data/maps/Route110/scripts.pory"

# 972 "data/maps/Route110/scripts.pory"
Route110_Text_ThereIsNoRecord:
# 973 "data/maps/Route110/scripts.pory"
	.string "THE BEST RECORD TO DATE…\p"
# 974 "data/maps/Route110/scripts.pory"
	.string "No one seems to have taken the\n"
# 975 "data/maps/Route110/scripts.pory"
	.string "challenge. There is no record…$"
# 976 "data/maps/Route110/scripts.pory"

# 977 "data/maps/Route110/scripts.pory"
Route110_Text_ImagineSeeingYouHere:
# 978 "data/maps/Route110/scripts.pory"
	.string "PROF. BIRCH: Oh, {PLAYER}{KUN}!\n"
# 979 "data/maps/Route110/scripts.pory"
	.string "Imagine seeing you here!\p"
# 980 "data/maps/Route110/scripts.pory"
	.string "And where might my {RIVAL} be?$"
# 981 "data/maps/Route110/scripts.pory"

# 982 "data/maps/Route110/scripts.pory"
Route110_Text_HeardYouInstallMatchCall:
# 983 "data/maps/Route110/scripts.pory"
	.string "Oh, I see!\n"
# 984 "data/maps/Route110/scripts.pory"
	.string "You two are running separately.\l"
# 985 "data/maps/Route110/scripts.pory"
	.string "Well, that's fine.\p"
# 986 "data/maps/Route110/scripts.pory"
	.string "Oh, yes, I heard that your POKéNAV\n"
# 987 "data/maps/Route110/scripts.pory"
	.string "had the MATCH CALL system installed.\p"
# 988 "data/maps/Route110/scripts.pory"
	.string "Well, then, I should register you in\n"
# 989 "data/maps/Route110/scripts.pory"
	.string "my POKéNAV as well.\p"
# 990 "data/maps/Route110/scripts.pory"
	.string "That way, even when we're apart,\n"
# 991 "data/maps/Route110/scripts.pory"
	.string "I can rate your POKéDEX anytime.\p"
# 992 "data/maps/Route110/scripts.pory"
	.string "… … … … … …$"
# 993 "data/maps/Route110/scripts.pory"

# 994 "data/maps/Route110/scripts.pory"
Route110_Text_RegisteredBirchInPokenav:
# 995 "data/maps/Route110/scripts.pory"
	.string "Registered PROF. BIRCH\n"
# 996 "data/maps/Route110/scripts.pory"
	.string "in the POKéNAV.$"
# 997 "data/maps/Route110/scripts.pory"

# 998 "data/maps/Route110/scripts.pory"
Route110_Text_KeepAnEyeOutForRival:
# 999 "data/maps/Route110/scripts.pory"
	.string "PROF. BIRCH: {PLAYER}{KUN}…\p"
# 1000 "data/maps/Route110/scripts.pory"
	.string "Please keep an eye out for my {RIVAL}.\n"
# 1001 "data/maps/Route110/scripts.pory"
	.string "… … … … … …\p"
# 1002 "data/maps/Route110/scripts.pory"
	.string "Well, I had better get going.\n"
# 1003 "data/maps/Route110/scripts.pory"
	.string "See you again, {PLAYER}{KUN}!$"
