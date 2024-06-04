# 1 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 2 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
.set LOCALID_NURSE, 1
# 3 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
.set LOCALID_GUARD_1, 3
# 4 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
.set LOCALID_GUARD_2, 4
# 5 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
.set LOCALID_EGG_TUTOR, 6
# 6 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 7 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_MapScripts::
# 8 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_PokemonLeague_1F_OnTransition
# 9 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 10 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.byte 0
# 11 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 12 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_OnTransition:
# 13 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setrespawn HEAL_LOCATION_EVER_GRANDE_CITY_POKEMON_LEAGUE
# 14 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setflag FLAG_LANDMARK_POKEMON_LEAGUE
# 15 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call_if_unset FLAG_ENTERED_ELITE_FOUR, EverGrandeCity_PokemonLeague_1F_EventScript_GuardsBlockDoor
# 16 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	end
# 17 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 18 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_EventScript_GuardsBlockDoor::
# 19 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setobjectxyperm LOCALID_GUARD_1, 9, 2
# 20 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setobjectxyperm LOCALID_GUARD_2, 10, 2
# 21 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	return
# 22 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 23 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_EventScript_Nurse::
# 24 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 25 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 26 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmessage
# 27 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitbuttonpress
# 28 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	release
# 29 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	end
# 30 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 31 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_EventScript_Clerk::
# 32 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	lock
# 33 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	faceplayer
# 34 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	message gText_HowMayIServeYou
# 35 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmessage
# 36 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	pokemart EverGrandeCity_PokemonLeague_1F_Pokemart
# 37 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 38 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	release
# 39 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	end
# 40 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 41 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.align 2
# 42 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_Pokemart:
# 43 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 44 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 45 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_MAX_POTION
# 46 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 47 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 48 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_REVIVE
# 49 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 50 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_NONE
# 51 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	release
# 52 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	end
# 53 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 54 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
@ The door guards only check for FLAG_BADGE06_GET because Winonas badge is the only one that can be skipped
# 55 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
@ Its assumed the player has the remaining badges
# 56 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_EventScript_DoorGuard::
# 57 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	lockall
# 58 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_set FLAG_ENTERED_ELITE_FOUR, EverGrandeCity_PokemonLeague_1F_EventScript_GoForth
# 59 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 60 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call_if_ge VAR_TEMP_0, 11, EverGrandeCity_PokemonLeague_1F_EventScript_PlayerMoveToFrontFromRight
# 61 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call_if_le VAR_TEMP_0, 8, EverGrandeCity_PokemonLeague_1F_EventScript_PlayerMoveToFrontFromLeft
# 62 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	message EverGrandeCity_PokemonLeague_1F_Text_MustHaveAllGymBadges
# 63 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmessage
# 64 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	delay 120
# 65 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_unset FLAG_BADGE06_GET, EverGrandeCity_PokemonLeague_1F_EventScript_NotAllBadges
# 66 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	closemessage
# 67 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	applymovement LOCALID_GUARD_1, EverGrandeCity_PokemonLeague_1F_Movement_LeftGuardOutOfWay
# 68 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	applymovement LOCALID_GUARD_2, EverGrandeCity_PokemonLeague_1F_Movement_RightGuardOutOfWay
# 69 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmovement 0
# 70 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	delay 10
# 71 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 72 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	message EverGrandeCity_PokemonLeague_1F_Text_GoForth
# 73 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmessage
# 74 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitfanfare
# 75 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	closemessage
# 76 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	copyobjectxytoperm LOCALID_GUARD_1
# 77 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	copyobjectxytoperm LOCALID_GUARD_2
# 78 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setflag FLAG_ENTERED_ELITE_FOUR
# 79 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	releaseall
# 80 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	end
# 81 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 82 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_EventScript_PlayerMoveToFrontFromRight::
# 83 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_PokemonLeague_1F_Movement_MoveToFrontFromRight
# 84 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmovement 0
# 85 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	return
# 86 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 87 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_EventScript_PlayerMoveToFrontFromLeft::
# 88 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_PokemonLeague_1F_Movement_MoveToFrontFromLeft
# 89 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmovement 0
# 90 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	return
# 91 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 92 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_EventScript_NotAllBadges::
# 93 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	playse SE_FAILURE
# 94 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonLeague_1F_Text_HaventObtainedAllBadges, MSGBOX_DEFAULT
# 95 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	releaseall
# 96 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	end
# 97 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 98 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_EventScript_GoForth::
# 99 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
# 100 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmovement 0
# 101 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonLeague_1F_Text_GoForth, MSGBOX_DEFAULT
# 102 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	closemessage
# 103 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 104 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmovement 0
# 105 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	releaseall
# 106 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	end
# 107 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 108 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_Movement_MoveToFrontFromRight:
# 109 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	walk_down
# 110 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	walk_left
# 111 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	walk_in_place_faster_up
# 112 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	step_end
# 113 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 114 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_Movement_MoveToFrontFromLeft:
# 115 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	walk_down
# 116 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	walk_right
# 117 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	walk_in_place_faster_up
# 118 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	step_end
# 119 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 120 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_Movement_LeftGuardOutOfWay:
# 121 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	walk_left
# 122 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	walk_in_place_faster_down
# 123 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	step_end
# 124 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 125 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_Movement_RightGuardOutOfWay:
# 126 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	walk_right
# 127 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	walk_in_place_faster_down
# 128 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	step_end
# 129 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 130 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_EggTutor_EventScript::
# 131 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	lockall
# 132 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setflag FLAG_EGG_MOVE_TUTOR
# 133 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	applymovement LOCALID_EGG_TUTOR, Common_Movement_FacePlayer
# 134 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmovement 0
# 135 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonLeague_1F_EggTutor_Text_ImTheEggTutor, MSGBOX_DEFAULT
# 136 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EggTutor_EventScript_AskTeachMove
# 137 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	clearflag FLAG_EGG_MOVE_TUTOR
# 138 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	end
# 139 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 140 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 141 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_EggTutor_EventScript_AskTeachMove::
# 142 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonLeague_1F_EggTutor_Text_WantMeToTeachMove, MSGBOX_YESNO
# 143 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	switch VAR_RESULT
# 144 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	case NO, EverGrandeCity_PokemonLeague_1F_EggTutor_EventScript_ComeBackWithHeartScale
# 145 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EggTutor_EventScript_ChooseMon
# 146 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	clearflag FLAG_EGG_MOVE_TUTOR
# 147 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	end
# 148 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 149 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_EggTutor_EventScript_ChooseMon::
# 150 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonLeague_1F_EggTutor_Text_TutorWhichMon, MSGBOX_DEFAULT
# 151 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	special ChooseMonForMoveRelearner
# 152 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitstate
# 153 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, EverGrandeCity_PokemonLeague_1F_EggTutor_EventScript_ComeBackWithHeartScale
# 154 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	special IsSelectedMonEgg
# 155 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, EverGrandeCity_PokemonLeague_1F_EggTutor_EventScript_CantTeachEgg
# 156 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_eq VAR_0x8005, 0, EverGrandeCity_PokemonLeague_1F_EggTutor_EventScript_NoMoveToTeachMon
# 157 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EggTutor_EventScript_ChooseMove
# 158 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	end
# 159 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 160 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_EggTutor_EventScript_ChooseMove::
# 161 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonLeague_1F_EggTutor_Text_TeachWhichMove, MSGBOX_DEFAULT
# 162 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	special TeachMoveRelearnerMove
# 163 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitstate
# 164 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_eq VAR_0x8004, 0, EverGrandeCity_PokemonLeague_1F_EggTutor_EventScript_ChooseMon
# 165 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonLeague_1F_EggTutor_Text_ThereYouGo, MSGBOX_DEFAULT
# 166 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EggTutor_EventScript_ComeBackWithHeartScale
# 167 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	end
# 168 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 169 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_EggTutor_EventScript_NoMoveToTeachMon::
# 170 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonLeague_1F_EggTutor_Text_DontHaveMoveToTeachPokemon, MSGBOX_DEFAULT
# 171 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EggTutor_EventScript_ChooseMon
# 172 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	end
# 173 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 174 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_EggTutor_EventScript_CantTeachEgg::
# 175 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonLeague_1F_EggTutor_Text_CantTeachEgg, MSGBOX_DEFAULT
# 176 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EggTutor_EventScript_ChooseMon
# 177 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	end
# 178 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 179 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_EggTutor_EventScript_ComeBackWithHeartScale::
# 180 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonLeague_1F_EggTutor_Text_ComeBack, MSGBOX_DEFAULT
# 181 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	clearflag FLAG_EGG_MOVE_TUTOR
# 182 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	releaseall
# 183 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	end
# 184 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 185 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_EventScript_WomanTrolling::
# 186 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonLeague_1F_Text_Trolling, MSGBOX_NPC
# 187 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	end
# 188 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 189 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_Text_Trolling:
# 190 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Oh hey, are you here to take on the\n"
# 191 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Pokémon League?\p"
# 192 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Well today I saw Sidney with a Galarian\n"
# 193 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Moltres.\p"
# 194 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "What, you want to know more than that?\p"
# 195 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "What am I, an NPC written by the\n"
# 196 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "creator of this game who knows exactly\l"
# 197 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "which team will be there? Sheesh.$"
# 198 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 199 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 200 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_EggTutor_Text_ImTheEggTutor:
# 201 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Hello, I'm an Egg Move Tutor. I can\n"
# 202 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "teach your Pokémon any Egg Moves they\l"
# 203 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "could possibly learn.$"
# 204 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 205 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_EggTutor_Text_WantMeToTeachMove:
# 206 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Would you like me to teach one of your\n"
# 207 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Pokémon an Egg Move?$"
# 208 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 209 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_EggTutor_Text_TutorWhichMon:
# 210 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Which Pokémon?$"
# 211 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 212 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_EggTutor_Text_TeachWhichMove:
# 213 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Which move should I teach?$"
# 214 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 215 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_EggTutor_Text_DontHaveMoveToTeachPokemon:
# 216 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "That Pokémon doesn't have any  Egg\n"
# 217 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Moves.$"
# 218 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 219 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_EggTutor_Text_ThereYouGo:
# 220 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "There you go.$"
# 221 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 222 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_EggTutor_Text_ComeBack:
# 223 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Come back if you want your Pokémon to\n"
# 224 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "learn more Egg Moves.$"
# 225 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 226 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_EggTutor_Text_CantTeachEgg:
# 227 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Just because I'm an Egg Move tutor\n"
# 228 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "doesn't mean I can teach moves to an\l"
# 229 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Egg!$"
# 230 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 231 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_Text_MustHaveAllGymBadges:
# 232 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Beyond this point, only those TRAINERS\n"
# 233 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "who have collected all the GYM BADGES\l"
# 234 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "are permitted to enter.\p"
# 235 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "TRAINER, let us confirm that you have\n"
# 236 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "all the GYM BADGES.$"
# 237 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 238 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_Text_HaventObtainedAllBadges:
# 239 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "You haven't obtained all the BADGES.\p"
# 240 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "If you're bound for the POKéMON\n"
# 241 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "LEAGUE, you must return with them.$"
# 242 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 243 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_Text_GoForth:
# 244 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "TRAINER! Believe in yourself and your\n"
# 245 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "POKéMON, and go forth!$"
