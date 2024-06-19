# 1 "data/maps/AquaHideout_B2F/scripts.pory"

# 2 "data/maps/AquaHideout_B2F/scripts.pory"
.set LOCALID_MATT, 1
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
	call_if_set FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, AquaHideout_B2F_EventScript_PreventMattNoticing
# 11 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 12 "data/maps/AquaHideout_B2F/scripts.pory"

# 13 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_PreventMattNoticing::
# 14 "data/maps/AquaHideout_B2F/scripts.pory"
	setvar VAR_TEMP_1, 1
# 15 "data/maps/AquaHideout_B2F/scripts.pory"
	return
# 16 "data/maps/AquaHideout_B2F/scripts.pory"

# 17 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_MattNoticePlayer::
# 18 "data/maps/AquaHideout_B2F/scripts.pory"
	lockall
# 19 "data/maps/AquaHideout_B2F/scripts.pory"
	setvar VAR_0x8008, LOCALID_MATT
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
AquaHideout_B2F_EventScript_Matt::
# 30 "data/maps/AquaHideout_B2F/scripts.pory"
	trainerbattle_single TRAINER_MATT, AquaHideout_B2F_Text_MattIntro, AquaHideout_B2F_Text_MattDefeat, AquaHideout_B2F_EventScript_SubmarineEscape
# 31 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_MattPostBattle, MSGBOX_DEFAULT
# 32 "data/maps/AquaHideout_B2F/scripts.pory"
	release
# 33 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 34 "data/maps/AquaHideout_B2F/scripts.pory"

# 35 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_SubmarineEscape::
# 36 "data/maps/AquaHideout_B2F/scripts.pory"
	setvar VAR_0x8008, LOCALID_MATT
# 37 "data/maps/AquaHideout_B2F/scripts.pory"
	setvar VAR_0x8009, LOCALID_SUBMARINE
# 38 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_WalkInPlaceFasterLeft
# 39 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 40 "data/maps/AquaHideout_B2F/scripts.pory"
	delay 20
# 41 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_FacePlayer
# 42 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 43 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_OurBossGotThroughHisPreparations, MSGBOX_DEFAULT
# 44 "data/maps/AquaHideout_B2F/scripts.pory"
	closemessage
# 45 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_WalkInPlaceFasterLeft
# 46 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8009, AquaHideout_B2F_Movement_SumbarineDepartLeft
# 47 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 48 "data/maps/AquaHideout_B2F/scripts.pory"
	removeobject VAR_0x8009
# 49 "data/maps/AquaHideout_B2F/scripts.pory"
	delay 20
# 50 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_FacePlayer
# 51 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 52 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_MattPostBattle, MSGBOX_DEFAULT
# 53 "data/maps/AquaHideout_B2F/scripts.pory"
	setflag FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE
# 54 "data/maps/AquaHideout_B2F/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_CITY_AQUA_GRUNTS
# 55 "data/maps/AquaHideout_B2F/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_TEAM_MAGMA
# 56 "data/maps/AquaHideout_B2F/scripts.pory"
	release
# 57 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 58 "data/maps/AquaHideout_B2F/scripts.pory"

# 59 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Movement_SumbarineDepartLeft:
# 60 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 61 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 62 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 63 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 64 "data/maps/AquaHideout_B2F/scripts.pory"
	step_end
# 65 "data/maps/AquaHideout_B2F/scripts.pory"

# 66 "data/maps/AquaHideout_B2F/scripts.pory"
@ Unused
# 67 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Movement_SumbarineDepartRight:
# 68 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_right
# 69 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_right
# 70 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_right
# 71 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_right
# 72 "data/maps/AquaHideout_B2F/scripts.pory"
	step_end
# 73 "data/maps/AquaHideout_B2F/scripts.pory"

# 74 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Grunt4::
# 75 "data/maps/AquaHideout_B2F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_4, AquaHideout_B2F_Text_Grunt4Intro, AquaHideout_B2F_Text_Grunt4Defeat, AquaHideout_B2F_EventScript_Grunt4Defeated
# 76 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
# 77 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 78 "data/maps/AquaHideout_B2F/scripts.pory"

# 79 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Grunt4Defeated::
# 80 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_Grunt4PostBattle, MSGBOX_DEFAULT
# 81 "data/maps/AquaHideout_B2F/scripts.pory"
	release
# 82 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 83 "data/maps/AquaHideout_B2F/scripts.pory"

# 84 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Grunt6::
# 85 "data/maps/AquaHideout_B2F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_6, AquaHideout_B2F_Text_Grunt6Intro, AquaHideout_B2F_Text_Grunt6Defeat
# 86 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_Grunt6PostBattle, MSGBOX_AUTOCLOSE
# 87 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 88 "data/maps/AquaHideout_B2F/scripts.pory"

# 89 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Grunt8::
# 90 "data/maps/AquaHideout_B2F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_8, AquaHideout_B2F_Text_Grunt8Intro, AquaHideout_B2F_Text_Grunt8Defeat
# 91 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_Grunt8PostBattle, MSGBOX_AUTOCLOSE
# 92 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 93 "data/maps/AquaHideout_B2F/scripts.pory"

# 94 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_MattIntro:
# 95 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Hehehe…\p"
# 96 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Got here already, did you?\n"
# 97 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "We underestimated you!\p"
# 98 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "But this is it!\p"
# 99 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "I'm a cut above the Grunts you've seen\n"
# 100 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "so far.\p"
# 101 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "I'm not stalling for time.\n"
# 102 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "I'm going to pulverize you!$"
# 103 "data/maps/AquaHideout_B2F/scripts.pory"

# 104 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_MattDefeat:
# 105 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Hehehe…\n"
# 106 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "So, I lost, too…$"
# 107 "data/maps/AquaHideout_B2F/scripts.pory"

# 108 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_OurBossGotThroughHisPreparations:
# 109 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Hehehe!\p"
# 110 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "While I was toying with you, our Boss\n"
# 111 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "got through his preparations!$"
# 112 "data/maps/AquaHideout_B2F/scripts.pory"

# 113 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_MattPostBattle:
# 114 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Hehehe!\p"
# 115 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Our Boss has already gone on his way to\n"
# 116 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "some cave under the sea!\p"
# 117 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "If you're going to give chase, you'd\n"
# 118 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "better search the big, wide sea beyond\l"
# 119 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Lilycove.\p"
# 120 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "But will you find it then?\n"
# 121 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Hehehe!$"
# 122 "data/maps/AquaHideout_B2F/scripts.pory"

# 123 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt4Intro:
# 124 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Wahahah, I grew weary of waiting!\n"
# 125 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "You owe me a battle, too!$"
# 126 "data/maps/AquaHideout_B2F/scripts.pory"

# 127 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt4Defeat:
# 128 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Tired of waiting…\n"
# 129 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Lost and dazed…$"
# 130 "data/maps/AquaHideout_B2F/scripts.pory"

# 131 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt4PostBattle:
# 132 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Boss…\n"
# 133 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Is this good enough?$"
# 134 "data/maps/AquaHideout_B2F/scripts.pory"

# 135 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt6Intro:
# 136 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Warp panels, the Hideout's pride\n"
# 137 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "and joy!\p"
# 138 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "You're clueless about where you are,\n"
# 139 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "aren't you?\p"
# 140 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Fluster and tire out the enemy, then\n"
# 141 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "lower the boom! That's our plan!$"
# 142 "data/maps/AquaHideout_B2F/scripts.pory"

# 143 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt6Defeat:
# 144 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "What's wrong with you?\n"
# 145 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "You're not tired at all!$"
# 146 "data/maps/AquaHideout_B2F/scripts.pory"

# 147 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt6PostBattle:
# 148 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "That reminds me… I can't remember\n"
# 149 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "where I put the Master Ball.\p"
# 150 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "If I fail to guard it, our Boss will\n"
# 151 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "chew me out…$"
# 152 "data/maps/AquaHideout_B2F/scripts.pory"

# 153 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt8Intro:
# 154 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "When I joined Team Aqua, the first\n"
# 155 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "thing I had to learn was how these\l"
# 156 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "warp panels connected.$"
# 157 "data/maps/AquaHideout_B2F/scripts.pory"

# 158 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt8Defeat:
# 159 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "I was too occupied thinking about\n"
# 160 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "the warp panels…$"
# 161 "data/maps/AquaHideout_B2F/scripts.pory"

# 162 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt8PostBattle:
# 163 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "I'll have to learn about how I can\n"
# 164 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "battle more effectively…$"
