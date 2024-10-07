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

MauvilleCity_House1_EventScript_HPChangerDude::
# 140 "data/maps/MauvilleCity_House1/scripts.pory"
	lock
# 141 "data/maps/MauvilleCity_House1/scripts.pory"
	faceplayer
# 142 "data/maps/MauvilleCity_House1/scripts.pory"
	goto_if_set FLAG_MIN_GRINDING_MODE, MauvilleCity_House1_EventScript_HPChangerDude_2
# 142 "data/maps/MauvilleCity_House1/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, MauvilleCity_House1_EventScript_HPChangerDude_2
MauvilleCity_House1_EventScript_HPChangerDude_1:
# 146 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox HpChangerHelloCantChange
# 147 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

MauvilleCity_House1_EventScript_HPChangerDude_2:
# 144 "data/maps/MauvilleCity_House1/scripts.pory"
	goto MauvilleCity_House1_EventScript_ChangeHP
	goto MauvilleCity_House1_EventScript_HPChangerDude_1


MauvilleCity_House1_EventScript_ChangeHP::
# 152 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox HpChangerHelloCanChange, MSGBOX_YESNO
# 153 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MauvilleCity_House1_EventScript_ChangeHP_2
MauvilleCity_House1_EventScript_ChangeHP_1:
# 157 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox MauvilleCity_House1_EventScript_ChangeHP_Text_0
# 158 "data/maps/MauvilleCity_House1/scripts.pory"
	special ChoosePartyMon
# 159 "data/maps/MauvilleCity_House1/scripts.pory"
	waitstate
# 160 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq MauvilleCity_House1_EventScript_ChangeHP_5
MauvilleCity_House1_EventScript_ChangeHP_4:
# 164 "data/maps/MauvilleCity_House1/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 165 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq MauvilleCity_House1_EventScript_ChangeHP_8
# 170 "data/maps/MauvilleCity_House1/scripts.pory"
	special BufferMonNickname
# 171 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox MauvilleCity_House1_EventScript_ChangeHP_Text_2
# 172 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultipush MauvilleCity_House1_EventScript_ChangeHP_Text_3, TYPE_FIGHTING
# 173 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultipush MauvilleCity_House1_EventScript_ChangeHP_Text_4, TYPE_FLYING
# 174 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultipush MauvilleCity_House1_EventScript_ChangeHP_Text_5, TYPE_POISON
# 175 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultipush MauvilleCity_House1_EventScript_ChangeHP_Text_6, TYPE_GROUND
# 176 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultipush MauvilleCity_House1_EventScript_ChangeHP_Text_7, TYPE_ROCK
# 177 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultipush MauvilleCity_House1_EventScript_ChangeHP_Text_8, TYPE_BUG
# 178 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultipush MauvilleCity_House1_EventScript_ChangeHP_Text_9, TYPE_GHOST
# 179 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultipush MauvilleCity_House1_EventScript_ChangeHP_Text_10, TYPE_STEEL
# 180 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultipush MauvilleCity_House1_EventScript_ChangeHP_Text_11, TYPE_FIRE
# 181 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultipush MauvilleCity_House1_EventScript_ChangeHP_Text_12, TYPE_WATER
# 182 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultipush MauvilleCity_House1_EventScript_ChangeHP_Text_13, TYPE_GRASS
# 183 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultipush MauvilleCity_House1_EventScript_ChangeHP_Text_14, TYPE_ELECTRIC
# 184 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultipush MauvilleCity_House1_EventScript_ChangeHP_Text_15, TYPE_PSYCHIC
# 185 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultipush MauvilleCity_House1_EventScript_ChangeHP_Text_16, TYPE_ICE
# 186 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultipush MauvilleCity_House1_EventScript_ChangeHP_Text_17, TYPE_DRAGON
# 187 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultipush MauvilleCity_House1_EventScript_ChangeHP_Text_18, TYPE_DARK
# 188 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultipush MauvilleCity_House1_EventScript_ChangeHP_Text_19, MULTI_B_PRESSED
# 190 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, TYPE_FIGHTING, DYN_MULTICHOICE_CB_NONE
# 192 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq MauvilleCity_House1_EventScript_ChangeHP_11
MauvilleCity_House1_EventScript_ChangeHP_10:
# 197 "data/maps/MauvilleCity_House1/scripts.pory"
	copyvar VAR_0x8005, VAR_RESULT
# 198 "data/maps/MauvilleCity_House1/scripts.pory"
	bufferhptypeinfo STR_VAR_2, STR_VAR_3, VAR_RESULT
# 199 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox AreYouSureHPTypeChange, MSGBOX_YESNO
# 201 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MauvilleCity_House1_EventScript_ChangeHP_14
MauvilleCity_House1_EventScript_ChangeHP_13:
# 206 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox MauvilleCity_House1_EventScript_ChangeHP_Text_20
# 207 "data/maps/MauvilleCity_House1/scripts.pory"
	fadescreen FADE_TO_BLACK
# 208 "data/maps/MauvilleCity_House1/scripts.pory"
	special ChangeMonIVsForHP
# 209 "data/maps/MauvilleCity_House1/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 210 "data/maps/MauvilleCity_House1/scripts.pory"
	waitfanfare
# 211 "data/maps/MauvilleCity_House1/scripts.pory"
	closemessage
# 212 "data/maps/MauvilleCity_House1/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 213 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox HPTypeChangedComeBackSoon
# 214 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

MauvilleCity_House1_EventScript_ChangeHP_2:
# 155 "data/maps/MauvilleCity_House1/scripts.pory"
	goto MauvilleCity_House1_EventScript_HPChangerNo
	goto MauvilleCity_House1_EventScript_ChangeHP_1

MauvilleCity_House1_EventScript_ChangeHP_5:
# 162 "data/maps/MauvilleCity_House1/scripts.pory"
	goto MauvilleCity_House1_EventScript_HPChangerNo
	goto MauvilleCity_House1_EventScript_ChangeHP_4

MauvilleCity_House1_EventScript_ChangeHP_8:
# 166 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox MauvilleCity_House1_EventScript_ChangeHP_Text_1
# 167 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

MauvilleCity_House1_EventScript_ChangeHP_11:
# 194 "data/maps/MauvilleCity_House1/scripts.pory"
	goto MauvilleCity_House1_EventScript_HPChangerNo
	goto MauvilleCity_House1_EventScript_ChangeHP_10

MauvilleCity_House1_EventScript_ChangeHP_14:
# 203 "data/maps/MauvilleCity_House1/scripts.pory"
	goto MauvilleCity_House1_EventScript_HPChangerNo
	goto MauvilleCity_House1_EventScript_ChangeHP_13


MauvilleCity_House1_EventScript_HPChangerNo::
# 219 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox MauvilleCity_House1_EventScript_HPChangerNo_Text_0
# 220 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end


MauvilleCity_House1_EventScript_ChangeHP_Text_0:
# 157 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Which Pokémon?$"

MauvilleCity_House1_EventScript_ChangeHP_Text_1:
# 166 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "I can't change the Hidden Power\nof an Egg.$"

MauvilleCity_House1_EventScript_ChangeHP_Text_2:
# 171 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Which new Hidden Power type would\nyou like for {STR_VAR_1}?$"

MauvilleCity_House1_EventScript_ChangeHP_Text_3:
# 172 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Fighting$"

MauvilleCity_House1_EventScript_ChangeHP_Text_4:
# 173 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Flying$"

MauvilleCity_House1_EventScript_ChangeHP_Text_5:
# 174 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Poison$"

MauvilleCity_House1_EventScript_ChangeHP_Text_6:
# 175 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Ground$"

MauvilleCity_House1_EventScript_ChangeHP_Text_7:
# 176 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Rock$"

MauvilleCity_House1_EventScript_ChangeHP_Text_8:
# 177 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Bug$"

MauvilleCity_House1_EventScript_ChangeHP_Text_9:
# 178 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Ghost$"

MauvilleCity_House1_EventScript_ChangeHP_Text_10:
# 179 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Steel$"

MauvilleCity_House1_EventScript_ChangeHP_Text_11:
# 180 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Fire$"

MauvilleCity_House1_EventScript_ChangeHP_Text_12:
# 181 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Water$"

MauvilleCity_House1_EventScript_ChangeHP_Text_13:
# 182 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Grass$"

MauvilleCity_House1_EventScript_ChangeHP_Text_14:
# 183 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Electric$"

MauvilleCity_House1_EventScript_ChangeHP_Text_15:
# 184 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Psychic$"

MauvilleCity_House1_EventScript_ChangeHP_Text_16:
# 185 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Ice$"

MauvilleCity_House1_EventScript_ChangeHP_Text_17:
# 186 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Dragon$"

MauvilleCity_House1_EventScript_ChangeHP_Text_18:
# 187 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Dark$"

MauvilleCity_House1_EventScript_ChangeHP_Text_19:
# 188 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Cancel$"

MauvilleCity_House1_EventScript_ChangeHP_Text_20:
# 206 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "I shall begin at once.$"

MauvilleCity_House1_EventScript_HPChangerNo_Text_0:
# 219 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "I see. Come back if you change\nyour mind.$"

HpChangerHelloCantChange::
# 225 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Hello, I am the Hidden Power type\n"
	.string "changer.\p"
	.string "Oh, it looks like you are not in\n"
	.string "Minimal Grinding Mode.\p"
	.string "I can't modify your Pokémon's IVs until\n"
	.string "you have 8 Badges in that case.$"

HpChangerHelloCanChange::
# 235 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Hello, I am the Hidden Power type\n"
	.string "changer.\p"
	.string "You can choose a Pokémon and I can\n"
	.string "quickly modify its IVs to change\l"
	.string "the type of its Hidden Power.\p"
	.string "Would you like me to change the type of\n"
	.string "one of your Pokémon's Hidden Power?$"

AreYouSureHPTypeChange::
# 246 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "So you want me to change\n"
	.string "{STR_VAR_1}'s Hidden Power type\l"
	.string "to {STR_VAR_2}?\p"
	.string "This will modify {STR_VAR_1}'s\n"
	.string "IVs to be the following:\p"
	.string "HP   Atk   Def   SpAtk   SpDef   Spd\n"
	.string "{STR_VAR_3}$"

HPTypeChangedComeBackSoon::
# 257 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "{STR_VAR_1}'s Hidden Power type\n"
	.string "has been changed to {STR_VAR_2}.\p"
	.string "Come back if you need me to change\n"
	.string "the Hidden Power type of\l"
	.string "another Pokémon.$"
