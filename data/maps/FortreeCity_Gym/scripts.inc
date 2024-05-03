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
	end
# 10 "data/maps/FortreeCity_Gym/scripts.pory"

# 11 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_OnWarp:
# 12 "data/maps/FortreeCity_Gym/scripts.pory"
	map_script_2 VAR_TEMP_0, VAR_TEMP_0, FortreeCity_Gym_EventScript_InitRotatingGates
# 13 "data/maps/FortreeCity_Gym/scripts.pory"
	.2byte 0
# 14 "data/maps/FortreeCity_Gym/scripts.pory"

# 15 "data/maps/FortreeCity_Gym/scripts.pory"
@ NOTE: This rotating gate puzzle makes use of VAR_TEMP_0 - VAR_TEMP_3
# 16 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_InitRotatingGates::
# 17 "data/maps/FortreeCity_Gym/scripts.pory"
	special RotatingGate_InitPuzzleAndGraphics
# 18 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 19 "data/maps/FortreeCity_Gym/scripts.pory"

# 20 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Winona::
# 21 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_WINONA_1, FortreeCity_Gym_Text_WinonaIntro, FortreeCity_Gym_Text_WinonaDefeat, FortreeCity_Gym_EventScript_WinonaDefeated, NO_MUSIC
# 22 "data/maps/FortreeCity_Gym/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 23 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, FortreeCity_Gym_EventScript_WinonaRematch
# 24 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_BRAVE_BIRD, FortreeCity_Gym_EventScript_GiveAerialAce2
# 25 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_WinonaPostBattle, MSGBOX_DEFAULT
# 26 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 27 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 28 "data/maps/FortreeCity_Gym/scripts.pory"

# 29 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_WinonaDefeated::
# 30 "data/maps/FortreeCity_Gym/scripts.pory"
	message FortreeCity_Gym_Text_ReceivedFeatherBadge
# 31 "data/maps/FortreeCity_Gym/scripts.pory"
	waitmessage
# 32 "data/maps/FortreeCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 33 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_ExplainFeatherBadgeTakeThis, MSGBOX_DEFAULT
# 34 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_FORTREE_GYM
# 35 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_BADGE06_GET
# 36 "data/maps/FortreeCity_Gym/scripts.pory"
	setvar VAR_0x8008, 6
# 37 "data/maps/FortreeCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 38 "data/maps/FortreeCity_Gym/scripts.pory"
	call FortreeCity_Gym_EventScript_GiveAerialAce
# 39 "data/maps/FortreeCity_Gym/scripts.pory"
	closemessage
# 40 "data/maps/FortreeCity_Gym/scripts.pory"
	delay 30
# 41 "data/maps/FortreeCity_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 42 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_RegisteredWinona, MSGBOX_DEFAULT
# 43 "data/maps/FortreeCity_Gym/scripts.pory"
	waitfanfare
# 44 "data/maps/FortreeCity_Gym/scripts.pory"
	closemessage
# 45 "data/maps/FortreeCity_Gym/scripts.pory"
	delay 30
# 46 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_WINONA_MATCH_CALL
# 47 "data/maps/FortreeCity_Gym/scripts.pory"
	setvar VAR_BEAT_WINONA, 1
# 48 "data/maps/FortreeCity_Gym/scripts.pory"
	setvar VAR_SCOTT_FORTREE_CALL_STEP_COUNTER, 0
# 49 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_SCOTT_CALL_FORTREE_GYM
# 50 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 51 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 52 "data/maps/FortreeCity_Gym/scripts.pory"

# 53 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GiveAerialAce2::
# 54 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_TM_BRAVE_BIRD
# 55 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_TM_HURRICANE
# 56 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_TM_TAILWIND
# 57 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_ALTARIANITE
# 58 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 59 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_ExplainAerialAce, MSGBOX_DEFAULT
# 60 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_BRAVE_BIRD
# 61 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 62 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 63 "data/maps/FortreeCity_Gym/scripts.pory"

# 64 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GiveAerialAce::
# 65 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_TM_BRAVE_BIRD
# 66 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_TM_HURRICANE
# 67 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_TM_TAILWIND
# 68 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_ALTARIANITE
# 69 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 70 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_ExplainAerialAce, MSGBOX_DEFAULT
# 71 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_BRAVE_BIRD
# 72 "data/maps/FortreeCity_Gym/scripts.pory"
	return
# 73 "data/maps/FortreeCity_Gym/scripts.pory"

# 74 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_WinonaRematch::
# 75 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_WINONA_1, FortreeCity_Gym_Text_WinonaPreRematch, FortreeCity_Gym_Text_WinonaRematchDefeat, FortreeCity_Gym_Text_WinonaRematchNeedTwoMons
# 76 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_WinonaPostRematch, MSGBOX_AUTOCLOSE
# 77 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 78 "data/maps/FortreeCity_Gym/scripts.pory"

# 79 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Jared::
# 80 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JARED, FortreeCity_Gym_Text_JaredIntro, FortreeCity_Gym_Text_JaredDefeat
# 81 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_JaredPostBattle, MSGBOX_AUTOCLOSE
# 82 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 83 "data/maps/FortreeCity_Gym/scripts.pory"

# 84 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Edwardo::
# 85 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_EDWARDO, FortreeCity_Gym_Text_EdwardoIntro, FortreeCity_Gym_Text_EdwardoDefeat
# 86 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_EdwardoPostBattle, MSGBOX_AUTOCLOSE
# 87 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 88 "data/maps/FortreeCity_Gym/scripts.pory"

# 89 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Flint::
# 90 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_FLINT, FortreeCity_Gym_Text_FlintIntro, FortreeCity_Gym_Text_FlintDefeat
# 91 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_FlintPostBattle, MSGBOX_AUTOCLOSE
# 92 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 93 "data/maps/FortreeCity_Gym/scripts.pory"

# 94 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Ashley::
# 95 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ASHLEY, FortreeCity_Gym_Text_AshleyIntro, FortreeCity_Gym_Text_AshleyDefeat
# 96 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_AshleyPostBattle, MSGBOX_AUTOCLOSE
# 97 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 98 "data/maps/FortreeCity_Gym/scripts.pory"

# 99 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Humberto::
# 100 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_HUMBERTO, FortreeCity_Gym_Text_HumbertoIntro, FortreeCity_Gym_Text_HumbertoDefeat
# 101 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_HumbertoPostBattle, MSGBOX_AUTOCLOSE
# 102 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 103 "data/maps/FortreeCity_Gym/scripts.pory"

# 104 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Darius::
# 105 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_DARIUS, FortreeCity_Gym_Text_DariusIntro, FortreeCity_Gym_Text_DariusDefeat
# 106 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_DariusPostBattle, MSGBOX_AUTOCLOSE
# 107 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 108 "data/maps/FortreeCity_Gym/scripts.pory"

# 109 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GymGuide::
# 110 "data/maps/FortreeCity_Gym/scripts.pory"
	lock
# 111 "data/maps/FortreeCity_Gym/scripts.pory"
	faceplayer
# 112 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_FORTREE_GYM, FortreeCity_Gym_EventScript_GymGuidePostVictory
# 113 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 114 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 115 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 116 "data/maps/FortreeCity_Gym/scripts.pory"

# 117 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GymGuidePostVictory::
# 118 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 119 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 120 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 121 "data/maps/FortreeCity_Gym/scripts.pory"

# 122 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_LeftGymStatue::
# 123 "data/maps/FortreeCity_Gym/scripts.pory"
	lockall
# 124 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, FortreeCity_Gym_EventScript_GymStatueCertified
# 125 "data/maps/FortreeCity_Gym/scripts.pory"
	goto FortreeCity_Gym_EventScript_GymStatue
# 126 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 127 "data/maps/FortreeCity_Gym/scripts.pory"

# 128 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_RightGymStatue::
# 129 "data/maps/FortreeCity_Gym/scripts.pory"
	lockall
# 130 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, FortreeCity_Gym_EventScript_GymStatueCertified
# 131 "data/maps/FortreeCity_Gym/scripts.pory"
	goto FortreeCity_Gym_EventScript_GymStatue
# 132 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 133 "data/maps/FortreeCity_Gym/scripts.pory"

# 134 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GymStatueCertified::
# 135 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 136 "data/maps/FortreeCity_Gym/scripts.pory"
	releaseall
# 137 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 138 "data/maps/FortreeCity_Gym/scripts.pory"

# 139 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GymStatue::
# 140 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 141 "data/maps/FortreeCity_Gym/scripts.pory"
	releaseall
# 142 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 143 "data/maps/FortreeCity_Gym/scripts.pory"

# 144 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_GymGuideAdvice:
# 145 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Yo, how's it going, CHAMPION-\n"
# 146 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "bound {PLAYER}?\p"
# 147 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "FORTREE GYM LEADER WINONA is\n"
# 148 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "a master of FLYING-type POKéMON.\p"
# 149 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "She's waiting at the back of this GYM,\n"
# 150 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "behind the rotating doors.\p"
# 151 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "She's waiting for new challengers\n"
# 152 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "who are trying to take wing!\p"
# 153 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Okay, go for it!$"
# 154 "data/maps/FortreeCity_Gym/scripts.pory"

# 155 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_GymGuidePostVictory:
# 156 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You did it!\n"
# 157 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You've achieved liftoff!$"
# 158 "data/maps/FortreeCity_Gym/scripts.pory"

# 159 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_JaredIntro:
# 160 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Behold the elegant battle style of\n"
# 161 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "BIRD POKéMON!$"
# 162 "data/maps/FortreeCity_Gym/scripts.pory"

# 163 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_JaredDefeat:
# 164 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You…\n"
# 165 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You're strong…$"
# 166 "data/maps/FortreeCity_Gym/scripts.pory"

# 167 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_JaredPostBattle:
# 168 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "A TRAINER has to be smart to keep\n"
# 169 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "up with unexpected turns of events.\p"
# 170 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Do you have the smarts to get to\n"
# 171 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "our LEADER?$"
# 172 "data/maps/FortreeCity_Gym/scripts.pory"

# 173 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_EdwardoIntro:
# 174 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "The lovers of BIRD POKéMON aspire\n"
# 175 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "to join this GYM.\p"
# 176 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "As a member of the FORTREE GYM,\n"
# 177 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I'm not allowed to lose!$"
# 178 "data/maps/FortreeCity_Gym/scripts.pory"

# 179 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_EdwardoDefeat:
# 180 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "It was too much of a load for me\n"
# 181 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "to bear…$"
# 182 "data/maps/FortreeCity_Gym/scripts.pory"

# 183 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_EdwardoPostBattle:
# 184 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "The world is huge, and there are\n"
# 185 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "countless tough TRAINERS.\p"
# 186 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I'm going to keep training and make\n"
# 187 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "myself even stronger.$"
# 188 "data/maps/FortreeCity_Gym/scripts.pory"

# 189 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_FlintIntro:
# 190 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "There's no need for WINONA, our GYM\n"
# 191 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "LEADER, to deal with you!\p"
# 192 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I'm plenty good enough for you!$"
# 193 "data/maps/FortreeCity_Gym/scripts.pory"

# 194 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_FlintDefeat:
# 195 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WINONA, I…\n"
# 196 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I lost!$"
# 197 "data/maps/FortreeCity_Gym/scripts.pory"

# 198 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_FlintPostBattle:
# 199 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WINONA is cute and she's strong.\n"
# 200 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "She's the ultimate LEADER!\p"
# 201 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Blush…$"
# 202 "data/maps/FortreeCity_Gym/scripts.pory"

# 203 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_AshleyIntro:
# 204 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WINONA taught me personally!\n"
# 205 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You can't beat me easily!$"
# 206 "data/maps/FortreeCity_Gym/scripts.pory"

# 207 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_AshleyDefeat:
# 208 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I was beaten…$"
# 209 "data/maps/FortreeCity_Gym/scripts.pory"

# 210 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_AshleyPostBattle:
# 211 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Thanks to WINONA, the people of\n"
# 212 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "FORTREE can live without fear.$"
# 213 "data/maps/FortreeCity_Gym/scripts.pory"

# 214 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_HumbertoIntro:
# 215 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "When WINONA takes to battle, her face\n"
# 216 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "shines with beautiful determination…\p"
# 217 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I'm not letting you witness that\n"
# 218 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "lovely sight!$"
# 219 "data/maps/FortreeCity_Gym/scripts.pory"

# 220 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_HumbertoDefeat:
# 221 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Urk!\n"
# 222 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I couldn't stop you.$"
# 223 "data/maps/FortreeCity_Gym/scripts.pory"

# 224 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_HumbertoPostBattle:
# 225 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You'd better watch it!\n"
# 226 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Don't get distracted staring at WINONA\l"
# 227 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "or you'll go crashing down in a heap!$"
# 228 "data/maps/FortreeCity_Gym/scripts.pory"

# 229 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_DariusIntro:
# 230 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You'd better know that there are all\n"
# 231 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "sorts of FLYING-type POKéMON.\p"
# 232 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You do know that, right?$"
# 233 "data/maps/FortreeCity_Gym/scripts.pory"

# 234 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_DariusDefeat:
# 235 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You seem to know your stuff!$"
# 236 "data/maps/FortreeCity_Gym/scripts.pory"

# 237 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_DariusPostBattle:
# 238 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Sure, you beat me all right.\n"
# 239 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "But you'd better watch it! Our LEADER\l"
# 240 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WINONA's POKéMON are all business.$"
# 241 "data/maps/FortreeCity_Gym/scripts.pory"

# 242 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaIntro:
# 243 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I am WINONA. I am the LEADER of\n"
# 244 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "the FORTREE POKéMON GYM.\p"
# 245 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I have become one with BIRD POKéMON\n"
# 246 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "and have soared the skies…\p"
# 247 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "However grueling the battle, we have\n"
# 248 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "triumphed with grace…\p"
# 249 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Witness the elegant choreography\n"
# 250 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "of BIRD POKéMON and I!$"
# 251 "data/maps/FortreeCity_Gym/scripts.pory"

# 252 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaDefeat:
# 253 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Never before have I seen a TRAINER\n"
# 254 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "command POKéMON with more grace\l"
# 255 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "than I…\p"
# 256 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "In recognition of your prowess,\n"
# 257 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I present to you this GYM BADGE.$"
# 258 "data/maps/FortreeCity_Gym/scripts.pory"

# 259 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_ReceivedFeatherBadge:
# 260 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "{PLAYER} received the FEATHER BADGE\n"
# 261 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "from WINONA.$"
# 262 "data/maps/FortreeCity_Gym/scripts.pory"

# 263 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_ExplainFeatherBadgeTakeThis:
# 264 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "With the FEATHER BADGE, all POKéMON up\n"
# 265 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "to LV 70, even those received through\l"
# 266 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "trades, will obey your every command.\p"
# 267 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You will also be able to use\n"
# 268 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "the HM move FLY outside of battle.\p"
# 269 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "And these…\n"
# 270 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "These are gifts from me.$"
# 271 "data/maps/FortreeCity_Gym/scripts.pory"

# 272 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_ExplainAerialAce:
# 273 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Those are some of the most powerful\p"
# 274 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Flying-type moves that I know, as well\n"
# 275 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "as my favorite Mega stone. Use them all\p"
# 276 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "wisely, their power is devastating.\n"
# 277 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "… … … … … …$"
# 278 "data/maps/FortreeCity_Gym/scripts.pory"

# 279 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_RegisteredWinona:
# 280 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Registered GYM LEADER WINONA\n"
# 281 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "in the POKéNAV.$"
# 282 "data/maps/FortreeCity_Gym/scripts.pory"

# 283 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaPostBattle:
# 284 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Though I fell to you, I will remain\n"
# 285 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "devoted to BIRD POKéMON.$"
# 286 "data/maps/FortreeCity_Gym/scripts.pory"

# 287 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_GymStatue:
# 288 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "FORTREE CITY POKéMON GYM$"
# 289 "data/maps/FortreeCity_Gym/scripts.pory"

# 290 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_GymStatueCertified:
# 291 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "FORTREE CITY POKéMON GYM\p"
# 292 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WINONA'S CERTIFIED TRAINERS:\n"
# 293 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 294 "data/maps/FortreeCity_Gym/scripts.pory"

# 295 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaPreRematch:
# 296 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WINONA: We humans can never escape\n"
# 297 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "gravity's pull on the ground.\p"
# 298 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "But by striving for excellence,\n"
# 299 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "we have the power to soar!\p"
# 300 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You have scaled the pinnacle as\n"
# 301 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "the reigning CHAMPION.\p"
# 302 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Please, allow me to see your power\n"
# 303 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "at full flight!$"
# 304 "data/maps/FortreeCity_Gym/scripts.pory"

# 305 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaRematchDefeat:
# 306 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I failed to reach your height again…$"
# 307 "data/maps/FortreeCity_Gym/scripts.pory"

# 308 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaPostRematch:
# 309 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WINONA: Even though I have lost,\n"
# 310 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "the wings of my heart remain unbroken.\p"
# 311 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I can rise and soar again and\n"
# 312 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "yet again.\p"
# 313 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I am convinced of it!$"
# 314 "data/maps/FortreeCity_Gym/scripts.pory"

# 315 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaRematchNeedTwoMons:
# 316 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WINONA: We humans can never escape\n"
# 317 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "gravity's pull on the ground.\p"
# 318 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "But by striving for excellence,\n"
# 319 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "we have the power to soar!\p"
# 320 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You have scaled the pinnacle as\n"
# 321 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "the reigning CHAMPION.\p"
# 322 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Please, allow me to see your power\n"
# 323 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "at full flight!\p"
# 324 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Oh, no… Do you have but one\n"
# 325 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "POKéMON with you?\p"
# 326 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Please return with two POKéMON\n"
# 327 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "at the very least.$"
