# 1 "data/maps/FortreeCity_Gym/scripts.pory"

# 2 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_MapScripts::
# 3 "data/maps/FortreeCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FortreeCity_Gym_OnTransition
# 4 "data/maps/FortreeCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, FortreeCity_Gym_OnWarp
# 5 "data/maps/FortreeCity_Gym/scripts.pory"
	.byte 0
# 6 "data/maps/FortreeCity_Gym/scripts.pory"

# 7 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_OnTransition:
# 8 "data/maps/FortreeCity_Gym/scripts.pory"
	special RotatingGate_InitPuzzle
# 9 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER @ Hide follower bc of rotating gates
# 10 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 11 "data/maps/FortreeCity_Gym/scripts.pory"

# 12 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_OnWarp:
# 13 "data/maps/FortreeCity_Gym/scripts.pory"
	map_script_2 VAR_TEMP_0, VAR_TEMP_0, FortreeCity_Gym_EventScript_InitRotatingGates
# 14 "data/maps/FortreeCity_Gym/scripts.pory"
	.2byte 0
# 15 "data/maps/FortreeCity_Gym/scripts.pory"

# 16 "data/maps/FortreeCity_Gym/scripts.pory"
@ NOTE: This rotating gate puzzle makes use of VAR_TEMP_0 - VAR_TEMP_3
# 17 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_InitRotatingGates::
# 18 "data/maps/FortreeCity_Gym/scripts.pory"
	special RotatingGate_InitPuzzleAndGraphics
# 19 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 20 "data/maps/FortreeCity_Gym/scripts.pory"

# 21 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Winona::
# 22 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_WINONA_1, FortreeCity_Gym_Text_WinonaIntro, FortreeCity_Gym_Text_WinonaDefeat, FortreeCity_Gym_EventScript_WinonaDefeated, NO_MUSIC
# 23 "data/maps/FortreeCity_Gym/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 24 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, FortreeCity_Gym_EventScript_WinonaRematch
# 25 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_BRAVE_BIRD, FortreeCity_Gym_EventScript_GiveAerialAce2
# 26 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_WinonaPostBattle, MSGBOX_DEFAULT
# 27 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 28 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 29 "data/maps/FortreeCity_Gym/scripts.pory"

# 30 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_WinonaDefeated::
# 31 "data/maps/FortreeCity_Gym/scripts.pory"
	message FortreeCity_Gym_Text_ReceivedFeatherBadge
# 32 "data/maps/FortreeCity_Gym/scripts.pory"
	waitmessage
# 33 "data/maps/FortreeCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 34 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_ExplainFeatherBadgeTakeThis, MSGBOX_DEFAULT
# 35 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_FORTREE_GYM
# 36 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_BADGE06_GET
# 37 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_HIDE_MAUVILLE_GYM_WATTSON
# 38 "data/maps/FortreeCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MAUVILLE_CITY_WATTSON
# 39 "data/maps/FortreeCity_Gym/scripts.pory"
	setvar VAR_0x8008, 6
# 40 "data/maps/FortreeCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 41 "data/maps/FortreeCity_Gym/scripts.pory"
	call FortreeCity_Gym_EventScript_GiveAerialAce
# 42 "data/maps/FortreeCity_Gym/scripts.pory"
	closemessage
# 43 "data/maps/FortreeCity_Gym/scripts.pory"
	delay 30
# 44 "data/maps/FortreeCity_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 45 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_RegisteredWinona, MSGBOX_DEFAULT
# 46 "data/maps/FortreeCity_Gym/scripts.pory"
	waitfanfare
# 47 "data/maps/FortreeCity_Gym/scripts.pory"
	closemessage
# 48 "data/maps/FortreeCity_Gym/scripts.pory"
	delay 30
# 49 "data/maps/FortreeCity_Gym/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 50 "data/maps/FortreeCity_Gym/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 51 "data/maps/FortreeCity_Gym/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 52 "data/maps/FortreeCity_Gym/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 53 "data/maps/FortreeCity_Gym/scripts.pory"
	special ShakeCamera
# 54 "data/maps/FortreeCity_Gym/scripts.pory"
	waitstate
# 55 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_WhatOnEarth, MSGBOX_DEFAULT
# 56 "data/maps/FortreeCity_Gym/scripts.pory"
	closemessage
# 57 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_WINONA_MATCH_CALL
# 58 "data/maps/FortreeCity_Gym/scripts.pory"
	setvar VAR_SCOTT_FORTREE_CALL_STEP_COUNTER, 0
# 59 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_SCOTT_CALL_FORTREE_GYM
# 60 "data/maps/FortreeCity_Gym/scripts.pory"
	delay 30
# 61 "data/maps/FortreeCity_Gym/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 62 "data/maps/FortreeCity_Gym/scripts.pory"
	specialvar VAR_0x8006, GetLevelCapForText
# 63 "data/maps/FortreeCity_Gym/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_0x8006
# 64 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox LevelCapIncreasedTo, MSGBOX_DEFAULT
# 65 "data/maps/FortreeCity_Gym/scripts.pory"
	waitfanfare
# 66 "data/maps/FortreeCity_Gym/scripts.pory"
	closemessage
# 67 "data/maps/FortreeCity_Gym/scripts.pory"
	delay 30
# 68 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 69 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 70 "data/maps/FortreeCity_Gym/scripts.pory"

# 71 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GiveAerialAce2::
# 72 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_TM_BRAVE_BIRD
# 73 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_TM_ACROBATICS
# 74 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_TM_HURRICANE
# 75 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_TM_TAILWIND
# 76 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_ALTARIANITE
# 77 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 78 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_ExplainAerialAce, MSGBOX_DEFAULT
# 79 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_BRAVE_BIRD
# 80 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 81 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 82 "data/maps/FortreeCity_Gym/scripts.pory"

# 83 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GiveAerialAce::
# 84 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_TM_BRAVE_BIRD
# 85 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_TM_ACROBATICS
# 86 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_TM_HURRICANE
# 87 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_TM_TAILWIND
# 88 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_ALTARIANITE
# 89 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 90 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_ExplainAerialAce, MSGBOX_DEFAULT
# 91 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_BRAVE_BIRD
# 92 "data/maps/FortreeCity_Gym/scripts.pory"
	return
# 93 "data/maps/FortreeCity_Gym/scripts.pory"

# 94 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_WinonaRematch::
# 95 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_WINONA_1, FortreeCity_Gym_Text_WinonaPreRematch, FortreeCity_Gym_Text_WinonaRematchDefeat, FortreeCity_Gym_Text_WinonaRematchNeedTwoMons
# 96 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_WinonaPostRematch, MSGBOX_AUTOCLOSE
# 97 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 98 "data/maps/FortreeCity_Gym/scripts.pory"

# 99 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Jared::
# 100 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JARED, FortreeCity_Gym_Text_JaredIntro, FortreeCity_Gym_Text_JaredDefeat
# 101 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_JaredPostBattle, MSGBOX_AUTOCLOSE
# 102 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 103 "data/maps/FortreeCity_Gym/scripts.pory"

# 104 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Edwardo::
# 105 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_EDWARDO, FortreeCity_Gym_Text_EdwardoIntro, FortreeCity_Gym_Text_EdwardoDefeat
# 106 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_EdwardoPostBattle, MSGBOX_AUTOCLOSE
# 107 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 108 "data/maps/FortreeCity_Gym/scripts.pory"

# 109 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Flint::
# 110 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_FLINT, FortreeCity_Gym_Text_FlintIntro, FortreeCity_Gym_Text_FlintDefeat
# 111 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_FlintPostBattle, MSGBOX_AUTOCLOSE
# 112 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 113 "data/maps/FortreeCity_Gym/scripts.pory"

# 114 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Ashley::
# 115 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ASHLEY, FortreeCity_Gym_Text_AshleyIntro, FortreeCity_Gym_Text_AshleyDefeat
# 116 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_AshleyPostBattle, MSGBOX_AUTOCLOSE
# 117 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 118 "data/maps/FortreeCity_Gym/scripts.pory"

# 119 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Humberto::
# 120 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_HUMBERTO, FortreeCity_Gym_Text_HumbertoIntro, FortreeCity_Gym_Text_HumbertoDefeat
# 121 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_HumbertoPostBattle, MSGBOX_AUTOCLOSE
# 122 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 123 "data/maps/FortreeCity_Gym/scripts.pory"

# 124 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Darius::
# 125 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_DARIUS, FortreeCity_Gym_Text_DariusIntro, FortreeCity_Gym_Text_DariusDefeat
# 126 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_DariusPostBattle, MSGBOX_AUTOCLOSE
# 127 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 128 "data/maps/FortreeCity_Gym/scripts.pory"

# 129 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GymGuide::
# 130 "data/maps/FortreeCity_Gym/scripts.pory"
	lock
# 131 "data/maps/FortreeCity_Gym/scripts.pory"
	faceplayer
# 132 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_FORTREE_GYM, FortreeCity_Gym_EventScript_GymGuidePostVictory
# 133 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 134 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 135 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 136 "data/maps/FortreeCity_Gym/scripts.pory"

# 137 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GymGuidePostVictory::
# 138 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 139 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 140 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 141 "data/maps/FortreeCity_Gym/scripts.pory"

# 142 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_LeftGymStatue::
# 143 "data/maps/FortreeCity_Gym/scripts.pory"
	lockall
# 144 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, FortreeCity_Gym_EventScript_GymStatueCertified
# 145 "data/maps/FortreeCity_Gym/scripts.pory"
	goto FortreeCity_Gym_EventScript_GymStatue
# 146 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 147 "data/maps/FortreeCity_Gym/scripts.pory"

# 148 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_RightGymStatue::
# 149 "data/maps/FortreeCity_Gym/scripts.pory"
	lockall
# 150 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, FortreeCity_Gym_EventScript_GymStatueCertified
# 151 "data/maps/FortreeCity_Gym/scripts.pory"
	goto FortreeCity_Gym_EventScript_GymStatue
# 152 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 153 "data/maps/FortreeCity_Gym/scripts.pory"

# 154 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GymStatueCertified::
# 155 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 156 "data/maps/FortreeCity_Gym/scripts.pory"
	releaseall
# 157 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 158 "data/maps/FortreeCity_Gym/scripts.pory"

# 159 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GymStatue::
# 160 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 161 "data/maps/FortreeCity_Gym/scripts.pory"
	releaseall
# 162 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 163 "data/maps/FortreeCity_Gym/scripts.pory"

# 164 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Altaria::
# 165 "data/maps/FortreeCity_Gym/scripts.pory"
	lock
# 166 "data/maps/FortreeCity_Gym/scripts.pory"
	faceplayer
# 167 "data/maps/FortreeCity_Gym/scripts.pory"
	waitse
# 168 "data/maps/FortreeCity_Gym/scripts.pory"
	playmoncry SPECIES_ALTARIA, CRY_MODE_NORMAL
# 169 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_Altaria, MSGBOX_DEFAULT
# 170 "data/maps/FortreeCity_Gym/scripts.pory"
	waitmoncry
# 171 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 172 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 173 "data/maps/FortreeCity_Gym/scripts.pory"

# 174 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_GymGuideAdvice:
# 175 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Yo, how's it going, Champion-\n"
# 176 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "bound {PLAYER}?\p"
# 177 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Fortree GYM LEADER Winona is\n"
# 178 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "a master of FLYING-type Pokémon.\p"
# 179 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "She's waiting at the back of this GYM,\n"
# 180 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "behind the rotating doors.\p"
# 181 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "She's waiting for new challengers\n"
# 182 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "who are trying to take wing!\p"
# 183 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Okay, go for it!$"
# 184 "data/maps/FortreeCity_Gym/scripts.pory"

# 185 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_GymGuidePostVictory:
# 186 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You did it!\n"
# 187 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You've achieved liftoff!$"
# 188 "data/maps/FortreeCity_Gym/scripts.pory"

# 189 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_JaredIntro:
# 190 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Behold the elegant battle style of\n"
# 191 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Bird Pokémon!$"
# 192 "data/maps/FortreeCity_Gym/scripts.pory"

# 193 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_JaredDefeat:
# 194 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You…\n"
# 195 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You're strong…$"
# 196 "data/maps/FortreeCity_Gym/scripts.pory"

# 197 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_JaredPostBattle:
# 198 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "A TRAINER has to be smart to keep\n"
# 199 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "up with unexpected turns of events.\p"
# 200 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Do you have the smarts to get to\n"
# 201 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "our LEADER?$"
# 202 "data/maps/FortreeCity_Gym/scripts.pory"

# 203 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_EdwardoIntro:
# 204 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "The lovers of Bird Pokémon aspire\n"
# 205 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "to join this GYM.\p"
# 206 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "As a member of the FORTREE GYM,\n"
# 207 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I'm not allowed to lose!$"
# 208 "data/maps/FortreeCity_Gym/scripts.pory"

# 209 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_EdwardoDefeat:
# 210 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "It was too much of a load for me\n"
# 211 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "to bear…$"
# 212 "data/maps/FortreeCity_Gym/scripts.pory"

# 213 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_EdwardoPostBattle:
# 214 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "The world is huge, and there are\n"
# 215 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "countless tough TRAINERS.\p"
# 216 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I'm going to keep training and make\n"
# 217 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "myself even stronger.$"
# 218 "data/maps/FortreeCity_Gym/scripts.pory"

# 219 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_FlintIntro:
# 220 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "There's no need for Winona, our GYM\n"
# 221 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "LEADER, to deal with you!\p"
# 222 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I'm plenty good enough for you!$"
# 223 "data/maps/FortreeCity_Gym/scripts.pory"

# 224 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_FlintDefeat:
# 225 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Winona, I…\n"
# 226 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I lost!$"
# 227 "data/maps/FortreeCity_Gym/scripts.pory"

# 228 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_FlintPostBattle:
# 229 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Winona is cute and she's strong.\n"
# 230 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "She's the ultimate LEADER!\p"
# 231 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Blush…$"
# 232 "data/maps/FortreeCity_Gym/scripts.pory"

# 233 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_AshleyIntro:
# 234 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Winona taught me personally!\n"
# 235 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You can't beat me easily!$"
# 236 "data/maps/FortreeCity_Gym/scripts.pory"

# 237 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_AshleyDefeat:
# 238 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I was beaten…$"
# 239 "data/maps/FortreeCity_Gym/scripts.pory"

# 240 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_AshleyPostBattle:
# 241 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Thanks to Winona, the people of\n"
# 242 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Fortree can live without fear.$"
# 243 "data/maps/FortreeCity_Gym/scripts.pory"

# 244 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_HumbertoIntro:
# 245 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "When Winona takes to battle, her face\n"
# 246 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "shines with beautiful determination…\p"
# 247 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I'm not letting you witness that\n"
# 248 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "lovely sight!$"
# 249 "data/maps/FortreeCity_Gym/scripts.pory"

# 250 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_HumbertoDefeat:
# 251 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Urk!\n"
# 252 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I couldn't stop you.$"
# 253 "data/maps/FortreeCity_Gym/scripts.pory"

# 254 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_HumbertoPostBattle:
# 255 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You'd better watch it!\n"
# 256 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Don't get distracted staring at Winona\l"
# 257 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "or you'll go crashing down in a heap!$"
# 258 "data/maps/FortreeCity_Gym/scripts.pory"

# 259 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_DariusIntro:
# 260 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You'd better know that there are all\n"
# 261 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "sorts of FLYING-type Pokémon.\p"
# 262 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You do know that, right?$"
# 263 "data/maps/FortreeCity_Gym/scripts.pory"

# 264 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_DariusDefeat:
# 265 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You seem to know your stuff!$"
# 266 "data/maps/FortreeCity_Gym/scripts.pory"

# 267 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_DariusPostBattle:
# 268 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Sure, you beat me all right.\n"
# 269 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "But you'd better watch it! Our LEADER\l"
# 270 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Winona's Pokémon are all business.$"
# 271 "data/maps/FortreeCity_Gym/scripts.pory"

# 272 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaIntro:
# 273 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I am Winona. I am the Leader of\n"
# 274 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "the Fortree Pokémon Gym.\p"
# 275 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I have become one with Bird Pokémon\n"
# 276 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "and have soared the skies…\p"
# 277 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "However, I've been taken down by Rock,\n"
# 278 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Ice, and Electric attacks far too many\l"
# 279 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "times.\p"
# 280 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I had no choice but to adapt my\n"
# 281 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "graceful style into one that is even\l"
# 282 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "more elegant!\p"
# 283 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Witness the beautiful choreography\n"
# 284 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "of my Pokémon and I!$"
# 285 "data/maps/FortreeCity_Gym/scripts.pory"

# 286 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaDefeat:
# 287 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Never before have I seen a trainer\n"
# 288 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "command Pokémon with more grace\l"
# 289 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "than I…\p"
# 290 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "In recognition of your prowess,\n"
# 291 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I present to you this Gym Badge.$"
# 292 "data/maps/FortreeCity_Gym/scripts.pory"

# 293 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_ReceivedFeatherBadge:
# 294 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "{PLAYER} received the Feather Badge\n"
# 295 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "from Winona.$"
# 296 "data/maps/FortreeCity_Gym/scripts.pory"

# 297 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_ExplainFeatherBadgeTakeThis:
# 298 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "And these…\n"
# 299 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "These are gifts from me.$"
# 300 "data/maps/FortreeCity_Gym/scripts.pory"

# 301 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_ExplainAerialAce:
# 302 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Those are some of the most powerful\n"
# 303 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Flying-type moves that I know, as well\l"
# 304 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "as my favorite Mega Stone.\p"
# 305 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Use them all wisely, their power\n"
# 306 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "is devastating.\p"
# 307 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "… … … … … …$"
# 308 "data/maps/FortreeCity_Gym/scripts.pory"

# 309 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_RegisteredWinona:
# 310 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Registered Gym Leader Winona\n"
# 311 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "in the PokéNav.$"
# 312 "data/maps/FortreeCity_Gym/scripts.pory"

# 313 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WhatOnEarth:
# 314 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Wh- what on earth was that?\p"
# 315 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "… … … … … …\p"
# 316 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Be careful going back out there,\n"
# 317 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "{PLAYER}.\p"
# 318 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I am not sure what that earthquake\n"
# 319 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "was about, but who knows, maybe\l"
# 320 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "someone will call you and explain what's\l"
# 321 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "going on.$"
# 322 "data/maps/FortreeCity_Gym/scripts.pory"

# 323 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaPostBattle:
# 324 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Though I fell to you, I will remain\n"
# 325 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "devoted to my Pokémon.$"
# 326 "data/maps/FortreeCity_Gym/scripts.pory"

# 327 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_GymStatue:
# 328 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Fortree City Pokémon Gym$"
# 329 "data/maps/FortreeCity_Gym/scripts.pory"

# 330 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_GymStatueCertified:
# 331 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Fortree City Pokémon Gym\p"
# 332 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Winona'S Certified Trainers:\n"
# 333 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 334 "data/maps/FortreeCity_Gym/scripts.pory"

# 335 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaPreRematch:
# 336 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Winona: We humans can never escape\n"
# 337 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "gravity's pull on the ground.\p"
# 338 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "But by striving for excellence,\n"
# 339 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "we have the power to soar!\p"
# 340 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You have scaled the pinnacle as\n"
# 341 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "the reigning Champion.\p"
# 342 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Please, allow me to see your power\n"
# 343 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "at full flight!$"
# 344 "data/maps/FortreeCity_Gym/scripts.pory"

# 345 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaRematchDefeat:
# 346 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I failed to reach your height again…$"
# 347 "data/maps/FortreeCity_Gym/scripts.pory"

# 348 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaPostRematch:
# 349 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Winona: Even though I have lost,\n"
# 350 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "the wings of my heart remain unbroken.\p"
# 351 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I can rise and soar again and\n"
# 352 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "yet again.\p"
# 353 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I am convinced of it!$"
# 354 "data/maps/FortreeCity_Gym/scripts.pory"

# 355 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaRematchNeedTwoMons:
# 356 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Winona: We humans can never escape\n"
# 357 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "gravity's pull on the ground.\p"
# 358 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "But by striving for excellence,\n"
# 359 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "we have the power to soar!\p"
# 360 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You have scaled the pinnacle as\n"
# 361 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "the reigning Champion.\p"
# 362 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Please, allow me to see your power\n"
# 363 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "at full flight!\p"
# 364 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Oh, no… Do you have but one\n"
# 365 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Pokémon with you?\p"
# 366 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Please return with two Pokémon\n"
# 367 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "at the very least.$"
# 368 "data/maps/FortreeCity_Gym/scripts.pory"

# 369 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_Altaria:
# 370 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Altaria: Eeeiiiyeh!$"
