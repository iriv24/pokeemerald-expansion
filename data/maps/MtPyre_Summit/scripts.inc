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
	setflag FLAG_RETURNED_RED_OR_BLUE_ORB
# 170 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 171 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 172 "data/maps/MtPyre_Summit/scripts.pory"

# 173 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyLegendariesAwake::
# 174 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_GroudonKyogreAwakened, MSGBOX_DEFAULT
# 175 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 176 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 177 "data/maps/MtPyre_Summit/scripts.pory"

# 178 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyAfterOrbsReturned::
# 179 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_SuperAncientPokemonTaughtUs, MSGBOX_DEFAULT
# 180 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 181 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 182 "data/maps/MtPyre_Summit/scripts.pory"

# 183 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieArchieTrigger0::
# 184 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 185 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 0
# 186 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_MaxieArchieReturnOrbs
# 187 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 188 "data/maps/MtPyre_Summit/scripts.pory"

# 189 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieArchieTrigger1::
# 190 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 191 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 1
# 192 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_MaxieArchieReturnOrbs
# 193 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 194 "data/maps/MtPyre_Summit/scripts.pory"

# 195 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieArchieTrigger2::
# 196 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 197 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 2
# 198 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_MaxieArchieReturnOrbs
# 199 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 200 "data/maps/MtPyre_Summit/scripts.pory"

# 201 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieArchieReturnOrbs::
# 202 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 203 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 204 "data/maps/MtPyre_Summit/scripts.pory"
	delay 60
# 205 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 0, MtPyre_Summit_EventScript_MaxieArchieBeginExit0
# 206 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 1, MtPyre_Summit_EventScript_MaxieArchieBeginExit1
# 207 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 2, MtPyre_Summit_EventScript_MaxieArchieBeginExit2
# 208 "data/maps/MtPyre_Summit/scripts.pory"
	playse SE_PIN
# 209 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_ExclamationMark
# 210 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 211 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_Delay48
# 212 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 213 "data/maps/MtPyre_Summit/scripts.pory"
	delay 30
# 214 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 0, MtPyre_Summit_EventScript_ArchieApproachPlayer0
# 215 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 1, MtPyre_Summit_EventScript_ArchieApproachPlayer1
# 216 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 2, MtPyre_Summit_EventScript_ArchieApproachPlayer2
# 217 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_ArchieSilence, MSGBOX_DEFAULT
# 218 "data/maps/MtPyre_Summit/scripts.pory"
	closemessage
# 219 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 0, MtPyre_Summit_EventScript_ArchieApproachMaxie0
# 220 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 1, MtPyre_Summit_EventScript_ArchieApproachMaxie1
# 221 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 2, MtPyre_Summit_EventScript_ArchieApproachMaxie2
# 222 "data/maps/MtPyre_Summit/scripts.pory"
	delay 30
# 223 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieExit
# 224 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieExit
# 225 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 226 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_MAXIE
# 227 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_ARCHIE
# 228 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_MT_PYRE_STATE, 3
# 229 "data/maps/MtPyre_Summit/scripts.pory"
	releaseall
# 230 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 231 "data/maps/MtPyre_Summit/scripts.pory"

# 232 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieArchieBeginExit0::
# 233 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchMaxieArchieExit0
# 234 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieExit
# 235 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieExit
# 236 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 237 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 238 "data/maps/MtPyre_Summit/scripts.pory"

# 239 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieArchieBeginExit1::
# 240 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchMaxieArchieExit1
# 241 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieExit
# 242 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieExit
# 243 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 244 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 245 "data/maps/MtPyre_Summit/scripts.pory"

# 246 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieArchieBeginExit2::
# 247 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchMaxieArchieExit2
# 248 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieExit
# 249 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieExit
# 250 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 251 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 252 "data/maps/MtPyre_Summit/scripts.pory"

# 253 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieApproachPlayer0::
# 254 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerFaceArchie0
# 255 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieWatchArchie
# 256 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieApproachPlayer0
# 257 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 258 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 259 "data/maps/MtPyre_Summit/scripts.pory"

# 260 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieApproachPlayer1::
# 261 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerFaceArchie
# 262 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieWatchArchie
# 263 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieApproachPlayer1
# 264 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 265 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 266 "data/maps/MtPyre_Summit/scripts.pory"

# 267 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieApproachPlayer2::
# 268 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerFaceArchie
# 269 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieWatchArchie
# 270 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieApproachPlayer2
# 271 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 272 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 273 "data/maps/MtPyre_Summit/scripts.pory"

# 274 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieApproachMaxie0::
# 275 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchArchie
# 276 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieApproachMaxie0
# 277 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 278 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_WalkInPlaceFasterRight
# 279 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 280 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 281 "data/maps/MtPyre_Summit/scripts.pory"

# 282 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieApproachMaxie1::
# 283 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchArchie
# 284 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieApproachMaxie1
# 285 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 286 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_WalkInPlaceFasterRight
# 287 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 288 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 289 "data/maps/MtPyre_Summit/scripts.pory"

# 290 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieApproachMaxie2::
# 291 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchArchie
# 292 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieApproachMaxie2
# 293 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 294 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_WalkInPlaceFasterRight
# 295 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 296 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 297 "data/maps/MtPyre_Summit/scripts.pory"

# 298 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerFaceArchie0:
# 299 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 300 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 301 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_right
# 302 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 303 "data/maps/MtPyre_Summit/scripts.pory"

# 304 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerFaceArchie:
# 305 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 306 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 307 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 308 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 309 "data/maps/MtPyre_Summit/scripts.pory"

# 310 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieExit:
# 311 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 312 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 313 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 314 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 315 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 316 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 317 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 318 "data/maps/MtPyre_Summit/scripts.pory"

# 319 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_ArchieExit:
# 320 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 321 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 322 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 323 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 324 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 325 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 326 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 327 "data/maps/MtPyre_Summit/scripts.pory"

# 328 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerWatchMaxieArchieExit0:
# 329 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 330 "data/maps/MtPyre_Summit/scripts.pory"
	delay_8
# 331 "data/maps/MtPyre_Summit/scripts.pory"
	walk_left
# 332 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_right
# 333 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 334 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 335 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 336 "data/maps/MtPyre_Summit/scripts.pory"

# 337 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerWatchMaxieArchieExit1:
# 338 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 339 "data/maps/MtPyre_Summit/scripts.pory"
	delay_8
# 340 "data/maps/MtPyre_Summit/scripts.pory"
	walk_right
# 341 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 342 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 343 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 344 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 345 "data/maps/MtPyre_Summit/scripts.pory"

# 346 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerWatchMaxieArchieExit2:
# 347 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 348 "data/maps/MtPyre_Summit/scripts.pory"
	delay_8
# 349 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 350 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 351 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 352 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 353 "data/maps/MtPyre_Summit/scripts.pory"

# 354 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_ArchieApproachPlayer0:
# 355 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 356 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 357 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 358 "data/maps/MtPyre_Summit/scripts.pory"
	walk_left
# 359 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 360 "data/maps/MtPyre_Summit/scripts.pory"

# 361 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_ArchieApproachPlayer1:
# 362 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 363 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 364 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 365 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_right
# 366 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 367 "data/maps/MtPyre_Summit/scripts.pory"

# 368 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_ArchieApproachPlayer2:
# 369 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 370 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 371 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 372 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_right
# 373 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 374 "data/maps/MtPyre_Summit/scripts.pory"

# 375 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieWatchArchie:
# 376 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 377 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_up
# 378 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 379 "data/maps/MtPyre_Summit/scripts.pory"

# 380 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerWatchArchie:
# 381 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 382 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 383 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 384 "data/maps/MtPyre_Summit/scripts.pory"

# 385 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_ArchieApproachMaxie0:
# 386 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 387 "data/maps/MtPyre_Summit/scripts.pory"
	walk_right
# 388 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 389 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 390 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 391 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 392 "data/maps/MtPyre_Summit/scripts.pory"

# 393 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_ArchieApproachMaxie1:
# 394 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 395 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 396 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 397 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 398 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 399 "data/maps/MtPyre_Summit/scripts.pory"

# 400 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_ArchieApproachMaxie2:
# 401 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 402 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 403 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 404 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 405 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 406 "data/maps/MtPyre_Summit/scripts.pory"

# 407 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_MaxieWeGotTheOrbLetsGo:
# 408 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Team Aqua's Archie got ahead\n"
# 409 "data/maps/MtPyre_Summit/scripts.pory"
	.string "of me, but we also got what we wanted.\p"
# 410 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The Red Orb preserved at Mt. Pyre…\n"
# 411 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I, Maxie, now have it in my possession!\p"
# 412 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Fufufu… Now we can bring our ultimate\n"
# 413 "data/maps/MtPyre_Summit/scripts.pory"
	.string "objective to fruition!\l"
# 414 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Primal Groudon... your time is coming.$"
# 415 "data/maps/MtPyre_Summit/scripts.pory"

# 416 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_BothOrbsTakenMagmaLeftThis:
# 417 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Oh, no…\n"
# 418 "data/maps/MtPyre_Summit/scripts.pory"
	.string "This cannot happen…\p"
# 419 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Not only the Red Orb, but even\n"
# 420 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the Blue Orb has been taken…\p"
# 421 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The Blue Orb and Red Orb must never\n"
# 422 "data/maps/MtPyre_Summit/scripts.pory"
	.string "be separated. They belong together.\p"
# 423 "data/maps/MtPyre_Summit/scripts.pory"
	.string "What are those men trying to do with\n"
# 424 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the two Orbs?\p"
# 425 "data/maps/MtPyre_Summit/scripts.pory"
	.string "… … … … … …\n"
# 426 "data/maps/MtPyre_Summit/scripts.pory"
	.string "… … … … … …\p"
# 427 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Oh, yes. Was it Team Aqua who came\n"
# 428 "data/maps/MtPyre_Summit/scripts.pory"
	.string "and took the Blue Orb first?\p"
# 429 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Well, on his way down from the summit, I\n"
# 430 "data/maps/MtPyre_Summit/scripts.pory"
	.string "heard their leader mention something\p"
# 431 "data/maps/MtPyre_Summit/scripts.pory"
	.string "about a submarine in Slateport City...\n"
# 432 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Maybe you should head there and see if\p"
# 433 "data/maps/MtPyre_Summit/scripts.pory"
	.string "you can stop them.$"
# 434 "data/maps/MtPyre_Summit/scripts.pory"

# 435 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_OrbsHaveBeenTaken:
# 436 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The Blue Orb and Red Orb taken by\n"
# 437 "data/maps/MtPyre_Summit/scripts.pory"
	.string "those sinister men…\p"
# 438 "data/maps/MtPyre_Summit/scripts.pory"
	.string "They must never be apart…\n"
# 439 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I fear something terrible will happen…$"
# 440 "data/maps/MtPyre_Summit/scripts.pory"

# 441 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_GroudonKyogreAwakened:
# 442 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Oh, my goodness…\p"
# 443 "data/maps/MtPyre_Summit/scripts.pory"
	.string "You say that both Groudon and Kyogre\n"
# 444 "data/maps/MtPyre_Summit/scripts.pory"
	.string "have been awakened?\p"
# 445 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It is said that the Blue Orb and\n"
# 446 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the Red Orb quelled the rage of\l"
# 447 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the two Pokémon…\p"
# 448 "data/maps/MtPyre_Summit/scripts.pory"
	.string "But they also were able to bring out\n"
# 449 "data/maps/MtPyre_Summit/scripts.pory"
	.string "their Primal powers...\p"
# 450 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It is also said that the true owner\n"
# 451 "data/maps/MtPyre_Summit/scripts.pory"
	.string "of the Orbs still exists.\p"
# 452 "data/maps/MtPyre_Summit/scripts.pory"
	.string "However, no one knows who, or what\n"
# 453 "data/maps/MtPyre_Summit/scripts.pory"
	.string "exactly, the Orbs belong to.\p"
# 454 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It could be a human, or perhaps\n"
# 455 "data/maps/MtPyre_Summit/scripts.pory"
	.string "a Pokémon, but no one knows.$"
# 456 "data/maps/MtPyre_Summit/scripts.pory"

# 457 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_ThoseTwoMenReturnedOrbs:
# 458 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The two men who took the Orbs came\n"
# 459 "data/maps/MtPyre_Summit/scripts.pory"
	.string "back to return them on their own.\p"
# 460 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Those men…\n"
# 461 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Perhaps they are not so evil after all…$"
# 462 "data/maps/MtPyre_Summit/scripts.pory"

# 463 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_SuperAncientPokemonTaughtUs:
# 464 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The embodiments of the land, sea,\n"
# 465 "data/maps/MtPyre_Summit/scripts.pory"
	.string "and the sky…\p"
# 466 "data/maps/MtPyre_Summit/scripts.pory"
	.string "That is said to be the identities of\n"
# 467 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the super-ancient Pokémon…\p"
# 468 "data/maps/MtPyre_Summit/scripts.pory"
	.string "In the same way that we humans and\n"
# 469 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Pokémon have life, our world, too,\l"
# 470 "data/maps/MtPyre_Summit/scripts.pory"
	.string "is alive…\p"
# 471 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The super-ancient Pokémon have\n"
# 472 "data/maps/MtPyre_Summit/scripts.pory"
	.string "taught us that…$"
# 473 "data/maps/MtPyre_Summit/scripts.pory"

# 474 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_WillYouHearOutMyTale:
# 475 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Mt. Pyre is where we calm the spirits\n"
# 476 "data/maps/MtPyre_Summit/scripts.pory"
	.string "of Pokémon that have passed on…\p"
# 477 "data/maps/MtPyre_Summit/scripts.pory"
	.string "This is a high place where one can\n"
# 478 "data/maps/MtPyre_Summit/scripts.pory"
	.string "see all of Hoenn…\p"
# 479 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The disembodied spirits of Pokémon\n"
# 480 "data/maps/MtPyre_Summit/scripts.pory"
	.string "must find solace here…\p"
# 481 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Is it coincidence that you are here…\p"
# 482 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Will you hear out my tale? A tale long\n"
# 483 "data/maps/MtPyre_Summit/scripts.pory"
	.string "told in the Hoenn region?$"
# 484 "data/maps/MtPyre_Summit/scripts.pory"

# 485 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_GroudonKyogreTale:
# 486 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It happened long, long ago…\p"
# 487 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The world was wracked by a ferocious\n"
# 488 "data/maps/MtPyre_Summit/scripts.pory"
	.string "clash between the Pokémon of the land\l"
# 489 "data/maps/MtPyre_Summit/scripts.pory"
	.string "and the Pokémon of the sea…\p"
# 490 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The Pokémon of the land raised\n"
# 491 "data/maps/MtPyre_Summit/scripts.pory"
	.string "mountains and created continents…\p"
# 492 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The Pokémon of the sea raised huge\n"
# 493 "data/maps/MtPyre_Summit/scripts.pory"
	.string "waves and carved out oceans…\p"
# 494 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Their fierce duel raged without end.\p"
# 495 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The world was engulfed in massive\n"
# 496 "data/maps/MtPyre_Summit/scripts.pory"
	.string "infernos and vicious storms.\p"
# 497 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The Blue Orb and the Red Orb brought\n"
# 498 "data/maps/MtPyre_Summit/scripts.pory"
	.string "an end to the calamity.\p"
# 499 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Light poured from the two Orbs and\n"
# 500 "data/maps/MtPyre_Summit/scripts.pory"
	.string "becalmed the enraged adversaries.\p"
# 501 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The pair, made docile, dove deep into\n"
# 502 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the sea where eventually they\l"
# 503 "data/maps/MtPyre_Summit/scripts.pory"
	.string "disappeared…$"
# 504 "data/maps/MtPyre_Summit/scripts.pory"

# 505 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_WellThatTooIsFine:
# 506 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I see…\n"
# 507 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Well, that, too, is fine…$"
# 508 "data/maps/MtPyre_Summit/scripts.pory"

# 509 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_ArchieSilence:
# 510 "data/maps/MtPyre_Summit/scripts.pory"
	.string "{PLAYER}…\p"
# 511 "data/maps/MtPyre_Summit/scripts.pory"
	.string "… … … … … …\n"
# 512 "data/maps/MtPyre_Summit/scripts.pory"
	.string "… … … … … …$"
# 513 "data/maps/MtPyre_Summit/scripts.pory"

# 514 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_HearTheNewLegendOfHoenn:
# 515 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It is my role to pass on the legends\n"
# 516 "data/maps/MtPyre_Summit/scripts.pory"
	.string "of Hoenn to future generations.\p"
# 517 "data/maps/MtPyre_Summit/scripts.pory"
	.string "And the crisis that just ended in\n"
# 518 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Sootopolis rewrote a legend…\p"
# 519 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Have you the time to hear the new\n"
# 520 "data/maps/MtPyre_Summit/scripts.pory"
	.string "legend of Hoenn?$"
# 521 "data/maps/MtPyre_Summit/scripts.pory"

# 522 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_HoennTrioTale:
# 523 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It happened long, long ago…\p"
# 524 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The world was wracked by a ferocious\n"
# 525 "data/maps/MtPyre_Summit/scripts.pory"
	.string "clash between the Pokémon of the land\l"
# 526 "data/maps/MtPyre_Summit/scripts.pory"
	.string "and the Pokémon of the sea…\p"
# 527 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The Pokémon of the land raised\n"
# 528 "data/maps/MtPyre_Summit/scripts.pory"
	.string "mountains and created continents…\p"
# 529 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The Pokémon of the sea raised huge\n"
# 530 "data/maps/MtPyre_Summit/scripts.pory"
	.string "waves and carved out oceans…\p"
# 531 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Their fierce duel raged without end.\p"
# 532 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The world was engulfed in massive\n"
# 533 "data/maps/MtPyre_Summit/scripts.pory"
	.string "fires and vicious storms.\p"
# 534 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It was then that the Pokémon of\n"
# 535 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the sky descended from a storm.\p"
# 536 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The Pokémon, shining a vivid green,\n"
# 537 "data/maps/MtPyre_Summit/scripts.pory"
	.string "becalmed the two enraged Pokémon.\p"
# 538 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Then, its duty done, the green Pokémon\n"
# 539 "data/maps/MtPyre_Summit/scripts.pory"
	.string "flew off into the wild blue yonder…$"
