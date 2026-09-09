# 1 "data/maps/PetalburgWoods/scripts.pory"

# 2 "data/maps/PetalburgWoods/scripts.pory"
.set LOCALID_GRUNT, 3
# 3 "data/maps/PetalburgWoods/scripts.pory"
.set LOCALID_DEVON_EMPLOYEE, 4
# 4 "data/maps/PetalburgWoods/scripts.pory"
.set LOCALID_GARDENIA, 14
# 5 "data/maps/PetalburgWoods/scripts.pory"
.set LOCALID_SUDOWOODO, 15
# 6 "data/maps/PetalburgWoods/scripts.pory"

# 7 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_MapScripts::
# 8 "data/maps/PetalburgWoods/scripts.pory"
	.byte 0
# 9 "data/maps/PetalburgWoods/scripts.pory"

# 10 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherLeft::
# 11 "data/maps/PetalburgWoods/scripts.pory"
	lockall
# 12 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherIntro
# 13 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherApproachPlayerLeft
# 14 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 15 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HaveYouSeenShroomish, MSGBOX_DEFAULT
# 16 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 17 "data/maps/PetalburgWoods/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 18 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaEntrance
# 19 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 20 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWasGoingToAmbushYou, MSGBOX_DEFAULT
# 21 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 22 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaApproachResearcherLeft
# 23 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 24 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 25 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 26 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HandOverThosePapers, MSGBOX_DEFAULT
# 27 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 28 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherFleeToPlayerLeft
# 29 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 30 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouHaveToHelpMe, MSGBOX_DEFAULT
# 31 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 32 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaApproachPlayer
# 33 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 34 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NoOneCrossesTeamAqua, MSGBOX_DEFAULT
# 35 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_PETALBURG_WOODS, PetalburgWoods_Text_YoureKiddingMe
# 36 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaBackOff
# 37 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 38 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherPostBattle
# 39 "data/maps/PetalburgWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgWoods_Movement_WatchResearcherLeave
# 40 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherExitLeft
# 41 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 42 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_RemoveDevonResearcher
# 43 "data/maps/PetalburgWoods/scripts.pory"
	end
# 44 "data/maps/PetalburgWoods/scripts.pory"

# 45 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherRight::
# 46 "data/maps/PetalburgWoods/scripts.pory"
	lockall
# 47 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherIntro
# 48 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherApproachPlayerRight
# 49 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 50 "data/maps/PetalburgWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 51 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 52 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HaveYouSeenShroomish, MSGBOX_DEFAULT
# 53 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 54 "data/maps/PetalburgWoods/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 55 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaEntrance
# 56 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 57 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWasGoingToAmbushYou, MSGBOX_DEFAULT
# 58 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 59 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaApproachResearcherRight
# 60 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 61 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 62 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 63 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HandOverThosePapers, MSGBOX_DEFAULT
# 64 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 65 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherFleeToPlayerRight
# 66 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 67 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouHaveToHelpMe, MSGBOX_DEFAULT
# 68 "data/maps/PetalburgWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 69 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 70 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NoOneCrossesTeamAqua, MSGBOX_DEFAULT
# 71 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_PETALBURG_WOODS, PetalburgWoods_Text_YoureKiddingMe
# 72 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaBackOff
# 73 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 74 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherPostBattle
# 75 "data/maps/PetalburgWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgWoods_Movement_WatchResearcherLeave
# 76 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherExitRight
# 77 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 78 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_RemoveDevonResearcher
# 79 "data/maps/PetalburgWoods/scripts.pory"
	end
# 80 "data/maps/PetalburgWoods/scripts.pory"

# 81 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherIntro::
# 82 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherLookAround
# 83 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 84 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NotAOneToBeFound, MSGBOX_DEFAULT
# 85 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 86 "data/maps/PetalburgWoods/scripts.pory"
	return
# 87 "data/maps/PetalburgWoods/scripts.pory"

# 88 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherPostBattle::
# 89 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouveGotSomeNerve, MSGBOX_DEFAULT
# 90 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 91 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaRunAway
# 92 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 93 "data/maps/PetalburgWoods/scripts.pory"
	removeobject LOCALID_GRUNT
# 94 "data/maps/PetalburgWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 95 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 96 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ThatWasAwfullyClose, MSGBOX_DEFAULT
# 97 "data/maps/PetalburgWoods/scripts.pory"
	giveitem ITEM_GREAT_BALL
# 98 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PetalburgWoods_EventScript_BagFull
# 99 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_DevonResearcherFinish
# 100 "data/maps/PetalburgWoods/scripts.pory"
	end
# 101 "data/maps/PetalburgWoods/scripts.pory"

# 102 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_BagFull::
# 103 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YoureLoadedWithItems, MSGBOX_DEFAULT
# 104 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_DevonResearcherFinish
# 105 "data/maps/PetalburgWoods/scripts.pory"
	end
# 106 "data/maps/PetalburgWoods/scripts.pory"

# 107 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherFinish::
# 108 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TeamAquaAfterSomethingInRustboro, MSGBOX_DEFAULT
# 109 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherStartExit
# 110 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 111 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ICantBeWastingTime, MSGBOX_DEFAULT
# 112 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 113 "data/maps/PetalburgWoods/scripts.pory"
	return
# 114 "data/maps/PetalburgWoods/scripts.pory"

# 115 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_RemoveDevonResearcher::
# 116 "data/maps/PetalburgWoods/scripts.pory"
	removeobject LOCALID_DEVON_EMPLOYEE
# 117 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_PETALBURG_WOODS_STATE, 1
# 118 "data/maps/PetalburgWoods/scripts.pory"
	releaseall
# 119 "data/maps/PetalburgWoods/scripts.pory"
	end
# 120 "data/maps/PetalburgWoods/scripts.pory"

# 121 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherLookAround:
# 122 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 123 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 124 "data/maps/PetalburgWoods/scripts.pory"
	delay_4
# 125 "data/maps/PetalburgWoods/scripts.pory"
	face_right
# 126 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 127 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 128 "data/maps/PetalburgWoods/scripts.pory"
	face_left
# 129 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 130 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 131 "data/maps/PetalburgWoods/scripts.pory"
	face_down
# 132 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 133 "data/maps/PetalburgWoods/scripts.pory"
	face_right
# 134 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 135 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 136 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 137 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 138 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 139 "data/maps/PetalburgWoods/scripts.pory"

# 140 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherExitLeft:
# 141 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 142 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 143 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 144 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 145 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 146 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 147 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 148 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 149 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 150 "data/maps/PetalburgWoods/scripts.pory"

# 151 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherApproachPlayerLeft:
# 152 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 153 "data/maps/PetalburgWoods/scripts.pory"
	face_player
# 154 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 155 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 156 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 157 "data/maps/PetalburgWoods/scripts.pory"

# 158 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherApproachPlayerRight:
# 159 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 160 "data/maps/PetalburgWoods/scripts.pory"
	face_player
# 161 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 162 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 163 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 164 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_right
# 165 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 166 "data/maps/PetalburgWoods/scripts.pory"

# 167 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherExitRight:
# 168 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 169 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 170 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 171 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 172 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 173 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 174 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 175 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 176 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 177 "data/maps/PetalburgWoods/scripts.pory"

# 178 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_WatchResearcherLeave:
# 179 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 180 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 181 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_up
# 182 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 183 "data/maps/PetalburgWoods/scripts.pory"

# 184 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherFleeToPlayerLeft:
# 185 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 186 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 187 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 188 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 189 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_up
# 190 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 191 "data/maps/PetalburgWoods/scripts.pory"

# 192 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherFleeToPlayerRight:
# 193 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 194 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 195 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_up
# 196 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 197 "data/maps/PetalburgWoods/scripts.pory"

# 198 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherStartExit:
# 199 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_down
# 200 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 201 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 202 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 203 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 204 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 205 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 206 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 207 "data/maps/PetalburgWoods/scripts.pory"

# 208 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachResearcherLeft:
# 209 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 210 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 211 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 212 "data/maps/PetalburgWoods/scripts.pory"

# 213 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaBackOff:
# 214 "data/maps/PetalburgWoods/scripts.pory"
	lock_facing_direction
# 215 "data/maps/PetalburgWoods/scripts.pory"
	walk_up
# 216 "data/maps/PetalburgWoods/scripts.pory"
	unlock_facing_direction
# 217 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 218 "data/maps/PetalburgWoods/scripts.pory"

# 219 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaRunAway:
# 220 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 221 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 222 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 223 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 224 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 225 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 226 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 227 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 228 "data/maps/PetalburgWoods/scripts.pory"

# 229 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachResearcherRight:
# 230 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 231 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 232 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 233 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 234 "data/maps/PetalburgWoods/scripts.pory"

# 235 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaEntrance:
# 236 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 237 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 238 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 239 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 240 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 241 "data/maps/PetalburgWoods/scripts.pory"

# 242 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachPlayer:
# 243 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 244 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 245 "data/maps/PetalburgWoods/scripts.pory"

# 246 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Boy1::
# 247 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_StayOutOfTallGrass, MSGBOX_NPC
# 248 "data/maps/PetalburgWoods/scripts.pory"
	end
# 249 "data/maps/PetalburgWoods/scripts.pory"

# 250 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Boy2::
# 251 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HiddenItemsExplanation, MSGBOX_NPC
# 252 "data/maps/PetalburgWoods/scripts.pory"
	end
# 253 "data/maps/PetalburgWoods/scripts.pory"

# 254 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Girl::
# 255 "data/maps/PetalburgWoods/scripts.pory"
	lock
# 256 "data/maps/PetalburgWoods/scripts.pory"
	faceplayer
# 257 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_RECEIVED_MIRACLE_SEED, PetalburgWoods_EventScript_ExplainMiracleSeed
# 258 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TryUsingThisItem, MSGBOX_DEFAULT
# 259 "data/maps/PetalburgWoods/scripts.pory"
	giveitem ITEM_MIRACLE_SEED
# 260 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 261 "data/maps/PetalburgWoods/scripts.pory"
	setflag FLAG_RECEIVED_MIRACLE_SEED
# 262 "data/maps/PetalburgWoods/scripts.pory"
	release
# 263 "data/maps/PetalburgWoods/scripts.pory"
	end
# 264 "data/maps/PetalburgWoods/scripts.pory"

# 265 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_ExplainMiracleSeed::
# 266 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_MiracleSeedExplanation, MSGBOX_DEFAULT
# 267 "data/maps/PetalburgWoods/scripts.pory"
	release
# 268 "data/maps/PetalburgWoods/scripts.pory"
	end
# 269 "data/maps/PetalburgWoods/scripts.pory"

# 270 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Sign1::
# 271 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TrainerTipsExperience, MSGBOX_SIGN
# 272 "data/maps/PetalburgWoods/scripts.pory"
	end
# 273 "data/maps/PetalburgWoods/scripts.pory"

# 274 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Sign2::
# 275 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TrainerTipsPP, MSGBOX_SIGN
# 276 "data/maps/PetalburgWoods/scripts.pory"
	end
# 277 "data/maps/PetalburgWoods/scripts.pory"

# 278 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Lyle::
# 279 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_LYLE, PetalburgWoods_Text_GoBugPokemonTeam, PetalburgWoods_Text_ICouldntWin
# 280 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ImOutOfPokeBalls, MSGBOX_AUTOCLOSE
# 281 "data/maps/PetalburgWoods/scripts.pory"
	end
# 282 "data/maps/PetalburgWoods/scripts.pory"

# 283 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_James::
# 284 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_JAMES_1, PetalburgWoods_Text_InstantlyPopularWithBugPokemon, PetalburgWoods_Text_CantBePopularIfILose, PetalburgWoods_EventScript_TryRegisterJames
# 285 "data/maps/PetalburgWoods/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 286 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgWoods_EventScript_JamesRematch
# 287 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_0x8004, TRAINER_JAMES_1
# 288 "data/maps/PetalburgWoods/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 289 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PetalburgWoods_EventScript_TryRegisterJames2
# 290 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_PeopleRespectYou, MSGBOX_DEFAULT
# 291 "data/maps/PetalburgWoods/scripts.pory"
	release
# 292 "data/maps/PetalburgWoods/scripts.pory"
	end
# 293 "data/maps/PetalburgWoods/scripts.pory"

# 294 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_TryRegisterJames::
# 295 "data/maps/PetalburgWoods/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 296 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 297 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, PetalburgWoods_EventScript_RegisterJames
# 298 "data/maps/PetalburgWoods/scripts.pory"
	release
# 299 "data/maps/PetalburgWoods/scripts.pory"
	end
# 300 "data/maps/PetalburgWoods/scripts.pory"

# 301 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_RegisterJames::
# 302 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWantRematch1, MSGBOX_DEFAULT
# 303 "data/maps/PetalburgWoods/scripts.pory"
	register_matchcall TRAINER_JAMES_1
# 304 "data/maps/PetalburgWoods/scripts.pory"
	release
# 305 "data/maps/PetalburgWoods/scripts.pory"
	end
# 306 "data/maps/PetalburgWoods/scripts.pory"

# 307 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_TryRegisterJames2::
# 308 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, PetalburgWoods_EventScript_RegisterJames2
# 309 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_PeopleRespectYou, MSGBOX_DEFAULT
# 310 "data/maps/PetalburgWoods/scripts.pory"
	release
# 311 "data/maps/PetalburgWoods/scripts.pory"
	end
# 312 "data/maps/PetalburgWoods/scripts.pory"

# 313 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_RegisterJames2::
# 314 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWantRematch2, MSGBOX_DEFAULT
# 315 "data/maps/PetalburgWoods/scripts.pory"
	register_matchcall TRAINER_JAMES_1
# 316 "data/maps/PetalburgWoods/scripts.pory"
	release
# 317 "data/maps/PetalburgWoods/scripts.pory"
	end
# 318 "data/maps/PetalburgWoods/scripts.pory"

# 319 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_JamesRematch::
# 320 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_rematch TRAINER_JAMES_1, PetalburgWoods_Text_MyPokemonHaveGrown, PetalburgWoods_Text_CantBePopularIfLose
# 321 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IveBeenTrainingHard, MSGBOX_AUTOCLOSE
# 322 "data/maps/PetalburgWoods/scripts.pory"
	end
# 323 "data/maps/PetalburgWoods/scripts.pory"

# 324 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_NotAOneToBeFound:
# 325 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hmmm…\n"
# 326 "data/maps/PetalburgWoods/scripts.pory"
	.string "Not a one to be found…$"
# 327 "data/maps/PetalburgWoods/scripts.pory"

# 328 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_HaveYouSeenShroomish:
# 329 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hello, have you seen any Pokémon\n"
# 330 "data/maps/PetalburgWoods/scripts.pory"
	.string "called Pansage around here?\p"
# 331 "data/maps/PetalburgWoods/scripts.pory"
	.string "I really love that Pokémon.$"
# 332 "data/maps/PetalburgWoods/scripts.pory"

# 333 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IWasGoingToAmbushYou:
# 334 "data/maps/PetalburgWoods/scripts.pory"
	.string "I was going to ambush you, but you\n"
# 335 "data/maps/PetalburgWoods/scripts.pory"
	.string "had to dawdle in Petalburg Woods\l"
# 336 "data/maps/PetalburgWoods/scripts.pory"
	.string "forever, didn't you?\p"
# 337 "data/maps/PetalburgWoods/scripts.pory"
	.string "I got sick of waiting, so here I am!$"
# 338 "data/maps/PetalburgWoods/scripts.pory"

# 339 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_HandOverThosePapers:
# 340 "data/maps/PetalburgWoods/scripts.pory"
	.string "You! Devon researcher!\p"
# 341 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hand over those papers!$"
# 342 "data/maps/PetalburgWoods/scripts.pory"

# 343 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YouHaveToHelpMe:
# 344 "data/maps/PetalburgWoods/scripts.pory"
	.string "Aiyeeeh!\p"
# 345 "data/maps/PetalburgWoods/scripts.pory"
	.string "You're a Pokémon trainer, aren't you?\n"
# 346 "data/maps/PetalburgWoods/scripts.pory"
	.string "You've got to help me, please!$"
# 347 "data/maps/PetalburgWoods/scripts.pory"

# 348 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_NoOneCrossesTeamAqua:
# 349 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hunh? What do you think you're doing?\n"
# 350 "data/maps/PetalburgWoods/scripts.pory"
	.string "What, you're going to protect him?\p"
# 351 "data/maps/PetalburgWoods/scripts.pory"
	.string "No one who crosses Team Aqua\n"
# 352 "data/maps/PetalburgWoods/scripts.pory"
	.string "gets any mercy, not even a kid!\p"
# 353 "data/maps/PetalburgWoods/scripts.pory"
	.string "Come on and battle me!$"
# 354 "data/maps/PetalburgWoods/scripts.pory"

# 355 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YoureKiddingMe:
# 356 "data/maps/PetalburgWoods/scripts.pory"
	.string "You're kidding me! You're tough!$"
# 357 "data/maps/PetalburgWoods/scripts.pory"

# 358 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YouveGotSomeNerve:
# 359 "data/maps/PetalburgWoods/scripts.pory"
	.string "Grrr… You've got some nerve\n"
# 360 "data/maps/PetalburgWoods/scripts.pory"
	.string "meddling with Team Aqua!\l"
# 361 "data/maps/PetalburgWoods/scripts.pory"
	.string "Come on and battle me again!\p"
# 362 "data/maps/PetalburgWoods/scripts.pory"
	.string "I wish I could say that, but I'm out of\n"
# 363 "data/maps/PetalburgWoods/scripts.pory"
	.string "Pokémon…\p"
# 364 "data/maps/PetalburgWoods/scripts.pory"
	.string "And, hey, we of Team Aqua are also\n"
# 365 "data/maps/PetalburgWoods/scripts.pory"
	.string "after something in Rustboro.\p"
# 366 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'll let you go today!$"
# 367 "data/maps/PetalburgWoods/scripts.pory"

# 368 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ThatWasAwfullyClose:
# 369 "data/maps/PetalburgWoods/scripts.pory"
	.string "Whew…\n"
# 370 "data/maps/PetalburgWoods/scripts.pory"
	.string "That was awfully close!\p"
# 371 "data/maps/PetalburgWoods/scripts.pory"
	.string "Thanks to you, he didn't rob me of\n"
# 372 "data/maps/PetalburgWoods/scripts.pory"
	.string "these important papers.\p"
# 373 "data/maps/PetalburgWoods/scripts.pory"
	.string "I know, I'll give you a Great Ball as\n"
# 374 "data/maps/PetalburgWoods/scripts.pory"
	.string "my thanks!$"
# 375 "data/maps/PetalburgWoods/scripts.pory"

# 376 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TeamAquaAfterSomethingInRustboro:
# 377 "data/maps/PetalburgWoods/scripts.pory"
	.string "Didn't that Team Aqua thug say\n"
# 378 "data/maps/PetalburgWoods/scripts.pory"
	.string "they were after something in\l"
# 379 "data/maps/PetalburgWoods/scripts.pory"
	.string "Rustboro, too?$"
# 380 "data/maps/PetalburgWoods/scripts.pory"

# 381 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ICantBeWastingTime:
# 382 "data/maps/PetalburgWoods/scripts.pory"
	.string "Uh-oh! It's a crisis!\n"
# 383 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't be wasting time!$"
# 384 "data/maps/PetalburgWoods/scripts.pory"

# 385 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YoureLoadedWithItems:
# 386 "data/maps/PetalburgWoods/scripts.pory"
	.string "You're loaded with items.\n"
# 387 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't give you this Great Ball.$"
# 388 "data/maps/PetalburgWoods/scripts.pory"

# 389 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_GoBugPokemonTeam:
# 390 "data/maps/PetalburgWoods/scripts.pory"
	.string "I caught a whole bunch of Pokémon!\p"
# 391 "data/maps/PetalburgWoods/scripts.pory"
	.string "Go, go, go!\n"
# 392 "data/maps/PetalburgWoods/scripts.pory"
	.string "My Bug Pokémon team!$"
# 393 "data/maps/PetalburgWoods/scripts.pory"

# 394 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ICouldntWin:
# 395 "data/maps/PetalburgWoods/scripts.pory"
	.string "I have all these Pokémon,\n"
# 396 "data/maps/PetalburgWoods/scripts.pory"
	.string "but I couldn't win…$"
# 397 "data/maps/PetalburgWoods/scripts.pory"

# 398 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ImOutOfPokeBalls:
# 399 "data/maps/PetalburgWoods/scripts.pory"
	.string "I caught a bunch of Pokémon.\n"
# 400 "data/maps/PetalburgWoods/scripts.pory"
	.string "Now I'm out of Poké Balls.$"
# 401 "data/maps/PetalburgWoods/scripts.pory"

# 402 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_InstantlyPopularWithBugPokemon:
# 403 "data/maps/PetalburgWoods/scripts.pory"
	.string "If you take BUG Pokémon to school,\n"
# 404 "data/maps/PetalburgWoods/scripts.pory"
	.string "you get to be instantly popular!$"
# 405 "data/maps/PetalburgWoods/scripts.pory"

# 406 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_CantBePopularIfILose:
# 407 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't be popular if I lose.$"
# 408 "data/maps/PetalburgWoods/scripts.pory"

# 409 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_PeopleRespectYou:
# 410 "data/maps/PetalburgWoods/scripts.pory"
	.string "If you have a big Bug Pokémon,\n"
# 411 "data/maps/PetalburgWoods/scripts.pory"
	.string "people respect you for it.$"
# 412 "data/maps/PetalburgWoods/scripts.pory"

# 413 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IWantRematch1:
# 414 "data/maps/PetalburgWoods/scripts.pory"
	.string "I want a rematch when my Bug\n"
# 415 "data/maps/PetalburgWoods/scripts.pory"
	.string "Pokémon grow up!\p"
# 416 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'm registering you in my PokéNav!$"
# 417 "data/maps/PetalburgWoods/scripts.pory"

# 418 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IWantRematch2:
# 419 "data/maps/PetalburgWoods/scripts.pory"
	.string "I want a rematch when my Bug \n"
# 420 "data/maps/PetalburgWoods/scripts.pory"
	.string "Pokémon grow up!\p"
# 421 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'm registering you in my PokéNav!$"
# 422 "data/maps/PetalburgWoods/scripts.pory"

# 423 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_MyPokemonHaveGrown:
# 424 "data/maps/PetalburgWoods/scripts.pory"
	.string "My Bug Pokémon have grown.\n"
# 425 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'll be popular again.$"
# 426 "data/maps/PetalburgWoods/scripts.pory"

# 427 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_CantBePopularIfLose:
# 428 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't be popular if I lose.$"
# 429 "data/maps/PetalburgWoods/scripts.pory"

# 430 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IveBeenTrainingHard:
# 431 "data/maps/PetalburgWoods/scripts.pory"
	.string "You get to be popular if you have\n"
# 432 "data/maps/PetalburgWoods/scripts.pory"
	.string "strong Pokémon, right?\l"
# 433 "data/maps/PetalburgWoods/scripts.pory"
	.string "So, I've been training hard.$"
# 434 "data/maps/PetalburgWoods/scripts.pory"

# 435 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_StayOutOfTallGrass:
# 436 "data/maps/PetalburgWoods/scripts.pory"
	.string "Yo, there!\n"
# 437 "data/maps/PetalburgWoods/scripts.pory"
	.string "Your Pokémon doing okay?\p"
# 438 "data/maps/PetalburgWoods/scripts.pory"
	.string "If your Pokémon are weak and you want\n"
# 439 "data/maps/PetalburgWoods/scripts.pory"
	.string "to avoid battles, you should stay out\l"
# 440 "data/maps/PetalburgWoods/scripts.pory"
	.string "of tall grass.$"
# 441 "data/maps/PetalburgWoods/scripts.pory"

# 442 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_HiddenItemsExplanation:
# 443 "data/maps/PetalburgWoods/scripts.pory"
	.string "Sometimes, there are things on the\n"
# 444 "data/maps/PetalburgWoods/scripts.pory"
	.string "ground even if you can't see them.\p"
# 445 "data/maps/PetalburgWoods/scripts.pory"
	.string "That's why I always check where I'm\n"
# 446 "data/maps/PetalburgWoods/scripts.pory"
	.string "walking.$"
# 447 "data/maps/PetalburgWoods/scripts.pory"

# 448 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TryUsingThisItem:
# 449 "data/maps/PetalburgWoods/scripts.pory"
	.string "Oh, neat!\n"
# 450 "data/maps/PetalburgWoods/scripts.pory"
	.string "That's the Badge from Rustboro Gym!\p"
# 451 "data/maps/PetalburgWoods/scripts.pory"
	.string "You must be a trainer.\n"
# 452 "data/maps/PetalburgWoods/scripts.pory"
	.string "You should try using this item.$"
# 453 "data/maps/PetalburgWoods/scripts.pory"

# 454 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_MiracleSeedExplanation:
# 455 "data/maps/PetalburgWoods/scripts.pory"
	.string "It's a Miracle Seed.\n"
# 456 "data/maps/PetalburgWoods/scripts.pory"
	.string "If a Pokémon holds that item, its\l"
# 457 "data/maps/PetalburgWoods/scripts.pory"
	.string "GRASS-type moves become stronger.\p"
# 458 "data/maps/PetalburgWoods/scripts.pory"
	.string "Besides Miracle Seed, I think there are\n"
# 459 "data/maps/PetalburgWoods/scripts.pory"
	.string "other convenient items for Pokémon\l"
# 460 "data/maps/PetalburgWoods/scripts.pory"
	.string "to hold.$"
# 461 "data/maps/PetalburgWoods/scripts.pory"

# 462 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TrainerTipsExperience:
# 463 "data/maps/PetalburgWoods/scripts.pory"
	.string "Trainer Tips\p"
# 464 "data/maps/PetalburgWoods/scripts.pory"
	.string "You can sort the Items in your Bag\n"
# 465 "data/maps/PetalburgWoods/scripts.pory"
	.string "by pressing the “Start” button when\l"
# 466 "data/maps/PetalburgWoods/scripts.pory"
	.string "inside one of the pockets.$"
# 467 "data/maps/PetalburgWoods/scripts.pory"

# 468 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TrainerTipsPP:
# 469 "data/maps/PetalburgWoods/scripts.pory"
	.string "Trainer Tips\p"
# 470 "data/maps/PetalburgWoods/scripts.pory"
	.string "You can register multiple Key Items,\n"
# 471 "data/maps/PetalburgWoods/scripts.pory"
	.string "and then see them all in a list by\l"
# 472 "data/maps/PetalburgWoods/scripts.pory"
	.string "pressing the “Select” button.\p"
# 473 "data/maps/PetalburgWoods/scripts.pory"
	.string "If only one Item is registered, you will\n"
# 474 "data/maps/PetalburgWoods/scripts.pory"
	.string "not be taken to the list, as it will just\l"
# 475 "data/maps/PetalburgWoods/scripts.pory"
	.string "activate instead.$"

PetalburgWoods_EventScript_Sudowoodo::
# 480 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_HIDE_SUDOWOODO, PetalburgWoods_EventScript_SudowoodoKO
# 481 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_TEMP_1, PetalburgWoods_EventScript_SudowoodoObserve
# 482 "data/maps/PetalburgWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 483 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 484 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_0x8004, 1
# 485 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_0x8005, 1
# 486 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_0x8006, 8
# 487 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_0x8007, 3
# 488 "data/maps/PetalburgWoods/scripts.pory"
	checkpartymove MOVE_CUT
# 489 "data/maps/PetalburgWoods/scripts.pory"
	setfieldeffectargument 0, VAR_RESULT
# 490 "data/maps/PetalburgWoods/scripts.pory"
	bufferpartymonnick STR_VAR_1, VAR_RESULT
# 491 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_CutTree, MSGBOX_YESNO
# 492 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgWoods_EventScript_SudowoodoCancelCut
# 493 "data/maps/PetalburgWoods/scripts.pory"
	dofieldeffect FLDEFF_USE_CUT_ON_TREE
# 494 "data/maps/PetalburgWoods/scripts.pory"
	waitstate
# 495 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_MonUsedFieldMoveInterrupted, MSGBOX_DEFAULT
# 496 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 497 "data/maps/PetalburgWoods/scripts.pory"
	playse SE_PIN
# 498 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GARDENIA, Common_Movement_FacePlayer
# 499 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 500 "data/maps/PetalburgWoods/scripts.pory"
	special ShakeCamera
# 501 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_EventScript_Sudowoodo_Text_0
# 502 "data/maps/PetalburgWoods/scripts.pory"
	special SpawnCameraObject
# 503 "data/maps/PetalburgWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PetalburgWoods_Movement_CameraPanToGardenia
# 504 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 505 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GARDENIA, PetalburgWoods_Movement_GardeniaComes
# 506 "data/maps/PetalburgWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PetalburgWoods_Movement_GardeniaComes
# 507 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 508 "data/maps/PetalburgWoods/scripts.pory"
	playse SE_WALL_HIT
# 509 "data/maps/PetalburgWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgWoods_Movement_PlayerBump
# 510 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 511 "data/maps/PetalburgWoods/scripts.pory"
	special RemoveCameraObject
# 512 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_Gardenia
# 513 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
	return


PetalburgWoods_EventScript_SudowoodoObserve::
# 517 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_EventScript_SudowoodoObserve_Text_0, MSGBOX_AUTOCLOSE
	return


PetalburgWoods_EventScript_SudowoodoKO::
# 522 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_EventScript_SudowoodoKO_Text_0, MSGBOX_AUTOCLOSE
	return


PetalburgWoods_Movement_GardeniaComes::
# 527 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 528 "data/maps/PetalburgWoods/scripts.pory"
	jump_special_down
# 529 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 530 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 531 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 532 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 533 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 534 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 535 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 536 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 537 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 538 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 539 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 540 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_up
# 541 "data/maps/PetalburgWoods/scripts.pory"
	step_end
	return


PetalburgWoods_Movement_PlayerBump::
# 545 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_down
# 546 "data/maps/PetalburgWoods/scripts.pory"
	step_end
	return


PetalburgWoods_EventScript_SudowoodoCancelCut::
# 550 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 551 "data/maps/PetalburgWoods/scripts.pory"
	releaseall
	end


PetalburgWoods_Movement_CameraPanToGardenia::
# 556 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 557 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 558 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 559 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 560 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 561 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 562 "data/maps/PetalburgWoods/scripts.pory"
	step_end
	return


PetalburgWoods_EventScript_Gardenia::
# 576 "data/maps/PetalburgWoods/scripts.pory"
	lockall
# 577 "data/maps/PetalburgWoods/scripts.pory"
	applymovement 14, Common_Movement_FacePlayer
# 578 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_defeated TRAINER_GARDENIA, PetalburgWoods_EventScript_GardeniaDefeated
# 579 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_defeated TRAINER_GARDENIA2, PetalburgWoods_EventScript_GardeniaDefeated
# 580 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_TEMP_1, PetalburgWoods_EventScript_GardeniaRequestBattleAgain
# 581 "data/maps/PetalburgWoods/scripts.pory"
	msgbox Gardenia_Greeting, MSGBOX_DEFAULT
# 582 "data/maps/PetalburgWoods/scripts.pory"
	waitmessage
# 583 "data/maps/PetalburgWoods/scripts.pory"
	msgbox Gardenia_WillYouBattleMe, MSGBOX_YESNO
# 584 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_BattleGardeniaPrompt
	end


PetalburgWoods_EventScript_GardeniaRequestBattleAgain::
# 589 "data/maps/PetalburgWoods/scripts.pory"
	msgbox Gardenia_ReadyYet, MSGBOX_YESNO
# 590 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_BattleGardeniaPrompt
	end


PetalburgWoods_EventScript_BattleGardeniaPrompt::
# 595 "data/maps/PetalburgWoods/scripts.pory"
	call_if_eq VAR_RESULT, YES, PetalburgWoods_EventScript_BattleGardenia
# 596 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgWoods_EventScript_DeclineGardeniaBattle
# 597 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
	end


PetalburgWoods_EventScript_DeclineGardeniaBattle::
# 602 "data/maps/PetalburgWoods/scripts.pory"
	setflag FLAG_TEMP_1
# 603 "data/maps/PetalburgWoods/scripts.pory"
	msgbox Gardenia_ComeBackWhenReady, MSGBOX_DEFAULT
# 604 "data/maps/PetalburgWoods/scripts.pory"
	release
	end


PetalburgWoods_EventScript_BattleGardenia::
# 609 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_EventScript_BattleGardenia_Text_0, MSGBOX_DEFAULT
# 610 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, PetalburgWoods_EventScript_BattleGardenia2
# 611 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_GARDENIA, Gardenia_Outro
# 612 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_GardeniaGiveItems
	return


PetalburgWoods_EventScript_BattleGardenia2::
# 617 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_GARDENIA2, Gardenia_Outro
# 618 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_GardeniaGiveItems
	end


PetalburgWoods_EventScript_GardeniaDefeated::
# 625 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PostBattle_Gardenia, MSGBOX_DEFAULT
# 626 "data/maps/PetalburgWoods/scripts.pory"
	releaseall
	end


PetalburgWoods_EventScript_GardeniaGiveItems::
# 631 "data/maps/PetalburgWoods/scripts.pory"
	setflag FLAG_HIDE_SUDOWOODO
# 632 "data/maps/PetalburgWoods/scripts.pory"
	giveitem ITEM_EVIOLITE
# 633 "data/maps/PetalburgWoods/scripts.pory"
	compare VAR_GAME_SETTING_DIFFICULTY_MODE, GAME_SETTING_DIFFICULTY_HARD_MODE
	goto_if_ge PetalburgWoods_EventScript_GardeniaGiveItems_2
# 640 "data/maps/PetalburgWoods/scripts.pory"
	giveitem ITEM_TM_U_TURN
# 641 "data/maps/PetalburgWoods/scripts.pory"
	giveitem ITEM_LEAF_STONE, 10
# 642 "data/maps/PetalburgWoods/scripts.pory"
	msgbox Gardenia_ExplainItems
PetalburgWoods_EventScript_GardeniaGiveItems_1:
# 644 "data/maps/PetalburgWoods/scripts.pory"
	release
	end

PetalburgWoods_EventScript_GardeniaGiveItems_2:
# 635 "data/maps/PetalburgWoods/scripts.pory"
	giveitem ITEM_BOTTLE_CAP
# 636 "data/maps/PetalburgWoods/scripts.pory"
	msgbox Gardenia_ExplainItemsHard
	goto PetalburgWoods_EventScript_GardeniaGiveItems_1


PetalburgWoods_EventScript_Sudowoodo_Text_0:
# 501 "data/maps/PetalburgWoods/scripts.pory"
	.string "DON'T!!!$"

PetalburgWoods_EventScript_SudowoodoObserve_Text_0:
# 517 "data/maps/PetalburgWoods/scripts.pory"
	.string "Despite what Gardenia said, you\n"
	.string "barely notice any difference…$"

PetalburgWoods_EventScript_SudowoodoKO_Text_0:
# 522 "data/maps/PetalburgWoods/scripts.pory"
	.string "Despite it being knocked out, you still\n"
	.string "barely notice any difference…$"

PetalburgWoods_EventScript_BattleGardenia_Text_0:
# 609 "data/maps/PetalburgWoods/scripts.pory"
	.string "Let's go!$"

PetalburgWoods_CutTree::
# 565 "data/maps/PetalburgWoods/scripts.pory"
	.string "This tree looks like it can be\n"
	.string "Cut down!\p"
	.string "Would you like to Cut it?$"

PetalburgWoods_MonUsedFieldMoveInterrupted::
# 571 "data/maps/PetalburgWoods/scripts.pory"
	.string "{STR_VAR_1} used-$"

Gardenia_Greeting::
# 648 "data/maps/PetalburgWoods/scripts.pory"
	.string "What do you think you're doing?!\n"
	.string "You didn't notice this wasn't a normal\l"
	.string "Cut tree? This is my Sudowoodo!\l"
	.string "They love to disguise as trees,\l"
	.string "especially in forests like this one\l"
	.string "where it barely ever rains.\p"
	.string "Hmm… I guess you're still green after\n"
	.string "all. You gotta be more careful with\l"
	.string "nature and not act so recklessly if you\l"
	.string "wanna be a proper trainer, y'know?\p"
	.string "I saw you run by through those\n"
	.string "trees earlier while I was hunting some\l"
	.string "Grass-types, but it seemed clear you\l"
	.string "couldn't cut them. The fact that you\l"
	.string "can now must mean you're a trainer\l"
	.string "who's strong enough to beat Roxanne,\l"
	.string "which means you're a trainer I want to\l"
	.string "face!\p"
	.string "I'm Gardenia by the way, I'm the 2nd Gym\n"
	.string "Leader from the Sinnoh region.\p"
	.string "If you can beat me I'll make it\n"
	.string "worth your while!$"

Gardenia_ReadyYet::
# 673 "data/maps/PetalburgWoods/scripts.pory"
	.string "Want to battle now?$"

Gardenia_ComeBackWhenReady::
# 677 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'll be here looking for some more\n"
	.string "Grass-types in the meantime.$"

Gardenia_ExplainItems::
# 682 "data/maps/PetalburgWoods/scripts.pory"
	.string "That TM contains U-turn, it's very\n"
	.string "useful for getting a hit off while\l"
	.string "switching out a Pokémon.\p"
	.string "I also included some useful\n"
	.string "evolution stones and an Item that\l"
	.string "will be good for a Pokémon you can't\l"
	.string "evolve quite yet.$"

Gardenia_ExplainItemsHard::
# 692 "data/maps/PetalburgWoods/scripts.pory"
	.string "The Eviolite is my favorite Item,\n"
	.string "it's great for Pokémons you can't\l"
	.string "evolve quite yet.$"

Gardenia_WillYouBattleMe::
# 698 "data/maps/PetalburgWoods/scripts.pory"
	.string "How does that sound to you?\n"
	.string "Want to have a battle?$"

Gardenia_Outro::
# 703 "data/maps/PetalburgWoods/scripts.pory"
	.string "Not bad at all! As promised, please take\n"
	.string "these rewards for beating me.$"

PostBattle_Gardenia::
# 709 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hope there are some cool Grass-types in\n"
	.string "this region!$"
