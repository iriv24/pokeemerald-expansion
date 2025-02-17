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
	.string "I hear people call me the Rock Smash\n"
# 67 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Guy, but I find that sort of degrading.\p"
# 68 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "I think I deserve a bit more respect,\n"
# 69 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "like maybe the Rock Smash Dude.\p"
# 70 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Woohoo!\p"
# 71 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Anyways, your Pokémon look pretty\n"
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
	.string "That HM contains Rock Smash.\p"
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
	.string "Oh, yes, if you smash a rock, a Pokémon\n"
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
	.string "you may find useful.\p"
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
	.string "current game mode.\p"
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
	.string "You can edit IVs freely though.$"
# 111 "data/maps/MauvilleCity_House1/scripts.pory"

# 112 "data/maps/MauvilleCity_House1/scripts.pory"
MauvilleCity_House1_Text_ExplainStatEditorNotInMGM:
# 113 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Since you have Minimal Grinding Mode\n"
# 114 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "disabled, you can edit both EVs\l"
# 115 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "and IVs freely with that device.$"
# 116 "data/maps/MauvilleCity_House1/scripts.pory"

# 117 "data/maps/MauvilleCity_House1/scripts.pory"
MauvilleCity_House1_Text_ReceivedStatEditorInMGM:
# 118 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Remember, you can access the Stat\n"
# 119 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Editor from your “L menu”.\p"
# 120 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "However, since you have\n"
# 121 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Minimal Grinding Mode enabled, you\l"
# 122 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "can't change your Pokémon's EVs.\p"
# 123 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "You can edit IVs freely though.$"
# 124 "data/maps/MauvilleCity_House1/scripts.pory"

# 125 "data/maps/MauvilleCity_House1/scripts.pory"
MauvilleCity_House1_Text_ReceivedStatEditorNotInMGM:
# 126 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Remember, you can access the Stat\n"
# 127 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Editor from your “L menu”.\p"
# 128 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Since you have Minimal Grinding\n"
# 129 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Mode disabled, you can edit the\l"
# 130 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "EVs and IVs of your Pokémon freely.$"
# 131 "data/maps/MauvilleCity_House1/scripts.pory"

# 132 "data/maps/MauvilleCity_House1/scripts.pory"
MauvilleCity_House1_Text_ObtainedStatEditor:
# 133 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Obtained the Stat Editor!$"

MauvilleCity_House1_EventScript_HPChangerDude::
# 138 "data/maps/MauvilleCity_House1/scripts.pory"
	lock
# 139 "data/maps/MauvilleCity_House1/scripts.pory"
	faceplayer
# 140 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox HpChangerHelloCanChange, MSGBOX_YESNO
# 142 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MauvilleCity_House1_EventScript_HPChangerDude_2
MauvilleCity_House1_EventScript_HPChangerDude_1:
# 147 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox MauvilleCity_House1_EventScript_HPChangerDude_Text_0
# 148 "data/maps/MauvilleCity_House1/scripts.pory"
	special ChoosePartyMon
# 149 "data/maps/MauvilleCity_House1/scripts.pory"
	waitstate
# 151 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq MauvilleCity_House1_EventScript_HPChangerDude_5
MauvilleCity_House1_EventScript_HPChangerDude_4:
# 156 "data/maps/MauvilleCity_House1/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 158 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq MauvilleCity_House1_EventScript_HPChangerDude_8
# 164 "data/maps/MauvilleCity_House1/scripts.pory"
	special BufferMonNickname
# 165 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox MauvilleCity_House1_EventScript_HPChangerDude_Text_2
# 166 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultipush MauvilleCity_House1_EventScript_HPChangerDude_Text_3, TYPE_FIGHTING
# 167 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultipush MauvilleCity_House1_EventScript_HPChangerDude_Text_4, TYPE_FLYING
# 168 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultipush MauvilleCity_House1_EventScript_HPChangerDude_Text_5, TYPE_POISON
# 169 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultipush MauvilleCity_House1_EventScript_HPChangerDude_Text_6, TYPE_GROUND
# 170 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultipush MauvilleCity_House1_EventScript_HPChangerDude_Text_7, TYPE_ROCK
# 171 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultipush MauvilleCity_House1_EventScript_HPChangerDude_Text_8, TYPE_BUG
# 172 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultipush MauvilleCity_House1_EventScript_HPChangerDude_Text_9, TYPE_GHOST
# 173 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultipush MauvilleCity_House1_EventScript_HPChangerDude_Text_10, TYPE_STEEL
# 174 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultipush MauvilleCity_House1_EventScript_HPChangerDude_Text_11, TYPE_FIRE
# 175 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultipush MauvilleCity_House1_EventScript_HPChangerDude_Text_12, TYPE_WATER
# 176 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultipush MauvilleCity_House1_EventScript_HPChangerDude_Text_13, TYPE_GRASS
# 177 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultipush MauvilleCity_House1_EventScript_HPChangerDude_Text_14, TYPE_ELECTRIC
# 178 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultipush MauvilleCity_House1_EventScript_HPChangerDude_Text_15, TYPE_PSYCHIC
# 179 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultipush MauvilleCity_House1_EventScript_HPChangerDude_Text_16, TYPE_ICE
# 180 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultipush MauvilleCity_House1_EventScript_HPChangerDude_Text_17, TYPE_DRAGON
# 181 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultipush MauvilleCity_House1_EventScript_HPChangerDude_Text_18, TYPE_DARK
# 182 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultipush MauvilleCity_House1_EventScript_HPChangerDude_Text_19, MULTI_B_PRESSED
# 184 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, TYPE_FIGHTING, DYN_MULTICHOICE_CB_NONE
# 186 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq MauvilleCity_House1_EventScript_HPChangerDude_11
MauvilleCity_House1_EventScript_HPChangerDude_10:
# 191 "data/maps/MauvilleCity_House1/scripts.pory"
	copyvar VAR_0x8005, VAR_RESULT
# 192 "data/maps/MauvilleCity_House1/scripts.pory"
	bufferhptypeinfo STR_VAR_2, STR_VAR_3, VAR_RESULT
# 193 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox AreYouSureHPTypeChange, MSGBOX_YESNO
# 195 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MauvilleCity_House1_EventScript_HPChangerDude_14
MauvilleCity_House1_EventScript_HPChangerDude_13:
# 200 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox MauvilleCity_House1_EventScript_HPChangerDude_Text_20
# 201 "data/maps/MauvilleCity_House1/scripts.pory"
	fadescreen FADE_TO_BLACK
# 202 "data/maps/MauvilleCity_House1/scripts.pory"
	special ChangeMonIVsForHP
# 203 "data/maps/MauvilleCity_House1/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 204 "data/maps/MauvilleCity_House1/scripts.pory"
	waitfanfare
# 205 "data/maps/MauvilleCity_House1/scripts.pory"
	closemessage
# 206 "data/maps/MauvilleCity_House1/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 207 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox HPTypeChangedComeBackSoon
# 208 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

MauvilleCity_House1_EventScript_HPChangerDude_2:
# 144 "data/maps/MauvilleCity_House1/scripts.pory"
	goto MauvilleCity_House1_EventScript_HPChangerNo
	goto MauvilleCity_House1_EventScript_HPChangerDude_1

MauvilleCity_House1_EventScript_HPChangerDude_5:
# 153 "data/maps/MauvilleCity_House1/scripts.pory"
	goto MauvilleCity_House1_EventScript_HPChangerNo
	goto MauvilleCity_House1_EventScript_HPChangerDude_4

MauvilleCity_House1_EventScript_HPChangerDude_8:
# 159 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox MauvilleCity_House1_EventScript_HPChangerDude_Text_1
# 160 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

MauvilleCity_House1_EventScript_HPChangerDude_11:
# 188 "data/maps/MauvilleCity_House1/scripts.pory"
	goto MauvilleCity_House1_EventScript_HPChangerNo
	goto MauvilleCity_House1_EventScript_HPChangerDude_10

MauvilleCity_House1_EventScript_HPChangerDude_14:
# 197 "data/maps/MauvilleCity_House1/scripts.pory"
	goto MauvilleCity_House1_EventScript_HPChangerNo
	goto MauvilleCity_House1_EventScript_HPChangerDude_13


MauvilleCity_House1_EventScript_HPChangerNo::
# 213 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox MauvilleCity_House1_EventScript_HPChangerNo_Text_0
# 214 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end


MauvilleCity_House1_EventScript_IVPerfecterDude::
# 220 "data/maps/MauvilleCity_House1/scripts.pory"
	lock
# 221 "data/maps/MauvilleCity_House1/scripts.pory"
	faceplayer
# 222 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox IVPerfecterGreeting, MSGBOX_YESNO
# 224 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MauvilleCity_House1_EventScript_IVPerfecterDude_2
MauvilleCity_House1_EventScript_IVPerfecterDude_1:
# 229 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox MauvilleCity_House1_EventScript_HPChangerDude_Text_0
# 230 "data/maps/MauvilleCity_House1/scripts.pory"
	special ChoosePartyMon
# 231 "data/maps/MauvilleCity_House1/scripts.pory"
	waitstate
# 233 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq MauvilleCity_House1_EventScript_IVPerfecterDude_5
MauvilleCity_House1_EventScript_IVPerfecterDude_4:
# 238 "data/maps/MauvilleCity_House1/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 240 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq MauvilleCity_House1_EventScript_IVPerfecterDude_8
# 246 "data/maps/MauvilleCity_House1/scripts.pory"
	special BufferMonNickname
# 247 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox IVPerfecterAreYouSure, MSGBOX_YESNO
# 249 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MauvilleCity_House1_EventScript_IVPerfecterDude_11
MauvilleCity_House1_EventScript_IVPerfecterDude_10:
# 254 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox MauvilleCity_House1_EventScript_HPChangerDude_Text_20
# 255 "data/maps/MauvilleCity_House1/scripts.pory"
	fadescreen FADE_TO_BLACK
# 256 "data/maps/MauvilleCity_House1/scripts.pory"
	special PerfectMonIVs
# 257 "data/maps/MauvilleCity_House1/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 258 "data/maps/MauvilleCity_House1/scripts.pory"
	waitfanfare
# 259 "data/maps/MauvilleCity_House1/scripts.pory"
	closemessage
# 260 "data/maps/MauvilleCity_House1/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 261 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox IVPerfecterComeBackSoon
# 262 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

MauvilleCity_House1_EventScript_IVPerfecterDude_2:
# 226 "data/maps/MauvilleCity_House1/scripts.pory"
	goto MauvilleCity_House1_EventScript_HPChangerNo
	goto MauvilleCity_House1_EventScript_IVPerfecterDude_1

MauvilleCity_House1_EventScript_IVPerfecterDude_5:
# 235 "data/maps/MauvilleCity_House1/scripts.pory"
	goto MauvilleCity_House1_EventScript_HPChangerNo
	goto MauvilleCity_House1_EventScript_IVPerfecterDude_4

MauvilleCity_House1_EventScript_IVPerfecterDude_8:
# 241 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox MauvilleCity_House1_EventScript_IVPerfecterDude_Text_0
# 242 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

MauvilleCity_House1_EventScript_IVPerfecterDude_11:
# 251 "data/maps/MauvilleCity_House1/scripts.pory"
	goto MauvilleCity_House1_EventScript_HPChangerNo
	goto MauvilleCity_House1_EventScript_IVPerfecterDude_10


MauvilleCity_House1_EventScript_HPChangerDude_Text_0:
# 147 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Which Pokémon?$"

MauvilleCity_House1_EventScript_HPChangerDude_Text_1:
# 159 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "I can't change the Hidden Power\nof an Egg.$"

MauvilleCity_House1_EventScript_HPChangerDude_Text_2:
# 165 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Which new Hidden Power type would\nyou like for {STR_VAR_1}?$"

MauvilleCity_House1_EventScript_HPChangerDude_Text_3:
# 166 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Fighting$"

MauvilleCity_House1_EventScript_HPChangerDude_Text_4:
# 167 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Flying$"

MauvilleCity_House1_EventScript_HPChangerDude_Text_5:
# 168 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Poison$"

MauvilleCity_House1_EventScript_HPChangerDude_Text_6:
# 169 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Ground$"

MauvilleCity_House1_EventScript_HPChangerDude_Text_7:
# 170 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Rock$"

MauvilleCity_House1_EventScript_HPChangerDude_Text_8:
# 171 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Bug$"

MauvilleCity_House1_EventScript_HPChangerDude_Text_9:
# 172 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Ghost$"

MauvilleCity_House1_EventScript_HPChangerDude_Text_10:
# 173 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Steel$"

MauvilleCity_House1_EventScript_HPChangerDude_Text_11:
# 174 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Fire$"

MauvilleCity_House1_EventScript_HPChangerDude_Text_12:
# 175 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Water$"

MauvilleCity_House1_EventScript_HPChangerDude_Text_13:
# 176 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Grass$"

MauvilleCity_House1_EventScript_HPChangerDude_Text_14:
# 177 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Electric$"

MauvilleCity_House1_EventScript_HPChangerDude_Text_15:
# 178 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Psychic$"

MauvilleCity_House1_EventScript_HPChangerDude_Text_16:
# 179 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Ice$"

MauvilleCity_House1_EventScript_HPChangerDude_Text_17:
# 180 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Dragon$"

MauvilleCity_House1_EventScript_HPChangerDude_Text_18:
# 181 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Dark$"

MauvilleCity_House1_EventScript_HPChangerDude_Text_19:
# 182 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Cancel$"

MauvilleCity_House1_EventScript_HPChangerDude_Text_20:
# 200 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "I shall begin at once.$"

MauvilleCity_House1_EventScript_HPChangerNo_Text_0:
# 213 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "I see. Come back if you change\nyour mind.$"

MauvilleCity_House1_EventScript_IVPerfecterDude_Text_0:
# 241 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "I can't perfect the IVs\nof an Egg.$"

HpChangerHelloCanChange::
# 267 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Hello, I am the Hidden Power type\n"
	.string "changer.\p"
	.string "You can choose a Pokémon and I can\n"
	.string "quickly modify its IVs to change\l"
	.string "the type of its Hidden Power.\p"
	.string "Would you like me to change the type of\n"
	.string "one of your Pokémon's Hidden Power?$"

HpChangerNotInMgm::
# 278 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Oh, it looks like you are not in\n"
	.string "Minimal Grinding Mode.\p"
	.string "I can only change the Hidden Power\n"
	.string "type of a Pokémon whose IVs have been\l"
	.string "perfected.\p"
	.string "That limitation will be in place until\n"
	.string "you have all 8 Gym Badges.$"

AreYouSureHPTypeChange::
# 290 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "So you want me to change\n"
	.string "{STR_VAR_1}'s Hidden Power type\l"
	.string "to {STR_VAR_2}?\p"
	.string "This will modify {STR_VAR_1}'s\n"
	.string "IVs to be the following:\p"
	.string "HP   Atk   Def   SpAtk   SpDef   Spd\n"
	.string "{STR_VAR_3}$"

HPTypeChangedComeBackSoon::
# 301 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "{STR_VAR_1}'s Hidden Power type\n"
	.string "has been changed to {STR_VAR_2}.\p"
	.string "Come back if you need me to change\n"
	.string "the Hidden Power type of\l"
	.string "another Pokémon.$"

IVPerfecterGreeting::
# 310 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Hello, I am the IV Perfecter,\n"
	.string "I can perfect one of your\l"
	.string "Pokémon's IVs.\p"
	.string "Would you like me to perfect one of\n"
	.string "your Pokémon's IVs?$"

IVPerfecterAreYouSure::
# 319 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "So you want me to perfect\n"
	.string "{STR_VAR_1}'s IVs?$"

IVPerfecterComeBackSoon::
# 325 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "{STR_VAR_1}'s IVs have been\n"
	.string "perfected.\p"
	.string "Come back if you need me to perfect\n"
	.string "the IVs of another Pokémon.$"
