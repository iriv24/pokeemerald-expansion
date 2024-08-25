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
	setvar VAR_0x8008, 6
# 38 "data/maps/FortreeCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 39 "data/maps/FortreeCity_Gym/scripts.pory"
	call FortreeCity_Gym_EventScript_GiveAerialAce
# 40 "data/maps/FortreeCity_Gym/scripts.pory"
	closemessage
# 41 "data/maps/FortreeCity_Gym/scripts.pory"
	delay 30
# 42 "data/maps/FortreeCity_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 43 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_RegisteredWinona, MSGBOX_DEFAULT
# 44 "data/maps/FortreeCity_Gym/scripts.pory"
	waitfanfare
# 45 "data/maps/FortreeCity_Gym/scripts.pory"
	closemessage
# 46 "data/maps/FortreeCity_Gym/scripts.pory"
	delay 30
# 47 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_WINONA_MATCH_CALL
# 48 "data/maps/FortreeCity_Gym/scripts.pory"
	setvar VAR_BEAT_WINONA, 1
# 49 "data/maps/FortreeCity_Gym/scripts.pory"
	setvar VAR_SCOTT_FORTREE_CALL_STEP_COUNTER, 0
# 50 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_SCOTT_CALL_FORTREE_GYM
# 51 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 52 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 53 "data/maps/FortreeCity_Gym/scripts.pory"

# 54 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GiveAerialAce2::
# 55 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_TM_BRAVE_BIRD
# 56 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_TM_ACROBATICS
# 57 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_TM_HURRICANE
# 58 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_TM_TAILWIND
# 59 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_ALTARIANITE
# 60 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 61 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_ExplainAerialAce, MSGBOX_DEFAULT
# 62 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_BRAVE_BIRD
# 63 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 64 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 65 "data/maps/FortreeCity_Gym/scripts.pory"

# 66 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GiveAerialAce::
# 67 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_TM_BRAVE_BIRD
# 68 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_TM_HURRICANE
# 69 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_TM_TAILWIND
# 70 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_ALTARIANITE
# 71 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 72 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_ExplainAerialAce, MSGBOX_DEFAULT
# 73 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_BRAVE_BIRD
# 74 "data/maps/FortreeCity_Gym/scripts.pory"
	return
# 75 "data/maps/FortreeCity_Gym/scripts.pory"

# 76 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_WinonaRematch::
# 77 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_WINONA_1, FortreeCity_Gym_Text_WinonaPreRematch, FortreeCity_Gym_Text_WinonaRematchDefeat, FortreeCity_Gym_Text_WinonaRematchNeedTwoMons
# 78 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_WinonaPostRematch, MSGBOX_AUTOCLOSE
# 79 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 80 "data/maps/FortreeCity_Gym/scripts.pory"

# 81 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Jared::
# 82 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JARED, FortreeCity_Gym_Text_JaredIntro, FortreeCity_Gym_Text_JaredDefeat
# 83 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_JaredPostBattle, MSGBOX_AUTOCLOSE
# 84 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 85 "data/maps/FortreeCity_Gym/scripts.pory"

# 86 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Edwardo::
# 87 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_EDWARDO, FortreeCity_Gym_Text_EdwardoIntro, FortreeCity_Gym_Text_EdwardoDefeat
# 88 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_EdwardoPostBattle, MSGBOX_AUTOCLOSE
# 89 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 90 "data/maps/FortreeCity_Gym/scripts.pory"

# 91 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Flint::
# 92 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_FLINT, FortreeCity_Gym_Text_FlintIntro, FortreeCity_Gym_Text_FlintDefeat
# 93 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_FlintPostBattle, MSGBOX_AUTOCLOSE
# 94 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 95 "data/maps/FortreeCity_Gym/scripts.pory"

# 96 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Ashley::
# 97 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ASHLEY, FortreeCity_Gym_Text_AshleyIntro, FortreeCity_Gym_Text_AshleyDefeat
# 98 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_AshleyPostBattle, MSGBOX_AUTOCLOSE
# 99 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 100 "data/maps/FortreeCity_Gym/scripts.pory"

# 101 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Humberto::
# 102 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_HUMBERTO, FortreeCity_Gym_Text_HumbertoIntro, FortreeCity_Gym_Text_HumbertoDefeat
# 103 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_HumbertoPostBattle, MSGBOX_AUTOCLOSE
# 104 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 105 "data/maps/FortreeCity_Gym/scripts.pory"

# 106 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Darius::
# 107 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_DARIUS, FortreeCity_Gym_Text_DariusIntro, FortreeCity_Gym_Text_DariusDefeat
# 108 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_DariusPostBattle, MSGBOX_AUTOCLOSE
# 109 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 110 "data/maps/FortreeCity_Gym/scripts.pory"

# 111 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GymGuide::
# 112 "data/maps/FortreeCity_Gym/scripts.pory"
	lock
# 113 "data/maps/FortreeCity_Gym/scripts.pory"
	faceplayer
# 114 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_FORTREE_GYM, FortreeCity_Gym_EventScript_GymGuidePostVictory
# 115 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 116 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 117 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 118 "data/maps/FortreeCity_Gym/scripts.pory"

# 119 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GymGuidePostVictory::
# 120 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 121 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 122 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 123 "data/maps/FortreeCity_Gym/scripts.pory"

# 124 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_LeftGymStatue::
# 125 "data/maps/FortreeCity_Gym/scripts.pory"
	lockall
# 126 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, FortreeCity_Gym_EventScript_GymStatueCertified
# 127 "data/maps/FortreeCity_Gym/scripts.pory"
	goto FortreeCity_Gym_EventScript_GymStatue
# 128 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 129 "data/maps/FortreeCity_Gym/scripts.pory"

# 130 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_RightGymStatue::
# 131 "data/maps/FortreeCity_Gym/scripts.pory"
	lockall
# 132 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, FortreeCity_Gym_EventScript_GymStatueCertified
# 133 "data/maps/FortreeCity_Gym/scripts.pory"
	goto FortreeCity_Gym_EventScript_GymStatue
# 134 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 135 "data/maps/FortreeCity_Gym/scripts.pory"

# 136 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GymStatueCertified::
# 137 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 138 "data/maps/FortreeCity_Gym/scripts.pory"
	releaseall
# 139 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 140 "data/maps/FortreeCity_Gym/scripts.pory"

# 141 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GymStatue::
# 142 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 143 "data/maps/FortreeCity_Gym/scripts.pory"
	releaseall
# 144 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 145 "data/maps/FortreeCity_Gym/scripts.pory"

# 146 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Altaria::
# 147 "data/maps/FortreeCity_Gym/scripts.pory"
	lock
# 148 "data/maps/FortreeCity_Gym/scripts.pory"
	faceplayer
# 149 "data/maps/FortreeCity_Gym/scripts.pory"
	waitse
# 150 "data/maps/FortreeCity_Gym/scripts.pory"
	playmoncry SPECIES_ALTARIA, CRY_MODE_NORMAL
# 151 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_Altaria, MSGBOX_DEFAULT
# 152 "data/maps/FortreeCity_Gym/scripts.pory"
	waitmoncry
# 153 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 154 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 155 "data/maps/FortreeCity_Gym/scripts.pory"

# 156 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_GymGuideAdvice:
# 157 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Yo, how's it going, CHAMPION-\n"
# 158 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "bound {PLAYER}?\p"
# 159 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "FORTREE GYM LEADER WINONA is\n"
# 160 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "a master of FLYING-type POKéMON.\p"
# 161 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "She's waiting at the back of this GYM,\n"
# 162 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "behind the rotating doors.\p"
# 163 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "She's waiting for new challengers\n"
# 164 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "who are trying to take wing!\p"
# 165 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Okay, go for it!$"
# 166 "data/maps/FortreeCity_Gym/scripts.pory"

# 167 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_GymGuidePostVictory:
# 168 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You did it!\n"
# 169 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You've achieved liftoff!$"
# 170 "data/maps/FortreeCity_Gym/scripts.pory"

# 171 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_JaredIntro:
# 172 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Behold the elegant battle style of\n"
# 173 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "BIRD POKéMON!$"
# 174 "data/maps/FortreeCity_Gym/scripts.pory"

# 175 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_JaredDefeat:
# 176 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You…\n"
# 177 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You're strong…$"
# 178 "data/maps/FortreeCity_Gym/scripts.pory"

# 179 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_JaredPostBattle:
# 180 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "A TRAINER has to be smart to keep\n"
# 181 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "up with unexpected turns of events.\p"
# 182 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Do you have the smarts to get to\n"
# 183 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "our LEADER?$"
# 184 "data/maps/FortreeCity_Gym/scripts.pory"

# 185 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_EdwardoIntro:
# 186 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "The lovers of BIRD POKéMON aspire\n"
# 187 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "to join this GYM.\p"
# 188 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "As a member of the FORTREE GYM,\n"
# 189 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I'm not allowed to lose!$"
# 190 "data/maps/FortreeCity_Gym/scripts.pory"

# 191 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_EdwardoDefeat:
# 192 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "It was too much of a load for me\n"
# 193 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "to bear…$"
# 194 "data/maps/FortreeCity_Gym/scripts.pory"

# 195 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_EdwardoPostBattle:
# 196 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "The world is huge, and there are\n"
# 197 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "countless tough TRAINERS.\p"
# 198 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I'm going to keep training and make\n"
# 199 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "myself even stronger.$"
# 200 "data/maps/FortreeCity_Gym/scripts.pory"

# 201 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_FlintIntro:
# 202 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "There's no need for WINONA, our GYM\n"
# 203 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "LEADER, to deal with you!\p"
# 204 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I'm plenty good enough for you!$"
# 205 "data/maps/FortreeCity_Gym/scripts.pory"

# 206 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_FlintDefeat:
# 207 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WINONA, I…\n"
# 208 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I lost!$"
# 209 "data/maps/FortreeCity_Gym/scripts.pory"

# 210 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_FlintPostBattle:
# 211 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WINONA is cute and she's strong.\n"
# 212 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "She's the ultimate LEADER!\p"
# 213 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Blush…$"
# 214 "data/maps/FortreeCity_Gym/scripts.pory"

# 215 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_AshleyIntro:
# 216 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WINONA taught me personally!\n"
# 217 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You can't beat me easily!$"
# 218 "data/maps/FortreeCity_Gym/scripts.pory"

# 219 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_AshleyDefeat:
# 220 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I was beaten…$"
# 221 "data/maps/FortreeCity_Gym/scripts.pory"

# 222 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_AshleyPostBattle:
# 223 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Thanks to WINONA, the people of\n"
# 224 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "FORTREE can live without fear.$"
# 225 "data/maps/FortreeCity_Gym/scripts.pory"

# 226 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_HumbertoIntro:
# 227 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "When WINONA takes to battle, her face\n"
# 228 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "shines with beautiful determination…\p"
# 229 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I'm not letting you witness that\n"
# 230 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "lovely sight!$"
# 231 "data/maps/FortreeCity_Gym/scripts.pory"

# 232 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_HumbertoDefeat:
# 233 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Urk!\n"
# 234 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I couldn't stop you.$"
# 235 "data/maps/FortreeCity_Gym/scripts.pory"

# 236 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_HumbertoPostBattle:
# 237 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You'd better watch it!\n"
# 238 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Don't get distracted staring at WINONA\l"
# 239 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "or you'll go crashing down in a heap!$"
# 240 "data/maps/FortreeCity_Gym/scripts.pory"

# 241 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_DariusIntro:
# 242 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You'd better know that there are all\n"
# 243 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "sorts of FLYING-type POKéMON.\p"
# 244 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You do know that, right?$"
# 245 "data/maps/FortreeCity_Gym/scripts.pory"

# 246 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_DariusDefeat:
# 247 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You seem to know your stuff!$"
# 248 "data/maps/FortreeCity_Gym/scripts.pory"

# 249 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_DariusPostBattle:
# 250 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Sure, you beat me all right.\n"
# 251 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "But you'd better watch it! Our LEADER\l"
# 252 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WINONA's POKéMON are all business.$"
# 253 "data/maps/FortreeCity_Gym/scripts.pory"

# 254 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaIntro:
# 255 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I am WINONA. I am the LEADER of\n"
# 256 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "the FORTREE POKéMON GYM.\p"
# 257 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I have become one with BIRD POKéMON\n"
# 258 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "and have soared the skies…\p"
# 259 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "However grueling the battle, we have\n"
# 260 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "triumphed with grace…\p"
# 261 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Witness the elegant choreography\n"
# 262 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "of BIRD POKéMON and I!$"
# 263 "data/maps/FortreeCity_Gym/scripts.pory"

# 264 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaDefeat:
# 265 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Never before have I seen a TRAINER\n"
# 266 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "command POKéMON with more grace\l"
# 267 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "than I…\p"
# 268 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "In recognition of your prowess,\n"
# 269 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I present to you this GYM BADGE.$"
# 270 "data/maps/FortreeCity_Gym/scripts.pory"

# 271 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_ReceivedFeatherBadge:
# 272 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "{PLAYER} received the FEATHER BADGE\n"
# 273 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "from WINONA.$"
# 274 "data/maps/FortreeCity_Gym/scripts.pory"

# 275 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_ExplainFeatherBadgeTakeThis:
# 276 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "With the FEATHER BADGE, all POKéMON up\n"
# 277 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "to LV 70, even those received through\l"
# 278 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "trades, will obey your every command.\p"
# 279 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You will also be able to use\n"
# 280 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "the HM move FLY outside of battle.\p"
# 281 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "And these…\n"
# 282 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "These are gifts from me.$"
# 283 "data/maps/FortreeCity_Gym/scripts.pory"

# 284 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_ExplainAerialAce:
# 285 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Those are some of the most powerful\p"
# 286 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Flying-type moves that I know, as well\n"
# 287 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "as my favorite Mega stone. Use them all\p"
# 288 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "wisely, their power is devastating.\n"
# 289 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "… … … … … …$"
# 290 "data/maps/FortreeCity_Gym/scripts.pory"

# 291 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_RegisteredWinona:
# 292 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Registered GYM LEADER WINONA\n"
# 293 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "in the POKéNAV.$"
# 294 "data/maps/FortreeCity_Gym/scripts.pory"

# 295 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaPostBattle:
# 296 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Though I fell to you, I will remain\n"
# 297 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "devoted to BIRD POKéMON.$"
# 298 "data/maps/FortreeCity_Gym/scripts.pory"

# 299 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_GymStatue:
# 300 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "FORTREE CITY POKéMON GYM$"
# 301 "data/maps/FortreeCity_Gym/scripts.pory"

# 302 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_GymStatueCertified:
# 303 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "FORTREE CITY POKéMON GYM\p"
# 304 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WINONA'S CERTIFIED TRAINERS:\n"
# 305 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 306 "data/maps/FortreeCity_Gym/scripts.pory"

# 307 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaPreRematch:
# 308 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Winona: We humans can never escape\n"
# 309 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "gravity's pull on the ground.\p"
# 310 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "But by striving for excellence,\n"
# 311 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "we have the power to soar!\p"
# 312 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You have scaled the pinnacle as\n"
# 313 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "the reigning CHAMPION.\p"
# 314 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Please, allow me to see your power\n"
# 315 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "at full flight!$"
# 316 "data/maps/FortreeCity_Gym/scripts.pory"

# 317 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaRematchDefeat:
# 318 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I failed to reach your height again…$"
# 319 "data/maps/FortreeCity_Gym/scripts.pory"

# 320 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaPostRematch:
# 321 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Winona: Even though I have lost,\n"
# 322 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "the wings of my heart remain unbroken.\p"
# 323 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I can rise and soar again and\n"
# 324 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "yet again.\p"
# 325 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I am convinced of it!$"
# 326 "data/maps/FortreeCity_Gym/scripts.pory"

# 327 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaRematchNeedTwoMons:
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
	.string "the reigning CHAMPION.\p"
# 334 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Please, allow me to see your power\n"
# 335 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "at full flight!\p"
# 336 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Oh, no… Do you have but one\n"
# 337 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "POKéMON with you?\p"
# 338 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Please return with two POKéMON\n"
# 339 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "at the very least.$"
# 340 "data/maps/FortreeCity_Gym/scripts.pory"

# 341 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_Altaria:
# 342 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Altaria: Screeeeeeee!$"
