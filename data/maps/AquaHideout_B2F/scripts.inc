# 1 "data/maps/AquaHideout_B2F/scripts.pory"

# 2 "data/maps/AquaHideout_B2F/scripts.pory"
.set LOCALID_ARCHIE, 1
# 3 "data/maps/AquaHideout_B2F/scripts.pory"
.set LOCALID_SUBMARINE, 4
# 4 "data/maps/AquaHideout_B2F/scripts.pory"

# 5 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_MapScripts::
# 6 "data/maps/AquaHideout_B2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AquaHideout_B2F_OnTransition
# 7 "data/maps/AquaHideout_B2F/scripts.pory"
	.byte 0
# 8 "data/maps/AquaHideout_B2F/scripts.pory"

# 9 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_OnTransition:
# 10 "data/maps/AquaHideout_B2F/scripts.pory"
	call_if_set FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, AquaHideout_B2F_EventScript_PreventArchieNoticing
# 11 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 12 "data/maps/AquaHideout_B2F/scripts.pory"

# 13 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_PreventArchieNoticing::
# 14 "data/maps/AquaHideout_B2F/scripts.pory"
	setvar VAR_TEMP_1, 1
# 15 "data/maps/AquaHideout_B2F/scripts.pory"
	return
# 16 "data/maps/AquaHideout_B2F/scripts.pory"

# 17 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_ArchieNoticePlayer::
# 18 "data/maps/AquaHideout_B2F/scripts.pory"
	lockall
# 19 "data/maps/AquaHideout_B2F/scripts.pory"
	setvar VAR_0x8008, LOCALID_ARCHIE
# 20 "data/maps/AquaHideout_B2F/scripts.pory"
	playse SE_PIN
# 21 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 22 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 23 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_FacePlayer
# 24 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 25 "data/maps/AquaHideout_B2F/scripts.pory"
	setvar VAR_TEMP_1, 1
# 26 "data/maps/AquaHideout_B2F/scripts.pory"
	releaseall
# 27 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 28 "data/maps/AquaHideout_B2F/scripts.pory"

# 29 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Archie::
# 30 "data/maps/AquaHideout_B2F/scripts.pory"
	trainerbattle_single TRAINER_ARCHIE_HIDEOUT, AquaHideout_B2F_Text_ArchieIntro, AquaHideout_B2F_Text_ArchieDefeat, AquaHideout_B2F_EventScript_SubmarineEscape
# 31 "data/maps/AquaHideout_B2F/scripts.pory"
	release
# 32 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 33 "data/maps/AquaHideout_B2F/scripts.pory"

# 34 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_SubmarineEscape::
# 35 "data/maps/AquaHideout_B2F/scripts.pory"
	setvar VAR_0x8008, LOCALID_ARCHIE
# 36 "data/maps/AquaHideout_B2F/scripts.pory"
	setvar VAR_0x8009, LOCALID_SUBMARINE
# 37 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_WalkInPlaceFasterLeft
# 38 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 39 "data/maps/AquaHideout_B2F/scripts.pory"
	delay 20
# 40 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_FacePlayer
# 41 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 42 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_OurBossGotThroughHisPreparations, MSGBOX_DEFAULT
# 43 "data/maps/AquaHideout_B2F/scripts.pory"
	closemessage
# 44 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_WalkInPlaceFasterLeft
# 45 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 46 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8008, AquaHideout_B2F_Movement_AquaBoardSub
# 47 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 48 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8009, AquaHideout_B2F_Movement_SumbarineDepartLeft
# 49 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 50 "data/maps/AquaHideout_B2F/scripts.pory"
	removeobject VAR_0x8008
# 51 "data/maps/AquaHideout_B2F/scripts.pory"
	removeobject VAR_0x8009
# 52 "data/maps/AquaHideout_B2F/scripts.pory"
	setflag FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE
# 53 "data/maps/AquaHideout_B2F/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_CITY_AQUA_GRUNTS
# 54 "data/maps/AquaHideout_B2F/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_TEAM_MAGMA
# 55 "data/maps/AquaHideout_B2F/scripts.pory"
	delay 30
# 56 "data/maps/AquaHideout_B2F/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 57 "data/maps/AquaHideout_B2F/scripts.pory"
	specialvar VAR_0x8006, GetLevelCapForText
# 58 "data/maps/AquaHideout_B2F/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_0x8006
# 59 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox LevelCapIncreasedTo, MSGBOX_DEFAULT
# 60 "data/maps/AquaHideout_B2F/scripts.pory"
	waitfanfare
# 61 "data/maps/AquaHideout_B2F/scripts.pory"
	closemessage
# 62 "data/maps/AquaHideout_B2F/scripts.pory"
	delay 30
# 63 "data/maps/AquaHideout_B2F/scripts.pory"
	release
# 64 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 65 "data/maps/AquaHideout_B2F/scripts.pory"

# 66 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Movement_AquaBoardSub:
# 67 "data/maps/AquaHideout_B2F/scripts.pory"
	delay_16
# 68 "data/maps/AquaHideout_B2F/scripts.pory"
	delay_16
# 69 "data/maps/AquaHideout_B2F/scripts.pory"
	jump_left
# 70 "data/maps/AquaHideout_B2F/scripts.pory"
	set_invisible
# 71 "data/maps/AquaHideout_B2F/scripts.pory"
	step_end
# 72 "data/maps/AquaHideout_B2F/scripts.pory"

# 73 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Movement_SumbarineDepartLeft:
# 74 "data/maps/AquaHideout_B2F/scripts.pory"
	delay_16
# 75 "data/maps/AquaHideout_B2F/scripts.pory"
	delay_16
# 76 "data/maps/AquaHideout_B2F/scripts.pory"
	delay_16
# 77 "data/maps/AquaHideout_B2F/scripts.pory"
	delay_16
# 78 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 79 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 80 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 81 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 82 "data/maps/AquaHideout_B2F/scripts.pory"
	step_end
# 83 "data/maps/AquaHideout_B2F/scripts.pory"

# 84 "data/maps/AquaHideout_B2F/scripts.pory"
@ Unused
# 85 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Movement_SumbarineDepartRight:
# 86 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_right
# 87 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_right
# 88 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_right
# 89 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_right
# 90 "data/maps/AquaHideout_B2F/scripts.pory"
	step_end
# 91 "data/maps/AquaHideout_B2F/scripts.pory"

# 92 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Grunt4::
# 93 "data/maps/AquaHideout_B2F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_4, AquaHideout_B2F_Text_Grunt4Intro, AquaHideout_B2F_Text_Grunt4Defeat, AquaHideout_B2F_EventScript_Grunt4Defeated
# 94 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
# 95 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 96 "data/maps/AquaHideout_B2F/scripts.pory"

# 97 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Grunt4Defeated::
# 98 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_Grunt4PostBattle, MSGBOX_DEFAULT
# 99 "data/maps/AquaHideout_B2F/scripts.pory"
	release
# 100 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 101 "data/maps/AquaHideout_B2F/scripts.pory"

# 102 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Grunt6::
# 103 "data/maps/AquaHideout_B2F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_6, AquaHideout_B2F_Text_Grunt6Intro, AquaHideout_B2F_Text_Grunt6Defeat
# 104 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_Grunt6PostBattle, MSGBOX_AUTOCLOSE
# 105 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 106 "data/maps/AquaHideout_B2F/scripts.pory"

# 107 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Grunt8::
# 108 "data/maps/AquaHideout_B2F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_8, AquaHideout_B2F_Text_Grunt8Intro, AquaHideout_B2F_Text_Grunt8Defeat
# 109 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_Grunt8PostBattle, MSGBOX_AUTOCLOSE
# 110 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 111 "data/maps/AquaHideout_B2F/scripts.pory"

# 112 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_ArchieIntro:
# 113 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "{PLAYER}…\p"
# 114 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "To think you caught up to us this\n"
# 115 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "quickly.\p"
# 116 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "No matter, our final preparations have\n"
# 117 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "been completed, and you won't be able\l"
# 118 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "to stop me from getting onto that\l"
# 119 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "submarine.\p"
# 120 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "But before I go, {PLAYER}, I do have to\n"
# 121 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "admit, I am curious about your power as\l"
# 122 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "a trainer.\p"
# 123 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "You've been giving my Grunts, and even\n"
# 124 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "my Admins, quite a bit of trouble, so I\l"
# 125 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "think it's time for me to see what kind\l"
# 126 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "of trainer you are!$"
# 127 "data/maps/AquaHideout_B2F/scripts.pory"

# 128 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_ArchieDefeat:
# 129 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "That was quite the battle! I see how\n"
# 130 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "you've been giving us so much trouble\l"
# 131 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "all this time.$"
# 132 "data/maps/AquaHideout_B2F/scripts.pory"

# 133 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_OurBossGotThroughHisPreparations:
# 134 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Well {PLAYER}, looks like it is time for\n"
# 135 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "me to depart.\n"
# 136 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "I'm glad I was able to see what kind of\n"
# 137 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "trainer you are firsthand.\p"
# 138 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "I only wish you'd reconsider joining our\n"
# 139 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "cause, we could really use someone like\l"
# 140 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "you on our side.\p"
# 141 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "This is my final warning to you,\n"
# 142 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "{PLAYER}, because I know you have\l"
# 143 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "potential as a trainer.\p"
# 144 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "If our paths must cross again as\n"
# 145 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "opponents, I won't hold back.\p"
# 146 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "I sincerely hope it doesn't come\n"
# 147 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "to that.$"
# 148 "data/maps/AquaHideout_B2F/scripts.pory"

# 149 "data/maps/AquaHideout_B2F/scripts.pory"

# 150 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_ArchiePostBattle:
# 151 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Hehehe!\p"
# 152 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Our Boss has already gone on his way to\n"
# 153 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "some cave under the sea!\p"
# 154 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "If you're going to give chase, you'd\n"
# 155 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "better search the big, wide sea beyond\l"
# 156 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Lilycove.\p"
# 157 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "But will you find it then?\n"
# 158 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Hehehe!$"
# 159 "data/maps/AquaHideout_B2F/scripts.pory"

# 160 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt4Intro:
# 161 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Wahahah, I grew weary of waiting!\n"
# 162 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "You owe me a battle, too!$"
# 163 "data/maps/AquaHideout_B2F/scripts.pory"

# 164 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt4Defeat:
# 165 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Tired of waiting…\n"
# 166 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Lost and dazed…$"
# 167 "data/maps/AquaHideout_B2F/scripts.pory"

# 168 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt4PostBattle:
# 169 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Boss…\n"
# 170 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Is this good enough?$"
# 171 "data/maps/AquaHideout_B2F/scripts.pory"

# 172 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt6Intro:
# 173 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Warp panels, the Hideout's pride\n"
# 174 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "and joy!\p"
# 175 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "You're clueless about where you are,\n"
# 176 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "aren't you?\p"
# 177 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Fluster and tire out the enemy, then\n"
# 178 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "lower the boom! That's our plan!$"
# 179 "data/maps/AquaHideout_B2F/scripts.pory"

# 180 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt6Defeat:
# 181 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "What's wrong with you?\n"
# 182 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "You're not tired at all!$"
# 183 "data/maps/AquaHideout_B2F/scripts.pory"

# 184 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt6PostBattle:
# 185 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "That reminds me… I can't remember\n"
# 186 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "where I put the Master Ball.\p"
# 187 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "If I fail to guard it, our Boss will\n"
# 188 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "chew me out…$"
# 189 "data/maps/AquaHideout_B2F/scripts.pory"

# 190 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt8Intro:
# 191 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "When I joined Team Aqua, the first\n"
# 192 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "thing I had to learn was how these\l"
# 193 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "warp panels connected.$"
# 194 "data/maps/AquaHideout_B2F/scripts.pory"

# 195 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt8Defeat:
# 196 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "I was too occupied thinking about\n"
# 197 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "the warp panels…$"
# 198 "data/maps/AquaHideout_B2F/scripts.pory"

# 199 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt8PostBattle:
# 200 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "I'll have to learn about how I can\n"
# 201 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "battle more effectively…$"
