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
	addvar VAR_IV_PERFECTER_COUNTER, 5
# 38 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_HIDE_MAUVILLE_GYM_WATTSON
# 39 "data/maps/FortreeCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MAUVILLE_CITY_WATTSON
# 40 "data/maps/FortreeCity_Gym/scripts.pory"
	setvar VAR_0x8008, 6
# 41 "data/maps/FortreeCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 42 "data/maps/FortreeCity_Gym/scripts.pory"
	call FortreeCity_Gym_EventScript_GiveAerialAce
# 43 "data/maps/FortreeCity_Gym/scripts.pory"
	closemessage
# 44 "data/maps/FortreeCity_Gym/scripts.pory"
	delay 30
# 45 "data/maps/FortreeCity_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 46 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_RegisteredWinona, MSGBOX_DEFAULT
# 47 "data/maps/FortreeCity_Gym/scripts.pory"
	waitfanfare
# 48 "data/maps/FortreeCity_Gym/scripts.pory"
	closemessage
# 49 "data/maps/FortreeCity_Gym/scripts.pory"
	delay 30
# 50 "data/maps/FortreeCity_Gym/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 51 "data/maps/FortreeCity_Gym/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 52 "data/maps/FortreeCity_Gym/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 53 "data/maps/FortreeCity_Gym/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 54 "data/maps/FortreeCity_Gym/scripts.pory"
	special ShakeCamera
# 55 "data/maps/FortreeCity_Gym/scripts.pory"
	waitstate
# 56 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_WhatOnEarth, MSGBOX_DEFAULT
# 57 "data/maps/FortreeCity_Gym/scripts.pory"
	closemessage
# 58 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_WINONA_MATCH_CALL
# 59 "data/maps/FortreeCity_Gym/scripts.pory"
	setvar VAR_BEAT_WINONA, 1
# 60 "data/maps/FortreeCity_Gym/scripts.pory"
	setvar VAR_SCOTT_FORTREE_CALL_STEP_COUNTER, 0
# 61 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_SCOTT_CALL_FORTREE_GYM
# 62 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 63 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 64 "data/maps/FortreeCity_Gym/scripts.pory"

# 65 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GiveAerialAce2::
# 66 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_TM_BRAVE_BIRD
# 67 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_TM_ACROBATICS
# 68 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_TM_HURRICANE
# 69 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_TM_TAILWIND
# 70 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_ALTARIANITE
# 71 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 72 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_ExplainAerialAce, MSGBOX_DEFAULT
# 73 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_BRAVE_BIRD
# 74 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 75 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 76 "data/maps/FortreeCity_Gym/scripts.pory"

# 77 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GiveAerialAce::
# 78 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_TM_BRAVE_BIRD
# 79 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_TM_HURRICANE
# 80 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_TM_TAILWIND
# 81 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_ALTARIANITE
# 82 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 83 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_ExplainAerialAce, MSGBOX_DEFAULT
# 84 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_BRAVE_BIRD
# 85 "data/maps/FortreeCity_Gym/scripts.pory"
	return
# 86 "data/maps/FortreeCity_Gym/scripts.pory"

# 87 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_WinonaRematch::
# 88 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_WINONA_1, FortreeCity_Gym_Text_WinonaPreRematch, FortreeCity_Gym_Text_WinonaRematchDefeat, FortreeCity_Gym_Text_WinonaRematchNeedTwoMons
# 89 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_WinonaPostRematch, MSGBOX_AUTOCLOSE
# 90 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 91 "data/maps/FortreeCity_Gym/scripts.pory"

# 92 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Jared::
# 93 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JARED, FortreeCity_Gym_Text_JaredIntro, FortreeCity_Gym_Text_JaredDefeat
# 94 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_JaredPostBattle, MSGBOX_AUTOCLOSE
# 95 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 96 "data/maps/FortreeCity_Gym/scripts.pory"

# 97 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Edwardo::
# 98 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_EDWARDO, FortreeCity_Gym_Text_EdwardoIntro, FortreeCity_Gym_Text_EdwardoDefeat
# 99 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_EdwardoPostBattle, MSGBOX_AUTOCLOSE
# 100 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 101 "data/maps/FortreeCity_Gym/scripts.pory"

# 102 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Flint::
# 103 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_FLINT, FortreeCity_Gym_Text_FlintIntro, FortreeCity_Gym_Text_FlintDefeat
# 104 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_FlintPostBattle, MSGBOX_AUTOCLOSE
# 105 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 106 "data/maps/FortreeCity_Gym/scripts.pory"

# 107 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Ashley::
# 108 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ASHLEY, FortreeCity_Gym_Text_AshleyIntro, FortreeCity_Gym_Text_AshleyDefeat
# 109 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_AshleyPostBattle, MSGBOX_AUTOCLOSE
# 110 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 111 "data/maps/FortreeCity_Gym/scripts.pory"

# 112 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Humberto::
# 113 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_HUMBERTO, FortreeCity_Gym_Text_HumbertoIntro, FortreeCity_Gym_Text_HumbertoDefeat
# 114 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_HumbertoPostBattle, MSGBOX_AUTOCLOSE
# 115 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 116 "data/maps/FortreeCity_Gym/scripts.pory"

# 117 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Darius::
# 118 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_DARIUS, FortreeCity_Gym_Text_DariusIntro, FortreeCity_Gym_Text_DariusDefeat
# 119 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_DariusPostBattle, MSGBOX_AUTOCLOSE
# 120 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 121 "data/maps/FortreeCity_Gym/scripts.pory"

# 122 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GymGuide::
# 123 "data/maps/FortreeCity_Gym/scripts.pory"
	lock
# 124 "data/maps/FortreeCity_Gym/scripts.pory"
	faceplayer
# 125 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_FORTREE_GYM, FortreeCity_Gym_EventScript_GymGuidePostVictory
# 126 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 127 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 128 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 129 "data/maps/FortreeCity_Gym/scripts.pory"

# 130 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GymGuidePostVictory::
# 131 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 132 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 133 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 134 "data/maps/FortreeCity_Gym/scripts.pory"

# 135 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_LeftGymStatue::
# 136 "data/maps/FortreeCity_Gym/scripts.pory"
	lockall
# 137 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, FortreeCity_Gym_EventScript_GymStatueCertified
# 138 "data/maps/FortreeCity_Gym/scripts.pory"
	goto FortreeCity_Gym_EventScript_GymStatue
# 139 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 140 "data/maps/FortreeCity_Gym/scripts.pory"

# 141 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_RightGymStatue::
# 142 "data/maps/FortreeCity_Gym/scripts.pory"
	lockall
# 143 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, FortreeCity_Gym_EventScript_GymStatueCertified
# 144 "data/maps/FortreeCity_Gym/scripts.pory"
	goto FortreeCity_Gym_EventScript_GymStatue
# 145 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 146 "data/maps/FortreeCity_Gym/scripts.pory"

# 147 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GymStatueCertified::
# 148 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 149 "data/maps/FortreeCity_Gym/scripts.pory"
	releaseall
# 150 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 151 "data/maps/FortreeCity_Gym/scripts.pory"

# 152 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GymStatue::
# 153 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 154 "data/maps/FortreeCity_Gym/scripts.pory"
	releaseall
# 155 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 156 "data/maps/FortreeCity_Gym/scripts.pory"

# 157 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Altaria::
# 158 "data/maps/FortreeCity_Gym/scripts.pory"
	lock
# 159 "data/maps/FortreeCity_Gym/scripts.pory"
	faceplayer
# 160 "data/maps/FortreeCity_Gym/scripts.pory"
	waitse
# 161 "data/maps/FortreeCity_Gym/scripts.pory"
	playmoncry SPECIES_ALTARIA, CRY_MODE_NORMAL
# 162 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_Altaria, MSGBOX_DEFAULT
# 163 "data/maps/FortreeCity_Gym/scripts.pory"
	waitmoncry
# 164 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 165 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 166 "data/maps/FortreeCity_Gym/scripts.pory"

# 167 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_GymGuideAdvice:
# 168 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Yo, how's it going, Champion-\n"
# 169 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "bound {PLAYER}?\p"
# 170 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "FORTREE GYM LEADER Winona is\n"
# 171 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "a master of FLYING-type Pokémon.\p"
# 172 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "She's waiting at the back of this GYM,\n"
# 173 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "behind the rotating doors.\p"
# 174 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "She's waiting for new challengers\n"
# 175 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "who are trying to take wing!\p"
# 176 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Okay, go for it!$"
# 177 "data/maps/FortreeCity_Gym/scripts.pory"

# 178 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_GymGuidePostVictory:
# 179 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You did it!\n"
# 180 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You've achieved liftoff!$"
# 181 "data/maps/FortreeCity_Gym/scripts.pory"

# 182 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_JaredIntro:
# 183 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Behold the elegant battle style of\n"
# 184 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "BIRD Pokémon!$"
# 185 "data/maps/FortreeCity_Gym/scripts.pory"

# 186 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_JaredDefeat:
# 187 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You…\n"
# 188 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You're strong…$"
# 189 "data/maps/FortreeCity_Gym/scripts.pory"

# 190 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_JaredPostBattle:
# 191 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "A TRAINER has to be smart to keep\n"
# 192 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "up with unexpected turns of events.\p"
# 193 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Do you have the smarts to get to\n"
# 194 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "our LEADER?$"
# 195 "data/maps/FortreeCity_Gym/scripts.pory"

# 196 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_EdwardoIntro:
# 197 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "The lovers of BIRD Pokémon aspire\n"
# 198 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "to join this GYM.\p"
# 199 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "As a member of the FORTREE GYM,\n"
# 200 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I'm not allowed to lose!$"
# 201 "data/maps/FortreeCity_Gym/scripts.pory"

# 202 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_EdwardoDefeat:
# 203 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "It was too much of a load for me\n"
# 204 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "to bear…$"
# 205 "data/maps/FortreeCity_Gym/scripts.pory"

# 206 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_EdwardoPostBattle:
# 207 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "The world is huge, and there are\n"
# 208 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "countless tough TRAINERS.\p"
# 209 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I'm going to keep training and make\n"
# 210 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "myself even stronger.$"
# 211 "data/maps/FortreeCity_Gym/scripts.pory"

# 212 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_FlintIntro:
# 213 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "There's no need for Winona, our GYM\n"
# 214 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "LEADER, to deal with you!\p"
# 215 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I'm plenty good enough for you!$"
# 216 "data/maps/FortreeCity_Gym/scripts.pory"

# 217 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_FlintDefeat:
# 218 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Winona, I…\n"
# 219 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I lost!$"
# 220 "data/maps/FortreeCity_Gym/scripts.pory"

# 221 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_FlintPostBattle:
# 222 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Winona is cute and she's strong.\n"
# 223 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "She's the ultimate LEADER!\p"
# 224 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Blush…$"
# 225 "data/maps/FortreeCity_Gym/scripts.pory"

# 226 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_AshleyIntro:
# 227 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Winona taught me personally!\n"
# 228 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You can't beat me easily!$"
# 229 "data/maps/FortreeCity_Gym/scripts.pory"

# 230 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_AshleyDefeat:
# 231 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I was beaten…$"
# 232 "data/maps/FortreeCity_Gym/scripts.pory"

# 233 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_AshleyPostBattle:
# 234 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Thanks to Winona, the people of\n"
# 235 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "FORTREE can live without fear.$"
# 236 "data/maps/FortreeCity_Gym/scripts.pory"

# 237 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_HumbertoIntro:
# 238 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "When Winona takes to battle, her face\n"
# 239 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "shines with beautiful determination…\p"
# 240 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I'm not letting you witness that\n"
# 241 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "lovely sight!$"
# 242 "data/maps/FortreeCity_Gym/scripts.pory"

# 243 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_HumbertoDefeat:
# 244 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Urk!\n"
# 245 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I couldn't stop you.$"
# 246 "data/maps/FortreeCity_Gym/scripts.pory"

# 247 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_HumbertoPostBattle:
# 248 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You'd better watch it!\n"
# 249 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Don't get distracted staring at Winona\l"
# 250 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "or you'll go crashing down in a heap!$"
# 251 "data/maps/FortreeCity_Gym/scripts.pory"

# 252 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_DariusIntro:
# 253 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You'd better know that there are all\n"
# 254 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "sorts of FLYING-type Pokémon.\p"
# 255 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You do know that, right?$"
# 256 "data/maps/FortreeCity_Gym/scripts.pory"

# 257 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_DariusDefeat:
# 258 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You seem to know your stuff!$"
# 259 "data/maps/FortreeCity_Gym/scripts.pory"

# 260 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_DariusPostBattle:
# 261 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Sure, you beat me all right.\n"
# 262 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "But you'd better watch it! Our LEADER\l"
# 263 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Winona's Pokémon are all business.$"
# 264 "data/maps/FortreeCity_Gym/scripts.pory"

# 265 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaIntro:
# 266 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I am Winona. I am the Leader of\n"
# 267 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "the Fortree Pokémon Gym.\p"
# 268 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I have become one with Bird Pokémon\n"
# 269 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "and have soared the skies…\p"
# 270 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "However, I've been taken down by Rock,\n"
# 271 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Ice, and Electric attacks far too many\l"
# 272 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "times.\p"
# 273 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I had no choice but to adapt my\n"
# 274 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "graceful style into one that is even\l"
# 275 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "more elegant!\p"
# 276 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Witness the beautiful choreography\n"
# 277 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "of my Pokémon and I!$"
# 278 "data/maps/FortreeCity_Gym/scripts.pory"

# 279 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaDefeat:
# 280 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Never before have I seen a trainer\n"
# 281 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "command Pokémon with more grace\l"
# 282 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "than I…\p"
# 283 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "In recognition of your prowess,\n"
# 284 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I present to you this Gym Badge.$"
# 285 "data/maps/FortreeCity_Gym/scripts.pory"

# 286 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_ReceivedFeatherBadge:
# 287 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "{PLAYER} received the Feather Badge\n"
# 288 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "from Winona.$"
# 289 "data/maps/FortreeCity_Gym/scripts.pory"

# 290 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_ExplainFeatherBadgeTakeThis:
# 291 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "And these…\n"
# 292 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "These are gifts from me.$"
# 293 "data/maps/FortreeCity_Gym/scripts.pory"

# 294 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_ExplainAerialAce:
# 295 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Those are some of the most powerful\n"
# 296 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Flying-type moves that I know, as well\l"
# 297 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "as my favorite Mega Stone.\p"
# 298 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Use them all wisely, their power\n"
# 299 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "is devastating.\p"
# 300 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "… … … … … …$"
# 301 "data/maps/FortreeCity_Gym/scripts.pory"

# 302 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_RegisteredWinona:
# 303 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Registered Gym Leader Winona\n"
# 304 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "in the PokéNav.$"
# 305 "data/maps/FortreeCity_Gym/scripts.pory"

# 306 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WhatOnEarth:
# 307 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Wh- what on earth was that?\p"
# 308 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "… … … … … …\p"
# 309 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Be careful going back out there,\n"
# 310 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "{PLAYER}.\p"
# 311 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I am not sure what that earthquake\n"
# 312 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "was about, but who knows, maybe\l"
# 313 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "someone will call you and explain what's\l"
# 314 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "going on.$"
# 315 "data/maps/FortreeCity_Gym/scripts.pory"

# 316 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaPostBattle:
# 317 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Though I fell to you, I will remain\n"
# 318 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "devoted to my Pokémon.$"
# 319 "data/maps/FortreeCity_Gym/scripts.pory"

# 320 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_GymStatue:
# 321 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "FORTREE CITY POKéMON GYM$"
# 322 "data/maps/FortreeCity_Gym/scripts.pory"

# 323 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_GymStatueCertified:
# 324 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "FORTREE CITY POKéMON GYM\p"
# 325 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WINONA'S CERTIFIED TRAINERS:\n"
# 326 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 327 "data/maps/FortreeCity_Gym/scripts.pory"

# 328 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaPreRematch:
# 329 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Winona: We humans can never escape\n"
# 330 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "gravity's pull on the ground.\p"
# 331 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "But by striving for excellence,\n"
# 332 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "we have the power to soar!\p"
# 333 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You have scaled the pinnacle as\n"
# 334 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "the reigning Champion.\p"
# 335 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Please, allow me to see your power\n"
# 336 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "at full flight!$"
# 337 "data/maps/FortreeCity_Gym/scripts.pory"

# 338 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaRematchDefeat:
# 339 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I failed to reach your height again…$"
# 340 "data/maps/FortreeCity_Gym/scripts.pory"

# 341 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaPostRematch:
# 342 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Winona: Even though I have lost,\n"
# 343 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "the wings of my heart remain unbroken.\p"
# 344 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I can rise and soar again and\n"
# 345 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "yet again.\p"
# 346 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I am convinced of it!$"
# 347 "data/maps/FortreeCity_Gym/scripts.pory"

# 348 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaRematchNeedTwoMons:
# 349 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Winona: We humans can never escape\n"
# 350 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "gravity's pull on the ground.\p"
# 351 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "But by striving for excellence,\n"
# 352 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "we have the power to soar!\p"
# 353 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You have scaled the pinnacle as\n"
# 354 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "the reigning Champion.\p"
# 355 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Please, allow me to see your power\n"
# 356 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "at full flight!\p"
# 357 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Oh, no… Do you have but one\n"
# 358 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Pokémon with you?\p"
# 359 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Please return with two Pokémon\n"
# 360 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "at the very least.$"
# 361 "data/maps/FortreeCity_Gym/scripts.pory"

# 362 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_Altaria:
# 363 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Altaria: Eeeiiiyeh!$"
