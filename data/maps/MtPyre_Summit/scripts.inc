# 1 "data/maps/MtPyre_Summit/scripts.pory"

# 2 "data/maps/MtPyre_Summit/scripts.pory"
.set LOCALID_MAXIE, 2
# 3 "data/maps/MtPyre_Summit/scripts.pory"
.set LOCALID_OLD_LADY, 3
# 4 "data/maps/MtPyre_Summit/scripts.pory"
.set LOCALID_ARCHIE, 4
# 5 "data/maps/MtPyre_Summit/scripts.pory"

# 6 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_MapScripts::
# 7 "data/maps/MtPyre_Summit/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MtPyre_Summit_OnTransition
# 8 "data/maps/MtPyre_Summit/scripts.pory"
	.byte 0
# 9 "data/maps/MtPyre_Summit/scripts.pory"

# 10 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_OnTransition:
# 11 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_MT_PYRE_STATE, 2, MtPyre_Summit_EventScript_SetMaxieArchiePositions
# 12 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 13 "data/maps/MtPyre_Summit/scripts.pory"

# 14 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_SetMaxieArchiePositions::
# 15 "data/maps/MtPyre_Summit/scripts.pory"
	setobjectxyperm LOCALID_ARCHIE, 23, 6
# 16 "data/maps/MtPyre_Summit/scripts.pory"
	setobjectxyperm LOCALID_MAXIE, 22, 6
# 17 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 18 "data/maps/MtPyre_Summit/scripts.pory"

# 19 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_TeamAquaTrigger0::
# 20 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 21 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 0
# 22 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_TeamAquaExits
# 23 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 24 "data/maps/MtPyre_Summit/scripts.pory"

# 25 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_TeamAquaTrigger1::
# 26 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 27 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 1
# 28 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_TeamAquaExits
# 29 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 30 "data/maps/MtPyre_Summit/scripts.pory"

# 31 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_TeamAquaTrigger2::
# 32 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 33 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 2
# 34 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_TeamAquaExits
# 35 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 36 "data/maps/MtPyre_Summit/scripts.pory"

# 37 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_TeamAquaExits::
# 38 "data/maps/MtPyre_Summit/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 39 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 40 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 41 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_WalkInPlaceFasterDown
# 42 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 43 "data/maps/MtPyre_Summit/scripts.pory"
	delay 50
# 44 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 0, MtPyre_Summit_EventScript_MaxieFacePlayer0
# 45 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 1, MtPyre_Summit_EventScript_MaxieFacePlayer1
# 46 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 2, MtPyre_Summit_EventScript_MaxieFacePlayer2
# 47 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_MaxieWeGotTheOrbLetsGo, MSGBOX_DEFAULT
# 48 "data/maps/MtPyre_Summit/scripts.pory"
	closemessage
# 49 "data/maps/MtPyre_Summit/scripts.pory"
	fadescreen FADE_TO_BLACK
# 50 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_MAXIE
# 51 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_HIDE_MT_PYRE_SUMMIT_MAXIE
# 52 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_HIDE_MT_PYRE_SUMMIT_TEAM_AQUA
# 53 "data/maps/MtPyre_Summit/scripts.pory"
	fadedefaultbgm
# 54 "data/maps/MtPyre_Summit/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 55 "data/maps/MtPyre_Summit/scripts.pory"
	delay 20
# 56 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_MT_PYRE_STATE, 1
# 57 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 0, MtPyre_Summit_EventScript_OldLadyApproachPlayer0
# 58 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 1, MtPyre_Summit_EventScript_OldLadyApproachPlayer1
# 59 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 2, MtPyre_Summit_EventScript_OldLadyApproachPlayer2
# 60 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_BothOrbsTakenMagmaLeftThis, MSGBOX_DEFAULT
# 61 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_RECEIVED_RED_OR_BLUE_ORB
# 62 "data/maps/MtPyre_Summit/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_CAPTAIN_STERN
# 63 "data/maps/MtPyre_Summit/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_GABBY_AND_TY
# 64 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_SLATEPORT_CITY_STATE, 1
# 65 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_SLATEPORT_HARBOR_STATE, 1
# 66 "data/maps/MtPyre_Summit/scripts.pory"
	releaseall
# 67 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 68 "data/maps/MtPyre_Summit/scripts.pory"

# 69 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieFacePlayer0::
# 70 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieFacePlayer0
# 71 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 72 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 73 "data/maps/MtPyre_Summit/scripts.pory"

# 74 "data/maps/MtPyre_Summit/scripts.pory"
@ Maxie is already facing player
# 75 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieFacePlayer1::
# 76 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 77 "data/maps/MtPyre_Summit/scripts.pory"

# 78 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieFacePlayer2::
# 79 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieFacePlayer2
# 80 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 81 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 82 "data/maps/MtPyre_Summit/scripts.pory"

# 83 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyApproachPlayer0::
# 84 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_OLD_LADY, MtPyre_Summit_Movement_OldLadyApproachPlayer0
# 85 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 86 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 87 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 88 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 89 "data/maps/MtPyre_Summit/scripts.pory"

# 90 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyApproachPlayer1::
# 91 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_OLD_LADY, MtPyre_Summit_Movement_OldLadyApproachPlayer1
# 92 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 93 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 94 "data/maps/MtPyre_Summit/scripts.pory"

# 95 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyApproachPlayer2::
# 96 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_OLD_LADY, MtPyre_Summit_Movement_OldLadyApproachPlayer2
# 97 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 98 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 99 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 100 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 101 "data/maps/MtPyre_Summit/scripts.pory"

# 102 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_OldLadyApproachPlayer0:
# 103 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 104 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 105 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 106 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 107 "data/maps/MtPyre_Summit/scripts.pory"

# 108 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_OldLadyApproachPlayer1:
# 109 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 110 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 111 "data/maps/MtPyre_Summit/scripts.pory"

# 112 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_OldLadyApproachPlayer2:
# 113 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 114 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 115 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_right
# 116 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 117 "data/maps/MtPyre_Summit/scripts.pory"

# 118 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieFacePlayer0:
# 119 "data/maps/MtPyre_Summit/scripts.pory"
	walk_left
# 120 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 121 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 122 "data/maps/MtPyre_Summit/scripts.pory"

# 123 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieFacePlayer2:
# 124 "data/maps/MtPyre_Summit/scripts.pory"
	walk_right
# 125 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 126 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 127 "data/maps/MtPyre_Summit/scripts.pory"

# 128 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldMan::
# 129 "data/maps/MtPyre_Summit/scripts.pory"
	lock
# 130 "data/maps/MtPyre_Summit/scripts.pory"
	faceplayer
# 131 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_set FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE, MtPyre_Summit_EventScript_OldManAfterRayquaza
# 132 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_WillYouHearOutMyTale, MSGBOX_YESNO
# 133 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_RESULT, YES, MtPyre_Summit_EventScript_OldManTale
# 134 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_RESULT, NO, MtPyre_Summit_EventScript_DeclineOldManTale
# 135 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 136 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 137 "data/maps/MtPyre_Summit/scripts.pory"

# 138 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldManAfterRayquaza::
# 139 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_HearTheNewLegendOfHoenn, MSGBOX_YESNO
# 140 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_RESULT, YES, MtPyre_Summit_EventScript_OldManNewTale
# 141 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_RESULT, NO, MtPyre_Summit_EventScript_DeclineOldManTale
# 142 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 143 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 144 "data/maps/MtPyre_Summit/scripts.pory"

# 145 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldManTale::
# 146 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_GroudonKyogreTale, MSGBOX_DEFAULT
# 147 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 148 "data/maps/MtPyre_Summit/scripts.pory"

# 149 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_DeclineOldManTale::
# 150 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_WellThatTooIsFine, MSGBOX_DEFAULT
# 151 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 152 "data/maps/MtPyre_Summit/scripts.pory"

# 153 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldManNewTale::
# 154 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_HoennTrioTale, MSGBOX_DEFAULT
# 155 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 156 "data/maps/MtPyre_Summit/scripts.pory"

# 157 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLady::
# 158 "data/maps/MtPyre_Summit/scripts.pory"
	lock
# 159 "data/maps/MtPyre_Summit/scripts.pory"
	faceplayer
# 160 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_set FLAG_RETURNED_RED_OR_BLUE_ORB, MtPyre_Summit_EventScript_OldLadyAfterOrbsReturned
# 161 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_ge VAR_MT_PYRE_STATE, 3, MtPyre_Summit_EventScript_OldLadyOrbsReturned
# 162 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_set FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN, MtPyre_Summit_EventScript_OldLadyLegendariesAwake
# 163 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_OrbsHaveBeenTaken, MSGBOX_DEFAULT
# 164 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 165 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 166 "data/maps/MtPyre_Summit/scripts.pory"

# 167 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyOrbsReturned::
# 168 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_ThoseTwoMenReturnedOrbs, MSGBOX_DEFAULT
# 169 "data/maps/MtPyre_Summit/scripts.pory"
	giveitem ITEM_RED_ORB
# 170 "data/maps/MtPyre_Summit/scripts.pory"
	giveitem ITEM_BLUE_ORB
# 171 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_TrustYou, MSGBOX_DEFAULT
# 172 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_RETURNED_RED_OR_BLUE_ORB
# 173 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 174 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 175 "data/maps/MtPyre_Summit/scripts.pory"

# 176 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyLegendariesAwake::
# 177 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_GroudonKyogreAwakened, MSGBOX_DEFAULT
# 178 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 179 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 180 "data/maps/MtPyre_Summit/scripts.pory"

# 181 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyAfterOrbsReturned::
# 182 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_SuperAncientPokemonTaughtUs, MSGBOX_DEFAULT
# 183 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 184 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 185 "data/maps/MtPyre_Summit/scripts.pory"

# 186 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieArchieTrigger0::
# 187 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 188 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 0
# 189 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_MaxieArchieReturnOrbs
# 190 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 191 "data/maps/MtPyre_Summit/scripts.pory"

# 192 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieArchieTrigger1::
# 193 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 194 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 1
# 195 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_MaxieArchieReturnOrbs
# 196 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 197 "data/maps/MtPyre_Summit/scripts.pory"

# 198 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieArchieTrigger2::
# 199 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 200 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 2
# 201 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_MaxieArchieReturnOrbs
# 202 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 203 "data/maps/MtPyre_Summit/scripts.pory"

# 204 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieArchieReturnOrbs::
# 205 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 206 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 207 "data/maps/MtPyre_Summit/scripts.pory"
	delay 60
# 208 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 0, MtPyre_Summit_EventScript_MaxieArchieBeginExit0
# 209 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 1, MtPyre_Summit_EventScript_MaxieArchieBeginExit1
# 210 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 2, MtPyre_Summit_EventScript_MaxieArchieBeginExit2
# 211 "data/maps/MtPyre_Summit/scripts.pory"
	playse SE_PIN
# 212 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_ExclamationMark
# 213 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 214 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_Delay48
# 215 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 216 "data/maps/MtPyre_Summit/scripts.pory"
	delay 30
# 217 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 0, MtPyre_Summit_EventScript_ArchieApproachPlayer0
# 218 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 1, MtPyre_Summit_EventScript_ArchieApproachPlayer1
# 219 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 2, MtPyre_Summit_EventScript_ArchieApproachPlayer2
# 220 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_ArchieSilence, MSGBOX_DEFAULT
# 221 "data/maps/MtPyre_Summit/scripts.pory"
	closemessage
# 222 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 0, MtPyre_Summit_EventScript_ArchieApproachMaxie0
# 223 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 1, MtPyre_Summit_EventScript_ArchieApproachMaxie1
# 224 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 2, MtPyre_Summit_EventScript_ArchieApproachMaxie2
# 225 "data/maps/MtPyre_Summit/scripts.pory"
	delay 30
# 226 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieExit
# 227 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieExit
# 228 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 229 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_MAXIE
# 230 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_ARCHIE
# 231 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_MT_PYRE_STATE, 3
# 232 "data/maps/MtPyre_Summit/scripts.pory"
	releaseall
# 233 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 234 "data/maps/MtPyre_Summit/scripts.pory"

# 235 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieArchieBeginExit0::
# 236 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchMaxieArchieExit0
# 237 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieExit
# 238 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieExit
# 239 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 240 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 241 "data/maps/MtPyre_Summit/scripts.pory"

# 242 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieArchieBeginExit1::
# 243 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchMaxieArchieExit1
# 244 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieExit
# 245 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieExit
# 246 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 247 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 248 "data/maps/MtPyre_Summit/scripts.pory"

# 249 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieArchieBeginExit2::
# 250 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchMaxieArchieExit2
# 251 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieExit
# 252 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieExit
# 253 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 254 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 255 "data/maps/MtPyre_Summit/scripts.pory"

# 256 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieApproachPlayer0::
# 257 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerFaceArchie0
# 258 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieWatchArchie
# 259 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieApproachPlayer0
# 260 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 261 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 262 "data/maps/MtPyre_Summit/scripts.pory"

# 263 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieApproachPlayer1::
# 264 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerFaceArchie
# 265 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieWatchArchie
# 266 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieApproachPlayer1
# 267 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 268 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 269 "data/maps/MtPyre_Summit/scripts.pory"

# 270 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieApproachPlayer2::
# 271 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerFaceArchie
# 272 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieWatchArchie
# 273 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieApproachPlayer2
# 274 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 275 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 276 "data/maps/MtPyre_Summit/scripts.pory"

# 277 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieApproachMaxie0::
# 278 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchArchie
# 279 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieApproachMaxie0
# 280 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 281 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_WalkInPlaceFasterRight
# 282 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 283 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 284 "data/maps/MtPyre_Summit/scripts.pory"

# 285 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieApproachMaxie1::
# 286 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchArchie
# 287 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieApproachMaxie1
# 288 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 289 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_WalkInPlaceFasterRight
# 290 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 291 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 292 "data/maps/MtPyre_Summit/scripts.pory"

# 293 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieApproachMaxie2::
# 294 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchArchie
# 295 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieApproachMaxie2
# 296 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 297 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_WalkInPlaceFasterRight
# 298 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 299 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 300 "data/maps/MtPyre_Summit/scripts.pory"

# 301 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerFaceArchie0:
# 302 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 303 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 304 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_right
# 305 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 306 "data/maps/MtPyre_Summit/scripts.pory"

# 307 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerFaceArchie:
# 308 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 309 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 310 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 311 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 312 "data/maps/MtPyre_Summit/scripts.pory"

# 313 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieExit:
# 314 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 315 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 316 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 317 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 318 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 319 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 320 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 321 "data/maps/MtPyre_Summit/scripts.pory"

# 322 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_ArchieExit:
# 323 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 324 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 325 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 326 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 327 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 328 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 329 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 330 "data/maps/MtPyre_Summit/scripts.pory"

# 331 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerWatchMaxieArchieExit0:
# 332 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 333 "data/maps/MtPyre_Summit/scripts.pory"
	delay_8
# 334 "data/maps/MtPyre_Summit/scripts.pory"
	walk_left
# 335 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_right
# 336 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 337 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 338 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 339 "data/maps/MtPyre_Summit/scripts.pory"

# 340 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerWatchMaxieArchieExit1:
# 341 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 342 "data/maps/MtPyre_Summit/scripts.pory"
	delay_8
# 343 "data/maps/MtPyre_Summit/scripts.pory"
	walk_right
# 344 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 345 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 346 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 347 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 348 "data/maps/MtPyre_Summit/scripts.pory"

# 349 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerWatchMaxieArchieExit2:
# 350 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 351 "data/maps/MtPyre_Summit/scripts.pory"
	delay_8
# 352 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 353 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 354 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 355 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 356 "data/maps/MtPyre_Summit/scripts.pory"

# 357 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_ArchieApproachPlayer0:
# 358 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 359 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 360 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 361 "data/maps/MtPyre_Summit/scripts.pory"
	walk_left
# 362 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 363 "data/maps/MtPyre_Summit/scripts.pory"

# 364 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_ArchieApproachPlayer1:
# 365 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 366 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 367 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 368 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_right
# 369 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 370 "data/maps/MtPyre_Summit/scripts.pory"

# 371 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_ArchieApproachPlayer2:
# 372 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 373 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 374 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 375 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_right
# 376 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 377 "data/maps/MtPyre_Summit/scripts.pory"

# 378 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieWatchArchie:
# 379 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 380 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_up
# 381 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 382 "data/maps/MtPyre_Summit/scripts.pory"

# 383 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerWatchArchie:
# 384 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 385 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 386 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 387 "data/maps/MtPyre_Summit/scripts.pory"

# 388 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_ArchieApproachMaxie0:
# 389 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 390 "data/maps/MtPyre_Summit/scripts.pory"
	walk_right
# 391 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 392 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 393 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 394 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 395 "data/maps/MtPyre_Summit/scripts.pory"

# 396 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_ArchieApproachMaxie1:
# 397 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 398 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 399 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 400 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 401 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 402 "data/maps/MtPyre_Summit/scripts.pory"

# 403 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_ArchieApproachMaxie2:
# 404 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 405 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 406 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 407 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 408 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 409 "data/maps/MtPyre_Summit/scripts.pory"

# 410 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_MaxieWeGotTheOrbLetsGo:
# 411 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Team Aqua's Archie got ahead\n"
# 412 "data/maps/MtPyre_Summit/scripts.pory"
	.string "of me, but we also got what we wanted.\p"
# 413 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The Red Orb preserved at Mt. Pyre…\n"
# 414 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I, Maxie, now have it in my possession!\p"
# 415 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Fufufu… Now we can bring our ultimate\n"
# 416 "data/maps/MtPyre_Summit/scripts.pory"
	.string "objective to fruition!\l"
# 417 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Primal Groudon... your time is coming.$"
# 418 "data/maps/MtPyre_Summit/scripts.pory"

# 419 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_BothOrbsTakenMagmaLeftThis:
# 420 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Oh, no…\n"
# 421 "data/maps/MtPyre_Summit/scripts.pory"
	.string "This cannot happen…\p"
# 422 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Not only the Red Orb, but even\n"
# 423 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the Blue Orb has been taken…\p"
# 424 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The Blue Orb and Red Orb must never\n"
# 425 "data/maps/MtPyre_Summit/scripts.pory"
	.string "be separated. They belong together.\p"
# 426 "data/maps/MtPyre_Summit/scripts.pory"
	.string "What are those men trying to do with\n"
# 427 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the two Orbs?\p"
# 428 "data/maps/MtPyre_Summit/scripts.pory"
	.string "… … … … … …\n"
# 429 "data/maps/MtPyre_Summit/scripts.pory"
	.string "… … … … … …\p"
# 430 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Oh, yes. Was it Team Aqua who came\n"
# 431 "data/maps/MtPyre_Summit/scripts.pory"
	.string "and took the Blue Orb first?\p"
# 432 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Well, on his way down from the summit, I\n"
# 433 "data/maps/MtPyre_Summit/scripts.pory"
	.string "heard their leader mention something\l"
# 434 "data/maps/MtPyre_Summit/scripts.pory"
	.string "about a submarine in Slateport City...\p"
# 435 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Maybe you should head there and see if\n"
# 436 "data/maps/MtPyre_Summit/scripts.pory"
	.string "you can stop them.$"
# 437 "data/maps/MtPyre_Summit/scripts.pory"

# 438 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_OrbsHaveBeenTaken:
# 439 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The Blue Orb and Red Orb taken by\n"
# 440 "data/maps/MtPyre_Summit/scripts.pory"
	.string "those sinister men…\p"
# 441 "data/maps/MtPyre_Summit/scripts.pory"
	.string "They must never be apart…\n"
# 442 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I fear something terrible will happen…$"
# 443 "data/maps/MtPyre_Summit/scripts.pory"

# 444 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_GroudonKyogreAwakened:
# 445 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Oh, my goodness…\p"
# 446 "data/maps/MtPyre_Summit/scripts.pory"
	.string "You say that both Groudon and Kyogre\n"
# 447 "data/maps/MtPyre_Summit/scripts.pory"
	.string "have been awakened?\p"
# 448 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It is said that the Blue Orb and\n"
# 449 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the Red Orb quelled the rage of\l"
# 450 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the two Pokémon…\p"
# 451 "data/maps/MtPyre_Summit/scripts.pory"
	.string "But they also were able to bring out\n"
# 452 "data/maps/MtPyre_Summit/scripts.pory"
	.string "their Primal powers...\p"
# 453 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It is also said that the true owner\n"
# 454 "data/maps/MtPyre_Summit/scripts.pory"
	.string "of the Orbs still exists.\p"
# 455 "data/maps/MtPyre_Summit/scripts.pory"
	.string "However, no one knows who, or what\n"
# 456 "data/maps/MtPyre_Summit/scripts.pory"
	.string "exactly, the Orbs belong to.\p"
# 457 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It could be a human, or perhaps\n"
# 458 "data/maps/MtPyre_Summit/scripts.pory"
	.string "a Pokémon, but no one knows.$"
# 459 "data/maps/MtPyre_Summit/scripts.pory"

# 460 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_ThoseTwoMenReturnedOrbs:
# 461 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The two men who took the Orbs came\n"
# 462 "data/maps/MtPyre_Summit/scripts.pory"
	.string "back to return them on their own.\p"
# 463 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I know this will be a large ask of you,\n"
# 464 "data/maps/MtPyre_Summit/scripts.pory"
	.string "but I fear the day when a situation like\l"
# 465 "data/maps/MtPyre_Summit/scripts.pory"
	.string "this arises again.\p"
# 466 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Would you take these Orbs and look\n"
# 467 "data/maps/MtPyre_Summit/scripts.pory"
	.string "after them?\p"
# 468 "data/maps/MtPyre_Summit/scripts.pory"
	.string "You have proven to be a trustworthy\n"
# 469 "data/maps/MtPyre_Summit/scripts.pory"
	.string "individual, and I think they'd be safest\l"
# 470 "data/maps/MtPyre_Summit/scripts.pory"
	.string "with you.$"
# 471 "data/maps/MtPyre_Summit/scripts.pory"

# 472 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_TrustYou:
# 473 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I know you will not abuse the power\n"
# 474 "data/maps/MtPyre_Summit/scripts.pory"
	.string "granted by those Orbs, {PLAYER}.$"
# 475 "data/maps/MtPyre_Summit/scripts.pory"

# 476 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_SuperAncientPokemonTaughtUs:
# 477 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The embodiments of the land, sea,\n"
# 478 "data/maps/MtPyre_Summit/scripts.pory"
	.string "and the sky…\p"
# 479 "data/maps/MtPyre_Summit/scripts.pory"
	.string "That is said to be the identities of\n"
# 480 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the super-ancient Pokémon…\p"
# 481 "data/maps/MtPyre_Summit/scripts.pory"
	.string "In the same way that we humans and\n"
# 482 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Pokémon have life, our world, too,\l"
# 483 "data/maps/MtPyre_Summit/scripts.pory"
	.string "is alive…\p"
# 484 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The super-ancient Pokémon have\n"
# 485 "data/maps/MtPyre_Summit/scripts.pory"
	.string "taught us that…$"
# 486 "data/maps/MtPyre_Summit/scripts.pory"

# 487 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_WillYouHearOutMyTale:
# 488 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Mt. Pyre is where we calm the spirits\n"
# 489 "data/maps/MtPyre_Summit/scripts.pory"
	.string "of Pokémon that have passed on…\p"
# 490 "data/maps/MtPyre_Summit/scripts.pory"
	.string "This is a high place where one can\n"
# 491 "data/maps/MtPyre_Summit/scripts.pory"
	.string "see all of Hoenn…\p"
# 492 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The disembodied spirits of Pokémon\n"
# 493 "data/maps/MtPyre_Summit/scripts.pory"
	.string "must find solace here…\p"
# 494 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Is it coincidence that you are here…\p"
# 495 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Will you hear out my tale? A tale long\n"
# 496 "data/maps/MtPyre_Summit/scripts.pory"
	.string "told in the Hoenn region?$"
# 497 "data/maps/MtPyre_Summit/scripts.pory"

# 498 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_GroudonKyogreTale:
# 499 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It happened long, long ago…\p"
# 500 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The world was wracked by a ferocious\n"
# 501 "data/maps/MtPyre_Summit/scripts.pory"
	.string "clash between the Pokémon of the land\l"
# 502 "data/maps/MtPyre_Summit/scripts.pory"
	.string "and the Pokémon of the sea…\p"
# 503 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The Pokémon of the land raised\n"
# 504 "data/maps/MtPyre_Summit/scripts.pory"
	.string "mountains and created continents…\p"
# 505 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The Pokémon of the sea raised huge\n"
# 506 "data/maps/MtPyre_Summit/scripts.pory"
	.string "waves and carved out oceans…\p"
# 507 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Their fierce duel raged without end.\p"
# 508 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The world was engulfed in massive\n"
# 509 "data/maps/MtPyre_Summit/scripts.pory"
	.string "infernos and vicious storms.\p"
# 510 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The Blue Orb and the Red Orb brought\n"
# 511 "data/maps/MtPyre_Summit/scripts.pory"
	.string "an end to the calamity.\p"
# 512 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Light poured from the two Orbs and\n"
# 513 "data/maps/MtPyre_Summit/scripts.pory"
	.string "becalmed the enraged adversaries.\p"
# 514 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The pair, made docile, dove deep into\n"
# 515 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the sea where eventually they\l"
# 516 "data/maps/MtPyre_Summit/scripts.pory"
	.string "disappeared…$"
# 517 "data/maps/MtPyre_Summit/scripts.pory"

# 518 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_WellThatTooIsFine:
# 519 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I see…\n"
# 520 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Well, that, too, is fine…$"
# 521 "data/maps/MtPyre_Summit/scripts.pory"

# 522 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_ArchieSilence:
# 523 "data/maps/MtPyre_Summit/scripts.pory"
	.string "{PLAYER}…\p"
# 524 "data/maps/MtPyre_Summit/scripts.pory"
	.string "… … … … … …\n"
# 525 "data/maps/MtPyre_Summit/scripts.pory"
	.string "… … … … … …$"
# 526 "data/maps/MtPyre_Summit/scripts.pory"

# 527 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_HearTheNewLegendOfHoenn:
# 528 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It is my role to pass on the legends\n"
# 529 "data/maps/MtPyre_Summit/scripts.pory"
	.string "of Hoenn to future generations.\p"
# 530 "data/maps/MtPyre_Summit/scripts.pory"
	.string "And the crisis that just ended in\n"
# 531 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Sootopolis rewrote a legend…\p"
# 532 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Have you the time to hear the new\n"
# 533 "data/maps/MtPyre_Summit/scripts.pory"
	.string "legend of Hoenn?$"
# 534 "data/maps/MtPyre_Summit/scripts.pory"

# 535 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_HoennTrioTale:
# 536 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It happened long, long ago…\p"
# 537 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The world was wracked by a ferocious\n"
# 538 "data/maps/MtPyre_Summit/scripts.pory"
	.string "clash between the Pokémon of the land\l"
# 539 "data/maps/MtPyre_Summit/scripts.pory"
	.string "and the Pokémon of the sea…\p"
# 540 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The Pokémon of the land raised\n"
# 541 "data/maps/MtPyre_Summit/scripts.pory"
	.string "mountains and created continents…\p"
# 542 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The Pokémon of the sea raised huge\n"
# 543 "data/maps/MtPyre_Summit/scripts.pory"
	.string "waves and carved out oceans…\p"
# 544 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Their fierce duel raged without end.\p"
# 545 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The world was engulfed in massive\n"
# 546 "data/maps/MtPyre_Summit/scripts.pory"
	.string "fires and vicious storms.\p"
# 547 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It was then that the Pokémon of\n"
# 548 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the sky descended from a storm.\p"
# 549 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The Pokémon, shining a vivid green,\n"
# 550 "data/maps/MtPyre_Summit/scripts.pory"
	.string "becalmed the two enraged Pokémon.\p"
# 551 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Then, its duty done, the green Pokémon\n"
# 552 "data/maps/MtPyre_Summit/scripts.pory"
	.string "flew off into the wild blue yonder…$"
