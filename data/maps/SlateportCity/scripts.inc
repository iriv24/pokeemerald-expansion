# 1 "data/maps/SlateportCity/scripts.pory"

# 2 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_FAT_MAN, 1
# 3 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_MAN_1, 2
# 4 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_RICH_BOY, 3
# 5 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_1, 5
# 6 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_COOK, 6
# 7 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_OLD_WOMAN, 7
# 8 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GIRL, 8
# 9 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_TY, 9
# 10 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GABBY, 10
# 11 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_CAPT_STERN, 11
# 12 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_2, 18
# 13 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_3, 19
# 14 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_5, 27
# 15 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_6, 28
# 16 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_7, 29
# 17 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_8, 30
# 18 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_SCOTT, 32
# 19 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_9, 33
# 20 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_10, 34
# 21 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_11, 35
# 22 "data/maps/SlateportCity/scripts.pory"

# 23 "data/maps/SlateportCity/scripts.pory"
@ Note: LOCALID_SLATEPORT_ENERGY_GURU is a local id for this map used elsewhere. It's defined in event_objects.h
# 24 "data/maps/SlateportCity/scripts.pory"

# 25 "data/maps/SlateportCity/scripts.pory"
SlateportCity_MapScripts::
# 26 "data/maps/SlateportCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SlateportCity_OnTransition
# 27 "data/maps/SlateportCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SlateportCity_OnFrame
# 28 "data/maps/SlateportCity/scripts.pory"
	.byte 0
# 29 "data/maps/SlateportCity/scripts.pory"

# 30 "data/maps/SlateportCity/scripts.pory"
SlateportCity_OnTransition:
# 31 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_MUSEUM_1F_STATE, 0
# 32 "data/maps/SlateportCity/scripts.pory"
	call SlateportCity_EventScript_EnterSlateport
# 33 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_MovePeopleForSternInterview
# 34 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1, SlateportCity_EventScript_SetReadyForScottScene
# 35 "data/maps/SlateportCity/scripts.pory"
	end
# 36 "data/maps/SlateportCity/scripts.pory"

# 37 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnterSlateport::
# 38 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_VISITED_SLATEPORT_CITY
# 39 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_CONTEST_HALL_STATE, 0
# 40 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_CONTEST_REPORTER
# 41 "data/maps/SlateportCity/scripts.pory"
	return
# 42 "data/maps/SlateportCity/scripts.pory"

# 43 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MovePeopleForSternInterview::
# 44 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_CAPT_STERN, 28, 13
# 45 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_OLD_WOMAN, 25, 13
# 46 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_RICH_BOY, 25, 14
# 47 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_COOK, 27, 16
# 48 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_GIRL, 28, 16
# 49 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_FAT_MAN, 29, 16
# 50 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_MAN_1, 31, 14
# 51 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_CAPT_STERN, MOVEMENT_TYPE_FACE_DOWN
# 52 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_OLD_WOMAN, MOVEMENT_TYPE_FACE_DOWN_AND_RIGHT
# 53 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_RICH_BOY, MOVEMENT_TYPE_FACE_UP_AND_RIGHT
# 54 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_COOK, MOVEMENT_TYPE_FACE_UP
# 55 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_GIRL, MOVEMENT_TYPE_FACE_UP
# 56 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_FAT_MAN, MOVEMENT_TYPE_FACE_UP
# 57 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_MAN_1, MOVEMENT_TYPE_FACE_LEFT
# 58 "data/maps/SlateportCity/scripts.pory"
	return
# 59 "data/maps/SlateportCity/scripts.pory"

# 60 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SetReadyForScottScene::
# 61 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 62 "data/maps/SlateportCity/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 63 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_0x8004, 30, SlateportCity_EventScript_MoveScottLeft
# 64 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SCOTT, 23, 27
# 65 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SCOTT, MOVEMENT_TYPE_FACE_RIGHT
# 66 "data/maps/SlateportCity/scripts.pory"
	return
# 67 "data/maps/SlateportCity/scripts.pory"

# 68 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MoveScottLeft::
# 69 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SCOTT, 22, 27
# 70 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SCOTT, MOVEMENT_TYPE_FACE_RIGHT
# 71 "data/maps/SlateportCity/scripts.pory"
	return
# 72 "data/maps/SlateportCity/scripts.pory"

# 73 "data/maps/SlateportCity/scripts.pory"
SlateportCity_OnFrame:
# 74 "data/maps/SlateportCity/scripts.pory"
	map_script_2 VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1, SlateportCity_EventScript_ScottScene
# 75 "data/maps/SlateportCity/scripts.pory"
	.2byte 0
# 76 "data/maps/SlateportCity/scripts.pory"

# 77 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ScottScene::
# 78 "data/maps/SlateportCity/scripts.pory"
	lockall
# 79 "data/maps/SlateportCity/scripts.pory"
	addobject LOCALID_SCOTT
# 80 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PlayerFaceScott
# 81 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottApproachPlayer
# 82 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 83 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_YouDroveTeamAquaAway, MSGBOX_DEFAULT
# 84 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 85 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterLeft
# 86 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 87 "data/maps/SlateportCity/scripts.pory"
	delay 60
# 88 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MaybeThisTrainer, MSGBOX_DEFAULT
# 89 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterRight
# 90 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 91 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_LetsRegisterEachOther, MSGBOX_DEFAULT
# 92 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 93 "data/maps/SlateportCity/scripts.pory"
	delay 30
# 94 "data/maps/SlateportCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 95 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_RegisteredScott, MSGBOX_DEFAULT
# 96 "data/maps/SlateportCity/scripts.pory"
	waitfanfare
# 97 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 98 "data/maps/SlateportCity/scripts.pory"
	delay 30
# 99 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_ENABLE_SCOTT_MATCH_CALL
# 100 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_KeepEyeOnTrainersBeSeeingYou, MSGBOX_DEFAULT
# 101 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 102 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottExit
# 103 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 104 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SCOTT
# 105 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SCOTT, 10, 12
# 106 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SCOTT, MOVEMENT_TYPE_FACE_DOWN
# 107 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 108 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 2
# 109 "data/maps/SlateportCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 110 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 111 "data/maps/SlateportCity/scripts.pory"
	end
# 112 "data/maps/SlateportCity/scripts.pory"

# 113 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerFaceScott:
# 114 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 115 "data/maps/SlateportCity/scripts.pory"
	delay_8
# 116 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_left
# 117 "data/maps/SlateportCity/scripts.pory"
	step_end
# 118 "data/maps/SlateportCity/scripts.pory"

# 119 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottApproachPlayer:
# 120 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 121 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 122 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 123 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 124 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 125 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 126 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 127 "data/maps/SlateportCity/scripts.pory"
	step_end
# 128 "data/maps/SlateportCity/scripts.pory"

# 129 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExit:
# 130 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 131 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 132 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 133 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 134 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 135 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 136 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 137 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 138 "data/maps/SlateportCity/scripts.pory"
	step_end
# 139 "data/maps/SlateportCity/scripts.pory"

# 140 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AbilityGuru::
# 141 "data/maps/SlateportCity/scripts.pory"
	lock
# 142 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 143 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_AbilityGuruSellWhatYouNeed
# 144 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 145 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_DAWN_111, SlateportCity_EventScript_AbilityGuru2
# 146 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_AbilityGuru
# 147 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 148 "data/maps/SlateportCity/scripts.pory"
	release
# 149 "data/maps/SlateportCity/scripts.pory"
	end
# 150 "data/maps/SlateportCity/scripts.pory"

# 151 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 152 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_AbilityGuru:
# 153 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 154 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_NONE
# 155 "data/maps/SlateportCity/scripts.pory"
	release
# 156 "data/maps/SlateportCity/scripts.pory"
	end
# 157 "data/maps/SlateportCity/scripts.pory"

# 158 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AbilityGuru2::
# 159 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_AbilityGuru2
# 160 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 161 "data/maps/SlateportCity/scripts.pory"
	release
# 162 "data/maps/SlateportCity/scripts.pory"
	end
# 163 "data/maps/SlateportCity/scripts.pory"

# 164 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 165 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_AbilityGuru2:
# 166 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 167 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ABILITY_PATCH
# 168 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_NONE
# 169 "data/maps/SlateportCity/scripts.pory"
	release
# 170 "data/maps/SlateportCity/scripts.pory"
	end
# 171 "data/maps/SlateportCity/scripts.pory"

# 172 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EffortRibbonWoman::
# 173 "data/maps/SlateportCity/scripts.pory"
	lock
# 174 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 175 "data/maps/SlateportCity/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 176 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OhYourPokemon, MSGBOX_DEFAULT
# 177 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, LeadMonHasEffortRibbon
# 178 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, SlateportCity_EventScript_MonHasEffortRibbon
# 179 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, Special_AreLeadMonEVsMaxedOut
# 180 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_MonEVsNotMaxed
# 181 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PleaseGiveItThisEffortRibbon, MSGBOX_DEFAULT
# 182 "data/maps/SlateportCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 183 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_ReceivedEffortRibbon
# 184 "data/maps/SlateportCity/scripts.pory"
	waitfanfare
# 185 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PutEffortRibbonOnMon, MSGBOX_DEFAULT
# 186 "data/maps/SlateportCity/scripts.pory"
	special GiveLeadMonEffortRibbon
# 187 "data/maps/SlateportCity/scripts.pory"
	release
# 188 "data/maps/SlateportCity/scripts.pory"
	end
# 189 "data/maps/SlateportCity/scripts.pory"

# 190 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MonEVsNotMaxed::
# 191 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GoForItLittleHarder, MSGBOX_DEFAULT
# 192 "data/maps/SlateportCity/scripts.pory"
	release
# 193 "data/maps/SlateportCity/scripts.pory"
	end
# 194 "data/maps/SlateportCity/scripts.pory"

# 195 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MonHasEffortRibbon::
# 196 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_EffortRibbonLooksGoodOnIt, MSGBOX_DEFAULT
# 197 "data/maps/SlateportCity/scripts.pory"
	release
# 198 "data/maps/SlateportCity/scripts.pory"
	end
# 199 "data/maps/SlateportCity/scripts.pory"

# 200 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Cook::
# 201 "data/maps/SlateportCity/scripts.pory"
	lock
# 202 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 203 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_CookSternInterview
# 204 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SeaweedFullOfLife, MSGBOX_DEFAULT
# 205 "data/maps/SlateportCity/scripts.pory"
	release
# 206 "data/maps/SlateportCity/scripts.pory"
	end
# 207 "data/maps/SlateportCity/scripts.pory"

# 208 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CookSternInterview::
# 209 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptainComeBackWithBigFish, MSGBOX_DEFAULT
# 210 "data/maps/SlateportCity/scripts.pory"
	release
# 211 "data/maps/SlateportCity/scripts.pory"
	end
# 212 "data/maps/SlateportCity/scripts.pory"

# 213 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OldWoman::
# 214 "data/maps/SlateportCity/scripts.pory"
	lock
# 215 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 216 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_OldWomanSternInterview
# 217 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HowTownIsBornAndGrows, MSGBOX_DEFAULT
# 218 "data/maps/SlateportCity/scripts.pory"
	release
# 219 "data/maps/SlateportCity/scripts.pory"
	end
# 220 "data/maps/SlateportCity/scripts.pory"

# 221 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OldWomanSternInterview::
# 222 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptSternBeingInterviewed, MSGBOX_DEFAULT
# 223 "data/maps/SlateportCity/scripts.pory"
	release
# 224 "data/maps/SlateportCity/scripts.pory"
	end
# 225 "data/maps/SlateportCity/scripts.pory"

# 226 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Girl::
# 227 "data/maps/SlateportCity/scripts.pory"
	lock
# 228 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 229 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_GirlSternInterview
# 230 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_SECRET_POWER, SlateportCity_EventScript_GirlSecretBase
# 231 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SlateportWonderfulPlace, MSGBOX_DEFAULT
# 232 "data/maps/SlateportCity/scripts.pory"
	release
# 233 "data/maps/SlateportCity/scripts.pory"
	end
# 234 "data/maps/SlateportCity/scripts.pory"

# 235 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_GirlSternInterview::
# 236 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_InterviewerSoCool, MSGBOX_DEFAULT
# 237 "data/maps/SlateportCity/scripts.pory"
	release
# 238 "data/maps/SlateportCity/scripts.pory"
	end
# 239 "data/maps/SlateportCity/scripts.pory"

# 240 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_GirlSecretBase::
# 241 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BuyBricksSoDecorWontGetDirty, MSGBOX_DEFAULT
# 242 "data/maps/SlateportCity/scripts.pory"
	release
# 243 "data/maps/SlateportCity/scripts.pory"
	end
# 244 "data/maps/SlateportCity/scripts.pory"

# 245 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RichBoy::
# 246 "data/maps/SlateportCity/scripts.pory"
	lock
# 247 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 248 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_RichBoySternInterview
# 249 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GoingToCompeteInBattleTent, MSGBOX_DEFAULT
# 250 "data/maps/SlateportCity/scripts.pory"
	release
# 251 "data/maps/SlateportCity/scripts.pory"
	end
# 252 "data/maps/SlateportCity/scripts.pory"

# 253 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RichBoySternInterview::
# 254 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternSaysDiscoveredSomething, MSGBOX_DEFAULT
# 255 "data/maps/SlateportCity/scripts.pory"
	release
# 256 "data/maps/SlateportCity/scripts.pory"
	end
# 257 "data/maps/SlateportCity/scripts.pory"

# 258 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_FatMan::
# 259 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_FatManSternInterview
# 260 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BushedHikingFromMauville, MSGBOX_NPC
# 261 "data/maps/SlateportCity/scripts.pory"
	end
# 262 "data/maps/SlateportCity/scripts.pory"

# 263 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_FatManSternInterview::
# 264 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AmIOnTV, MSGBOX_SIGN
# 265 "data/maps/SlateportCity/scripts.pory"
	end
# 266 "data/maps/SlateportCity/scripts.pory"

# 267 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man1::
# 268 "data/maps/SlateportCity/scripts.pory"
	lock
# 269 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 270 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_Man1SternInterview
# 271 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_EveryoneCallsHimCaptStern, MSGBOX_DEFAULT
# 272 "data/maps/SlateportCity/scripts.pory"
	release
# 273 "data/maps/SlateportCity/scripts.pory"
	end
# 274 "data/maps/SlateportCity/scripts.pory"

# 275 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man1SternInterview::
# 276 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptainsACelebrity, MSGBOX_DEFAULT
# 277 "data/maps/SlateportCity/scripts.pory"
	release
# 278 "data/maps/SlateportCity/scripts.pory"
	end
# 279 "data/maps/SlateportCity/scripts.pory"

# 280 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman1::
# 281 "data/maps/SlateportCity/scripts.pory"
	lock
# 282 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 283 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_DOCK_REJECTED_DEVON_GOODS, SlateportCity_EventScript_Woman1AquaGone
# 284 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatsLongLineOverThere, MSGBOX_DEFAULT
# 285 "data/maps/SlateportCity/scripts.pory"
	release
# 286 "data/maps/SlateportCity/scripts.pory"
	end
# 287 "data/maps/SlateportCity/scripts.pory"

# 288 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman1AquaGone::
# 289 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_VisitedMuseumOften, MSGBOX_DEFAULT
# 290 "data/maps/SlateportCity/scripts.pory"
	release
# 291 "data/maps/SlateportCity/scripts.pory"
	end
# 292 "data/maps/SlateportCity/scripts.pory"

# 293 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BattleTentSign::
# 294 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BattleTentSign, MSGBOX_SIGN
# 295 "data/maps/SlateportCity/scripts.pory"
	end
# 296 "data/maps/SlateportCity/scripts.pory"

# 297 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardSign::
# 298 "data/maps/SlateportCity/scripts.pory"
	lockall
# 299 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_EventScript_SternsShipyardFerryComplete
# 300 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, SlateportCity_EventScript_SternsShipyardNearsCompletion
# 301 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardWantedSign, MSGBOX_DEFAULT
# 302 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 303 "data/maps/SlateportCity/scripts.pory"
	end
# 304 "data/maps/SlateportCity/scripts.pory"

# 305 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardNearsCompletion::
# 306 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardNearsCompletion, MSGBOX_DEFAULT
# 307 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 308 "data/maps/SlateportCity/scripts.pory"
	end
# 309 "data/maps/SlateportCity/scripts.pory"

# 310 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardFerryComplete::
# 311 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardFerryComplete, MSGBOX_DEFAULT
# 312 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 313 "data/maps/SlateportCity/scripts.pory"
	end
# 314 "data/maps/SlateportCity/scripts.pory"

# 315 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PokemonFanClubSign::
# 316 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PokemonFanClubSign, MSGBOX_SIGN
# 317 "data/maps/SlateportCity/scripts.pory"
	end
# 318 "data/maps/SlateportCity/scripts.pory"

# 319 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OceanicMuseumSign::
# 320 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OceanicMuseumSign, MSGBOX_SIGN
# 321 "data/maps/SlateportCity/scripts.pory"
	end
# 322 "data/maps/SlateportCity/scripts.pory"

# 323 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CitySign::
# 324 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CitySign, MSGBOX_SIGN
# 325 "data/maps/SlateportCity/scripts.pory"
	end
# 326 "data/maps/SlateportCity/scripts.pory"

# 327 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MarketSign::
# 328 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MarketSign, MSGBOX_SIGN
# 329 "data/maps/SlateportCity/scripts.pory"
	end
# 330 "data/maps/SlateportCity/scripts.pory"

# 331 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HarborSign::
# 332 "data/maps/SlateportCity/scripts.pory"
	lockall
# 333 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_EventScript_HarborSignFerryComplete
# 334 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HarborFerryUnderConstruction, MSGBOX_DEFAULT
# 335 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 336 "data/maps/SlateportCity/scripts.pory"
	end
# 337 "data/maps/SlateportCity/scripts.pory"

# 338 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HarborSignFerryComplete::
# 339 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HarborSign, MSGBOX_DEFAULT
# 340 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 341 "data/maps/SlateportCity/scripts.pory"
	end
# 342 "data/maps/SlateportCity/scripts.pory"

# 343 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NameRatersHouseSign::
# 344 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_NameRatersHouseSign, MSGBOX_SIGN
# 345 "data/maps/SlateportCity/scripts.pory"
	end
# 346 "data/maps/SlateportCity/scripts.pory"

# 347 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Maniac::
# 348 "data/maps/SlateportCity/scripts.pory"
	lock
# 349 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 350 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_ManiacSternInterview
# 351 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GetNameRaterToHelpYou, MSGBOX_DEFAULT
# 352 "data/maps/SlateportCity/scripts.pory"
	release
# 353 "data/maps/SlateportCity/scripts.pory"
	end
# 354 "data/maps/SlateportCity/scripts.pory"

# 355 "data/maps/SlateportCity/scripts.pory"
@ Unclear if the text here was meant to be different, but its not
# 356 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ManiacSternInterview::
# 357 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GetNameRaterToHelpYou, MSGBOX_DEFAULT
# 358 "data/maps/SlateportCity/scripts.pory"
	release
# 359 "data/maps/SlateportCity/scripts.pory"
	end
# 360 "data/maps/SlateportCity/scripts.pory"

# 361 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman2::
# 362 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CantChangeTradeMonName, MSGBOX_NPC
# 363 "data/maps/SlateportCity/scripts.pory"
	end
# 364 "data/maps/SlateportCity/scripts.pory"

# 365 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Sailor1::
# 366 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SeaIsSoWet, MSGBOX_NPC
# 367 "data/maps/SlateportCity/scripts.pory"
	end
# 368 "data/maps/SlateportCity/scripts.pory"

# 369 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Sailor2::
# 370 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SinkOldBoats, MSGBOX_NPC
# 371 "data/maps/SlateportCity/scripts.pory"
	end
# 372 "data/maps/SlateportCity/scripts.pory"

# 373 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PokefanF::
# 374 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BuyTooMuch, MSGBOX_NPC
# 375 "data/maps/SlateportCity/scripts.pory"
	end
# 376 "data/maps/SlateportCity/scripts.pory"

# 377 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man2::
# 378 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BattleTentBuiltRecently, MSGBOX_NPC
# 379 "data/maps/SlateportCity/scripts.pory"
	end
# 380 "data/maps/SlateportCity/scripts.pory"

# 381 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt1::
# 382 "data/maps/SlateportCity/scripts.pory"
	lock
# 383 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 384 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_QuitPushing, MSGBOX_DEFAULT
# 385 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 386 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_1, Common_Movement_FaceOriginalDirection
# 387 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 388 "data/maps/SlateportCity/scripts.pory"
	release
# 389 "data/maps/SlateportCity/scripts.pory"
	end
# 390 "data/maps/SlateportCity/scripts.pory"

# 391 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt2::
# 392 "data/maps/SlateportCity/scripts.pory"
	lock
# 393 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 394 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AquaHasPolicy, MSGBOX_DEFAULT
# 395 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 396 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_2, Common_Movement_FaceOriginalDirection
# 397 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 398 "data/maps/SlateportCity/scripts.pory"
	release
# 399 "data/maps/SlateportCity/scripts.pory"
	end
# 400 "data/maps/SlateportCity/scripts.pory"

# 401 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt3::
# 402 "data/maps/SlateportCity/scripts.pory"
	lock
# 403 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 404 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BossIsBrilliant, MSGBOX_DEFAULT
# 405 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 406 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_3, Common_Movement_FaceOriginalDirection
# 407 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 408 "data/maps/SlateportCity/scripts.pory"
	release
# 409 "data/maps/SlateportCity/scripts.pory"
	end
# 410 "data/maps/SlateportCity/scripts.pory"

# 411 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt4::
# 412 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ShouldveBroughtMyGameBoy, MSGBOX_SIGN
# 413 "data/maps/SlateportCity/scripts.pory"
	end
# 414 "data/maps/SlateportCity/scripts.pory"

# 415 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt5::
# 416 "data/maps/SlateportCity/scripts.pory"
	lock
# 417 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 418 "data/maps/SlateportCity/scripts.pory"
	playse SE_PIN
# 419 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_5, Common_Movement_ExclamationMark
# 420 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 421 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_5, Common_Movement_Delay48
# 422 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 423 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatDoYouWant, MSGBOX_DEFAULT
# 424 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 425 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_5, Common_Movement_FaceOriginalDirection
# 426 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 427 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_5, SlateportCity_Movement_DelayAquaGrunt
# 428 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 429 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_5, Common_Movement_FacePlayer
# 430 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 431 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_IllReadSignForYou, MSGBOX_DEFAULT
# 432 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 433 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_5, Common_Movement_FaceOriginalDirection
# 434 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 435 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_5, SlateportCity_Movement_DelayAquaGrunt
# 436 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 437 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SaysSomethingLikeSeaIsEndless, MSGBOX_DEFAULT
# 438 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 439 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_5, Common_Movement_FacePlayer
# 440 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 441 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_5, SlateportCity_Movement_DelayAquaGrunt
# 442 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 443 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_5, Common_Movement_FaceOriginalDirection
# 444 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 445 "data/maps/SlateportCity/scripts.pory"
	release
# 446 "data/maps/SlateportCity/scripts.pory"
	end
# 447 "data/maps/SlateportCity/scripts.pory"

# 448 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_DelayAquaGrunt:
# 449 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 450 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 451 "data/maps/SlateportCity/scripts.pory"
	step_end
# 452 "data/maps/SlateportCity/scripts.pory"

# 453 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt6::
# 454 "data/maps/SlateportCity/scripts.pory"
	lock
# 455 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 456 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HotSpringsAfterOperation, MSGBOX_DEFAULT
# 457 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 458 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_6, Common_Movement_FaceOriginalDirection
# 459 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 460 "data/maps/SlateportCity/scripts.pory"
	release
# 461 "data/maps/SlateportCity/scripts.pory"
	end
# 462 "data/maps/SlateportCity/scripts.pory"

# 463 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt7::
# 464 "data/maps/SlateportCity/scripts.pory"
	lock
# 465 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 466 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_RemindsMeOfLongLineForGames, MSGBOX_DEFAULT
# 467 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 468 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_7, Common_Movement_FaceOriginalDirection
# 469 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 470 "data/maps/SlateportCity/scripts.pory"
	release
# 471 "data/maps/SlateportCity/scripts.pory"
	end
# 472 "data/maps/SlateportCity/scripts.pory"

# 473 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt8::
# 474 "data/maps/SlateportCity/scripts.pory"
	lock
# 475 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 476 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhyAreWeLiningUp, MSGBOX_DEFAULT
# 477 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 478 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_8, Common_Movement_FaceOriginalDirection
# 479 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 480 "data/maps/SlateportCity/scripts.pory"
	release
# 481 "data/maps/SlateportCity/scripts.pory"
	end
# 482 "data/maps/SlateportCity/scripts.pory"

# 483 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt9::
# 484 "data/maps/SlateportCity/scripts.pory"
	lock
# 485 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 486 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_NoWeaklings, MSGBOX_DEFAULT
# 487 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 488 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FaceOriginalDirection
# 489 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 490 "data/maps/SlateportCity/scripts.pory"
	release
# 491 "data/maps/SlateportCity/scripts.pory"
	end
# 492 "data/maps/SlateportCity/scripts.pory"

# 493 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt10::
# 494 "data/maps/SlateportCity/scripts.pory"
	lock
# 495 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 496 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MoralSupport, MSGBOX_DEFAULT
# 497 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 498 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_10, Common_Movement_FaceOriginalDirection
# 499 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 500 "data/maps/SlateportCity/scripts.pory"
	release
# 501 "data/maps/SlateportCity/scripts.pory"
	end
# 502 "data/maps/SlateportCity/scripts.pory"

# 503 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt11::
# 504 "data/maps/SlateportCity/scripts.pory"
	lock
# 505 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 506 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ThisArea, MSGBOX_DEFAULT
# 507 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 508 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_11, Common_Movement_FaceOriginalDirection
# 509 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 510 "data/maps/SlateportCity/scripts.pory"
	release
# 511 "data/maps/SlateportCity/scripts.pory"
	end
# 512 "data/maps/SlateportCity/scripts.pory"

# 513 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ShardClerk::
# 514 "data/maps/SlateportCity/scripts.pory"
	lock
# 515 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 516 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 517 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 518 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_PokemartDecor_Shards
# 519 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 520 "data/maps/SlateportCity/scripts.pory"
	release
# 521 "data/maps/SlateportCity/scripts.pory"
	end
# 522 "data/maps/SlateportCity/scripts.pory"

# 523 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 524 "data/maps/SlateportCity/scripts.pory"
SlateportCity_PokemartDecor_Shards:
# 525 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_BLUE_SHARD
# 526 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_RED_SHARD
# 527 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_GREEN_SHARD
# 528 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_YELLOW_SHARD
# 529 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_NONE
# 530 "data/maps/SlateportCity/scripts.pory"
	release
# 531 "data/maps/SlateportCity/scripts.pory"
	end
# 532 "data/maps/SlateportCity/scripts.pory"

# 533 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ComeBackWithSecretPower::
# 534 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_ComeBackWithSecretPower, MSGBOX_DEFAULT
# 535 "data/maps/SlateportCity/scripts.pory"
	release
# 536 "data/maps/SlateportCity/scripts.pory"
	end
# 537 "data/maps/SlateportCity/scripts.pory"

# 538 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BerryClerk::
# 539 "data/maps/SlateportCity/scripts.pory"
	lock
# 540 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 541 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 542 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 543 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_PokemartBerries
# 544 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 545 "data/maps/SlateportCity/scripts.pory"
	release
# 546 "data/maps/SlateportCity/scripts.pory"
	end
# 547 "data/maps/SlateportCity/scripts.pory"

# 548 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 549 "data/maps/SlateportCity/scripts.pory"
SlateportCity_PokemartBerries:
# 550 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CHOPLE_BERRY
# 551 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_COLBUR_BERRY
# 552 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_WACAN_BERRY
# 553 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CHARTI_BERRY
# 554 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CHILAN_BERRY
# 555 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_HABAN_BERRY
# 556 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ROSELI_BERRY
# 557 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SHUCA_BERRY
# 558 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_BABIRI_BERRY
# 559 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_KASIB_BERRY
# 560 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_COBA_BERRY
# 561 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_KEBIA_BERRY
# 562 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_OCCA_BERRY
# 563 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_PASSHO_BERRY
# 564 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_PAYAPA_BERRY
# 565 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_RINDO_BERRY
# 566 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_YACHE_BERRY
# 567 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TANGA_BERRY
# 568 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_NONE
# 569 "data/maps/SlateportCity/scripts.pory"
	release
# 570 "data/maps/SlateportCity/scripts.pory"
	end
# 571 "data/maps/SlateportCity/scripts.pory"

# 572 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PowerTMClerk::
# 573 "data/maps/SlateportCity/scripts.pory"
	lock
# 574 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 575 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 576 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 577 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_PowerTMs
# 578 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 579 "data/maps/SlateportCity/scripts.pory"
	release
# 580 "data/maps/SlateportCity/scripts.pory"
	end
# 581 "data/maps/SlateportCity/scripts.pory"

# 582 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 583 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_PowerTMs:
# 584 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM_HIDDEN_POWER
# 585 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM_DEFOG
# 586 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_NONE
# 587 "data/maps/SlateportCity/scripts.pory"
	release
# 588 "data/maps/SlateportCity/scripts.pory"
	end
# 589 "data/maps/SlateportCity/scripts.pory"

# 590 "data/maps/SlateportCity/scripts.pory"
@ Scene with Capt Sterns interview and Team Aqua announcing plans to steal Submarine
# 591 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CaptStern::
# 592 "data/maps/SlateportCity/scripts.pory"
	lockall
# 593 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternMoveAheadWithExploration, MSGBOX_DEFAULT
# 594 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GabbyWonderfulThanksForInterview, MSGBOX_DEFAULT
# 595 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 596 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GABBY, Common_Movement_WalkInPlaceFasterRight
# 597 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 598 "data/maps/SlateportCity/scripts.pory"
	delay 10
# 599 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_TY, Common_Movement_WalkInPlaceFasterDown
# 600 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 601 "data/maps/SlateportCity/scripts.pory"
	delay 25
# 602 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, SlateportCity_Movement_SternWatchGabbyAndTyExit
# 603 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PlayerFaceStern
# 604 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GABBY, SlateportCity_Movement_GabbyExit
# 605 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_TY, SlateportCity_Movement_TyExit
# 606 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 607 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_GABBY
# 608 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_TY
# 609 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternWhewFirstInterview, MSGBOX_DEFAULT
# 610 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_WalkInPlaceFasterUp
# 611 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 612 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OhPlayerWeMadeDiscovery, MSGBOX_DEFAULT
# 613 "data/maps/SlateportCity/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 614 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AquaWillAssumeControlOfSubmarine, MSGBOX_DEFAULT
# 615 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_COOK, Common_Movement_WalkInPlaceFasterLeft
# 616 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_FAT_MAN, Common_Movement_WalkInPlaceFasterLeft
# 617 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_OLD_WOMAN, SlateportCity_Movement_OldWomanConcern
# 618 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_RICH_BOY, Common_Movement_QuestionMark
# 619 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_MAN_1, SlateportCity_Movement_ManConcern
# 620 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 621 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_WalkInPlaceFasterDown
# 622 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 623 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternWhatWasAllThat, MSGBOX_DEFAULT
# 624 "data/maps/SlateportCity/scripts.pory"
	playse SE_PIN
# 625 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_ExclamationMark
# 626 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 627 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_Delay48
# 628 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 629 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_WalkInPlaceFasterUp
# 630 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 631 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_FromHarborTryingToTakeSub, MSGBOX_DEFAULT
# 632 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PleaseComeWithMe, MSGBOX_DEFAULT
# 633 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 634 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, SlateportCity_Movement_SternEnterHarbor
# 635 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PlayerEnterHarbor
# 636 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 637 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_CAPT_STERN
# 638 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_CAPTAIN_STERN
# 639 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_SUBMARINE_SHADOW
# 640 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_AQUA_GRUNT
# 641 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_ARCHIE
# 642 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_CITY_STATE, 2
# 643 "data/maps/SlateportCity/scripts.pory"
	warp MAP_SLATEPORT_CITY_HARBOR, 11, 14
# 644 "data/maps/SlateportCity/scripts.pory"
	waitstate
# 645 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 646 "data/maps/SlateportCity/scripts.pory"
	end
# 647 "data/maps/SlateportCity/scripts.pory"

# 648 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_OldWomanConcern:
# 649 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 650 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 651 "data/maps/SlateportCity/scripts.pory"
	emote_question_mark
# 652 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_right
# 653 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 654 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 655 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_left
# 656 "data/maps/SlateportCity/scripts.pory"
	step_end
# 657 "data/maps/SlateportCity/scripts.pory"

# 658 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ManConcern:
# 659 "data/maps/SlateportCity/scripts.pory"
	emote_question_mark
# 660 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_up
# 661 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 662 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_down
# 663 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 664 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 665 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_left
# 666 "data/maps/SlateportCity/scripts.pory"
	step_end
# 667 "data/maps/SlateportCity/scripts.pory"

# 668 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_GabbyExit:
# 669 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 670 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 671 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 672 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 673 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 674 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 675 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 676 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 677 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 678 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 679 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 680 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 681 "data/maps/SlateportCity/scripts.pory"
	step_end
# 682 "data/maps/SlateportCity/scripts.pory"

# 683 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_TyExit:
# 684 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 685 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 686 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 687 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 688 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 689 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 690 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 691 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 692 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 693 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 694 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 695 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 696 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 697 "data/maps/SlateportCity/scripts.pory"
	step_end
# 698 "data/maps/SlateportCity/scripts.pory"

# 699 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_Unused:
# 700 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 701 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_up
# 702 "data/maps/SlateportCity/scripts.pory"
	step_end
# 703 "data/maps/SlateportCity/scripts.pory"

# 704 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_SternEnterHarbor:
# 705 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 706 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 707 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 708 "data/maps/SlateportCity/scripts.pory"
	set_invisible
# 709 "data/maps/SlateportCity/scripts.pory"
	step_end
# 710 "data/maps/SlateportCity/scripts.pory"

# 711 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_SternWatchGabbyAndTyExit:
# 712 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 713 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 714 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 715 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 716 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 717 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 718 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 719 "data/maps/SlateportCity/scripts.pory"
	step_end
# 720 "data/maps/SlateportCity/scripts.pory"

# 721 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerEnterHarbor:
# 722 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_right
# 723 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 724 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 725 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 726 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 727 "data/maps/SlateportCity/scripts.pory"
	step_end
# 728 "data/maps/SlateportCity/scripts.pory"

# 729 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerFaceStern:
# 730 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 731 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 732 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 733 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 734 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 735 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 736 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 737 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_down
# 738 "data/maps/SlateportCity/scripts.pory"
	step_end
# 739 "data/maps/SlateportCity/scripts.pory"

# 740 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Ty::
# 741 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BigSmileForCamera, MSGBOX_SIGN
# 742 "data/maps/SlateportCity/scripts.pory"
	end
# 743 "data/maps/SlateportCity/scripts.pory"

# 744 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Gabby::
# 745 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MostInvaluableExperience, MSGBOX_SIGN
# 746 "data/maps/SlateportCity/scripts.pory"
	end
# 747 "data/maps/SlateportCity/scripts.pory"

# 748 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man3::
# 749 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WonderIfLighthouseStartlesPokemon, MSGBOX_NPC
# 750 "data/maps/SlateportCity/scripts.pory"
	end
# 751 "data/maps/SlateportCity/scripts.pory"

# 752 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BerryPowderClerk::
# 753 "data/maps/SlateportCity/scripts.pory"
	lock
# 754 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 755 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_POWDER_JAR, SlateportCity_EventScript_ReceivedPowderJar
# 756 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerries, MSGBOX_DEFAULT
# 757 "data/maps/SlateportCity/scripts.pory"
	giveitem ITEM_POWDER_JAR
# 758 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_RECEIVED_POWDER_JAR
# 759 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerryPowder, MSGBOX_DEFAULT
# 760 "data/maps/SlateportCity/scripts.pory"
	release
# 761 "data/maps/SlateportCity/scripts.pory"
	end
# 762 "data/maps/SlateportCity/scripts.pory"

# 763 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ReceivedPowderJar::
# 764 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8004, 1
# 765 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, HasEnoughBerryPowder
# 766 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_ExplainBerryPowder
# 767 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BroughtMeSomeBerryPowder, MSGBOX_DEFAULT
# 768 "data/maps/SlateportCity/scripts.pory"
	special DisplayBerryPowderVendorMenu
# 769 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ChooseBerryPowderItem
# 770 "data/maps/SlateportCity/scripts.pory"
	end
# 771 "data/maps/SlateportCity/scripts.pory"

# 772 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ExplainBerryPowder::
# 773 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerryPowder, MSGBOX_DEFAULT
# 774 "data/maps/SlateportCity/scripts.pory"
	release
# 775 "data/maps/SlateportCity/scripts.pory"
	end
# 776 "data/maps/SlateportCity/scripts.pory"

# 777 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ChooseBerryPowderItem::
# 778 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_ExchangeWhatWithIt
# 779 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 780 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BERRY_POWDER_VENDOR
# 781 "data/maps/SlateportCity/scripts.pory"
	special ShowScrollableMultichoice
# 782 "data/maps/SlateportCity/scripts.pory"
	waitstate
# 783 "data/maps/SlateportCity/scripts.pory"
	switch VAR_RESULT
# 784 "data/maps/SlateportCity/scripts.pory"
	case 0, SlateportCity_EventScript_EnergyPowder
# 785 "data/maps/SlateportCity/scripts.pory"
	case 1, SlateportCity_EventScript_EnergyRoot
# 786 "data/maps/SlateportCity/scripts.pory"
	case 2, SlateportCity_EventScript_HealPowder
# 787 "data/maps/SlateportCity/scripts.pory"
	case 3, SlateportCity_EventScript_RevivalHerb
# 788 "data/maps/SlateportCity/scripts.pory"
	case 4, SlateportCity_EventScript_Protein
# 789 "data/maps/SlateportCity/scripts.pory"
	case 5, SlateportCity_EventScript_Iron
# 790 "data/maps/SlateportCity/scripts.pory"
	case 6, SlateportCity_EventScript_Carbos
# 791 "data/maps/SlateportCity/scripts.pory"
	case 7, SlateportCity_EventScript_Calcium
# 792 "data/maps/SlateportCity/scripts.pory"
	case 8, SlateportCity_EventScript_Zinc
# 793 "data/maps/SlateportCity/scripts.pory"
	case 9, SlateportCity_EventScript_HPUp
# 794 "data/maps/SlateportCity/scripts.pory"
	case 10, SlateportCity_EventScript_PPUp
# 795 "data/maps/SlateportCity/scripts.pory"
	case 11, SlateportCity_EventScript_CancelPowderItemSelect
# 796 "data/maps/SlateportCity/scripts.pory"
	case MULTI_B_PRESSED, SlateportCity_EventScript_CancelPowderItemSelect
# 797 "data/maps/SlateportCity/scripts.pory"
	end
# 798 "data/maps/SlateportCity/scripts.pory"

# 799 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnergyPowder::
# 800 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ENERGY_POWDER
# 801 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ENERGY_POWDER
# 802 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 50
# 803 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 804 "data/maps/SlateportCity/scripts.pory"
	end
# 805 "data/maps/SlateportCity/scripts.pory"

# 806 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnergyRoot::
# 807 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ENERGY_ROOT
# 808 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ENERGY_ROOT
# 809 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 80
# 810 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 811 "data/maps/SlateportCity/scripts.pory"
	end
# 812 "data/maps/SlateportCity/scripts.pory"

# 813 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HealPowder::
# 814 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_HEAL_POWDER
# 815 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_HEAL_POWDER
# 816 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 50
# 817 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 818 "data/maps/SlateportCity/scripts.pory"
	end
# 819 "data/maps/SlateportCity/scripts.pory"

# 820 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RevivalHerb::
# 821 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_REVIVAL_HERB
# 822 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_REVIVAL_HERB
# 823 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 300
# 824 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 825 "data/maps/SlateportCity/scripts.pory"
	end
# 826 "data/maps/SlateportCity/scripts.pory"

# 827 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Protein::
# 828 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_PROTEIN
# 829 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_PROTEIN
# 830 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 831 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 832 "data/maps/SlateportCity/scripts.pory"
	end
# 833 "data/maps/SlateportCity/scripts.pory"

# 834 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Iron::
# 835 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_IRON
# 836 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_IRON
# 837 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 838 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 839 "data/maps/SlateportCity/scripts.pory"
	end
# 840 "data/maps/SlateportCity/scripts.pory"

# 841 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Carbos::
# 842 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CARBOS
# 843 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_CARBOS
# 844 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 845 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 846 "data/maps/SlateportCity/scripts.pory"
	end
# 847 "data/maps/SlateportCity/scripts.pory"

# 848 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Calcium::
# 849 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CALCIUM
# 850 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_CALCIUM
# 851 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 852 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 853 "data/maps/SlateportCity/scripts.pory"
	end
# 854 "data/maps/SlateportCity/scripts.pory"

# 855 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Zinc::
# 856 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ZINC
# 857 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ZINC
# 858 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 859 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 860 "data/maps/SlateportCity/scripts.pory"
	end
# 861 "data/maps/SlateportCity/scripts.pory"

# 862 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HPUp::
# 863 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_HP_UP
# 864 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_HP_UP
# 865 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 866 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 867 "data/maps/SlateportCity/scripts.pory"
	end
# 868 "data/maps/SlateportCity/scripts.pory"

# 869 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PPUp::
# 870 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_PP_UP
# 871 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_PP_UP
# 872 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 3000
# 873 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 874 "data/maps/SlateportCity/scripts.pory"
	end
# 875 "data/maps/SlateportCity/scripts.pory"

# 876 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CancelPowderItemSelect::
# 877 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ComeBackToTradeBerryPowder, MSGBOX_DEFAULT
# 878 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 879 "data/maps/SlateportCity/scripts.pory"
	release
# 880 "data/maps/SlateportCity/scripts.pory"
	end
# 881 "data/maps/SlateportCity/scripts.pory"

# 882 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_TryBuyBerryPowderItem::
# 883 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExchangeBerryPowderForItem, MSGBOX_YESNO
# 884 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SlateportCity_EventScript_ChooseBerryPowderItem
# 885 "data/maps/SlateportCity/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8009
# 886 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, HasEnoughBerryPowder
# 887 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_NotEnoughBerryPowder
# 888 "data/maps/SlateportCity/scripts.pory"
	giveitem VAR_0x8008
# 889 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_NoRoomForBerryPowderItem
# 890 "data/maps/SlateportCity/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8009
# 891 "data/maps/SlateportCity/scripts.pory"
	special TakeBerryPowder
# 892 "data/maps/SlateportCity/scripts.pory"
	special PrintPlayerBerryPowderAmount
# 893 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_FineBerryPowderTradeSomethingElse, MSGBOX_YESNO
# 894 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, SlateportCity_EventScript_ChooseBerryPowderItem
# 895 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhenYouGetMoreBringItToMe, MSGBOX_DEFAULT
# 896 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 897 "data/maps/SlateportCity/scripts.pory"
	release
# 898 "data/maps/SlateportCity/scripts.pory"
	end
# 899 "data/maps/SlateportCity/scripts.pory"

# 900 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NoRoomForBerryPowderItem::
# 901 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_TheBagIsFull, MSGBOX_DEFAULT
# 902 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 903 "data/maps/SlateportCity/scripts.pory"
	release
# 904 "data/maps/SlateportCity/scripts.pory"
	end
# 905 "data/maps/SlateportCity/scripts.pory"

# 906 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NotEnoughBerryPowder::
# 907 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_DontHaveEnoughBerryPowder, MSGBOX_DEFAULT
# 908 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ChooseBerryPowderItem
# 909 "data/maps/SlateportCity/scripts.pory"
	end
# 910 "data/maps/SlateportCity/scripts.pory"

# 911 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ScottBattleTentScene::
# 912 "data/maps/SlateportCity/scripts.pory"
	lockall
# 913 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 914 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 915 "data/maps/SlateportCity/scripts.pory"
	opendoor 10, 12
# 916 "data/maps/SlateportCity/scripts.pory"
	waitdooranim
# 917 "data/maps/SlateportCity/scripts.pory"
	addobject LOCALID_SCOTT
# 918 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PushPlayerDown
# 919 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottExitBattleTent
# 920 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 921 "data/maps/SlateportCity/scripts.pory"
	closedoor 10, 12
# 922 "data/maps/SlateportCity/scripts.pory"
	waitdooranim
# 923 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_TakingBattleTentChallenge, MSGBOX_DEFAULT
# 924 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 925 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PlayerWatchScottExit
# 926 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottExitAfterBattleTent
# 927 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 928 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SCOTT
# 929 "data/maps/SlateportCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 930 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 3
# 931 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 932 "data/maps/SlateportCity/scripts.pory"
	end
# 933 "data/maps/SlateportCity/scripts.pory"

# 934 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PushPlayerDown:
# 935 "data/maps/SlateportCity/scripts.pory"
	lock_facing_direction
# 936 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 937 "data/maps/SlateportCity/scripts.pory"
	unlock_facing_direction
# 938 "data/maps/SlateportCity/scripts.pory"
	step_end
# 939 "data/maps/SlateportCity/scripts.pory"

# 940 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerWatchScottExit:
# 941 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 942 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_right
# 943 "data/maps/SlateportCity/scripts.pory"
	step_end
# 944 "data/maps/SlateportCity/scripts.pory"

# 945 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExitBattleTent:
# 946 "data/maps/SlateportCity/scripts.pory"
	delay_8
# 947 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 948 "data/maps/SlateportCity/scripts.pory"
	step_end
# 949 "data/maps/SlateportCity/scripts.pory"

# 950 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExitAfterBattleTent:
# 951 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 952 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 953 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 954 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 955 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 956 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 957 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 958 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 959 "data/maps/SlateportCity/scripts.pory"
	step_end
# 960 "data/maps/SlateportCity/scripts.pory"

# 961 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BerryCrushRankingsSign::
# 962 "data/maps/SlateportCity/scripts.pory"
	lockall
# 963 "data/maps/SlateportCity/scripts.pory"
	special ShowBerryCrushRankings
# 964 "data/maps/SlateportCity/scripts.pory"
	waitstate
# 965 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 966 "data/maps/SlateportCity/scripts.pory"
	end
# 967 "data/maps/SlateportCity/scripts.pory"

# 968 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AbilityGuruSellWhatYouNeed:
# 969 "data/maps/SlateportCity/scripts.pory"
	.string "I'm the Ability Guru! I'll go for it\n"
# 970 "data/maps/SlateportCity/scripts.pory"
	.string "and sell you what you need!$"
# 971 "data/maps/SlateportCity/scripts.pory"

# 972 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_OhYourPokemon:
# 973 "data/maps/SlateportCity/scripts.pory"
	.string "Oh?\n"
# 974 "data/maps/SlateportCity/scripts.pory"
	.string "Your {STR_VAR_1}…$"
# 975 "data/maps/SlateportCity/scripts.pory"

# 976 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PleaseGiveItThisEffortRibbon:
# 977 "data/maps/SlateportCity/scripts.pory"
	.string "Went for it stupendously!\p"
# 978 "data/maps/SlateportCity/scripts.pory"
	.string "As its reward, please give it this\n"
# 979 "data/maps/SlateportCity/scripts.pory"
	.string "Effort Ribbon.$"
# 980 "data/maps/SlateportCity/scripts.pory"

# 981 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ReceivedEffortRibbon:
# 982 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER} received the Effort Ribbon.$"
# 983 "data/maps/SlateportCity/scripts.pory"

# 984 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PutEffortRibbonOnMon:
# 985 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER} put the Effort Ribbon\n"
# 986 "data/maps/SlateportCity/scripts.pory"
	.string "on {STR_VAR_1}.$"
# 987 "data/maps/SlateportCity/scripts.pory"

# 988 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GoForItLittleHarder:
# 989 "data/maps/SlateportCity/scripts.pory"
	.string "You have to go for it a little harder.\p"
# 990 "data/maps/SlateportCity/scripts.pory"
	.string "If you do, I'll give your Pokémon\n"
# 991 "data/maps/SlateportCity/scripts.pory"
	.string "something nice.$"
# 992 "data/maps/SlateportCity/scripts.pory"

# 993 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_EffortRibbonLooksGoodOnIt:
# 994 "data/maps/SlateportCity/scripts.pory"
	.string "Oh! Your {STR_VAR_1}, that Effort\n"
# 995 "data/maps/SlateportCity/scripts.pory"
	.string "Ribbon looks good on it!$"
# 996 "data/maps/SlateportCity/scripts.pory"

# 997 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WonderIfLighthouseStartlesPokemon:
# 998 "data/maps/SlateportCity/scripts.pory"
	.string "The light of the lighthouse reaches\n"
# 999 "data/maps/SlateportCity/scripts.pory"
	.string "dozens of miles away.\p"
# 1000 "data/maps/SlateportCity/scripts.pory"
	.string "I wonder if it doesn't startle Pokémon\n"
# 1001 "data/maps/SlateportCity/scripts.pory"
	.string "in the sea.$"
# 1002 "data/maps/SlateportCity/scripts.pory"

# 1003 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SeaweedFullOfLife:
# 1004 "data/maps/SlateportCity/scripts.pory"
	.string "Ooh, look at this!\p"
# 1005 "data/maps/SlateportCity/scripts.pory"
	.string "The seaweed you can get around these\n"
# 1006 "data/maps/SlateportCity/scripts.pory"
	.string "parts is fresh and full of life.\p"
# 1007 "data/maps/SlateportCity/scripts.pory"
	.string "Why, it looks like it can even rear up\n"
# 1008 "data/maps/SlateportCity/scripts.pory"
	.string "and attack!$"
# 1009 "data/maps/SlateportCity/scripts.pory"

# 1010 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HowTownIsBornAndGrows:
# 1011 "data/maps/SlateportCity/scripts.pory"
	.string "Where the water is clean, the fruits\n"
# 1012 "data/maps/SlateportCity/scripts.pory"
	.string "of bountiful harvest gather.\p"
# 1013 "data/maps/SlateportCity/scripts.pory"
	.string "And where people gather, a market\n"
# 1014 "data/maps/SlateportCity/scripts.pory"
	.string "soon starts.\p"
# 1015 "data/maps/SlateportCity/scripts.pory"
	.string "That is how a town is born and grows.$"
# 1016 "data/maps/SlateportCity/scripts.pory"

# 1017 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SlateportWonderfulPlace:
# 1018 "data/maps/SlateportCity/scripts.pory"
	.string "Shopping where you can breathe the\n"
# 1019 "data/maps/SlateportCity/scripts.pory"
	.string "scent of the ocean…\p"
# 1020 "data/maps/SlateportCity/scripts.pory"
	.string "Slateport is such a wonderful place!$"
# 1021 "data/maps/SlateportCity/scripts.pory"

# 1022 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BuyBricksSoDecorWontGetDirty:
# 1023 "data/maps/SlateportCity/scripts.pory"
	.string "If you put dolls or cushions on\n"
# 1024 "data/maps/SlateportCity/scripts.pory"
	.string "the floor, they'll get dirty.\p"
# 1025 "data/maps/SlateportCity/scripts.pory"
	.string "I'm going to buy some bricks so my\n"
# 1026 "data/maps/SlateportCity/scripts.pory"
	.string "dolls and cushions won't get dirty\l"
# 1027 "data/maps/SlateportCity/scripts.pory"
	.string "when I leave them out.$"
# 1028 "data/maps/SlateportCity/scripts.pory"

# 1029 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GoingToCompeteInBattleTent:
# 1030 "data/maps/SlateportCity/scripts.pory"
	.string "Wroooar! I'm going to compete in\n"
# 1031 "data/maps/SlateportCity/scripts.pory"
	.string "the Battle Tent, too!\p"
# 1032 "data/maps/SlateportCity/scripts.pory"
	.string "But before that, I need to catch\n"
# 1033 "data/maps/SlateportCity/scripts.pory"
	.string "some Pokémon!$"
# 1034 "data/maps/SlateportCity/scripts.pory"

# 1035 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BushedHikingFromMauville:
# 1036 "data/maps/SlateportCity/scripts.pory"
	.string "Whew… I'm just bushed…\p"
# 1037 "data/maps/SlateportCity/scripts.pory"
	.string "I hiked over from Mauville City.\n"
# 1038 "data/maps/SlateportCity/scripts.pory"
	.string "But, boy, this city's huge.\p"
# 1039 "data/maps/SlateportCity/scripts.pory"
	.string "If I'd known this, I would've ridden\n"
# 1040 "data/maps/SlateportCity/scripts.pory"
	.string "my bike here.$"
# 1041 "data/maps/SlateportCity/scripts.pory"

# 1042 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_EveryoneCallsHimCaptStern:
# 1043 "data/maps/SlateportCity/scripts.pory"
	.string "Stern, the fellow who built the\n"
# 1044 "data/maps/SlateportCity/scripts.pory"
	.string "museum, also happens to be the leader\l"
# 1045 "data/maps/SlateportCity/scripts.pory"
	.string "of an undersea exploration team.\p"
# 1046 "data/maps/SlateportCity/scripts.pory"
	.string "So, everyone calls him Capt. Stern.$"
# 1047 "data/maps/SlateportCity/scripts.pory"

# 1048 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhatsLongLineOverThere:
# 1049 "data/maps/SlateportCity/scripts.pory"
	.string "What is that over there?\n"
# 1050 "data/maps/SlateportCity/scripts.pory"
	.string "That long line…$"
# 1051 "data/maps/SlateportCity/scripts.pory"

# 1052 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_VisitedMuseumOften:
# 1053 "data/maps/SlateportCity/scripts.pory"
	.string "When I was a child, I visited\n"
# 1054 "data/maps/SlateportCity/scripts.pory"
	.string "the museum often.\p"
# 1055 "data/maps/SlateportCity/scripts.pory"
	.string "I used to dream about the mysteries of\n"
# 1056 "data/maps/SlateportCity/scripts.pory"
	.string "the sea after seeing the exhibits.$"
# 1057 "data/maps/SlateportCity/scripts.pory"

# 1058 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_QuitPushing:
# 1059 "data/maps/SlateportCity/scripts.pory"
	.string "Hey, there! Quit pushing!\n"
# 1060 "data/maps/SlateportCity/scripts.pory"
	.string "This is the line, can't you see?$"
# 1061 "data/maps/SlateportCity/scripts.pory"

# 1062 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AquaHasPolicy:
# 1063 "data/maps/SlateportCity/scripts.pory"
	.string "Team Aqua has a policy of\n"
# 1064 "data/maps/SlateportCity/scripts.pory"
	.string "assembling and dispersing at\l"
# 1065 "data/maps/SlateportCity/scripts.pory"
	.string "the operation site.$"
# 1066 "data/maps/SlateportCity/scripts.pory"

# 1067 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BossIsBrilliant:
# 1068 "data/maps/SlateportCity/scripts.pory"
	.string "Our boss is brilliant.\p"
# 1069 "data/maps/SlateportCity/scripts.pory"
	.string "What would he want to do with\n"
# 1070 "data/maps/SlateportCity/scripts.pory"
	.string "a museum now?$"
# 1071 "data/maps/SlateportCity/scripts.pory"

# 1072 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_RemindsMeOfLongLineForGames:
# 1073 "data/maps/SlateportCity/scripts.pory"
	.string "A long line, huh?\p"
# 1074 "data/maps/SlateportCity/scripts.pory"
	.string "It reminds me of the times I lined up to\n"
# 1075 "data/maps/SlateportCity/scripts.pory"
	.string "buy smash-hit games…$"
# 1076 "data/maps/SlateportCity/scripts.pory"

# 1077 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhyAreWeLiningUp:
# 1078 "data/maps/SlateportCity/scripts.pory"
	.string "Why are we even lining up and paying?\n"
# 1079 "data/maps/SlateportCity/scripts.pory"
	.string "We should just march in!$"
# 1080 "data/maps/SlateportCity/scripts.pory"

# 1081 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_NoWeaklings:
# 1082 "data/maps/SlateportCity/scripts.pory"
	.string "Get lost, kid! No weaklings are getting\n"
# 1083 "data/maps/SlateportCity/scripts.pory"
	.string "through here right now.$"
# 1084 "data/maps/SlateportCity/scripts.pory"

# 1085 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MoralSupport:
# 1086 "data/maps/SlateportCity/scripts.pory"
	.string "I'm mostly just here for moral\n"
# 1087 "data/maps/SlateportCity/scripts.pory"
	.string "support.$"
# 1088 "data/maps/SlateportCity/scripts.pory"

# 1089 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ThisArea:
# 1090 "data/maps/SlateportCity/scripts.pory"
	.string "No one's getting into this area\n"
# 1091 "data/maps/SlateportCity/scripts.pory"
	.string "right now.$"
# 1092 "data/maps/SlateportCity/scripts.pory"

# 1093 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhatDoYouWant:
# 1094 "data/maps/SlateportCity/scripts.pory"
	.string "What?\n"
# 1095 "data/maps/SlateportCity/scripts.pory"
	.string "What do you want?$"
# 1096 "data/maps/SlateportCity/scripts.pory"

# 1097 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_IllReadSignForYou:
# 1098 "data/maps/SlateportCity/scripts.pory"
	.string "You want to read this sign?\n"
# 1099 "data/maps/SlateportCity/scripts.pory"
	.string "I'll read it for you!$"
# 1100 "data/maps/SlateportCity/scripts.pory"

# 1101 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SaysSomethingLikeSeaIsEndless:
# 1102 "data/maps/SlateportCity/scripts.pory"
	.string "Let's see…\p"
# 1103 "data/maps/SlateportCity/scripts.pory"
	.string "Um… I think it says something like\n"
# 1104 "data/maps/SlateportCity/scripts.pory"
	.string "“the life in the sea is endless.”\p"
# 1105 "data/maps/SlateportCity/scripts.pory"
	.string "Yup, I'm pretty sure that's what\n"
# 1106 "data/maps/SlateportCity/scripts.pory"
	.string "it says.$"
# 1107 "data/maps/SlateportCity/scripts.pory"

# 1108 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ShouldveBroughtMyGameBoy:
# 1109 "data/maps/SlateportCity/scripts.pory"
	.string "Grumble…\p"
# 1110 "data/maps/SlateportCity/scripts.pory"
	.string "I should've brought my Game Boy\n"
# 1111 "data/maps/SlateportCity/scripts.pory"
	.string "Advance so I wouldn't get bored in line…\p"
# 1112 "data/maps/SlateportCity/scripts.pory"
	.string "Grumble…$"
# 1113 "data/maps/SlateportCity/scripts.pory"

# 1114 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HotSpringsAfterOperation:
# 1115 "data/maps/SlateportCity/scripts.pory"
	.string "When this operation's over, I'll take\n"
# 1116 "data/maps/SlateportCity/scripts.pory"
	.string "you to a hot spring spa!\p"
# 1117 "data/maps/SlateportCity/scripts.pory"
	.string "That's what our leader said.\n"
# 1118 "data/maps/SlateportCity/scripts.pory"
	.string "I can't wait!$"
# 1119 "data/maps/SlateportCity/scripts.pory"

# 1120 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SeaIsSoWet:
# 1121 "data/maps/SlateportCity/scripts.pory"
	.string "The sea is just so vast…\p"
# 1122 "data/maps/SlateportCity/scripts.pory"
	.string "Could the sea have been made by\n"
# 1123 "data/maps/SlateportCity/scripts.pory"
	.string "the tears shed by Pokémon?$"
# 1124 "data/maps/SlateportCity/scripts.pory"

# 1125 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SinkOldBoats:
# 1126 "data/maps/SlateportCity/scripts.pory"
	.string "Do you know what they do with old\n"
# 1127 "data/maps/SlateportCity/scripts.pory"
	.string "ships that become too creaky to sail?\p"
# 1128 "data/maps/SlateportCity/scripts.pory"
	.string "They sink them in the sea so they\n"
# 1129 "data/maps/SlateportCity/scripts.pory"
	.string "become habitats for Pokémon.$"
# 1130 "data/maps/SlateportCity/scripts.pory"

# 1131 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BuyTooMuch:
# 1132 "data/maps/SlateportCity/scripts.pory"
	.string "Whenever I visit here, I get carried\n"
# 1133 "data/maps/SlateportCity/scripts.pory"
	.string "away and buy too much.$"
# 1134 "data/maps/SlateportCity/scripts.pory"

# 1135 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GetNameRaterToHelpYou:
# 1136 "data/maps/SlateportCity/scripts.pory"
	.string "If you want to change your Pokémon's\n"
# 1137 "data/maps/SlateportCity/scripts.pory"
	.string "nickname, check the options in the\l"
# 1138 "data/maps/SlateportCity/scripts.pory"
	.string "party menu.$"
# 1139 "data/maps/SlateportCity/scripts.pory"

# 1140 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CantChangeTradeMonName:
# 1141 "data/maps/SlateportCity/scripts.pory"
	.string "Any Pokémon you get in a trade,\n"
# 1142 "data/maps/SlateportCity/scripts.pory"
	.string "you can't change its nickname.\p"
# 1143 "data/maps/SlateportCity/scripts.pory"
	.string "The original trainer's love for that\n"
# 1144 "data/maps/SlateportCity/scripts.pory"
	.string "Pokémon is in the nickname.$"
# 1145 "data/maps/SlateportCity/scripts.pory"

# 1146 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BattleTentBuiltRecently:
# 1147 "data/maps/SlateportCity/scripts.pory"
	.string "Recently, a Battle Tent was built\n"
# 1148 "data/maps/SlateportCity/scripts.pory"
	.string "in Slateport.\p"
# 1149 "data/maps/SlateportCity/scripts.pory"
	.string "Gyms are fun, but the Battle Tent's\n"
# 1150 "data/maps/SlateportCity/scripts.pory"
	.string "awesome in its own way.\p"
# 1151 "data/maps/SlateportCity/scripts.pory"
	.string "You should go find tough Pokémon\n"
# 1152 "data/maps/SlateportCity/scripts.pory"
	.string "for the Battle Tent!$"
# 1153 "data/maps/SlateportCity/scripts.pory"

# 1154 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CaptSternBeingInterviewed:
# 1155 "data/maps/SlateportCity/scripts.pory"
	.string "I was hoping that it was a famous star\n"
# 1156 "data/maps/SlateportCity/scripts.pory"
	.string "so I could get an autograph.\p"
# 1157 "data/maps/SlateportCity/scripts.pory"
	.string "But who's that being interviewed?\n"
# 1158 "data/maps/SlateportCity/scripts.pory"
	.string "Isn't that Capt. Stern?$"
# 1159 "data/maps/SlateportCity/scripts.pory"

# 1160 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_InterviewerSoCool:
# 1161 "data/maps/SlateportCity/scripts.pory"
	.string "That lady interviewer is so cool\n"
# 1162 "data/maps/SlateportCity/scripts.pory"
	.string "and pretty.\p"
# 1163 "data/maps/SlateportCity/scripts.pory"
	.string "When I grow up, I'm going to be\n"
# 1164 "data/maps/SlateportCity/scripts.pory"
	.string "an international journalist!$"
# 1165 "data/maps/SlateportCity/scripts.pory"

# 1166 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternSaysDiscoveredSomething:
# 1167 "data/maps/SlateportCity/scripts.pory"
	.string "Capt. Stern says they discovered\n"
# 1168 "data/maps/SlateportCity/scripts.pory"
	.string "something at the bottom of the sea.\p"
# 1169 "data/maps/SlateportCity/scripts.pory"
	.string "I wonder what it is?\n"
# 1170 "data/maps/SlateportCity/scripts.pory"
	.string "What could it be?$"
# 1171 "data/maps/SlateportCity/scripts.pory"

# 1172 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CaptainComeBackWithBigFish:
# 1173 "data/maps/SlateportCity/scripts.pory"
	.string "What's going on here?\p"
# 1174 "data/maps/SlateportCity/scripts.pory"
	.string "Did the good Captain come back with\n"
# 1175 "data/maps/SlateportCity/scripts.pory"
	.string "a big fish from the ocean floor?$"
# 1176 "data/maps/SlateportCity/scripts.pory"

# 1177 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AmIOnTV:
# 1178 "data/maps/SlateportCity/scripts.pory"
	.string "Hey! Are you watching?\n"
# 1179 "data/maps/SlateportCity/scripts.pory"
	.string "Am I on TV?$"
# 1180 "data/maps/SlateportCity/scripts.pory"

# 1181 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CaptainsACelebrity:
# 1182 "data/maps/SlateportCity/scripts.pory"
	.string "A TV interview! Here!\n"
# 1183 "data/maps/SlateportCity/scripts.pory"
	.string "The Captain's a celebrity!$"
# 1184 "data/maps/SlateportCity/scripts.pory"

# 1185 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BigSmileForCamera:
# 1186 "data/maps/SlateportCity/scripts.pory"
	.string "TY: Okay, Capt. Stern, a big smile\n"
# 1187 "data/maps/SlateportCity/scripts.pory"
	.string "for the camera!$"
# 1188 "data/maps/SlateportCity/scripts.pory"

# 1189 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MostInvaluableExperience:
# 1190 "data/maps/SlateportCity/scripts.pory"
	.string "Gabby: I see, I see. You've had a most\n"
# 1191 "data/maps/SlateportCity/scripts.pory"
	.string "invaluable experience…$"
# 1192 "data/maps/SlateportCity/scripts.pory"

# 1193 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternMoveAheadWithExploration:
# 1194 "data/maps/SlateportCity/scripts.pory"
	.string "Capt. Stern: Yes, indeed. We intend to\n"
# 1195 "data/maps/SlateportCity/scripts.pory"
	.string "move ahead with our exploration.$"
# 1196 "data/maps/SlateportCity/scripts.pory"

# 1197 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GabbyWonderfulThanksForInterview:
# 1198 "data/maps/SlateportCity/scripts.pory"
	.string "Gabby: That's wonderful, Capt. Stern!\n"
# 1199 "data/maps/SlateportCity/scripts.pory"
	.string "Thank you for taking the time from\l"
# 1200 "data/maps/SlateportCity/scripts.pory"
	.string "your busy schedule to talk to us.\p"
# 1201 "data/maps/SlateportCity/scripts.pory"
	.string "We hope we can interview you again\n"
# 1202 "data/maps/SlateportCity/scripts.pory"
	.string "with news of more discoveries!$"
# 1203 "data/maps/SlateportCity/scripts.pory"

# 1204 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternWhewFirstInterview:
# 1205 "data/maps/SlateportCity/scripts.pory"
	.string "Capt. Stern: Whew…\p"
# 1206 "data/maps/SlateportCity/scripts.pory"
	.string "That was my first time to be filmed for\n"
# 1207 "data/maps/SlateportCity/scripts.pory"
	.string "TV. That was nerve-wracking.$"
# 1208 "data/maps/SlateportCity/scripts.pory"

# 1209 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_OhPlayerWeMadeDiscovery:
# 1210 "data/maps/SlateportCity/scripts.pory"
	.string "Oh! {PLAYER}{KUN}!\n"
# 1211 "data/maps/SlateportCity/scripts.pory"
	.string "You're looking great!\p"
# 1212 "data/maps/SlateportCity/scripts.pory"
	.string "We made a huge discovery on our last\n"
# 1213 "data/maps/SlateportCity/scripts.pory"
	.string "seafloor exploration.\p"
# 1214 "data/maps/SlateportCity/scripts.pory"
	.string "We found an underwater cavern on\n"
# 1215 "data/maps/SlateportCity/scripts.pory"
	.string "Route 128.\p"
# 1216 "data/maps/SlateportCity/scripts.pory"
	.string "We think it's the habitat of a Pokémon\n"
# 1217 "data/maps/SlateportCity/scripts.pory"
	.string "that's said to have been long extinct.$"
# 1218 "data/maps/SlateportCity/scripts.pory"

# 1219 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AquaWillAssumeControlOfSubmarine:
# 1220 "data/maps/SlateportCity/scripts.pory"
	.string "Fufufu…\n"
# 1221 "data/maps/SlateportCity/scripts.pory"
	.string "Capt. Stern, I presume.\p"
# 1222 "data/maps/SlateportCity/scripts.pory"
	.string "We of Team Aqua will assume\n"
# 1223 "data/maps/SlateportCity/scripts.pory"
	.string "control of your submarine!\p"
# 1224 "data/maps/SlateportCity/scripts.pory"
	.string "Your objections are meaningless!\n"
# 1225 "data/maps/SlateportCity/scripts.pory"
	.string "We expect your total cooperation!\p"
# 1226 "data/maps/SlateportCity/scripts.pory"
	.string "Fufufu…\n"
# 1227 "data/maps/SlateportCity/scripts.pory"
	.string "Just watch and learn what Team\l"
# 1228 "data/maps/SlateportCity/scripts.pory"
	.string "Aqua has planned!$"
# 1229 "data/maps/SlateportCity/scripts.pory"

# 1230 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternWhatWasAllThat:
# 1231 "data/maps/SlateportCity/scripts.pory"
	.string "Capt. Stern: What was that all about?\p"
# 1232 "data/maps/SlateportCity/scripts.pory"
	.string "It sounded like someone using\n"
# 1233 "data/maps/SlateportCity/scripts.pory"
	.string "a megaphone…\p"
# 1234 "data/maps/SlateportCity/scripts.pory"
	.string "Where did it come from?$"
# 1235 "data/maps/SlateportCity/scripts.pory"

# 1236 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_FromHarborTryingToTakeSub:
# 1237 "data/maps/SlateportCity/scripts.pory"
	.string "It's from the Harbor!\p"
# 1238 "data/maps/SlateportCity/scripts.pory"
	.string "The submarine!\n"
# 1239 "data/maps/SlateportCity/scripts.pory"
	.string "They're trying to take it!$"
# 1240 "data/maps/SlateportCity/scripts.pory"

# 1241 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PleaseComeWithMe:
# 1242 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER}{KUN}!\n"
# 1243 "data/maps/SlateportCity/scripts.pory"
	.string "Please, come with me!$"
# 1244 "data/maps/SlateportCity/scripts.pory"

# 1245 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BattleTentSign:
# 1246 "data/maps/SlateportCity/scripts.pory"
	.string "Battle Tent Slateport Site\n"
# 1247 "data/maps/SlateportCity/scripts.pory"
	.string "“Find it! The ultimate Pokémon!”$"
# 1248 "data/maps/SlateportCity/scripts.pory"

# 1249 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternsShipyardWantedSign:
# 1250 "data/maps/SlateportCity/scripts.pory"
	.string "Stern's Shipyard\p"
# 1251 "data/maps/SlateportCity/scripts.pory"
	.string "“Wanted: A sailor capable of sailing\n"
# 1252 "data/maps/SlateportCity/scripts.pory"
	.string "in all currents.”$"
# 1253 "data/maps/SlateportCity/scripts.pory"

# 1254 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternsShipyardNearsCompletion:
# 1255 "data/maps/SlateportCity/scripts.pory"
	.string "Stern's Shipyard\p"
# 1256 "data/maps/SlateportCity/scripts.pory"
	.string "“The ferry S.S. Tidal nears\n"
# 1257 "data/maps/SlateportCity/scripts.pory"
	.string "completion for serving the ports of\l"
# 1258 "data/maps/SlateportCity/scripts.pory"
	.string "Slateport and Lilycove.”$"
# 1259 "data/maps/SlateportCity/scripts.pory"

# 1260 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternsShipyardFerryComplete:
# 1261 "data/maps/SlateportCity/scripts.pory"
	.string "Stern's Shipyard\p"
# 1262 "data/maps/SlateportCity/scripts.pory"
	.string "“Boarding of the Slateport-Lilycove\n"
# 1263 "data/maps/SlateportCity/scripts.pory"
	.string "ferry S.S. Tidal is handled at the\l"
# 1264 "data/maps/SlateportCity/scripts.pory"
	.string "Harbor.”$"
# 1265 "data/maps/SlateportCity/scripts.pory"

# 1266 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PokemonFanClubSign:
# 1267 "data/maps/SlateportCity/scripts.pory"
	.string "Pokémon Fan Club\n"
# 1268 "data/maps/SlateportCity/scripts.pory"
	.string "“Calling all fans of Pokémon!”$"
# 1269 "data/maps/SlateportCity/scripts.pory"

# 1270 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_OceanicMuseumSign:
# 1271 "data/maps/SlateportCity/scripts.pory"
	.string "“The endless sea sustains\n"
# 1272 "data/maps/SlateportCity/scripts.pory"
	.string "all life.”\p"
# 1273 "data/maps/SlateportCity/scripts.pory"
	.string "Oceanic Museum$"
# 1274 "data/maps/SlateportCity/scripts.pory"

# 1275 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CitySign:
# 1276 "data/maps/SlateportCity/scripts.pory"
	.string "Slateport City\p"
# 1277 "data/maps/SlateportCity/scripts.pory"
	.string "“The port where people and Pokémon\n"
# 1278 "data/maps/SlateportCity/scripts.pory"
	.string "cross paths.”$"
# 1279 "data/maps/SlateportCity/scripts.pory"

# 1280 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MarketSign:
# 1281 "data/maps/SlateportCity/scripts.pory"
	.string "Slateport Market\n"
# 1282 "data/maps/SlateportCity/scripts.pory"
	.string "“Unique items found nowhere else!”$"
# 1283 "data/maps/SlateportCity/scripts.pory"

# 1284 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HarborFerryUnderConstruction:
# 1285 "data/maps/SlateportCity/scripts.pory"
	.string "Slateport Harbor\p"
# 1286 "data/maps/SlateportCity/scripts.pory"
	.string "“The ferry S.S. Tidal is under\n"
# 1287 "data/maps/SlateportCity/scripts.pory"
	.string "construction in the Shipyard.\p"
# 1288 "data/maps/SlateportCity/scripts.pory"
	.string "“Service is scheduled to begin\n"
# 1289 "data/maps/SlateportCity/scripts.pory"
	.string "shortly.”$"
# 1290 "data/maps/SlateportCity/scripts.pory"

# 1291 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HarborSign:
# 1292 "data/maps/SlateportCity/scripts.pory"
	.string "Slateport Harbor\p"
# 1293 "data/maps/SlateportCity/scripts.pory"
	.string "“Enjoy a delightful cruise on\n"
# 1294 "data/maps/SlateportCity/scripts.pory"
	.string "the ferry S.S. Tidal.”$"
# 1295 "data/maps/SlateportCity/scripts.pory"

# 1296 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_NameRatersHouseSign:
# 1297 "data/maps/SlateportCity/scripts.pory"
	.string "Name Rater's House\n"
# 1298 "data/maps/SlateportCity/scripts.pory"
	.string "“Pokémon nicknames rated.”$"
# 1299 "data/maps/SlateportCity/scripts.pory"

# 1300 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExplainBerries:
# 1301 "data/maps/SlateportCity/scripts.pory"
	.string "If a wild Pokémon gets hurt, it heals\n"
# 1302 "data/maps/SlateportCity/scripts.pory"
	.string "itself by chewing on berries.\p"
# 1303 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know that?\p"
# 1304 "data/maps/SlateportCity/scripts.pory"
	.string "Somebody saw that and got the idea\n"
# 1305 "data/maps/SlateportCity/scripts.pory"
	.string "of making medicine from berries.\p"
# 1306 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know that?\p"
# 1307 "data/maps/SlateportCity/scripts.pory"
	.string "To turn berries into medicine,\n"
# 1308 "data/maps/SlateportCity/scripts.pory"
	.string "they must be crushed into powder.\p"
# 1309 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know that?\p"
# 1310 "data/maps/SlateportCity/scripts.pory"
	.string "You seem to have an interest\n"
# 1311 "data/maps/SlateportCity/scripts.pory"
	.string "in berries!\p"
# 1312 "data/maps/SlateportCity/scripts.pory"
	.string "I've got something good for someone\n"
# 1313 "data/maps/SlateportCity/scripts.pory"
	.string "like you.$"
# 1314 "data/maps/SlateportCity/scripts.pory"

# 1315 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExplainBerryPowder:
# 1316 "data/maps/SlateportCity/scripts.pory"
	.string "I recently had machines installed at\n"
# 1317 "data/maps/SlateportCity/scripts.pory"
	.string "Pokémon Centers for crushing berries.\p"
# 1318 "data/maps/SlateportCity/scripts.pory"
	.string "The Berry Crush machines are at\n"
# 1319 "data/maps/SlateportCity/scripts.pory"
	.string "the Direct Corner upstairs.\p"
# 1320 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know?\p"
# 1321 "data/maps/SlateportCity/scripts.pory"
	.string "Could you make Berry Powder for\n"
# 1322 "data/maps/SlateportCity/scripts.pory"
	.string "me using those machines?\p"
# 1323 "data/maps/SlateportCity/scripts.pory"
	.string "I can make you all sorts of medicine\n"
# 1324 "data/maps/SlateportCity/scripts.pory"
	.string "if you bring me lots of Berry Powder.$"
# 1325 "data/maps/SlateportCity/scripts.pory"

# 1326 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BroughtMeSomeBerryPowder:
# 1327 "data/maps/SlateportCity/scripts.pory"
	.string "Have you brought me some\n"
# 1328 "data/maps/SlateportCity/scripts.pory"
	.string "Berry Powder?$"
# 1329 "data/maps/SlateportCity/scripts.pory"

# 1330 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExchangeWhatWithIt:
# 1331 "data/maps/SlateportCity/scripts.pory"
	.string "What would you like to exchange\n"
# 1332 "data/maps/SlateportCity/scripts.pory"
	.string "it with?$"
# 1333 "data/maps/SlateportCity/scripts.pory"

# 1334 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExchangeBerryPowderForItem:
# 1335 "data/maps/SlateportCity/scripts.pory"
	.string "Okay, you want to exchange your\n"
# 1336 "data/maps/SlateportCity/scripts.pory"
	.string "Berry Powder for one {STR_VAR_1}?$"
# 1337 "data/maps/SlateportCity/scripts.pory"

# 1338 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_DontHaveEnoughBerryPowder:
# 1339 "data/maps/SlateportCity/scripts.pory"
	.string "Oh, dear. You don't have enough\n"
# 1340 "data/maps/SlateportCity/scripts.pory"
	.string "Berry Powder.$"
# 1341 "data/maps/SlateportCity/scripts.pory"

# 1342 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_FineBerryPowderTradeSomethingElse:
# 1343 "data/maps/SlateportCity/scripts.pory"
	.string "This is fine Berry Powder.\n"
# 1344 "data/maps/SlateportCity/scripts.pory"
	.string "It will make excellent medicine.\p"
# 1345 "data/maps/SlateportCity/scripts.pory"
	.string "Would you like to trade more of your\n"
# 1346 "data/maps/SlateportCity/scripts.pory"
	.string "Berry Powder for something else?$"
# 1347 "data/maps/SlateportCity/scripts.pory"

# 1348 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhenYouGetMoreBringItToMe:
# 1349 "data/maps/SlateportCity/scripts.pory"
	.string "Okay! When you get some more\n"
# 1350 "data/maps/SlateportCity/scripts.pory"
	.string "Berry Powder, bring it to me, please!$"
# 1351 "data/maps/SlateportCity/scripts.pory"

# 1352 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ComeBackToTradeBerryPowder:
# 1353 "data/maps/SlateportCity/scripts.pory"
	.string "Come back if you'd like to trade your\n"
# 1354 "data/maps/SlateportCity/scripts.pory"
	.string "Berry Powder for some medicine.\p"
# 1355 "data/maps/SlateportCity/scripts.pory"
	.string "I'm always running a bazaar here.\p"
# 1356 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know?$"
# 1357 "data/maps/SlateportCity/scripts.pory"

# 1358 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_YouDroveTeamAquaAway:
# 1359 "data/maps/SlateportCity/scripts.pory"
	.string "Huh? Oh, I remember you!\n"
# 1360 "data/maps/SlateportCity/scripts.pory"
	.string "You're the trainer I gave the Exp. Share\l"
# 1361 "data/maps/SlateportCity/scripts.pory"
	.string "to back in Petalburg.\p"
# 1362 "data/maps/SlateportCity/scripts.pory"
	.string "Have I introduced myself to you?\n"
# 1363 "data/maps/SlateportCity/scripts.pory"
	.string "If not, my name's Scott.\p"
# 1364 "data/maps/SlateportCity/scripts.pory"
	.string "I just saw Team Aqua run away from\n"
# 1365 "data/maps/SlateportCity/scripts.pory"
	.string "here like they were stung.\p"
# 1366 "data/maps/SlateportCity/scripts.pory"
	.string "And even stranger, I think I saw\n"
# 1367 "data/maps/SlateportCity/scripts.pory"
	.string "Elite Four Drake walk out of here just\l"
# 1368 "data/maps/SlateportCity/scripts.pory"
	.string "now. What a crazy day.\p"
# 1369 "data/maps/SlateportCity/scripts.pory"
	.string "Anyway let me guess--you drove Team\n"
# 1370 "data/maps/SlateportCity/scripts.pory"
	.string "Aqua away?$"
# 1371 "data/maps/SlateportCity/scripts.pory"

# 1372 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MaybeThisTrainer:
# 1373 "data/maps/SlateportCity/scripts.pory"
	.string "Scott: Hmm…\n"
# 1374 "data/maps/SlateportCity/scripts.pory"
	.string "Maybe, just maybe, this trainer…$"
# 1375 "data/maps/SlateportCity/scripts.pory"

# 1376 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_LetsRegisterEachOther:
# 1377 "data/maps/SlateportCity/scripts.pory"
	.string "Scott: All right! I think you're going\n"
# 1378 "data/maps/SlateportCity/scripts.pory"
	.string "to become a good friend.\p"
# 1379 "data/maps/SlateportCity/scripts.pory"
	.string "So, let's register each other in our\n"
# 1380 "data/maps/SlateportCity/scripts.pory"
	.string "PokéNavs.\p"
# 1381 "data/maps/SlateportCity/scripts.pory"
	.string "… … … … … …$"
# 1382 "data/maps/SlateportCity/scripts.pory"

# 1383 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_RegisteredScott:
# 1384 "data/maps/SlateportCity/scripts.pory"
	.string "Registered this Scott person\n"
# 1385 "data/maps/SlateportCity/scripts.pory"
	.string "in the PokéNav.$"
# 1386 "data/maps/SlateportCity/scripts.pory"

# 1387 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_KeepEyeOnTrainersBeSeeingYou:
# 1388 "data/maps/SlateportCity/scripts.pory"
	.string "Scott: What I'd like to do is tag along\n"
# 1389 "data/maps/SlateportCity/scripts.pory"
	.string "with you, but I do want to keep an eye\l"
# 1390 "data/maps/SlateportCity/scripts.pory"
	.string "on the talents of other people, too.\p"
# 1391 "data/maps/SlateportCity/scripts.pory"
	.string "So, I'll be off to roam other towns\n"
# 1392 "data/maps/SlateportCity/scripts.pory"
	.string "a bit more.\p"
# 1393 "data/maps/SlateportCity/scripts.pory"
	.string "Be seeing you, {PLAYER}{KUN}!$"
# 1394 "data/maps/SlateportCity/scripts.pory"

# 1395 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_TakingBattleTentChallenge:
# 1396 "data/maps/SlateportCity/scripts.pory"
	.string "Scott: Oh, hey!\n"
# 1397 "data/maps/SlateportCity/scripts.pory"
	.string "If it isn't {PLAYER}{KUN}!\p"
# 1398 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER}{KUN}, let me guess--you're going\n"
# 1399 "data/maps/SlateportCity/scripts.pory"
	.string "to take the Battle Tent challenge?\p"
# 1400 "data/maps/SlateportCity/scripts.pory"
	.string "Yeah! That's a good idea!\n"
# 1401 "data/maps/SlateportCity/scripts.pory"
	.string "That's a really great idea!\p"
# 1402 "data/maps/SlateportCity/scripts.pory"
	.string "After all, a tough trainer is\n"
# 1403 "data/maps/SlateportCity/scripts.pory"
	.string "the perfect fit for the Battle Tent!\p"
# 1404 "data/maps/SlateportCity/scripts.pory"
	.string "Give it your best effort!$"
