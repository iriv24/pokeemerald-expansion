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
	addvar VAR_IV_PERFECTER_COUNTER, 5
# 22 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 1
# 23 "data/maps/RustboroCity_Gym/scripts.pory"
	addvar VAR_PETALBURG_GYM_STATE, 1
# 24 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 25 "data/maps/RustboroCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 26 "data/maps/RustboroCity_Gym/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 7, Common_EventScript_ReadyPetalburgGymForBattle
# 27 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GiveBulldoze
# 28 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 29 "data/maps/RustboroCity_Gym/scripts.pory"

# 30 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GiveBulldoze::
# 31 "data/maps/RustboroCity_Gym/scripts.pory"
	giveitem ITEM_TM_BULLDOZE
# 32 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 33 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_BULLDOZE
# 34 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_ExplainBulldoze, MSGBOX_DEFAULT
# 35 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 36 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 37 "data/maps/RustboroCity_Gym/scripts.pory"

# 38 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RoxanneRematch::
# 39 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxannePreRematch, RustboroCity_Gym_Text_RoxanneRematchDefeat, RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons
# 40 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RoxannePostRematch, MSGBOX_AUTOCLOSE
# 41 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 42 "data/maps/RustboroCity_Gym/scripts.pory"

# 43 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Josh::
# 44 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JOSH, RustboroCity_Gym_Text_JoshIntro, RustboroCity_Gym_Text_JoshDefeat
# 45 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_JoshPostBattle, MSGBOX_AUTOCLOSE
# 46 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 47 "data/maps/RustboroCity_Gym/scripts.pory"

# 48 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Tommy::
# 49 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_TOMMY, RustboroCity_Gym_Text_TommyIntro, RustboroCity_Gym_Text_TommyDefeat
# 50 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_TommyPostBattle, MSGBOX_AUTOCLOSE
# 51 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 52 "data/maps/RustboroCity_Gym/scripts.pory"

# 53 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Marc::
# 54 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MARC, RustboroCity_Gym_Text_MarcIntro, RustboroCity_Gym_Text_MarcDefeat
# 55 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_MarcPostBattle, MSGBOX_AUTOCLOSE
# 56 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 57 "data/maps/RustboroCity_Gym/scripts.pory"

# 58 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymGuide::
# 59 "data/maps/RustboroCity_Gym/scripts.pory"
	lock
# 60 "data/maps/RustboroCity_Gym/scripts.pory"
	faceplayer
# 61 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_RUSTBORO_GYM, RustboroCity_Gym_EventScript_GymGuidePostVictory
# 62 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 63 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 64 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 65 "data/maps/RustboroCity_Gym/scripts.pory"

# 66 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymGuidePostVictory::
# 67 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 68 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 69 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 70 "data/maps/RustboroCity_Gym/scripts.pory"

# 71 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_LeftGymStatue::
# 72 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 73 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_GymStatueCertified
# 74 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GymStatue
# 75 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 76 "data/maps/RustboroCity_Gym/scripts.pory"

# 77 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RightGymStatue::
# 78 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 79 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_GymStatueCertified
# 80 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GymStatue
# 81 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 82 "data/maps/RustboroCity_Gym/scripts.pory"

# 83 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymStatueCertified::
# 84 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 85 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 86 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 87 "data/maps/RustboroCity_Gym/scripts.pory"

# 88 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymStatue::
# 89 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 90 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 91 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 92 "data/maps/RustboroCity_Gym/scripts.pory"

# 93 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RegisterRoxanne::
# 94 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 95 "data/maps/RustboroCity_Gym/scripts.pory"
	pokenavcall RustboroCity_Gym_Text_RoxanneRegisterCall
# 96 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
# 97 "data/maps/RustboroCity_Gym/scripts.pory"
	delay 30
# 98 "data/maps/RustboroCity_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 99 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RegisteredRoxanne, MSGBOX_DEFAULT
# 100 "data/maps/RustboroCity_Gym/scripts.pory"
	waitfanfare
# 101 "data/maps/RustboroCity_Gym/scripts.pory"
	closemessage
# 102 "data/maps/RustboroCity_Gym/scripts.pory"
	delay 30
# 103 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_ROXANNE_MATCH_CALL
# 104 "data/maps/RustboroCity_Gym/scripts.pory"
	clearflag FLAG_ENABLE_ROXANNE_FIRST_CALL
# 105 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 106 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 107 "data/maps/RustboroCity_Gym/scripts.pory"

# 108 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Nosepass::
# 109 "data/maps/RustboroCity_Gym/scripts.pory"
	lock
# 110 "data/maps/RustboroCity_Gym/scripts.pory"
	faceplayer
# 111 "data/maps/RustboroCity_Gym/scripts.pory"
	waitse
# 112 "data/maps/RustboroCity_Gym/scripts.pory"
	playmoncry SPECIES_NOSEPASS, CRY_MODE_NORMAL
# 113 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_Nosepass, MSGBOX_DEFAULT
# 114 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmoncry
# 115 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 116 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 117 "data/maps/RustboroCity_Gym/scripts.pory"

# 118 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymGuideAdvice:
# 119 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Yo, how's it going?\p"
# 120 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Listen, my friend!\n"
# 121 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Would you like to become the Champion?\p"
# 122 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm no trainer, not me, but I can\n"
# 123 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "sure give you winning advice.\p"
# 124 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That's settled, then! We'll aim for the\n"
# 125 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Pokémon Championship together!\p"
# 126 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It's your job as a trainer to collect\n"
# 127 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Gym Badges, am I right?\p"
# 128 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "But Gym Leaders aren't pushovers!\p"
# 129 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "And that's where I come in!\n"
# 130 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm here to provide expert advice!\p"
# 131 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Roxanne, the Gym Leader, is a user\n"
# 132 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "of Rock-type Pokémon.\p"
# 133 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The Rock type is very durable, but\n"
# 134 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "it can't stand Water-type and\l"
# 135 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Grass-type moves.\p"
# 136 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Come see me afterwards, if you beat\n"
# 137 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "the Gym Leader.\p"
# 138 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Well, go for it!$"
# 139 "data/maps/RustboroCity_Gym/scripts.pory"

# 140 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymGuidePostVictory:
# 141 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Whoa! What a breathtaking victory!\n"
# 142 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "My cheering must've worked!\p"
# 143 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Great!\n"
# 144 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Check your Trainer Card.\p"
# 145 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The Stone Badge you got should be\n"
# 146 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "properly recorded on it.\p"
# 147 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "In other words…\p"
# 148 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You've climbed the first step on\n"
# 149 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "the stairs to the Championship!\p"
# 150 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That's got to feel awesome!$"
# 151 "data/maps/RustboroCity_Gym/scripts.pory"

# 152 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshIntro:
# 153 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Don't take us Gym trainers lightly!\n"
# 154 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'll show you why we're better!$"
# 155 "data/maps/RustboroCity_Gym/scripts.pory"

# 156 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshDefeat:
# 157 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You were too good for me…$"
# 158 "data/maps/RustboroCity_Gym/scripts.pory"

# 159 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshPostBattle:
# 160 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You haven't seen anything of the Rock\n"
# 161 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "type's terrifying power!$"
# 162 "data/maps/RustboroCity_Gym/scripts.pory"

# 163 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyIntro:
# 164 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "If you can't beat me, you won't stand\n"
# 165 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "a chance against Roxanne!$"
# 166 "data/maps/RustboroCity_Gym/scripts.pory"

# 167 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyDefeat:
# 168 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Wow! You've got some potential!$"
# 169 "data/maps/RustboroCity_Gym/scripts.pory"

# 170 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyPostBattle:
# 171 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Roxanne is stronger than me by\n"
# 172 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "several times.\p"
# 173 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You'd better be on your guard!$"
# 174 "data/maps/RustboroCity_Gym/scripts.pory"

# 175 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcIntro:
# 176 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "We might be in the middle of town,\n"
# 177 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "but so what?\p"
# 178 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "My Rock Pokémon need room to\n"
# 179 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "rampage!$"
# 180 "data/maps/RustboroCity_Gym/scripts.pory"

# 181 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcDefeat:
# 182 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Oh, man oh man!\n"
# 183 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Our challenger is one feisty customer!$"
# 184 "data/maps/RustboroCity_Gym/scripts.pory"

# 185 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcPostBattle:
# 186 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I have to hand it to our Leader.\p"
# 187 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It took smarts and sense for her to\n"
# 188 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "pick the Rock type at her young age.$"
# 189 "data/maps/RustboroCity_Gym/scripts.pory"

# 190 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneIntro:
# 191 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Hello, I am Roxanne, the Rustboro\n"
# 192 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Pokémon Gym Leader.\p"
# 193 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I became a Gym Leader so that I might\n"
# 194 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "apply what I learned at the Pokémon\l"
# 195 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Trainer's School in battle.\p"
# 196 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Would you kindly demonstrate how you\n"
# 197 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "battle, and with which Pokémon?$"
# 198 "data/maps/RustboroCity_Gym/scripts.pory"

# 199 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneDefeat:
# 200 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "So…\n"
# 201 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I lost…\p"
# 202 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It seems that I still have much more\n"
# 203 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "to learn…\p"
# 204 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I understand.\p"
# 205 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The Pokémon League's rules state\n"
# 206 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "that trainers are to be given this\l"
# 207 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "if they defeat a Gym Leader.\p"
# 208 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Please accept the official Pokémon\n"
# 209 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "League Stone Badge.$"
# 210 "data/maps/RustboroCity_Gym/scripts.pory"

# 211 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_ReceivedStoneBadge:
# 212 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "{PLAYER} received the Stone Badge\n"
# 213 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "from Roxanne.$"
# 214 "data/maps/RustboroCity_Gym/scripts.pory"

# 215 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_StoneBadgeInfoTakeThis:
# 216 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "This badge enables your Pokémon to use\n"
# 217 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "the HM move Cut outside of battle.\p"
# 218 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Please take this with you, too.$"
# 219 "data/maps/RustboroCity_Gym/scripts.pory"

# 220 "data/maps/RustboroCity_Gym/scripts.pory"

# 221 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_ExplainBulldoze:
# 222 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That Technical Machine, TM96,\n"
# 223 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "contains Bulldoze.\p"
# 224 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It not only inflicts damage,\n"
# 225 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "it also lowers Speed. It's like\l"
# 226 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Ground-type Rock Tomb.$"
# 227 "data/maps/RustboroCity_Gym/scripts.pory"

# 228 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxannePostBattle:
# 229 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Since you are so strong, you should\n"
# 230 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "challenge other Gym Leaders.\p"
# 231 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "By battling many trainers, you should\n"
# 232 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "learn many things.$"
# 233 "data/maps/RustboroCity_Gym/scripts.pory"

# 234 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymStatue:
# 235 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Rustboro City Pokémon Gym$"
# 236 "data/maps/RustboroCity_Gym/scripts.pory"

# 237 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymStatueCertified:
# 238 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Rustboro City Pokémon Gym\p"
# 239 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Roxanne's Certified Trainers:\n"
# 240 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 241 "data/maps/RustboroCity_Gym/scripts.pory"

# 242 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneRegisterCall:
# 243 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … …\n"
# 244 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … Beep!\p"
# 245 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Roxanne: Oh, hello, {PLAYER}?\n"
# 246 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "This is Roxanne of Rustboro City.\p"
# 247 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I heard from Brawly that you're\n"
# 248 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "moving up through the ranks of\l"
# 249 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "trainers at an incredible clip.\p"
# 250 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Well, I'd rather not think that\n"
# 251 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I can't beat you.\p"
# 252 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I promise, I will shape up my Gym\n"
# 253 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "so that you may challenge us again.\p"
# 254 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I hope you'll be looking forward to\n"
# 255 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "that occasion as much as me!\p"
# 256 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … …\n"
# 257 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … Click!$"
# 258 "data/maps/RustboroCity_Gym/scripts.pory"

# 259 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RegisteredRoxanne:
# 260 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Registered Gym Leader Roxanne\n"
# 261 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "in the PokéNav.$"
# 262 "data/maps/RustboroCity_Gym/scripts.pory"

# 263 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxannePreRematch:
# 264 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Roxanne: I'm so glad to see you again.\n"
# 265 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm Roxanne, the Gym Leader here.\p"
# 266 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm sure we've both experienced many\n"
# 267 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "battles since we last met.\p"
# 268 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I would like to see how much better\n"
# 269 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "we've become. Let us battle!$"
# 270 "data/maps/RustboroCity_Gym/scripts.pory"

# 271 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneRematchDefeat:
# 272 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Grr…\n"
# 273 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Again, I have lost…$"
# 274 "data/maps/RustboroCity_Gym/scripts.pory"

# 275 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxannePostRematch:
# 276 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Roxanne: I still have much to learn\n"
# 277 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "when it comes to battling Pokémon.\p"
# 278 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That awareness makes me love battling\n"
# 279 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "all that much more!$"
# 280 "data/maps/RustboroCity_Gym/scripts.pory"

# 281 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons:
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
	.string "we've become…\p"
# 288 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Oh, no…\n"
# 289 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You only have one Pokémon with you?\p"
# 290 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Please return with at least one more\n"
# 291 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Pokémon.$"
# 292 "data/maps/RustboroCity_Gym/scripts.pory"

# 293 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_Nosepass:
# 294 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Nosepass: Bleleleh!$"
