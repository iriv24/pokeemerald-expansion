# 1 "data/maps/MtPyre_Summit/scripts.pory"

# 2 "data/maps/MtPyre_Summit/scripts.pory"
.set LOCALID_ARCHIE, 2
# 3 "data/maps/MtPyre_Summit/scripts.pory"
.set LOCALID_OLD_LADY, 3
# 4 "data/maps/MtPyre_Summit/scripts.pory"
.set LOCALID_MAXIE, 4
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
	call_if_eq VAR_MT_PYRE_STATE, 2, MtPyre_Summit_EventScript_SetArchieMaxiePositions
# 12 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 13 "data/maps/MtPyre_Summit/scripts.pory"

# 14 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_SetArchieMaxiePositions::
# 15 "data/maps/MtPyre_Summit/scripts.pory"
	setobjectxyperm LOCALID_MAXIE, 23, 6
# 16 "data/maps/MtPyre_Summit/scripts.pory"
	setobjectxyperm LOCALID_ARCHIE, 22, 6
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
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 39 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 40 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 41 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterDown
# 42 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 43 "data/maps/MtPyre_Summit/scripts.pory"
	delay 50
# 44 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 0, MtPyre_Summit_EventScript_ArchieFacePlayer0
# 45 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 1, MtPyre_Summit_EventScript_ArchieFacePlayer1
# 46 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 2, MtPyre_Summit_EventScript_ArchieFacePlayer2
# 47 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_ArchieWeGotTheOrbLetsGo, MSGBOX_DEFAULT
# 48 "data/maps/MtPyre_Summit/scripts.pory"
	closemessage
# 49 "data/maps/MtPyre_Summit/scripts.pory"
	fadescreen FADE_TO_BLACK
# 50 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_ARCHIE
# 51 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_HIDE_MT_PYRE_SUMMIT_ARCHIE
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
	giveitem ITEM_MAGMA_EMBLEM
# 62 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_RECEIVED_RED_OR_BLUE_ORB
# 63 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_HIDE_JAGGED_PASS_MAGMA_GUARD
# 64 "data/maps/MtPyre_Summit/scripts.pory"
	releaseall
# 65 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 66 "data/maps/MtPyre_Summit/scripts.pory"

# 67 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieFacePlayer0::
# 68 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieFacePlayer0
# 69 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 70 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 71 "data/maps/MtPyre_Summit/scripts.pory"

# 72 "data/maps/MtPyre_Summit/scripts.pory"
@ Archie is already facing player
# 73 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieFacePlayer1::
# 74 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 75 "data/maps/MtPyre_Summit/scripts.pory"

# 76 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieFacePlayer2::
# 77 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieFacePlayer2
# 78 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 79 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 80 "data/maps/MtPyre_Summit/scripts.pory"

# 81 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyApproachPlayer0::
# 82 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_OLD_LADY, MtPyre_Summit_Movement_OldLadyApproachPlayer0
# 83 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 84 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 85 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 86 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 87 "data/maps/MtPyre_Summit/scripts.pory"

# 88 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyApproachPlayer1::
# 89 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_OLD_LADY, MtPyre_Summit_Movement_OldLadyApproachPlayer1
# 90 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 91 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 92 "data/maps/MtPyre_Summit/scripts.pory"

# 93 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyApproachPlayer2::
# 94 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_OLD_LADY, MtPyre_Summit_Movement_OldLadyApproachPlayer2
# 95 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 96 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 97 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 98 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 99 "data/maps/MtPyre_Summit/scripts.pory"

# 100 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_OldLadyApproachPlayer0:
# 101 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 102 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 103 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 104 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 105 "data/maps/MtPyre_Summit/scripts.pory"

# 106 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_OldLadyApproachPlayer1:
# 107 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 108 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 109 "data/maps/MtPyre_Summit/scripts.pory"

# 110 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_OldLadyApproachPlayer2:
# 111 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 112 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 113 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_right
# 114 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 115 "data/maps/MtPyre_Summit/scripts.pory"

# 116 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_ArchieFacePlayer0:
# 117 "data/maps/MtPyre_Summit/scripts.pory"
	walk_left
# 118 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 119 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 120 "data/maps/MtPyre_Summit/scripts.pory"

# 121 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_ArchieFacePlayer2:
# 122 "data/maps/MtPyre_Summit/scripts.pory"
	walk_right
# 123 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 124 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 125 "data/maps/MtPyre_Summit/scripts.pory"

# 126 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldMan::
# 127 "data/maps/MtPyre_Summit/scripts.pory"
	lock
# 128 "data/maps/MtPyre_Summit/scripts.pory"
	faceplayer
# 129 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_set FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE, MtPyre_Summit_EventScript_OldManAfterRayquaza
# 130 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_WillYouHearOutMyTale, MSGBOX_YESNO
# 131 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_RESULT, YES, MtPyre_Summit_EventScript_OldManTale
# 132 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_RESULT, NO, MtPyre_Summit_EventScript_DeclineOldManTale
# 133 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 134 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 135 "data/maps/MtPyre_Summit/scripts.pory"

# 136 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldManAfterRayquaza::
# 137 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_HearTheNewLegendOfHoenn, MSGBOX_YESNO
# 138 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_RESULT, YES, MtPyre_Summit_EventScript_OldManNewTale
# 139 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_RESULT, NO, MtPyre_Summit_EventScript_DeclineOldManTale
# 140 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 141 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 142 "data/maps/MtPyre_Summit/scripts.pory"

# 143 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldManTale::
# 144 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_GroudonKyogreTale, MSGBOX_DEFAULT
# 145 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 146 "data/maps/MtPyre_Summit/scripts.pory"

# 147 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_DeclineOldManTale::
# 148 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_WellThatTooIsFine, MSGBOX_DEFAULT
# 149 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 150 "data/maps/MtPyre_Summit/scripts.pory"

# 151 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldManNewTale::
# 152 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_HoennTrioTale, MSGBOX_DEFAULT
# 153 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 154 "data/maps/MtPyre_Summit/scripts.pory"

# 155 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLady::
# 156 "data/maps/MtPyre_Summit/scripts.pory"
	lock
# 157 "data/maps/MtPyre_Summit/scripts.pory"
	faceplayer
# 158 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_set FLAG_RETURNED_RED_OR_BLUE_ORB, MtPyre_Summit_EventScript_OldLadyAfterOrbsReturned
# 159 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_ge VAR_MT_PYRE_STATE, 3, MtPyre_Summit_EventScript_OldLadyOrbsReturned
# 160 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_set FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN, MtPyre_Summit_EventScript_OldLadyLegendariesAwake
# 161 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_OrbsHaveBeenTaken, MSGBOX_DEFAULT
# 162 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 163 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 164 "data/maps/MtPyre_Summit/scripts.pory"

# 165 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyOrbsReturned::
# 166 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_ThoseTwoMenReturnedOrbs, MSGBOX_DEFAULT
# 167 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_RETURNED_RED_OR_BLUE_ORB
# 168 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 169 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 170 "data/maps/MtPyre_Summit/scripts.pory"

# 171 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyLegendariesAwake::
# 172 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_GroudonKyogreAwakened, MSGBOX_DEFAULT
# 173 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 174 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 175 "data/maps/MtPyre_Summit/scripts.pory"

# 176 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyAfterOrbsReturned::
# 177 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_SuperAncientPokemonTaughtUs, MSGBOX_DEFAULT
# 178 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 179 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 180 "data/maps/MtPyre_Summit/scripts.pory"

# 181 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieTrigger0::
# 182 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 183 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 0
# 184 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs
# 185 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 186 "data/maps/MtPyre_Summit/scripts.pory"

# 187 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieTrigger1::
# 188 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 189 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 1
# 190 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs
# 191 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 192 "data/maps/MtPyre_Summit/scripts.pory"

# 193 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieTrigger2::
# 194 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 195 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 2
# 196 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs
# 197 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 198 "data/maps/MtPyre_Summit/scripts.pory"

# 199 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs::
# 200 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 201 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 202 "data/maps/MtPyre_Summit/scripts.pory"
	delay 60
# 203 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 0, MtPyre_Summit_EventScript_ArchieMaxieBeginExit0
# 204 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 1, MtPyre_Summit_EventScript_ArchieMaxieBeginExit1
# 205 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 2, MtPyre_Summit_EventScript_ArchieMaxieBeginExit2
# 206 "data/maps/MtPyre_Summit/scripts.pory"
	playse SE_PIN
# 207 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_ExclamationMark
# 208 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 209 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_Delay48
# 210 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 211 "data/maps/MtPyre_Summit/scripts.pory"
	delay 30
# 212 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 0, MtPyre_Summit_EventScript_MaxieApproachPlayer0
# 213 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 1, MtPyre_Summit_EventScript_MaxieApproachPlayer1
# 214 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 2, MtPyre_Summit_EventScript_MaxieApproachPlayer2
# 215 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_MaxieSilence, MSGBOX_DEFAULT
# 216 "data/maps/MtPyre_Summit/scripts.pory"
	closemessage
# 217 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 0, MtPyre_Summit_EventScript_MaxieApproachArchie0
# 218 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 1, MtPyre_Summit_EventScript_MaxieApproachArchie1
# 219 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 2, MtPyre_Summit_EventScript_MaxieApproachArchie2
# 220 "data/maps/MtPyre_Summit/scripts.pory"
	delay 30
# 221 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieExit
# 222 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieExit
# 223 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 224 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_ARCHIE
# 225 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_MAXIE
# 226 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_MT_PYRE_STATE, 3
# 227 "data/maps/MtPyre_Summit/scripts.pory"
	releaseall
# 228 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 229 "data/maps/MtPyre_Summit/scripts.pory"

# 230 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieBeginExit0::
# 231 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit0
# 232 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieExit
# 233 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieExit
# 234 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 235 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 236 "data/maps/MtPyre_Summit/scripts.pory"

# 237 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieBeginExit1::
# 238 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit1
# 239 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieExit
# 240 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieExit
# 241 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 242 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 243 "data/maps/MtPyre_Summit/scripts.pory"

# 244 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieBeginExit2::
# 245 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit2
# 246 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieExit
# 247 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieExit
# 248 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 249 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 250 "data/maps/MtPyre_Summit/scripts.pory"

# 251 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachPlayer0::
# 252 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerFaceMaxie0
# 253 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieWatchMaxie
# 254 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieApproachPlayer0
# 255 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 256 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 257 "data/maps/MtPyre_Summit/scripts.pory"

# 258 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachPlayer1::
# 259 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerFaceMaxie
# 260 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieWatchMaxie
# 261 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieApproachPlayer1
# 262 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 263 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 264 "data/maps/MtPyre_Summit/scripts.pory"

# 265 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachPlayer2::
# 266 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerFaceMaxie
# 267 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieWatchMaxie
# 268 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieApproachPlayer2
# 269 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 270 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 271 "data/maps/MtPyre_Summit/scripts.pory"

# 272 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachArchie0::
# 273 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchMaxie
# 274 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieApproachArchie0
# 275 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 276 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterRight
# 277 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 278 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 279 "data/maps/MtPyre_Summit/scripts.pory"

# 280 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachArchie1::
# 281 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchMaxie
# 282 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieApproachArchie1
# 283 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 284 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterRight
# 285 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 286 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 287 "data/maps/MtPyre_Summit/scripts.pory"

# 288 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachArchie2::
# 289 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchMaxie
# 290 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieApproachArchie2
# 291 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 292 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterRight
# 293 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 294 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 295 "data/maps/MtPyre_Summit/scripts.pory"

# 296 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerFaceMaxie0:
# 297 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 298 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 299 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_right
# 300 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 301 "data/maps/MtPyre_Summit/scripts.pory"

# 302 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerFaceMaxie:
# 303 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 304 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 305 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 306 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 307 "data/maps/MtPyre_Summit/scripts.pory"

# 308 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_ArchieExit:
# 309 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 310 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 311 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 312 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 313 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 314 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 315 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 316 "data/maps/MtPyre_Summit/scripts.pory"

# 317 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieExit:
# 318 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 319 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 320 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 321 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 322 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 323 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 324 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 325 "data/maps/MtPyre_Summit/scripts.pory"

# 326 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit0:
# 327 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 328 "data/maps/MtPyre_Summit/scripts.pory"
	delay_8
# 329 "data/maps/MtPyre_Summit/scripts.pory"
	walk_left
# 330 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_right
# 331 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 332 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 333 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 334 "data/maps/MtPyre_Summit/scripts.pory"

# 335 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit1:
# 336 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 337 "data/maps/MtPyre_Summit/scripts.pory"
	delay_8
# 338 "data/maps/MtPyre_Summit/scripts.pory"
	walk_right
# 339 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 340 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 341 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 342 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 343 "data/maps/MtPyre_Summit/scripts.pory"

# 344 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit2:
# 345 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 346 "data/maps/MtPyre_Summit/scripts.pory"
	delay_8
# 347 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 348 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 349 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 350 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 351 "data/maps/MtPyre_Summit/scripts.pory"

# 352 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachPlayer0:
# 353 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 354 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 355 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 356 "data/maps/MtPyre_Summit/scripts.pory"
	walk_left
# 357 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 358 "data/maps/MtPyre_Summit/scripts.pory"

# 359 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachPlayer1:
# 360 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 361 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 362 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 363 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_right
# 364 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 365 "data/maps/MtPyre_Summit/scripts.pory"

# 366 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachPlayer2:
# 367 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 368 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 369 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 370 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_right
# 371 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 372 "data/maps/MtPyre_Summit/scripts.pory"

# 373 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_ArchieWatchMaxie:
# 374 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 375 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_up
# 376 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 377 "data/maps/MtPyre_Summit/scripts.pory"

# 378 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerWatchMaxie:
# 379 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 380 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 381 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 382 "data/maps/MtPyre_Summit/scripts.pory"

# 383 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachArchie0:
# 384 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 385 "data/maps/MtPyre_Summit/scripts.pory"
	walk_right
# 386 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 387 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 388 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 389 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 390 "data/maps/MtPyre_Summit/scripts.pory"

# 391 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachArchie1:
# 392 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 393 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 394 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 395 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 396 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 397 "data/maps/MtPyre_Summit/scripts.pory"

# 398 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachArchie2:
# 399 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 400 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 401 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 402 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 403 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 404 "data/maps/MtPyre_Summit/scripts.pory"

# 405 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_ArchieWeGotTheOrbLetsGo:
# 406 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Team Magma's Maxie got ahead\n"
# 407 "data/maps/MtPyre_Summit/scripts.pory"
	.string "of us, but we also got what we wanted.\p"
# 408 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The Blue Orb preserved at Mt. Pyre…\n"
# 409 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I, Archie, now have it in my possession!\p"
# 410 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Fufufu… Now we can bring our ultimate\n"
# 411 "data/maps/MtPyre_Summit/scripts.pory"
	.string "objective to fruition!\l"
# 412 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Primal Kyogre... your time is coming.$"
# 413 "data/maps/MtPyre_Summit/scripts.pory"

# 414 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_BothOrbsTakenMagmaLeftThis:
# 415 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Oh, no…\n"
# 416 "data/maps/MtPyre_Summit/scripts.pory"
	.string "This cannot happen…\p"
# 417 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Not only the Red Orb, but even\n"
# 418 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the Blue Orb has been taken…\p"
# 419 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The Blue Orb and Red Orb must never\n"
# 420 "data/maps/MtPyre_Summit/scripts.pory"
	.string "be separated. They belong together.\p"
# 421 "data/maps/MtPyre_Summit/scripts.pory"
	.string "What are those men trying to do with\n"
# 422 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the two Orbs?\p"
# 423 "data/maps/MtPyre_Summit/scripts.pory"
	.string "… … … … … …\n"
# 424 "data/maps/MtPyre_Summit/scripts.pory"
	.string "… … … … … …\p"
# 425 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Oh, yes. Was it Team Magma who came\n"
# 426 "data/maps/MtPyre_Summit/scripts.pory"
	.string "and took the Red Orb first?\p"
# 427 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Well, in their haste, they left this\n"
# 428 "data/maps/MtPyre_Summit/scripts.pory"
	.string "behind.\p"
# 429 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I couldn't imagine what exactly it\n"
# 430 "data/maps/MtPyre_Summit/scripts.pory"
	.string "could be.\p"
# 431 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I would like you to have it.\n"
# 432 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Perhaps it will be useful in some way.$"
# 433 "data/maps/MtPyre_Summit/scripts.pory"

# 434 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_OrbsHaveBeenTaken:
# 435 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The Blue Orb and Red Orb taken by\n"
# 436 "data/maps/MtPyre_Summit/scripts.pory"
	.string "those sinister men…\p"
# 437 "data/maps/MtPyre_Summit/scripts.pory"
	.string "They must never be apart…\n"
# 438 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I fear something terrible will happen…$"
# 439 "data/maps/MtPyre_Summit/scripts.pory"

# 440 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_GroudonKyogreAwakened:
# 441 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Oh, my goodness…\p"
# 442 "data/maps/MtPyre_Summit/scripts.pory"
	.string "You say that both Groudon and Kyogre\n"
# 443 "data/maps/MtPyre_Summit/scripts.pory"
	.string "have been awakened?\p"
# 444 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It is said that the Blue Orb and\n"
# 445 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the Red Orb quelled the rage of\l"
# 446 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the two Pokémon…\p"
# 447 "data/maps/MtPyre_Summit/scripts.pory"
	.string "But they also were able to bring out\n"
# 448 "data/maps/MtPyre_Summit/scripts.pory"
	.string "their Primal powers...\p"
# 449 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It is also said that the true owner\n"
# 450 "data/maps/MtPyre_Summit/scripts.pory"
	.string "of the Orbs still exists.\p"
# 451 "data/maps/MtPyre_Summit/scripts.pory"
	.string "However, no one knows who, or what\n"
# 452 "data/maps/MtPyre_Summit/scripts.pory"
	.string "exactly, the Orbs belong to.\p"
# 453 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It could be a human, or perhaps\n"
# 454 "data/maps/MtPyre_Summit/scripts.pory"
	.string "a Pokémon, but no one knows.$"
# 455 "data/maps/MtPyre_Summit/scripts.pory"

# 456 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_ThoseTwoMenReturnedOrbs:
# 457 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The two men who took the Orbs came\n"
# 458 "data/maps/MtPyre_Summit/scripts.pory"
	.string "back to return them on their own.\p"
# 459 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Those men…\n"
# 460 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Perhaps they are not so evil after all…$"
# 461 "data/maps/MtPyre_Summit/scripts.pory"

# 462 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_SuperAncientPokemonTaughtUs:
# 463 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The embodiments of the land, sea,\n"
# 464 "data/maps/MtPyre_Summit/scripts.pory"
	.string "and the sky…\p"
# 465 "data/maps/MtPyre_Summit/scripts.pory"
	.string "That is said to be the identities of\n"
# 466 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the super-ancient Pokémon…\p"
# 467 "data/maps/MtPyre_Summit/scripts.pory"
	.string "In the same way that we humans and\n"
# 468 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Pokémon have life, our world, too,\l"
# 469 "data/maps/MtPyre_Summit/scripts.pory"
	.string "is alive…\p"
# 470 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The super-ancient Pokémon have\n"
# 471 "data/maps/MtPyre_Summit/scripts.pory"
	.string "taught us that…$"
# 472 "data/maps/MtPyre_Summit/scripts.pory"

# 473 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_WillYouHearOutMyTale:
# 474 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Mt. Pyre is where we calm the spirits\n"
# 475 "data/maps/MtPyre_Summit/scripts.pory"
	.string "of Pokémon that have passed on…\p"
# 476 "data/maps/MtPyre_Summit/scripts.pory"
	.string "This is a high place where one can\n"
# 477 "data/maps/MtPyre_Summit/scripts.pory"
	.string "see all of Hoenn…\p"
# 478 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The disembodied spirits of Pokémon\n"
# 479 "data/maps/MtPyre_Summit/scripts.pory"
	.string "must find solace here…\p"
# 480 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Is it coincidence that you are here…\p"
# 481 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Will you hear out my tale? A tale long\n"
# 482 "data/maps/MtPyre_Summit/scripts.pory"
	.string "told in the Hoenn region?$"
# 483 "data/maps/MtPyre_Summit/scripts.pory"

# 484 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_GroudonKyogreTale:
# 485 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It happened long, long ago…\p"
# 486 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The world was wracked by a ferocious\n"
# 487 "data/maps/MtPyre_Summit/scripts.pory"
	.string "clash between the Pokémon of the land\l"
# 488 "data/maps/MtPyre_Summit/scripts.pory"
	.string "and the Pokémon of the sea…\p"
# 489 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The Pokémon of the land raised\n"
# 490 "data/maps/MtPyre_Summit/scripts.pory"
	.string "mountains and created continents…\p"
# 491 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The Pokémon of the sea raised huge\n"
# 492 "data/maps/MtPyre_Summit/scripts.pory"
	.string "waves and carved out oceans…\p"
# 493 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Their fierce duel raged without end.\p"
# 494 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The world was engulfed in massive\n"
# 495 "data/maps/MtPyre_Summit/scripts.pory"
	.string "infernos and vicious storms.\p"
# 496 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The Blue Orb and the Red Orb brought\n"
# 497 "data/maps/MtPyre_Summit/scripts.pory"
	.string "an end to the calamity.\p"
# 498 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Light poured from the two Orbs and\n"
# 499 "data/maps/MtPyre_Summit/scripts.pory"
	.string "becalmed the enraged adversaries.\p"
# 500 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The pair, made docile, dove deep into\n"
# 501 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the sea where eventually they\l"
# 502 "data/maps/MtPyre_Summit/scripts.pory"
	.string "disappeared…$"
# 503 "data/maps/MtPyre_Summit/scripts.pory"

# 504 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_WellThatTooIsFine:
# 505 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I see…\n"
# 506 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Well, that, too, is fine…$"
# 507 "data/maps/MtPyre_Summit/scripts.pory"

# 508 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_MaxieSilence:
# 509 "data/maps/MtPyre_Summit/scripts.pory"
	.string "{PLAYER}…\p"
# 510 "data/maps/MtPyre_Summit/scripts.pory"
	.string "… … … … … …\n"
# 511 "data/maps/MtPyre_Summit/scripts.pory"
	.string "… … … … … …$"
# 512 "data/maps/MtPyre_Summit/scripts.pory"

# 513 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_HearTheNewLegendOfHoenn:
# 514 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It is my role to pass on the legends\n"
# 515 "data/maps/MtPyre_Summit/scripts.pory"
	.string "of Hoenn to future generations.\p"
# 516 "data/maps/MtPyre_Summit/scripts.pory"
	.string "And the crisis that just ended in\n"
# 517 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Sootopolis rewrote a legend…\p"
# 518 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Have you the time to hear the new\n"
# 519 "data/maps/MtPyre_Summit/scripts.pory"
	.string "legend of Hoenn?$"
# 520 "data/maps/MtPyre_Summit/scripts.pory"

# 521 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_HoennTrioTale:
# 522 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It happened long, long ago…\p"
# 523 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The world was wracked by a ferocious\n"
# 524 "data/maps/MtPyre_Summit/scripts.pory"
	.string "clash between the Pokémon of the land\l"
# 525 "data/maps/MtPyre_Summit/scripts.pory"
	.string "and the Pokémon of the sea…\p"
# 526 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The Pokémon of the land raised\n"
# 527 "data/maps/MtPyre_Summit/scripts.pory"
	.string "mountains and created continents…\p"
# 528 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The Pokémon of the sea raised huge\n"
# 529 "data/maps/MtPyre_Summit/scripts.pory"
	.string "waves and carved out oceans…\p"
# 530 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Their fierce duel raged without end.\p"
# 531 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The world was engulfed in massive\n"
# 532 "data/maps/MtPyre_Summit/scripts.pory"
	.string "fires and vicious storms.\p"
# 533 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It was then that the Pokémon of\n"
# 534 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the sky descended from a storm.\p"
# 535 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The Pokémon, shining a vivid green,\n"
# 536 "data/maps/MtPyre_Summit/scripts.pory"
	.string "becalmed the two enraged Pokémon.\p"
# 537 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Then, its duty done, the green Pokémon\n"
# 538 "data/maps/MtPyre_Summit/scripts.pory"
	.string "flew off into the wild blue yonder…$"
