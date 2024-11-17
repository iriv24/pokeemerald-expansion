# 1 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 2 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
.set LOCALID_RICH_BOY, 1
# 3 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
.set LOCALID_GENTLEMAN, 2
# 4 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
.set LOCALID_SCIENTIST, 3
# 5 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
.set LOCALID_STEVEN, 4
# 6 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
@ Grunt names numbered like their Trainer values (which are for the full Space Center)
# 7 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
.set LOCALID_GRUNT_6, 5
# 8 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
.set LOCALID_GRUNT_5, 6
# 9 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
.set LOCALID_GRUNT_7, 7
# 10 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
.set LOCALID_DRAKE, 8
# 11 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 12 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_MapScripts::
# 13 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MossdeepCity_SpaceCenter_2F_OnTransition
# 14 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MossdeepCity_SpaceCenter_2F_OnFrame
# 15 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.byte 0
# 16 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 17 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_OnTransition:
# 18 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	call_if_eq VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_2F_EventScript_MoveCivilians
# 19 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 20 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 21 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_MoveCivilians::
# 22 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxyperm LOCALID_SCIENTIST, 5, 3
# 23 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectmovementtype LOCALID_SCIENTIST, MOVEMENT_TYPE_FACE_RIGHT
# 24 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxyperm LOCALID_RICH_BOY, 3, 2
# 25 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectmovementtype LOCALID_RICH_BOY, MOVEMENT_TYPE_FACE_RIGHT
# 26 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxyperm LOCALID_GENTLEMAN, 1, 3
# 27 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectmovementtype LOCALID_GENTLEMAN, MOVEMENT_TYPE_FACE_RIGHT
# 28 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	return
# 29 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 30 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_OnFrame:
# 31 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	map_script_2 VAR_MOSSDEEP_SPACE_CENTER_STATE, 1, MossdeepCity_SpaceCenter_2F_EventScript_ThreeMagmaGrunts
# 32 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.2byte 0
# 33 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 34 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_ThreeMagmaGrunts::
# 35 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	playse SE_PIN
# 36 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 37 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 38 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_YoureOutnumberedTakeUsOn, MSGBOX_DEFAULT
# 39 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	closemessage
# 40 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 41 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 42 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_YoureOutnumberedTakeUsOnTwo, MSGBOX_DEFAULT
# 43 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	closemessage
# 44 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 45 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 46 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_YoureOutnumberedTakeUsOnThree, MSGBOX_DEFAULT
# 47 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	closemessage
# 48 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setvar VAR_MOSSDEEP_SPACE_CENTER_STATE, 2
# 49 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	releaseall
# 50 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 51 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 52 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 53 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Scientist::
# 54 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock
# 55 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	faceplayer
# 56 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, MossdeepCity_SpaceCenter_2F_EventScript_ScientistNormal
# 57 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_eq VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_2F_EventScript_ScientistMagma
# 58 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_lt VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_2F_EventScript_ScientistNormal
# 59 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_EventScript_ScientistMagma
# 60 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 61 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 62 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_ScientistNormal::
# 63 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_MossdeepIdealForRockets, MSGBOX_DEFAULT
# 64 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	release
# 65 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 66 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 67 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_ScientistMagma::
# 68 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_WhyWouldMagmaStealRocketFuel, MSGBOX_DEFAULT
# 69 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	release
# 70 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 71 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 72 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Gentleman::
# 73 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock
# 74 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	faceplayer
# 75 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, MossdeepCity_SpaceCenter_2F_EventScript_GentlemanNormal
# 76 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_eq VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_2F_EventScript_GentlemanMagma
# 77 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_lt VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_2F_EventScript_GentlemanNormal
# 78 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_EventScript_GentlemanMagma
# 79 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 80 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 81 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_GentlemanNormal::
# 82 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_WouldveLikedToBeAstronaut, MSGBOX_DEFAULT
# 83 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	release
# 84 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 85 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 86 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_GentlemanMagma::
# 87 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_MagmaCantGetAwayWithThis, MSGBOX_DEFAULT
# 88 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	release
# 89 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 90 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 91 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_RichBoy::
# 92 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock
# 93 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	faceplayer
# 94 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, MossdeepCity_SpaceCenter_2F_EventScript_RichBoyNormal
# 95 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_eq VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_2F_EventScript_RichBoyMagma
# 96 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_lt VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_2F_EventScript_RichBoyNormal
# 97 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_EventScript_RichBoyMagma
# 98 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 99 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 100 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_RichBoyNormal::
# 101 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_WishOrdinaryPeopleCouldGoIntoSpace, MSGBOX_DEFAULT
# 102 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	release
# 103 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 104 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 105 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_RichBoyMagma::
# 106 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_DoesMagmaWantToGoToSpace, MSGBOX_DEFAULT
# 107 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	release
# 108 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 109 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 110 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
@ Battle for the below 3 grunts is handled in MossdeepCity_SpaceCenter_2F_EventScript_BattleThreeMagmaGrunts
# 111 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Grunt6::
# 112 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_Grunt6PostBattle, MSGBOX_NPC
# 113 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 114 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 115 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Grunt7::
# 116 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_Grunt7PostBattle, MSGBOX_NPC
# 117 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 118 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 119 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Grunt5::
# 120 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_Grunt5PostBattle, MSGBOX_NPC
# 121 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 122 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 123 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Drake::
# 124 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock
# 125 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	faceplayer
# 126 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_Drake, MSGBOX_DEFAULT
# 127 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 128 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 129 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	release
# 130 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 131 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 132 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 133 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Steven::
# 134 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lockall
# 135 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	faceplayer
# 136 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_StevenRoundUp, MSGBOX_DEFAULT
# 137 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	closemessage
# 138 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	fadenewbgm MUS_RUSTBORO
# 139 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 140 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setvar VAR_MOSSDEEP_SPACE_CENTER_STATE, 3
# 141 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setvar VAR_MOSSDEEP_CITY_STATE, 3
# 142 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_TEAM_MAGMA
# 143 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_TEAM_MAGMA
# 144 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_TEAM_MAGMA
# 145 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	removeobject LOCALID_GRUNT_6
# 146 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	removeobject LOCALID_GRUNT_7
# 147 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	removeobject LOCALID_GRUNT_5
# 148 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxy LOCALID_SCIENTIST, 5, 6
# 149 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	turnobject LOCALID_SCIENTIST, DIR_SOUTH
# 150 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxy LOCALID_GENTLEMAN, 11, 8
# 151 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	turnobject LOCALID_GENTLEMAN, DIR_NORTH
# 152 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxy LOCALID_RICH_BOY, 6, 2
# 153 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	turnobject LOCALID_RICH_BOY, DIR_NORTH
# 154 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 155 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_StevenMagmaEmblem, MSGBOX_DEFAULT
# 156 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	closemessage
# 157 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	giveitem ITEM_MAGMA_EMBLEM
# 158 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_JAGGED_PASS_MAGMA_GUARD
# 159 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_StevenPursueMagma, MSGBOX_DEFAULT
# 160 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	closemessage
# 161 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	call MossdeepCity_SpaceCenter_2F_EventScript_DrakeFacePlayer
# 162 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_DrakePursueAqua, MSGBOX_DEFAULT
# 163 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	closemessage
# 164 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	call MossdeepCity_SpaceCenter_2F_EventScript_StevenFacePlayer
# 165 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_StevenMeetHouse, MSGBOX_DEFAULT
# 166 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	closemessage
# 167 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 168 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_DEFEATED_MAGMA_SPACE_CENTER
# 169 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_STEVEN
# 170 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	removeobject LOCALID_STEVEN
# 171 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	removeobject LOCALID_DRAKE
# 172 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	delay 10
# 173 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_MAGMA_NOTE
# 174 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_STEVEN
# 175 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setvar VAR_STEVENS_HOUSE_STATE, 1
# 176 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SCOTT
# 177 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	removeobject LOCALID_SCIENTIST
# 178 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxyperm LOCALID_SCIENTIST, 5, 6
# 179 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectmovementtype LOCALID_SCIENTIST, MOVEMENT_TYPE_WANDER_AROUND
# 180 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	addobject LOCALID_SCIENTIST
# 181 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 182 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	releaseall
# 183 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 184 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 185 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_StevenFightMovementSouth::
# 186 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_STEVEN, MossdeepCity_SpaceCenter_2F_Movement_StevenFightSouth
# 187 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 188 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	releaseall
# 189 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 190 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 191 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Movement_StevenFight:
# 192 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock_facing_direction
# 193 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_fast_up
# 194 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_fast_up
# 195 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	unlock_facing_direction
# 196 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	delay_16
# 197 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	delay_16
# 198 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_slow_down
# 199 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_slow_down
# 200 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	step_end
# 201 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 202 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Movement_StevenFightSouth:
# 203 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	face_left
# 204 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock_facing_direction
# 205 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_fast_right
# 206 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_fast_right
# 207 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	unlock_facing_direction
# 208 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	delay_16
# 209 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	delay_16
# 210 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_slow_left
# 211 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_slow_left
# 212 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	face_down
# 213 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	step_end
# 214 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 215 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_StevenFacePlayer::
# 216 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	switch VAR_FACING
# 217 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	case DIR_SOUTH, MossdeepCity_SpaceCenter_2F_EventScript_StevenFacePlayerSouth
# 218 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	case DIR_EAST, MossdeepCity_SpaceCenter_2F_EventScript_StevenFacePlayerEast
# 219 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	case DIR_NORTH, MossdeepCity_SpaceCenter_2F_EventScript_StevenFacePlayerNorth
# 220 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	return
# 221 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 222 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_StevenFacePlayerSouth::
# 223 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	turnobject LOCALID_STEVEN, DIR_NORTH
# 224 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	return
# 225 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 226 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_StevenFacePlayerEast::
# 227 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	turnobject LOCALID_STEVEN, DIR_WEST
# 228 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	return
# 229 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 230 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_StevenFacePlayerNorth::
# 231 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	turnobject LOCALID_STEVEN, DIR_SOUTH
# 232 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	return
# 233 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 234 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_DrakeFacePlayer::
# 235 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	switch VAR_FACING
# 236 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	case DIR_SOUTH, MossdeepCity_SpaceCenter_2F_EventScript_DrakeFacePlayerSouth
# 237 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	case DIR_EAST, MossdeepCity_SpaceCenter_2F_EventScript_DrakeFacePlayerEast
# 238 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	case DIR_NORTH, MossdeepCity_SpaceCenter_2F_EventScript_DrakeFacePlayerNorth
# 239 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	return
# 240 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 241 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_DrakeFacePlayerSouth::
# 242 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	turnobject LOCALID_DRAKE, DIR_NORTH
# 243 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	return
# 244 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 245 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_DrakeFacePlayerEast::
# 246 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	turnobject LOCALID_DRAKE, DIR_WEST
# 247 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	return
# 248 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 249 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_DrakeFacePlayerNorth::
# 250 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	turnobject LOCALID_DRAKE, DIR_SOUTH
# 251 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	return
# 252 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 253 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_RivalRayquazaCall::
# 254 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lockall
# 255 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	checkplayergender
# 256 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	call_if_eq VAR_RESULT, MALE, MossdeepCity_SpaceCenter_2F_EventScript_MayRayquazaCall
# 257 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, MossdeepCity_SpaceCenter_2F_EventScript_BrendanRayquazaCall
# 258 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	closemessage
# 259 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	clearflag FLAG_DEFEATED_MAGMA_SPACE_CENTER
# 260 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	releaseall
# 261 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 262 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 263 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_MayRayquazaCall::
# 264 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	pokenavcall MatchCall_Text_MayRayquazaCall
# 265 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmessage
# 266 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	return
# 267 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 268 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_BrendanRayquazaCall::
# 269 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	pokenavcall MatchCall_Text_BrendanRayquazaCall
# 270 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmessage
# 271 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	return
# 272 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 273 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_MossdeepIdealForRockets:
# 274 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Mossdeep has mainly sunny weather,\n"
# 275 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "and its winds are stable.\p"
# 276 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "It's an ideal location for launching\n"
# 277 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "rockets.$"
# 278 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 279 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_WhyWouldMagmaStealRocketFuel:
# 280 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Why would Team Magma want to steal\n"
# 281 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "our rocket fuel in the first place?$"
# 282 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 283 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_WouldveLikedToBeAstronaut:
# 284 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "If only I was a little younger, I would\n"
# 285 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "have liked being an astronaut…\p"
# 286 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "No… It's not too late!\n"
# 287 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I can and will try!$"
# 288 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 289 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_MagmaCantGetAwayWithThis:
# 290 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "If Team Magma takes the rocket fuel,\n"
# 291 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I won't be able to go to space!\p"
# 292 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "They can't be allowed to get away\n"
# 293 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "with such an outrage!$"
# 294 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 295 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_WishOrdinaryPeopleCouldGoIntoSpace:
# 296 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I wish ordinary people could go into\n"
# 297 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "space one day…$"
# 298 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 299 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_DoesMagmaWantToGoToSpace:
# 300 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Team Magma…\n"
# 301 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Do they want to go to space, too?$"
# 302 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 303 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_YoureOutnumberedTakeUsOn:
# 304 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "What the heck are those two..$"
# 305 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 306 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_YoureOutnumberedTakeUsOnTwo:
# 307 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "We never stood a chance...$"
# 308 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 309 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_YoureOutnumberedTakeUsOnThree:
# 310 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "At least Maxie got away...$"
# 311 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 312 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_GoodAnswer:
# 313 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Good answer!\n"
# 314 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "That's what a smart person'll do!$"
# 315 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 316 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt5Intro:
# 317 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "A reckless go-getter, are you?\n"
# 318 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Okay, I'll go first!$"
# 319 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 320 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt5Defeat:
# 321 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I lost!\n"
# 322 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "But!$"
# 323 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 324 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt6Intro:
# 325 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "It's too soon to be relieved!\n"
# 326 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I'm up next!$"
# 327 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 328 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt6Defeat:
# 329 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I lost, too!\n"
# 330 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "But!$"
# 331 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 332 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt7Intro:
# 333 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I bet you want to take a break.\n"
# 334 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "But I'm not about to let you do that!$"
# 335 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 336 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt7Defeat:
# 337 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "We should've taken a break…\n"
# 338 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "That's what we should've done…$"
# 339 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 340 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt6PostBattle:
# 341 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Three of us here, and look at the sorry\n"
# 342 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "mess we got ourselves into.$"
# 343 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 344 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt7PostBattle:
# 345 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "We three losing like this…\n"
# 346 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "We look worse than usual by triple!$"
# 347 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 348 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt5PostBattle:
# 349 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I can't believe how strong they were...$"
# 350 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 351 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Drake::
# 352 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Drake: {PLAYER}. Nice of you to join us.\n"
# 353 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "The grunts were quite weak, but Maxie\l"
# 354 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "managed to escape us.\p"
# 355 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "We were able to get some\n"
# 356 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "information about their plan from the\l"
# 357 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Team Magma members here, though.\p"
# 358 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Did you happen to think any more on\n"
# 359 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "what I asked you about on Mt. Chimney?\p"
# 360 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I've been thinking about it, and\n"
# 361 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "sometimes our world feels too orderly,\l"
# 362 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "too black and white…\p"
# 363 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "It's hard to explain, but from the look\n"
# 364 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "on your face, it doesn't seem like what\l"
# 365 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I'm saying is making any sense to you.$"
# 366 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 367 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_StevenRoundUp:
# 368 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Steven: Oh, hello again, {PLAYER}. I see\n"
# 369 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "you defeated the Mossdeep Gym\l"
# 370 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Leaders, very nicely done.\p"
# 371 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Drake and I did a bit of battling\n"
# 372 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "ourselves here in the meantime, as you\l"
# 373 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "can see.\p"
# 374 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Ah, one moment, it looks like the\n"
# 375 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "authorities are here to round up the\l"
# 376 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Team Magma members we captured.$"
# 377 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 378 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_StevenMagmaEmblem:
# 379 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Steven: As I was saying, unfortunately,\n"
# 380 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Maxie escaped us.\p"
# 381 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "However, we were able to gather that\n"
# 382 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Team Magma is planning something big at\l"
# 383 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "their Hideout in Jagged Pass near\l"
# 384 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Lavaridge Town.\p"
# 385 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}We were also able to obtain one of\n"
# 386 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "these from one of the grunts, which we\l"
# 387 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "suspect will get us into their Hideout.$"
# 388 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 389 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_StevenPursueMagma:
# 390 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Steven: This may be where we part ways\n"
# 391 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "for now.\p"
# 392 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I am going to stay here in my hometown\n"
# 393 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "to make sure things recover from this\l"
# 394 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "incident and get back to normal.\p"
# 395 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I think you should pursue Team Magma\n"
# 396 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "to their Hideout and see what you can\l"
# 397 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "find, but be very careful, {PLAYER}.$"
# 398 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 399 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_DrakePursueAqua:
# 400 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Drake: In the meantime, I will follow up\n"
# 401 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "on Team Aqua's activity with the\l"
# 402 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "submarine they stole.\p"
# 403 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "{PLAYER}, after your investigation\n"
# 404 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "into Team Magma's Hideout is complete,\l"
# 405 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "check in with Steven to see if I've\l"
# 406 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "given any updates to him.\p"
# 407 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "If you haven't heard from me by then,\n"
# 408 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "perhaps you should start looking into\l"
# 409 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Team Aqua as well.$"
# 410 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 411 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_StevenMeetHouse:
# 412 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Steven: That sounds like a plan.\n"
# 413 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "{PLAYER}, stop by my house here on\l"
# 414 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Mossdeep, I have a gift to thank you\l"
# 415 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "personally for your help with all this.$"
