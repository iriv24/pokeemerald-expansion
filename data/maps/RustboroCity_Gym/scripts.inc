# 1 "data/maps/RustboroCity_Gym/scripts.pory"

# 2 "data/maps/RustboroCity_Gym/scripts.pory"
.set LOCALID_JOSH, 2
# 3 "data/maps/RustboroCity_Gym/scripts.pory"
.set LOCALID_MARC, 4
# 4 "data/maps/RustboroCity_Gym/scripts.pory"
.set LOCALID_LARVITARKID, 6
# 5 "data/maps/RustboroCity_Gym/scripts.pory"
.set LOCALID_LOTADGIRL, 7
# 6 "data/maps/RustboroCity_Gym/scripts.pory"
.set LOCALID_LARVITAR, 8
# 7 "data/maps/RustboroCity_Gym/scripts.pory"
.set LOCALID_LOTAD, 9
# 8 "data/maps/RustboroCity_Gym/scripts.pory"
.set LOCALID_SCOTT, 10
# 9 "data/maps/RustboroCity_Gym/scripts.pory"

# 10 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_MapScripts::
# 11 "data/maps/RustboroCity_Gym/scripts.pory"
	.byte 0
# 12 "data/maps/RustboroCity_Gym/scripts.pory"

# 13 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RoxanneDefeated::
# 14 "data/maps/RustboroCity_Gym/scripts.pory"
	message RustboroCity_Gym_Text_ReceivedStoneBadge
# 15 "data/maps/RustboroCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 16 "data/maps/RustboroCity_Gym/scripts.pory"
	applymovement LOCALID_SCOTT, RustboroCity_Gym_ScottLeaves
# 17 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmovement 0
# 18 "data/maps/RustboroCity_Gym/scripts.pory"
	removeobject LOCALID_SCOTT
# 19 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
# 20 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_StoneBadgeInfoTakeThis, MSGBOX_DEFAULT
# 21 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_RUSTBORO_GYM
# 22 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 23 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 1
# 24 "data/maps/RustboroCity_Gym/scripts.pory"
	addvar VAR_PETALBURG_GYM_STATE, 1
# 25 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 26 "data/maps/RustboroCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 27 "data/maps/RustboroCity_Gym/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 7, Common_EventScript_ReadyPetalburgGymForBattle
# 28 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GiveBulldoze
# 29 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 30 "data/maps/RustboroCity_Gym/scripts.pory"

# 31 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GiveBulldoze::
# 32 "data/maps/RustboroCity_Gym/scripts.pory"
	giveitem ITEM_TM_BULLDOZE
# 33 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 34 "data/maps/RustboroCity_Gym/scripts.pory"
	compare VAR_GAME_SETTING_DIFFICULTY_MODE, GAME_SETTING_DIFFICULTY_HARD_MODE
# 35 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_ge RustboroCity_Gym_EventScript_GiveBulldoze_2
# 36 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_BULLDOZE
# 37 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_ExplainBulldoze, MSGBOX_DEFAULT
# 38 "data/maps/RustboroCity_Gym/scripts.pory"
	closemessage
# 39 "data/maps/RustboroCity_Gym/scripts.pory"
	delay 30
# 40 "data/maps/RustboroCity_Gym/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 41 "data/maps/RustboroCity_Gym/scripts.pory"
	specialvar VAR_0x8006, GetLevelCapForText
# 42 "data/maps/RustboroCity_Gym/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_0x8006
# 43 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox LevelCapIncreasedTo, MSGBOX_DEFAULT
# 44 "data/maps/RustboroCity_Gym/scripts.pory"
	waitfanfare
# 45 "data/maps/RustboroCity_Gym/scripts.pory"
	closemessage
# 46 "data/maps/RustboroCity_Gym/scripts.pory"
	delay 30
# 47 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 48 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 49 "data/maps/RustboroCity_Gym/scripts.pory"
	
# 50 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GiveBulldoze_1:
# 51 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_BULLDOZE
# 52 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_ExplainBulldoze, MSGBOX_DEFAULT
# 53 "data/maps/RustboroCity_Gym/scripts.pory"
	closemessage
# 54 "data/maps/RustboroCity_Gym/scripts.pory"
	delay 30
# 55 "data/maps/RustboroCity_Gym/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 56 "data/maps/RustboroCity_Gym/scripts.pory"
	specialvar VAR_0x8006, GetLevelCapForText
# 57 "data/maps/RustboroCity_Gym/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_0x8006
# 58 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox LevelCapIncreasedTo, MSGBOX_DEFAULT
# 59 "data/maps/RustboroCity_Gym/scripts.pory"
	waitfanfare
# 60 "data/maps/RustboroCity_Gym/scripts.pory"
	closemessage
# 61 "data/maps/RustboroCity_Gym/scripts.pory"
	delay 30
# 62 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 63 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 64 "data/maps/RustboroCity_Gym/scripts.pory"

# 65 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GiveBulldoze_2:
# 66 "data/maps/RustboroCity_Gym/scripts.pory"
	giveitem ITEM_BOTTLE_CAP
# 67 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GiveBulldoze_1
# 68 "data/maps/RustboroCity_Gym/scripts.pory"

# 69 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RoxanneRematch::
# 70 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxannePreRematch, RustboroCity_Gym_Text_RoxanneRematchDefeat, RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons
# 71 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RoxannePostRematch, MSGBOX_AUTOCLOSE
# 72 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 73 "data/maps/RustboroCity_Gym/scripts.pory"

# 74 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Josh::
# 75 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JOSH, RustboroCity_Gym_Text_JoshIntro, RustboroCity_Gym_Text_JoshDefeat
# 76 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_RUSTBORO_GYM, RustboroCity_Gym_EventScript_JoshPostRoxanne 
# 77 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_JoshPostBattle, MSGBOX_AUTOCLOSE
# 78 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 79 "data/maps/RustboroCity_Gym/scripts.pory"

# 80 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Marc::
# 81 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MARC, RustboroCity_Gym_Text_MarcIntro, RustboroCity_Gym_Text_MarcDefeat
# 82 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_RUSTBORO_GYM, RustboroCity_Gym_EventScript_MarcPostRoxanne 
# 83 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_MarcPostBattle, MSGBOX_AUTOCLOSE
# 84 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 85 "data/maps/RustboroCity_Gym/scripts.pory"

# 86 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymGuide::
# 87 "data/maps/RustboroCity_Gym/scripts.pory"
	lock
# 88 "data/maps/RustboroCity_Gym/scripts.pory"
	faceplayer
# 89 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_RUSTBORO_GYM, RustboroCity_Gym_EventScript_GymGuidePostVictory
# 90 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 91 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 92 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 93 "data/maps/RustboroCity_Gym/scripts.pory"

# 94 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymGuidePostVictory::
# 95 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 96 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 97 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 98 "data/maps/RustboroCity_Gym/scripts.pory"

# 99 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_LeftGymStatue::
# 100 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 101 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_GymStatueCertified
# 102 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GymStatue
# 103 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 104 "data/maps/RustboroCity_Gym/scripts.pory"

# 105 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RightGymStatue::
# 106 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 107 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_GymStatueCertified
# 108 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GymStatue
# 109 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 110 "data/maps/RustboroCity_Gym/scripts.pory"

# 111 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymStatueCertified::
# 112 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 113 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 114 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 115 "data/maps/RustboroCity_Gym/scripts.pory"

# 116 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymStatue::
# 117 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 118 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 119 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 120 "data/maps/RustboroCity_Gym/scripts.pory"

# 121 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RegisterRoxanne::
# 122 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 123 "data/maps/RustboroCity_Gym/scripts.pory"
	pokenavcall RustboroCity_Gym_Text_RoxanneRegisterCall
# 124 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
# 125 "data/maps/RustboroCity_Gym/scripts.pory"
	delay 30
# 126 "data/maps/RustboroCity_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 127 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RegisteredRoxanne, MSGBOX_DEFAULT
# 128 "data/maps/RustboroCity_Gym/scripts.pory"
	waitfanfare
# 129 "data/maps/RustboroCity_Gym/scripts.pory"
	closemessage
# 130 "data/maps/RustboroCity_Gym/scripts.pory"
	delay 30
# 131 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_ROXANNE_MATCH_CALL
# 132 "data/maps/RustboroCity_Gym/scripts.pory"
	clearflag FLAG_ENABLE_ROXANNE_FIRST_CALL
# 133 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 134 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 135 "data/maps/RustboroCity_Gym/scripts.pory"

# 136 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Nosepass::
# 137 "data/maps/RustboroCity_Gym/scripts.pory"
	lock
# 138 "data/maps/RustboroCity_Gym/scripts.pory"
	faceplayer
# 139 "data/maps/RustboroCity_Gym/scripts.pory"
	waitse
# 140 "data/maps/RustboroCity_Gym/scripts.pory"
	playmoncry SPECIES_NOSEPASS, CRY_MODE_NORMAL
# 141 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_Nosepass, MSGBOX_DEFAULT
# 142 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmoncry
# 143 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 144 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 145 "data/maps/RustboroCity_Gym/scripts.pory"

# 146 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymGuideAdvice:
# 147 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Yo, how's it going?\p"
# 148 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Listen, my friend!\n"
# 149 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Would you like to become the Champion?\p"
# 150 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm no trainer, not me, but I can\n"
# 151 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "sure give you winning advice.\p"
# 152 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That's settled, then! We'll aim for the\n"
# 153 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Pokémon Championship together!\p"
# 154 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It's your job as a trainer to collect\n"
# 155 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Gym Badges, am I right?\p"
# 156 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "But Gym Leaders aren't pushovers!\p"
# 157 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "And that's where I come in!\n"
# 158 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm here to provide expert advice!\p"
# 159 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Roxanne, the Gym Leader, is a user\n"
# 160 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "of Rock-type Pokémon.\p"
# 161 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The Rock type is very durable, but\n"
# 162 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "it can't stand Water-type and\l"
# 163 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Grass-type moves.\p"
# 164 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Come see me afterwards, if you beat\n"
# 165 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "the Gym Leader.\p"
# 166 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Well, go for it!$"
# 167 "data/maps/RustboroCity_Gym/scripts.pory"

# 168 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymGuidePostVictory:
# 169 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Whoa! What a breathtaking victory!\n"
# 170 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "My cheering must've worked!\p"
# 171 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Great!\n"
# 172 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Check your Trainer Card.\p"
# 173 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The Stone Badge you got should be\n"
# 174 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "properly recorded on it.\p"
# 175 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "In other words…\p"
# 176 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You've climbed the first step on\n"
# 177 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "the stairs to the Championship!\p"
# 178 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That's got to feel awesome!$"
# 179 "data/maps/RustboroCity_Gym/scripts.pory"

# 180 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshIntro:
# 181 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Don't take us Gym trainers lightly!\n"
# 182 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'll show you why we're better!$"
# 183 "data/maps/RustboroCity_Gym/scripts.pory"

# 184 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshDefeat:
# 185 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You were too good for me…$"
# 186 "data/maps/RustboroCity_Gym/scripts.pory"

# 187 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshPostBattle:
# 188 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You haven't seen anything of the Rock\n"
# 189 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "type's terrifying power!$"
# 190 "data/maps/RustboroCity_Gym/scripts.pory"

# 191 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcIntro:
# 192 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "We might be in the middle of town,\n"
# 193 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "but so what?\p"
# 194 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "My Rock Pokémon need room to\n"
# 195 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "rampage!$"
# 196 "data/maps/RustboroCity_Gym/scripts.pory"

# 197 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcDefeat:
# 198 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Oh, man oh man!\n"
# 199 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Our challenger is one feisty customer!$"
# 200 "data/maps/RustboroCity_Gym/scripts.pory"

# 201 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcPostBattle:
# 202 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I have to hand it to our Leader.\p"
# 203 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It took smarts and sense for her to\n"
# 204 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "pick the Rock type at her young age.$"
# 205 "data/maps/RustboroCity_Gym/scripts.pory"

# 206 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneIntro:
# 207 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Hello, I am Roxanne, the Rustboro\n"
# 208 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Pokémon Gym Leader.\p"
# 209 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I became a Gym Leader so that I might\n"
# 210 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "apply what I learned at the Pokémon\l"
# 211 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Trainer's School in battle.\p"
# 212 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I tried to make this Gym a place for\n"
# 213 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "new trainers to learn outside of school.\p"
# 214 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Would you kindly demonstrate how you\n"
# 215 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "battle, and with which Pokémon?$"
# 216 "data/maps/RustboroCity_Gym/scripts.pory"

# 217 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneDefeat:
# 218 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "So…\n"
# 219 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I lost…\p"
# 220 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It seems that I still have much more\n"
# 221 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "to learn…\p"
# 222 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I understand.\p"
# 223 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The Pokémon League's rules state\n"
# 224 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "that trainers are to be given this\l"
# 225 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "if they defeat a Gym Leader.\p"
# 226 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Please accept the official Pokémon\n"
# 227 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "League Stone Badge.$"
# 228 "data/maps/RustboroCity_Gym/scripts.pory"

# 229 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_ReceivedStoneBadge:
# 230 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "{PLAYER} received the Stone Badge\n"
# 231 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "from Roxanne.$"
# 232 "data/maps/RustboroCity_Gym/scripts.pory"

# 233 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_StoneBadgeInfoTakeThis:
# 234 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "This Badge enables your Pokémon to use\n"
# 235 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "the HM move Cut outside of battle.\p"
# 236 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Please take this with you, too.$"
# 237 "data/maps/RustboroCity_Gym/scripts.pory"

# 238 "data/maps/RustboroCity_Gym/scripts.pory"

# 239 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_ExplainBulldoze:
# 240 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That Technical Machine, TM96,\n"
# 241 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "contains Bulldoze.\p"
# 242 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It not only inflicts damage,\n"
# 243 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "it also lowers Speed. It's like\l"
# 244 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Ground-type Rock Tomb.$"
# 245 "data/maps/RustboroCity_Gym/scripts.pory"

# 246 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxannePostBattle:
# 247 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Since you are so strong, you should\n"
# 248 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "challenge other Gym Leaders.\p"
# 249 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "By battling many trainers, you should\n"
# 250 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "learn many things.$"
# 251 "data/maps/RustboroCity_Gym/scripts.pory"

# 252 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymStatue:
# 253 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Rustboro City Pokémon Gym$"
# 254 "data/maps/RustboroCity_Gym/scripts.pory"

# 255 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymStatueCertified:
# 256 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Rustboro City Pokémon Gym\p"
# 257 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Roxanne's Certified Trainers:\n"
# 258 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 259 "data/maps/RustboroCity_Gym/scripts.pory"

# 260 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneRegisterCall:
# 261 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … …\n"
# 262 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … Beep!\p"
# 263 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Roxanne: Oh, hello, {PLAYER}?\n"
# 264 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "This is Roxanne of Rustboro City.\p"
# 265 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I heard from Brawly that you're\n"
# 266 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "moving up through the ranks of\l"
# 267 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "trainers at an incredible clip.\p"
# 268 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Well, I'd rather not think that\n"
# 269 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I can't beat you.\p"
# 270 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I promise, I will shape up my Gym\n"
# 271 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "so that you may challenge us again.\p"
# 272 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I hope you'll be looking forward to\n"
# 273 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "that occasion as much as me!\p"
# 274 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … …\n"
# 275 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … Click!$"
# 276 "data/maps/RustboroCity_Gym/scripts.pory"

# 277 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RegisteredRoxanne:
# 278 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Registered Gym Leader Roxanne\n"
# 279 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "in the PokéNav.$"
# 280 "data/maps/RustboroCity_Gym/scripts.pory"

# 281 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxannePreRematch:
# 282 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Roxanne: I'm so glad to see you again.\n"
# 283 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm Roxanne, the Gym Leader here.\p"
# 284 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm sure we've both experienced many\n"
# 285 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "battles since we last met.\p"
# 286 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I would like to see how much better\n"
# 287 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "we've become. Let us battle!$"
# 288 "data/maps/RustboroCity_Gym/scripts.pory"

# 289 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneRematchDefeat:
# 290 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Grr…\n"
# 291 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Again, I have lost…$"
# 292 "data/maps/RustboroCity_Gym/scripts.pory"

# 293 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxannePostRematch:
# 294 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Roxanne: I still have much to learn\n"
# 295 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "when it comes to battling Pokémon.\p"
# 296 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That awareness makes me love battling\n"
# 297 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "all that much more!$"
# 298 "data/maps/RustboroCity_Gym/scripts.pory"

# 299 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons:
# 300 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Roxanne: I'm so glad to see you again.\n"
# 301 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm Roxanne, the Gym Leader here.\p"
# 302 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm sure we've both experienced many\n"
# 303 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "battles since we last met.\p"
# 304 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I would like to see how much better\n"
# 305 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "we've become…\p"
# 306 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Oh, no…\n"
# 307 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You only have one Pokémon with you?\p"
# 308 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Please return with at least one more\n"
# 309 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Pokémon.$"
# 310 "data/maps/RustboroCity_Gym/scripts.pory"

# 311 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_Nosepass:
# 312 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Nosepass: Bleleleh!$"

RustboroCity_Gym_Lotad::
# 315 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Lotad_Text_0
# 316 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
	end


RustboroCity_Gym_Larvitar::
# 321 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Larvitar_Text_0
# 322 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
	end


RustboroCity_Gym_EventScript_LarvitarTrainer::
# 327 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_unset FLAG_DEFEATED_RUSTBORO_GYM, RustboroCity_Gym_EventScript_LarvitarTrainer_2
# 332 "data/maps/RustboroCity_Gym/scripts.pory"
	lock
# 333 "data/maps/RustboroCity_Gym/scripts.pory"
	faceplayer
# 334 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_EventScript_LarvitarTrainer_Text_1
RustboroCity_Gym_EventScript_LarvitarTrainer_1:
# 336 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
	end

RustboroCity_Gym_EventScript_LarvitarTrainer_2:
# 328 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_EventScript_LarvitarTrainer_Text_0
	goto RustboroCity_Gym_EventScript_LarvitarTrainer_1


RustboroCity_Gym_EventScript_LotadTrainer::
# 341 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_unset FLAG_DEFEATED_RUSTBORO_GYM, RustboroCity_Gym_EventScript_LotadTrainer_2
# 347 "data/maps/RustboroCity_Gym/scripts.pory"
	lock
# 348 "data/maps/RustboroCity_Gym/scripts.pory"
	faceplayer
# 349 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_EventScript_LotadTrainer_Text_1
RustboroCity_Gym_EventScript_LotadTrainer_1:
# 351 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
	end

RustboroCity_Gym_EventScript_LotadTrainer_2:
# 342 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_EventScript_LotadTrainer_Text_0
	goto RustboroCity_Gym_EventScript_LotadTrainer_1


RustboroCity_Gym_EventScript_Roxanne::
# 356 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_defeated TRAINER_ROXANNE_1, RustboroCity_Gym_EventScript_RoxannePostBattle
# 357 "data/maps/RustboroCity_Gym/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 358 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, RustboroCity_Gym_EventScript_RoxanneRematch
# 359 "data/maps/RustboroCity_Gym/scripts.pory"
	fadescreen FADE_TO_BLACK
# 360 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_EventScript_Roxanne_Text_0
# 361 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
# 362 "data/maps/RustboroCity_Gym/scripts.pory"
	playse SE_PIN
# 363 "data/maps/RustboroCity_Gym/scripts.pory"
	playse SE_PIN
# 364 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_EventScript_Roxanne_Text_1
# 365 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
# 366 "data/maps/RustboroCity_Gym/scripts.pory"
	closemessage
# 367 "data/maps/RustboroCity_Gym/scripts.pory"
	addobject LOCALID_SCOTT
# 368 "data/maps/RustboroCity_Gym/scripts.pory"
	applymovement LOCALID_LARVITARKID, RustboroCity_Gym_EventScript_FaceLeft
# 369 "data/maps/RustboroCity_Gym/scripts.pory"
	applymovement LOCALID_LARVITAR, RustboroCity_Gym_EventScript_FaceLeft
# 370 "data/maps/RustboroCity_Gym/scripts.pory"
	applymovement LOCALID_MARC, RustboroCity_Gym_EventScript_FaceUp
# 371 "data/maps/RustboroCity_Gym/scripts.pory"
	applymovement LOCALID_JOSH, RustboroCity_Gym_EventScript_FaceUp
# 372 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmovement 0
# 373 "data/maps/RustboroCity_Gym/scripts.pory"
	setobjectxy LOCALID_LARVITARKID, 9, 4
# 374 "data/maps/RustboroCity_Gym/scripts.pory"
	setobjectxy LOCALID_LARVITAR, 9, 3
# 375 "data/maps/RustboroCity_Gym/scripts.pory"
	setobjectxy LOCALID_LOTADGIRL, 3, 4
# 376 "data/maps/RustboroCity_Gym/scripts.pory"
	setobjectxy LOCALID_LOTAD, 2, 4
# 377 "data/maps/RustboroCity_Gym/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 378 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxanneIntro, RustboroCity_Gym_Text_RoxanneDefeat, RustboroCity_Gym_EventScript_RoxanneDefeated, NO_MUSIC
# 379 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_BULLDOZE, RustboroCity_Gym_EventScript_GiveBulldoze
# 380 "data/maps/RustboroCity_Gym/scripts.pory"
	release
	end


RustboroCity_Gym_EventScript_RoxannePostBattle::
# 385 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RoxannePostBattle, MSGBOX_DEFAULT
# 386 "data/maps/RustboroCity_Gym/scripts.pory"
	release
	end


RustboroCity_Gym_ScottLeaves::
# 391 "data/maps/RustboroCity_Gym/scripts.pory"
	face_down
# 392 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_down
# 393 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_down
# 394 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_down
# 395 "data/maps/RustboroCity_Gym/scripts.pory"
	face_right
# 396 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_right
# 397 "data/maps/RustboroCity_Gym/scripts.pory"
	face_down
# 398 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_down
# 399 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_down
# 400 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_down
# 401 "data/maps/RustboroCity_Gym/scripts.pory"
	step_end
	return


RustboroCity_Gym_EventScript_FaceUp::
# 405 "data/maps/RustboroCity_Gym/scripts.pory"
	face_up
# 406 "data/maps/RustboroCity_Gym/scripts.pory"
	step_end
	return


RustboroCity_Gym_EventScript_FaceLeft::
# 410 "data/maps/RustboroCity_Gym/scripts.pory"
	face_left
# 411 "data/maps/RustboroCity_Gym/scripts.pory"
	step_end
	return


RustboroCity_Gym_EventScript_JoshPostRoxanne::
# 415 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_EventScript_JoshPostRoxanne_Text_0
# 416 "data/maps/RustboroCity_Gym/scripts.pory"
	release
	end


RustboroCity_Gym_EventScript_MarcPostRoxanne::
# 421 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_EventScript_MarcPostRoxanne_Text_0
# 423 "data/maps/RustboroCity_Gym/scripts.pory"
	release
	end


RustboroCity_Gym_Lotad_Text_0:
# 315 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Tud-ud!$"

RustboroCity_Gym_Larvitar_Text_0:
# 321 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Twi-uuh!$"

RustboroCity_Gym_EventScript_LarvitarTrainer_Text_0:
# 328 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Larvitar, hang in there!$"

RustboroCity_Gym_EventScript_LarvitarTrainer_Text_1:
# 334 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I hope I can be strong like you one day!$"

RustboroCity_Gym_EventScript_LotadTrainer_Text_0:
# 342 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Do they not teach type matchups in\n"
	.string "school anymore?$"

RustboroCity_Gym_EventScript_LotadTrainer_Text_1:
# 349 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That was incredible!$"

RustboroCity_Gym_EventScript_Roxanne_Text_0:
# 360 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "...$"

RustboroCity_Gym_EventScript_Roxanne_Text_1:
# 364 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Everyone! Roxanne's got a challenger!$"

RustboroCity_Gym_EventScript_JoshPostRoxanne_Text_0:
# 415 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "No wonder you beat the pants off me!$"

RustboroCity_Gym_EventScript_MarcPostRoxanne_Text_0:
# 421 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I never thought I'd see someone this\n"
	.string "young beat Roxanne!$"
