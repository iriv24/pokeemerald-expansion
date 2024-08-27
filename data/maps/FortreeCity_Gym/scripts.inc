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
	setvar VAR_BEAT_WINONA, 1
# 59 "data/maps/FortreeCity_Gym/scripts.pory"
	setvar VAR_SCOTT_FORTREE_CALL_STEP_COUNTER, 0
# 60 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_SCOTT_CALL_FORTREE_GYM
# 61 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 62 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 63 "data/maps/FortreeCity_Gym/scripts.pory"

# 64 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GiveAerialAce2::
# 65 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_TM_BRAVE_BIRD
# 66 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_TM_ACROBATICS
# 67 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_TM_HURRICANE
# 68 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_TM_TAILWIND
# 69 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_ALTARIANITE
# 70 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 71 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_ExplainAerialAce, MSGBOX_DEFAULT
# 72 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_BRAVE_BIRD
# 73 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 74 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 75 "data/maps/FortreeCity_Gym/scripts.pory"

# 76 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GiveAerialAce::
# 77 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_TM_BRAVE_BIRD
# 78 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_TM_HURRICANE
# 79 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_TM_TAILWIND
# 80 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_ALTARIANITE
# 81 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 82 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_ExplainAerialAce, MSGBOX_DEFAULT
# 83 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_BRAVE_BIRD
# 84 "data/maps/FortreeCity_Gym/scripts.pory"
	return
# 85 "data/maps/FortreeCity_Gym/scripts.pory"

# 86 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_WinonaRematch::
# 87 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_WINONA_1, FortreeCity_Gym_Text_WinonaPreRematch, FortreeCity_Gym_Text_WinonaRematchDefeat, FortreeCity_Gym_Text_WinonaRematchNeedTwoMons
# 88 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_WinonaPostRematch, MSGBOX_AUTOCLOSE
# 89 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 90 "data/maps/FortreeCity_Gym/scripts.pory"

# 91 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Jared::
# 92 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JARED, FortreeCity_Gym_Text_JaredIntro, FortreeCity_Gym_Text_JaredDefeat
# 93 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_JaredPostBattle, MSGBOX_AUTOCLOSE
# 94 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 95 "data/maps/FortreeCity_Gym/scripts.pory"

# 96 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Edwardo::
# 97 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_EDWARDO, FortreeCity_Gym_Text_EdwardoIntro, FortreeCity_Gym_Text_EdwardoDefeat
# 98 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_EdwardoPostBattle, MSGBOX_AUTOCLOSE
# 99 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 100 "data/maps/FortreeCity_Gym/scripts.pory"

# 101 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Flint::
# 102 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_FLINT, FortreeCity_Gym_Text_FlintIntro, FortreeCity_Gym_Text_FlintDefeat
# 103 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_FlintPostBattle, MSGBOX_AUTOCLOSE
# 104 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 105 "data/maps/FortreeCity_Gym/scripts.pory"

# 106 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Ashley::
# 107 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ASHLEY, FortreeCity_Gym_Text_AshleyIntro, FortreeCity_Gym_Text_AshleyDefeat
# 108 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_AshleyPostBattle, MSGBOX_AUTOCLOSE
# 109 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 110 "data/maps/FortreeCity_Gym/scripts.pory"

# 111 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Humberto::
# 112 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_HUMBERTO, FortreeCity_Gym_Text_HumbertoIntro, FortreeCity_Gym_Text_HumbertoDefeat
# 113 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_HumbertoPostBattle, MSGBOX_AUTOCLOSE
# 114 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 115 "data/maps/FortreeCity_Gym/scripts.pory"

# 116 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Darius::
# 117 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_DARIUS, FortreeCity_Gym_Text_DariusIntro, FortreeCity_Gym_Text_DariusDefeat
# 118 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_DariusPostBattle, MSGBOX_AUTOCLOSE
# 119 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 120 "data/maps/FortreeCity_Gym/scripts.pory"

# 121 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GymGuide::
# 122 "data/maps/FortreeCity_Gym/scripts.pory"
	lock
# 123 "data/maps/FortreeCity_Gym/scripts.pory"
	faceplayer
# 124 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_FORTREE_GYM, FortreeCity_Gym_EventScript_GymGuidePostVictory
# 125 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 126 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 127 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 128 "data/maps/FortreeCity_Gym/scripts.pory"

# 129 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GymGuidePostVictory::
# 130 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 131 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 132 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 133 "data/maps/FortreeCity_Gym/scripts.pory"

# 134 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_LeftGymStatue::
# 135 "data/maps/FortreeCity_Gym/scripts.pory"
	lockall
# 136 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, FortreeCity_Gym_EventScript_GymStatueCertified
# 137 "data/maps/FortreeCity_Gym/scripts.pory"
	goto FortreeCity_Gym_EventScript_GymStatue
# 138 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 139 "data/maps/FortreeCity_Gym/scripts.pory"

# 140 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_RightGymStatue::
# 141 "data/maps/FortreeCity_Gym/scripts.pory"
	lockall
# 142 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, FortreeCity_Gym_EventScript_GymStatueCertified
# 143 "data/maps/FortreeCity_Gym/scripts.pory"
	goto FortreeCity_Gym_EventScript_GymStatue
# 144 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 145 "data/maps/FortreeCity_Gym/scripts.pory"

# 146 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GymStatueCertified::
# 147 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 148 "data/maps/FortreeCity_Gym/scripts.pory"
	releaseall
# 149 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 150 "data/maps/FortreeCity_Gym/scripts.pory"

# 151 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GymStatue::
# 152 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 153 "data/maps/FortreeCity_Gym/scripts.pory"
	releaseall
# 154 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 155 "data/maps/FortreeCity_Gym/scripts.pory"

# 156 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Altaria::
# 157 "data/maps/FortreeCity_Gym/scripts.pory"
	lock
# 158 "data/maps/FortreeCity_Gym/scripts.pory"
	faceplayer
# 159 "data/maps/FortreeCity_Gym/scripts.pory"
	waitse
# 160 "data/maps/FortreeCity_Gym/scripts.pory"
	playmoncry SPECIES_ALTARIA, CRY_MODE_NORMAL
# 161 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_Altaria, MSGBOX_DEFAULT
# 162 "data/maps/FortreeCity_Gym/scripts.pory"
	waitmoncry
# 163 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 164 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 165 "data/maps/FortreeCity_Gym/scripts.pory"

# 166 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_GymGuideAdvice:
# 167 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Yo, how's it going, Champion-\n"
# 168 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "bound {PLAYER}?\p"
# 169 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "FORTREE GYM LEADER Winona is\n"
# 170 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "a master of FLYING-type Pokémon.\p"
# 171 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "She's waiting at the back of this GYM,\n"
# 172 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "behind the rotating doors.\p"
# 173 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "She's waiting for new challengers\n"
# 174 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "who are trying to take wing!\p"
# 175 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Okay, go for it!$"
# 176 "data/maps/FortreeCity_Gym/scripts.pory"

# 177 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_GymGuidePostVictory:
# 178 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You did it!\n"
# 179 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You've achieved liftoff!$"
# 180 "data/maps/FortreeCity_Gym/scripts.pory"

# 181 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_JaredIntro:
# 182 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Behold the elegant battle style of\n"
# 183 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "BIRD Pokémon!$"
# 184 "data/maps/FortreeCity_Gym/scripts.pory"

# 185 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_JaredDefeat:
# 186 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You…\n"
# 187 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You're strong…$"
# 188 "data/maps/FortreeCity_Gym/scripts.pory"

# 189 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_JaredPostBattle:
# 190 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "A TRAINER has to be smart to keep\n"
# 191 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "up with unexpected turns of events.\p"
# 192 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Do you have the smarts to get to\n"
# 193 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "our LEADER?$"
# 194 "data/maps/FortreeCity_Gym/scripts.pory"

# 195 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_EdwardoIntro:
# 196 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "The lovers of BIRD Pokémon aspire\n"
# 197 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "to join this GYM.\p"
# 198 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "As a member of the FORTREE GYM,\n"
# 199 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I'm not allowed to lose!$"
# 200 "data/maps/FortreeCity_Gym/scripts.pory"

# 201 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_EdwardoDefeat:
# 202 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "It was too much of a load for me\n"
# 203 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "to bear…$"
# 204 "data/maps/FortreeCity_Gym/scripts.pory"

# 205 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_EdwardoPostBattle:
# 206 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "The world is huge, and there are\n"
# 207 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "countless tough TRAINERS.\p"
# 208 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I'm going to keep training and make\n"
# 209 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "myself even stronger.$"
# 210 "data/maps/FortreeCity_Gym/scripts.pory"

# 211 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_FlintIntro:
# 212 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "There's no need for Winona, our GYM\n"
# 213 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "LEADER, to deal with you!\p"
# 214 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I'm plenty good enough for you!$"
# 215 "data/maps/FortreeCity_Gym/scripts.pory"

# 216 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_FlintDefeat:
# 217 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Winona, I…\n"
# 218 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I lost!$"
# 219 "data/maps/FortreeCity_Gym/scripts.pory"

# 220 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_FlintPostBattle:
# 221 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Winona is cute and she's strong.\n"
# 222 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "She's the ultimate LEADER!\p"
# 223 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Blush…$"
# 224 "data/maps/FortreeCity_Gym/scripts.pory"

# 225 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_AshleyIntro:
# 226 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Winona taught me personally!\n"
# 227 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You can't beat me easily!$"
# 228 "data/maps/FortreeCity_Gym/scripts.pory"

# 229 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_AshleyDefeat:
# 230 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I was beaten…$"
# 231 "data/maps/FortreeCity_Gym/scripts.pory"

# 232 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_AshleyPostBattle:
# 233 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Thanks to Winona, the people of\n"
# 234 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "FORTREE can live without fear.$"
# 235 "data/maps/FortreeCity_Gym/scripts.pory"

# 236 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_HumbertoIntro:
# 237 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "When Winona takes to battle, her face\n"
# 238 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "shines with beautiful determination…\p"
# 239 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I'm not letting you witness that\n"
# 240 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "lovely sight!$"
# 241 "data/maps/FortreeCity_Gym/scripts.pory"

# 242 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_HumbertoDefeat:
# 243 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Urk!\n"
# 244 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I couldn't stop you.$"
# 245 "data/maps/FortreeCity_Gym/scripts.pory"

# 246 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_HumbertoPostBattle:
# 247 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You'd better watch it!\n"
# 248 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Don't get distracted staring at Winona\l"
# 249 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "or you'll go crashing down in a heap!$"
# 250 "data/maps/FortreeCity_Gym/scripts.pory"

# 251 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_DariusIntro:
# 252 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You'd better know that there are all\n"
# 253 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "sorts of FLYING-type Pokémon.\p"
# 254 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You do know that, right?$"
# 255 "data/maps/FortreeCity_Gym/scripts.pory"

# 256 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_DariusDefeat:
# 257 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You seem to know your stuff!$"
# 258 "data/maps/FortreeCity_Gym/scripts.pory"

# 259 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_DariusPostBattle:
# 260 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Sure, you beat me all right.\n"
# 261 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "But you'd better watch it! Our LEADER\l"
# 262 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Winona's Pokémon are all business.$"
# 263 "data/maps/FortreeCity_Gym/scripts.pory"

# 264 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaIntro:
# 265 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I am Winona. I am the Leader of\n"
# 266 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "the Fortree Pokémon Gym.\p"
# 267 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I have become one with Bird Pokémon\n"
# 268 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "and have soared the skies…\p"
# 269 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "However, I've been taken down by Rock,\n"
# 270 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Ice, and Electric attacks far too many\l"
# 271 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "times.\p"
# 272 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I had no choice but to adapt my\n"
# 273 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "graceful style into one that is even\l"
# 274 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "more elegant!\p"
# 275 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Witness the beautiful choreography\n"
# 276 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "of my Pokémon and I!$"
# 277 "data/maps/FortreeCity_Gym/scripts.pory"

# 278 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaDefeat:
# 279 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Never before have I seen a trainer\n"
# 280 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "command Pokémon with more grace\l"
# 281 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "than I…\p"
# 282 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "In recognition of your prowess,\n"
# 283 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I present to you this Gym Badge.$"
# 284 "data/maps/FortreeCity_Gym/scripts.pory"

# 285 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_ReceivedFeatherBadge:
# 286 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "{PLAYER} received the Feather Badge\n"
# 287 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "from Winona.$"
# 288 "data/maps/FortreeCity_Gym/scripts.pory"

# 289 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_ExplainFeatherBadgeTakeThis:
# 290 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "And these…\n"
# 291 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "These are gifts from me.$"
# 292 "data/maps/FortreeCity_Gym/scripts.pory"

# 293 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_ExplainAerialAce:
# 294 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Those are some of the most powerful\n"
# 295 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Flying-type moves that I know, as well\l"
# 296 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "as my favorite Mega Stone.\p"
# 297 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Use them all wisely, their power\n"
# 298 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "is devastating.\p"
# 299 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "… … … … … …$"
# 300 "data/maps/FortreeCity_Gym/scripts.pory"

# 301 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_RegisteredWinona:
# 302 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Registered Gym Leader Winona\n"
# 303 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "in the POKéNAV.$"
# 304 "data/maps/FortreeCity_Gym/scripts.pory"

# 305 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WhatOnEarth:
# 306 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Wh- what on earth was that?\p"
# 307 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "… … … … … …\p"
# 308 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Be careful going back out there,\n"
# 309 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "{PLAYER}.\p"
# 310 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I am not sure what that earthquake\n"
# 311 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "was about, but who knows, maybe\l"
# 312 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "someone will call you and explain what's\l"
# 313 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "going on.$"
# 314 "data/maps/FortreeCity_Gym/scripts.pory"

# 315 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaPostBattle:
# 316 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Though I fell to you, I will remain\n"
# 317 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "devoted to my Pokémon.$"
# 318 "data/maps/FortreeCity_Gym/scripts.pory"

# 319 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_GymStatue:
# 320 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "FORTREE CITY POKéMON GYM$"
# 321 "data/maps/FortreeCity_Gym/scripts.pory"

# 322 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_GymStatueCertified:
# 323 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "FORTREE CITY POKéMON GYM\p"
# 324 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WINONA'S CERTIFIED TRAINERS:\n"
# 325 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 326 "data/maps/FortreeCity_Gym/scripts.pory"

# 327 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaPreRematch:
# 328 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Winona: We humans can never escape\n"
# 329 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "gravity's pull on the ground.\p"
# 330 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "But by striving for excellence,\n"
# 331 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "we have the power to soar!\p"
# 332 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You have scaled the pinnacle as\n"
# 333 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "the reigning Champion.\p"
# 334 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Please, allow me to see your power\n"
# 335 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "at full flight!$"
# 336 "data/maps/FortreeCity_Gym/scripts.pory"

# 337 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaRematchDefeat:
# 338 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I failed to reach your height again…$"
# 339 "data/maps/FortreeCity_Gym/scripts.pory"

# 340 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaPostRematch:
# 341 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Winona: Even though I have lost,\n"
# 342 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "the wings of my heart remain unbroken.\p"
# 343 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I can rise and soar again and\n"
# 344 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "yet again.\p"
# 345 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I am convinced of it!$"
# 346 "data/maps/FortreeCity_Gym/scripts.pory"

# 347 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaRematchNeedTwoMons:
# 348 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Winona: We humans can never escape\n"
# 349 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "gravity's pull on the ground.\p"
# 350 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "But by striving for excellence,\n"
# 351 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "we have the power to soar!\p"
# 352 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You have scaled the pinnacle as\n"
# 353 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "the reigning Champion.\p"
# 354 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Please, allow me to see your power\n"
# 355 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "at full flight!\p"
# 356 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Oh, no… Do you have but one\n"
# 357 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Pokémon with you?\p"
# 358 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Please return with two Pokémon\n"
# 359 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "at the very least.$"
# 360 "data/maps/FortreeCity_Gym/scripts.pory"

# 361 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_Altaria:
# 362 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Altaria: Eeeiiiyeh!$"
