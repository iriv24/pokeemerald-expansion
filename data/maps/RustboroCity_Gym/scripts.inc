# 1 "data/maps/RustboroCity_Gym/scripts.pory"

# 2 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_MapScripts::
# 3 "data/maps/RustboroCity_Gym/scripts.pory"
	.byte 0
# 4 "data/maps/RustboroCity_Gym/scripts.pory"

# 5 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Roxanne::
# 6 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxanneIntro, RustboroCity_Gym_Text_RoxanneDefeat, RustboroCity_Gym_EventScript_RoxanneDefeated, NO_MUSIC
# 7 "data/maps/RustboroCity_Gym/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 8 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, RustboroCity_Gym_EventScript_RoxanneRematch
# 9 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_BULLDOZE, RustboroCity_Gym_EventScript_GiveBulldoze
# 10 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RoxannePostBattle, MSGBOX_DEFAULT
# 11 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 12 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 13 "data/maps/RustboroCity_Gym/scripts.pory"

# 14 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RoxanneDefeated::
# 15 "data/maps/RustboroCity_Gym/scripts.pory"
	message RustboroCity_Gym_Text_ReceivedStoneBadge
# 16 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
# 17 "data/maps/RustboroCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 18 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_StoneBadgeInfoTakeThis, MSGBOX_DEFAULT
# 19 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_RUSTBORO_GYM
# 20 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 21 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 1
# 22 "data/maps/RustboroCity_Gym/scripts.pory"
	addvar VAR_PETALBURG_GYM_STATE, 1
# 23 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 24 "data/maps/RustboroCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 25 "data/maps/RustboroCity_Gym/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 7, Common_EventScript_ReadyPetalburgGymForBattle
# 26 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GiveBulldoze
# 27 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 28 "data/maps/RustboroCity_Gym/scripts.pory"

# 29 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GiveBulldoze::
# 30 "data/maps/RustboroCity_Gym/scripts.pory"
	giveitem ITEM_TM_BULLDOZE
# 31 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 32 "data/maps/RustboroCity_Gym/scripts.pory"
	compare VAR_GAME_SETTING_DIFFICULTY_MODE, GAME_SETTING_DIFFICULTY_HARD_MODE
# 33 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_ge RustboroCity_Gym_EventScript_GiveBulldoze_2
# 34 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_BULLDOZE
# 35 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_ExplainBulldoze, MSGBOX_DEFAULT
# 36 "data/maps/RustboroCity_Gym/scripts.pory"
	closemessage
# 37 "data/maps/RustboroCity_Gym/scripts.pory"
	delay 30
# 38 "data/maps/RustboroCity_Gym/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 39 "data/maps/RustboroCity_Gym/scripts.pory"
	specialvar VAR_0x8006, GetLevelCapForText
# 40 "data/maps/RustboroCity_Gym/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_0x8006
# 41 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox LevelCapIncreasedTo, MSGBOX_DEFAULT
# 42 "data/maps/RustboroCity_Gym/scripts.pory"
	waitfanfare
# 43 "data/maps/RustboroCity_Gym/scripts.pory"
	closemessage
# 44 "data/maps/RustboroCity_Gym/scripts.pory"
	delay 30
# 45 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 46 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 47 "data/maps/RustboroCity_Gym/scripts.pory"
	
# 48 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GiveBulldoze_1:
# 49 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_BULLDOZE
# 50 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_ExplainBulldoze, MSGBOX_DEFAULT
# 51 "data/maps/RustboroCity_Gym/scripts.pory"
	closemessage
# 52 "data/maps/RustboroCity_Gym/scripts.pory"
	delay 30
# 53 "data/maps/RustboroCity_Gym/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 54 "data/maps/RustboroCity_Gym/scripts.pory"
	specialvar VAR_0x8006, GetLevelCapForText
# 55 "data/maps/RustboroCity_Gym/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_0x8006
# 56 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox LevelCapIncreasedTo, MSGBOX_DEFAULT
# 57 "data/maps/RustboroCity_Gym/scripts.pory"
	waitfanfare
# 58 "data/maps/RustboroCity_Gym/scripts.pory"
	closemessage
# 59 "data/maps/RustboroCity_Gym/scripts.pory"
	delay 30
# 60 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 61 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 62 "data/maps/RustboroCity_Gym/scripts.pory"

# 63 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GiveBulldoze_2:
# 64 "data/maps/RustboroCity_Gym/scripts.pory"
	giveitem ITEM_BOTTLE_CAP
# 65 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GiveBulldoze_1
# 66 "data/maps/RustboroCity_Gym/scripts.pory"

# 67 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RoxanneRematch::
# 68 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxannePreRematch, RustboroCity_Gym_Text_RoxanneRematchDefeat, RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons
# 69 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RoxannePostRematch, MSGBOX_AUTOCLOSE
# 70 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 71 "data/maps/RustboroCity_Gym/scripts.pory"

# 72 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Josh::
# 73 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JOSH, RustboroCity_Gym_Text_JoshIntro, RustboroCity_Gym_Text_JoshDefeat
# 74 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_JoshPostBattle, MSGBOX_AUTOCLOSE
# 75 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 76 "data/maps/RustboroCity_Gym/scripts.pory"

# 77 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Tommy::
# 78 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_TOMMY, RustboroCity_Gym_Text_TommyIntro, RustboroCity_Gym_Text_TommyDefeat
# 79 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_TommyPostBattle, MSGBOX_AUTOCLOSE
# 80 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 81 "data/maps/RustboroCity_Gym/scripts.pory"

# 82 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Marc::
# 83 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MARC, RustboroCity_Gym_Text_MarcIntro, RustboroCity_Gym_Text_MarcDefeat
# 84 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_MarcPostBattle, MSGBOX_AUTOCLOSE
# 85 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 86 "data/maps/RustboroCity_Gym/scripts.pory"

# 87 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymGuide::
# 88 "data/maps/RustboroCity_Gym/scripts.pory"
	lock
# 89 "data/maps/RustboroCity_Gym/scripts.pory"
	faceplayer
# 90 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_RUSTBORO_GYM, RustboroCity_Gym_EventScript_GymGuidePostVictory
# 91 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 92 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 93 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 94 "data/maps/RustboroCity_Gym/scripts.pory"

# 95 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymGuidePostVictory::
# 96 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 97 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 98 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 99 "data/maps/RustboroCity_Gym/scripts.pory"

# 100 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_LeftGymStatue::
# 101 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 102 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_GymStatueCertified
# 103 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GymStatue
# 104 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 105 "data/maps/RustboroCity_Gym/scripts.pory"

# 106 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RightGymStatue::
# 107 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 108 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_GymStatueCertified
# 109 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GymStatue
# 110 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 111 "data/maps/RustboroCity_Gym/scripts.pory"

# 112 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymStatueCertified::
# 113 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 114 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 115 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 116 "data/maps/RustboroCity_Gym/scripts.pory"

# 117 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymStatue::
# 118 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 119 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 120 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 121 "data/maps/RustboroCity_Gym/scripts.pory"

# 122 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RegisterRoxanne::
# 123 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 124 "data/maps/RustboroCity_Gym/scripts.pory"
	pokenavcall RustboroCity_Gym_Text_RoxanneRegisterCall
# 125 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
# 126 "data/maps/RustboroCity_Gym/scripts.pory"
	delay 30
# 127 "data/maps/RustboroCity_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 128 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RegisteredRoxanne, MSGBOX_DEFAULT
# 129 "data/maps/RustboroCity_Gym/scripts.pory"
	waitfanfare
# 130 "data/maps/RustboroCity_Gym/scripts.pory"
	closemessage
# 131 "data/maps/RustboroCity_Gym/scripts.pory"
	delay 30
# 132 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_ROXANNE_MATCH_CALL
# 133 "data/maps/RustboroCity_Gym/scripts.pory"
	clearflag FLAG_ENABLE_ROXANNE_FIRST_CALL
# 134 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 135 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 136 "data/maps/RustboroCity_Gym/scripts.pory"

# 137 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Nosepass::
# 138 "data/maps/RustboroCity_Gym/scripts.pory"
	lock
# 139 "data/maps/RustboroCity_Gym/scripts.pory"
	faceplayer
# 140 "data/maps/RustboroCity_Gym/scripts.pory"
	waitse
# 141 "data/maps/RustboroCity_Gym/scripts.pory"
	playmoncry SPECIES_NOSEPASS, CRY_MODE_NORMAL
# 142 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_Nosepass, MSGBOX_DEFAULT
# 143 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmoncry
# 144 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 145 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 146 "data/maps/RustboroCity_Gym/scripts.pory"

# 147 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymGuideAdvice:
# 148 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Yo, how's it going?\p"
# 149 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Listen, my friend!\n"
# 150 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Would you like to become the Champion?\p"
# 151 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm no trainer, not me, but I can\n"
# 152 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "sure give you winning advice.\p"
# 153 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That's settled, then! We'll aim for the\n"
# 154 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Pokémon Championship together!\p"
# 155 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It's your job as a trainer to collect\n"
# 156 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Gym Badges, am I right?\p"
# 157 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "But Gym Leaders aren't pushovers!\p"
# 158 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "And that's where I come in!\n"
# 159 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm here to provide expert advice!\p"
# 160 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Roxanne, the Gym Leader, is a user\n"
# 161 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "of Rock-type Pokémon.\p"
# 162 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The Rock type is very durable, but\n"
# 163 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "it can't stand Water-type and\l"
# 164 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Grass-type moves.\p"
# 165 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Come see me afterwards, if you beat\n"
# 166 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "the Gym Leader.\p"
# 167 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Well, go for it!$"
# 168 "data/maps/RustboroCity_Gym/scripts.pory"

# 169 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymGuidePostVictory:
# 170 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Whoa! What a breathtaking victory!\n"
# 171 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "My cheering must've worked!\p"
# 172 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Great!\n"
# 173 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Check your Trainer Card.\p"
# 174 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The Stone Badge you got should be\n"
# 175 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "properly recorded on it.\p"
# 176 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "In other words…\p"
# 177 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You've climbed the first step on\n"
# 178 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "the stairs to the Championship!\p"
# 179 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That's got to feel awesome!$"
# 180 "data/maps/RustboroCity_Gym/scripts.pory"

# 181 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshIntro:
# 182 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Don't take us Gym trainers lightly!\n"
# 183 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'll show you why we're better!$"
# 184 "data/maps/RustboroCity_Gym/scripts.pory"

# 185 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshDefeat:
# 186 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You were too good for me…$"
# 187 "data/maps/RustboroCity_Gym/scripts.pory"

# 188 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshPostBattle:
# 189 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You haven't seen anything of the Rock\n"
# 190 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "type's terrifying power!$"
# 191 "data/maps/RustboroCity_Gym/scripts.pory"

# 192 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyIntro:
# 193 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "If you can't beat me, you won't stand\n"
# 194 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "a chance against Roxanne!$"
# 195 "data/maps/RustboroCity_Gym/scripts.pory"

# 196 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyDefeat:
# 197 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Wow! You've got some potential!$"
# 198 "data/maps/RustboroCity_Gym/scripts.pory"

# 199 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyPostBattle:
# 200 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Roxanne is stronger than me by\n"
# 201 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "several times.\p"
# 202 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You'd better be on your guard!$"
# 203 "data/maps/RustboroCity_Gym/scripts.pory"

# 204 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcIntro:
# 205 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "We might be in the middle of town,\n"
# 206 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "but so what?\p"
# 207 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "My Rock Pokémon need room to\n"
# 208 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "rampage!$"
# 209 "data/maps/RustboroCity_Gym/scripts.pory"

# 210 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcDefeat:
# 211 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Oh, man oh man!\n"
# 212 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Our challenger is one feisty customer!$"
# 213 "data/maps/RustboroCity_Gym/scripts.pory"

# 214 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcPostBattle:
# 215 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I have to hand it to our Leader.\p"
# 216 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It took smarts and sense for her to\n"
# 217 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "pick the Rock type at her young age.$"
# 218 "data/maps/RustboroCity_Gym/scripts.pory"

# 219 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneIntro:
# 220 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Hello, I am Roxanne, the Rustboro\n"
# 221 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Pokémon Gym Leader.\p"
# 222 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I became a Gym Leader so that I might\n"
# 223 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "apply what I learned at the Pokémon\l"
# 224 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Trainer's School in battle.\p"
# 225 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Would you kindly demonstrate how you\n"
# 226 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "battle, and with which Pokémon?$"
# 227 "data/maps/RustboroCity_Gym/scripts.pory"

# 228 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneDefeat:
# 229 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "So…\n"
# 230 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I lost…\p"
# 231 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It seems that I still have much more\n"
# 232 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "to learn…\p"
# 233 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I understand.\p"
# 234 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The Pokémon League's rules state\n"
# 235 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "that trainers are to be given this\l"
# 236 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "if they defeat a Gym Leader.\p"
# 237 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Please accept the official Pokémon\n"
# 238 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "League Stone Badge.$"
# 239 "data/maps/RustboroCity_Gym/scripts.pory"

# 240 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_ReceivedStoneBadge:
# 241 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "{PLAYER} received the Stone Badge\n"
# 242 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "from Roxanne.$"
# 243 "data/maps/RustboroCity_Gym/scripts.pory"

# 244 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_StoneBadgeInfoTakeThis:
# 245 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "This Badge enables your Pokémon to use\n"
# 246 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "the HM move Cut outside of battle.\p"
# 247 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Please take this with you, too.$"
# 248 "data/maps/RustboroCity_Gym/scripts.pory"

# 249 "data/maps/RustboroCity_Gym/scripts.pory"

# 250 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_ExplainBulldoze:
# 251 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That Technical Machine, TM96,\n"
# 252 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "contains Bulldoze.\p"
# 253 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It not only inflicts damage,\n"
# 254 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "it also lowers Speed. It's like\l"
# 255 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Ground-type Rock Tomb.$"
# 256 "data/maps/RustboroCity_Gym/scripts.pory"

# 257 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxannePostBattle:
# 258 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Since you are so strong, you should\n"
# 259 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "challenge other Gym Leaders.\p"
# 260 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "By battling many trainers, you should\n"
# 261 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "learn many things.$"
# 262 "data/maps/RustboroCity_Gym/scripts.pory"

# 263 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymStatue:
# 264 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Rustboro City Pokémon Gym$"
# 265 "data/maps/RustboroCity_Gym/scripts.pory"

# 266 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymStatueCertified:
# 267 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Rustboro City Pokémon Gym\p"
# 268 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Roxanne's Certified Trainers:\n"
# 269 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 270 "data/maps/RustboroCity_Gym/scripts.pory"

# 271 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneRegisterCall:
# 272 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … …\n"
# 273 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … Beep!\p"
# 274 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Roxanne: Oh, hello, {PLAYER}?\n"
# 275 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "This is Roxanne of Rustboro City.\p"
# 276 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I heard from Brawly that you're\n"
# 277 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "moving up through the ranks of\l"
# 278 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "trainers at an incredible clip.\p"
# 279 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Well, I'd rather not think that\n"
# 280 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I can't beat you.\p"
# 281 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I promise, I will shape up my Gym\n"
# 282 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "so that you may challenge us again.\p"
# 283 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I hope you'll be looking forward to\n"
# 284 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "that occasion as much as me!\p"
# 285 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … …\n"
# 286 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … Click!$"
# 287 "data/maps/RustboroCity_Gym/scripts.pory"

# 288 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RegisteredRoxanne:
# 289 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Registered Gym Leader Roxanne\n"
# 290 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "in the PokéNav.$"
# 291 "data/maps/RustboroCity_Gym/scripts.pory"

# 292 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxannePreRematch:
# 293 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Roxanne: I'm so glad to see you again.\n"
# 294 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm Roxanne, the Gym Leader here.\p"
# 295 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm sure we've both experienced many\n"
# 296 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "battles since we last met.\p"
# 297 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I would like to see how much better\n"
# 298 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "we've become. Let us battle!$"
# 299 "data/maps/RustboroCity_Gym/scripts.pory"

# 300 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneRematchDefeat:
# 301 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Grr…\n"
# 302 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Again, I have lost…$"
# 303 "data/maps/RustboroCity_Gym/scripts.pory"

# 304 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxannePostRematch:
# 305 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Roxanne: I still have much to learn\n"
# 306 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "when it comes to battling Pokémon.\p"
# 307 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That awareness makes me love battling\n"
# 308 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "all that much more!$"
# 309 "data/maps/RustboroCity_Gym/scripts.pory"

# 310 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons:
# 311 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Roxanne: I'm so glad to see you again.\n"
# 312 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm Roxanne, the Gym Leader here.\p"
# 313 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm sure we've both experienced many\n"
# 314 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "battles since we last met.\p"
# 315 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I would like to see how much better\n"
# 316 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "we've become…\p"
# 317 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Oh, no…\n"
# 318 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You only have one Pokémon with you?\p"
# 319 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Please return with at least one more\n"
# 320 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Pokémon.$"
# 321 "data/maps/RustboroCity_Gym/scripts.pory"

# 322 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_Nosepass:
# 323 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Nosepass: Bleleleh!$"
