# 1 "data/maps/MauvilleCity_House1/scripts.pory"

# 2 "data/maps/MauvilleCity_House1/scripts.pory"
MauvilleCity_House1_MapScripts::
# 3 "data/maps/MauvilleCity_House1/scripts.pory"
	.byte 0
# 4 "data/maps/MauvilleCity_House1/scripts.pory"

# 5 "data/maps/MauvilleCity_House1/scripts.pory"
MauvilleCity_House1_EventScript_RockSmashDude::
# 6 "data/maps/MauvilleCity_House1/scripts.pory"
	lock
# 7 "data/maps/MauvilleCity_House1/scripts.pory"
	faceplayer
# 8 "data/maps/MauvilleCity_House1/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_ROCK_SMASH, MauvilleCity_House1_EventScript_ReceivedRockSmash
# 9 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox MauvilleCity_House1_Text_ImRockSmashDudeTakeThis, MSGBOX_DEFAULT
# 10 "data/maps/MauvilleCity_House1/scripts.pory"
	giveitem ITEM_HM_ROCK_SMASH
# 11 "data/maps/MauvilleCity_House1/scripts.pory"
	setflag FLAG_RECEIVED_HM_ROCK_SMASH
# 12 "data/maps/MauvilleCity_House1/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_ROCK_SMASH_TIP_GUY
# 13 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox MauvilleCity_House1_Text_ExplainRockSmash, MSGBOX_DEFAULT
# 14 "data/maps/MauvilleCity_House1/scripts.pory"
	release
# 15 "data/maps/MauvilleCity_House1/scripts.pory"
	end
# 16 "data/maps/MauvilleCity_House1/scripts.pory"

# 17 "data/maps/MauvilleCity_House1/scripts.pory"
MauvilleCity_House1_EventScript_ReceivedRockSmash::
# 18 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox MauvilleCity_House1_Text_MonCanFlyOutOfSmashedRock, MSGBOX_DEFAULT
# 19 "data/maps/MauvilleCity_House1/scripts.pory"
	release
# 20 "data/maps/MauvilleCity_House1/scripts.pory"
	end
# 21 "data/maps/MauvilleCity_House1/scripts.pory"

# 22 "data/maps/MauvilleCity_House1/scripts.pory"

# 23 "data/maps/MauvilleCity_House1/scripts.pory"
MauvilleCity_House1_EventScript_StatEditorDude::
# 24 "data/maps/MauvilleCity_House1/scripts.pory"
	lock
# 25 "data/maps/MauvilleCity_House1/scripts.pory"
	faceplayer
# 26 "data/maps/MauvilleCity_House1/scripts.pory"
	goto_if_set FLAG_SYS_STAT_EDITOR_GET, MauvilleCity_House1_EventScript_ReceivedStatEditor
# 27 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox MauvilleCity_House1_Text_ImStatEditorDudeTakeThis, MSGBOX_DEFAULT
# 28 "data/maps/MauvilleCity_House1/scripts.pory"
	setflag FLAG_SYS_STAT_EDITOR_GET
# 29 "data/maps/MauvilleCity_House1/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 30 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox MauvilleCity_House1_Text_ObtainedStatEditor, MSGBOX_DEFAULT
# 31 "data/maps/MauvilleCity_House1/scripts.pory"
	waitfanfare
# 32 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox MauvilleCity_House1_Text_ExplainStatEditorStart, MSGBOX_DEFAULT
# 33 "data/maps/MauvilleCity_House1/scripts.pory"
	goto_if_set FLAG_MIN_GRINDING_MODE, MauvilleCity_House1_EventScript_ExplainStatEditorInMGM
# 34 "data/maps/MauvilleCity_House1/scripts.pory"
	goto MauvilleCity_House1_EventScript_ExplainStatEditorNotInMGM
# 35 "data/maps/MauvilleCity_House1/scripts.pory"
	release
# 36 "data/maps/MauvilleCity_House1/scripts.pory"
	end
# 37 "data/maps/MauvilleCity_House1/scripts.pory"

# 38 "data/maps/MauvilleCity_House1/scripts.pory"
MauvilleCity_House1_EventScript_ExplainStatEditorInMGM::
# 39 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox MauvilleCity_House1_Text_ExplainStatEditorInMGM, MSGBOX_DEFAULT
# 40 "data/maps/MauvilleCity_House1/scripts.pory"
	release
# 41 "data/maps/MauvilleCity_House1/scripts.pory"
	end
# 42 "data/maps/MauvilleCity_House1/scripts.pory"

# 43 "data/maps/MauvilleCity_House1/scripts.pory"
MauvilleCity_House1_EventScript_ExplainStatEditorNotInMGM::
# 44 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox MauvilleCity_House1_Text_ExplainStatEditorNotInMGM, MSGBOX_DEFAULT
# 45 "data/maps/MauvilleCity_House1/scripts.pory"
	release
# 46 "data/maps/MauvilleCity_House1/scripts.pory"
	end
# 47 "data/maps/MauvilleCity_House1/scripts.pory"

# 48 "data/maps/MauvilleCity_House1/scripts.pory"
MauvilleCity_House1_EventScript_ReceivedStatEditor::
# 49 "data/maps/MauvilleCity_House1/scripts.pory"
	goto_if_set FLAG_MIN_GRINDING_MODE, MauvilleCity_House1_EventScript_ReceivedStatEditorInMGM
# 50 "data/maps/MauvilleCity_House1/scripts.pory"
	goto MauvilleCity_House1_EventScript_ReceivedStatEditorNotInMGM
# 51 "data/maps/MauvilleCity_House1/scripts.pory"
	release
# 52 "data/maps/MauvilleCity_House1/scripts.pory"
	end
# 53 "data/maps/MauvilleCity_House1/scripts.pory"

# 54 "data/maps/MauvilleCity_House1/scripts.pory"
MauvilleCity_House1_EventScript_ReceivedStatEditorInMGM::
# 55 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox MauvilleCity_House1_Text_ReceivedStatEditorInMGM, MSGBOX_DEFAULT
# 56 "data/maps/MauvilleCity_House1/scripts.pory"
	release
# 57 "data/maps/MauvilleCity_House1/scripts.pory"
	end
# 58 "data/maps/MauvilleCity_House1/scripts.pory"

# 59 "data/maps/MauvilleCity_House1/scripts.pory"
MauvilleCity_House1_EventScript_ReceivedStatEditorNotInMGM::
# 60 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox MauvilleCity_House1_Text_ReceivedStatEditorNotInMGM, MSGBOX_DEFAULT
# 61 "data/maps/MauvilleCity_House1/scripts.pory"
	release
# 62 "data/maps/MauvilleCity_House1/scripts.pory"
	end
# 63 "data/maps/MauvilleCity_House1/scripts.pory"

# 64 "data/maps/MauvilleCity_House1/scripts.pory"
MauvilleCity_House1_Text_ImRockSmashDudeTakeThis:
# 65 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Woohoo!\p"
# 66 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "I hear people call me the ROCK SMASH\n"
# 67 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "GUY, but I find that sort of degrading.\p"
# 68 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "I think I deserve a bit more respect,\n"
# 69 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "like maybe the ROCK SMASH DUDE.\p"
# 70 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Woohoo!\p"
# 71 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Anyways, your POKéMON look pretty\n"
# 72 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "strong.\p"
# 73 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "I like that!\n"
# 74 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Here, take this Hidden Machine!$"
# 75 "data/maps/MauvilleCity_House1/scripts.pory"

# 76 "data/maps/MauvilleCity_House1/scripts.pory"
MauvilleCity_House1_Text_ExplainRockSmash:
# 77 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "That HM contains ROCK SMASH.\p"
# 78 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "If you come across large boulders\n"
# 79 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "that block your path…\p"
# 80 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Well, use that HM move and smash\n"
# 81 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "them right out of your way!\p"
# 82 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Yes, sir! Smash rocks aside, I say!\n"
# 83 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Woohoo!$"
# 84 "data/maps/MauvilleCity_House1/scripts.pory"

# 85 "data/maps/MauvilleCity_House1/scripts.pory"
MauvilleCity_House1_Text_MonCanFlyOutOfSmashedRock:
# 86 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Oh, yes, if you smash a rock, a POKéMON\n"
# 87 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "could come flying out of hiding.\p"
# 88 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Woohoo!$"
# 89 "data/maps/MauvilleCity_House1/scripts.pory"

# 90 "data/maps/MauvilleCity_House1/scripts.pory"
MauvilleCity_House1_Text_ImStatEditorDudeTakeThis:
# 91 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Hello there.\p"
# 92 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "I'm not quite as outspoken as my\n"
# 93 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "colleague there, but I have something\l"
# 94 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "you may find useful.\l"
# 95 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Here, take this device.$"
# 96 "data/maps/MauvilleCity_House1/scripts.pory"

# 97 "data/maps/MauvilleCity_House1/scripts.pory"
MauvilleCity_House1_Text_ExplainStatEditorStart:
# 98 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "I call that device the Stat Editor,\n"
# 99 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}you can access it from your “L menu”.\p"
# 100 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}It will allow you to edit the EVs or IVs\n"
# 101 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "of your Pokémon, depending on your\l"
# 102 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "current game mode.\l"
# 103 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Hmm, let's see here…$"
# 104 "data/maps/MauvilleCity_House1/scripts.pory"

# 105 "data/maps/MauvilleCity_House1/scripts.pory"

# 106 "data/maps/MauvilleCity_House1/scripts.pory"
MauvilleCity_House1_Text_ExplainStatEditorInMGM:
# 107 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Since you have Minimal Grinding Mode\n"
# 108 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "enabled, you can't change your\l"
# 109 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Pokémon's EVs with that device.\p"
# 110 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "I'm sure you'll still find it useful,\n"
# 111 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "though.$"
# 112 "data/maps/MauvilleCity_House1/scripts.pory"

# 113 "data/maps/MauvilleCity_House1/scripts.pory"
MauvilleCity_House1_Text_ExplainStatEditorNotInMGM:
# 114 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Since you have Minimal Grinding Mode\n"
# 115 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "disabled, you can't change your\l"
# 116 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Pokémon's IVs with that device.\p"
# 117 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "I'm sure you'll still find it useful,\n"
# 118 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "though.$"
# 119 "data/maps/MauvilleCity_House1/scripts.pory"

# 120 "data/maps/MauvilleCity_House1/scripts.pory"
MauvilleCity_House1_Text_ReceivedStatEditorInMGM:
# 121 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Remember, you can access the Stat\n"
# 122 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Editor from your “L menu”.\p"
# 123 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "However, since you have\n"
# 124 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Minimal Grinding Mode enabled, you\l"
# 125 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "can't change your Pokémon's EVs.$"
# 126 "data/maps/MauvilleCity_House1/scripts.pory"

# 127 "data/maps/MauvilleCity_House1/scripts.pory"
MauvilleCity_House1_Text_ReceivedStatEditorNotInMGM:
# 128 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Remember, you can access the Stat\n"
# 129 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Editor from your “L menu”.\p"
# 130 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "However, since you have\n"
# 131 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Minimal Grinding Mode disabled, you\l"
# 132 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "can't change your Pokémon's IVs.$"
# 133 "data/maps/MauvilleCity_House1/scripts.pory"

# 134 "data/maps/MauvilleCity_House1/scripts.pory"
MauvilleCity_House1_Text_ObtainedStatEditor:
# 135 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Obtained the Stat Editor!$"
