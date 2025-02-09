# 1 "data/maps/SootopolisCity_House2/scripts.pory"

# 2 "data/maps/SootopolisCity_House2/scripts.pory"
SootopolisCity_House2_MapScripts::
# 3 "data/maps/SootopolisCity_House2/scripts.pory"
	.byte 0

SootopolisCity_House2_EventScript_ExpertF::
# 8 "data/maps/SootopolisCity_House2/scripts.pory"
	lock
# 9 "data/maps/SootopolisCity_House2/scripts.pory"
	faceplayer
# 10 "data/maps/SootopolisCity_House2/scripts.pory"
	goto_if_unset FLAG_MET_ARCEUS_EXPERT, SootopolisCity_House2_EventScript_ExpertF_2
# 19 "data/maps/SootopolisCity_House2/scripts.pory"
	checkitemplate
# 20 "data/maps/SootopolisCity_House2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SootopolisCity_House2_EventScript_ExpertF_5
# 27 "data/maps/SootopolisCity_House2/scripts.pory"
	msgbox ArceusExpertSwapPlate
# 28 "data/maps/SootopolisCity_House2/scripts.pory"
	dynmultipush SootopolisCity_House2_EventScript_ExpertF_Text_0, ITEM_FIST_PLATE
# 29 "data/maps/SootopolisCity_House2/scripts.pory"
	dynmultipush SootopolisCity_House2_EventScript_ExpertF_Text_1, ITEM_SKY_PLATE
# 30 "data/maps/SootopolisCity_House2/scripts.pory"
	dynmultipush SootopolisCity_House2_EventScript_ExpertF_Text_2, ITEM_TOXIC_PLATE
# 31 "data/maps/SootopolisCity_House2/scripts.pory"
	dynmultipush SootopolisCity_House2_EventScript_ExpertF_Text_3, ITEM_EARTH_PLATE
# 32 "data/maps/SootopolisCity_House2/scripts.pory"
	dynmultipush SootopolisCity_House2_EventScript_ExpertF_Text_4, ITEM_STONE_PLATE
# 33 "data/maps/SootopolisCity_House2/scripts.pory"
	dynmultipush SootopolisCity_House2_EventScript_ExpertF_Text_5, ITEM_INSECT_PLATE
# 34 "data/maps/SootopolisCity_House2/scripts.pory"
	dynmultipush SootopolisCity_House2_EventScript_ExpertF_Text_6, ITEM_SPOOKY_PLATE
# 35 "data/maps/SootopolisCity_House2/scripts.pory"
	dynmultipush SootopolisCity_House2_EventScript_ExpertF_Text_7, ITEM_IRON_PLATE
# 36 "data/maps/SootopolisCity_House2/scripts.pory"
	dynmultipush SootopolisCity_House2_EventScript_ExpertF_Text_8, ITEM_FLAME_PLATE
# 37 "data/maps/SootopolisCity_House2/scripts.pory"
	dynmultipush SootopolisCity_House2_EventScript_ExpertF_Text_9, ITEM_SPLASH_PLATE
# 38 "data/maps/SootopolisCity_House2/scripts.pory"
	dynmultipush SootopolisCity_House2_EventScript_ExpertF_Text_10, ITEM_MEADOW_PLATE
# 39 "data/maps/SootopolisCity_House2/scripts.pory"
	dynmultipush SootopolisCity_House2_EventScript_ExpertF_Text_11, ITEM_ZAP_PLATE
# 40 "data/maps/SootopolisCity_House2/scripts.pory"
	dynmultipush SootopolisCity_House2_EventScript_ExpertF_Text_12, ITEM_MIND_PLATE
# 41 "data/maps/SootopolisCity_House2/scripts.pory"
	dynmultipush SootopolisCity_House2_EventScript_ExpertF_Text_13, ITEM_ICICLE_PLATE
# 42 "data/maps/SootopolisCity_House2/scripts.pory"
	dynmultipush SootopolisCity_House2_EventScript_ExpertF_Text_14, ITEM_DRACO_PLATE
# 43 "data/maps/SootopolisCity_House2/scripts.pory"
	dynmultipush SootopolisCity_House2_EventScript_ExpertF_Text_15, ITEM_DREAD_PLATE
# 44 "data/maps/SootopolisCity_House2/scripts.pory"
	dynmultipush SootopolisCity_House2_EventScript_ExpertF_Text_16, ITEM_PIXIE_PLATE
# 45 "data/maps/SootopolisCity_House2/scripts.pory"
	dynmultipush SootopolisCity_House2_EventScript_ExpertF_Text_17, MULTI_B_PRESSED
# 48 "data/maps/SootopolisCity_House2/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, ITEM_FIST_PLATE, DYN_MULTICHOICE_CB_NONE
# 50 "data/maps/SootopolisCity_House2/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq SootopolisCity_House2_EventScript_ExpertF_8
SootopolisCity_House2_EventScript_ExpertF_7:
# 55 "data/maps/SootopolisCity_House2/scripts.pory"
	copyvar VAR_0x8005, VAR_RESULT
# 56 "data/maps/SootopolisCity_House2/scripts.pory"
	removeitem VAR_0x8004
# 57 "data/maps/SootopolisCity_House2/scripts.pory"
	msgbox SootopolisCity_House2_EventScript_ExpertF_Text_18
# 58 "data/maps/SootopolisCity_House2/scripts.pory"
	giveitem VAR_0x8005
# 59 "data/maps/SootopolisCity_House2/scripts.pory"
	msgbox SootopolisCity_House2_EventScript_ExpertF_Text_19
# 60 "data/maps/SootopolisCity_House2/scripts.pory"
	release
	end

SootopolisCity_House2_EventScript_ExpertF_2:
# 12 "data/maps/SootopolisCity_House2/scripts.pory"
	msgbox SootopolisCity_House2_ArceusExpertIntro
# 13 "data/maps/SootopolisCity_House2/scripts.pory"
	giveitem ITEM_DRACO_PLATE
# 14 "data/maps/SootopolisCity_House2/scripts.pory"
	msgbox SootopolisCity_House2_SeeGoodPlate
# 15 "data/maps/SootopolisCity_House2/scripts.pory"
	setflag FLAG_MET_ARCEUS_EXPERT
# 16 "data/maps/SootopolisCity_House2/scripts.pory"
	release
	end

SootopolisCity_House2_EventScript_ExpertF_5:
# 22 "data/maps/SootopolisCity_House2/scripts.pory"
	msgbox SootopolisCity_House2_Text_NoPlates
# 23 "data/maps/SootopolisCity_House2/scripts.pory"
	release
	end

SootopolisCity_House2_EventScript_ExpertF_8:
# 52 "data/maps/SootopolisCity_House2/scripts.pory"
	goto SootopolisCity_House2_EventScript_ArceusExpertNo
	goto SootopolisCity_House2_EventScript_ExpertF_7


SootopolisCity_House2_EventScript_ArceusExpertNo::
# 66 "data/maps/SootopolisCity_House2/scripts.pory"
	msgbox SootopolisCity_House2_EventScript_ArceusExpertNo_Text_0
# 67 "data/maps/SootopolisCity_House2/scripts.pory"
	release
	end


SootopolisCity_House2_EventScript_ExpertF_Text_0:
# 28 "data/maps/SootopolisCity_House2/scripts.pory"
	.string "Fighting$"

SootopolisCity_House2_EventScript_ExpertF_Text_1:
# 29 "data/maps/SootopolisCity_House2/scripts.pory"
	.string "Flying$"

SootopolisCity_House2_EventScript_ExpertF_Text_2:
# 30 "data/maps/SootopolisCity_House2/scripts.pory"
	.string "Poison$"

SootopolisCity_House2_EventScript_ExpertF_Text_3:
# 31 "data/maps/SootopolisCity_House2/scripts.pory"
	.string "Ground$"

SootopolisCity_House2_EventScript_ExpertF_Text_4:
# 32 "data/maps/SootopolisCity_House2/scripts.pory"
	.string "Rock$"

SootopolisCity_House2_EventScript_ExpertF_Text_5:
# 33 "data/maps/SootopolisCity_House2/scripts.pory"
	.string "Bug$"

SootopolisCity_House2_EventScript_ExpertF_Text_6:
# 34 "data/maps/SootopolisCity_House2/scripts.pory"
	.string "Ghost$"

SootopolisCity_House2_EventScript_ExpertF_Text_7:
# 35 "data/maps/SootopolisCity_House2/scripts.pory"
	.string "Steel$"

SootopolisCity_House2_EventScript_ExpertF_Text_8:
# 36 "data/maps/SootopolisCity_House2/scripts.pory"
	.string "Fire$"

SootopolisCity_House2_EventScript_ExpertF_Text_9:
# 37 "data/maps/SootopolisCity_House2/scripts.pory"
	.string "Water$"

SootopolisCity_House2_EventScript_ExpertF_Text_10:
# 38 "data/maps/SootopolisCity_House2/scripts.pory"
	.string "Grass$"

SootopolisCity_House2_EventScript_ExpertF_Text_11:
# 39 "data/maps/SootopolisCity_House2/scripts.pory"
	.string "Electric$"

SootopolisCity_House2_EventScript_ExpertF_Text_12:
# 40 "data/maps/SootopolisCity_House2/scripts.pory"
	.string "Psychic$"

SootopolisCity_House2_EventScript_ExpertF_Text_13:
# 41 "data/maps/SootopolisCity_House2/scripts.pory"
	.string "Ice$"

SootopolisCity_House2_EventScript_ExpertF_Text_14:
# 42 "data/maps/SootopolisCity_House2/scripts.pory"
	.string "Dragon$"

SootopolisCity_House2_EventScript_ExpertF_Text_15:
# 43 "data/maps/SootopolisCity_House2/scripts.pory"
	.string "Dark$"

SootopolisCity_House2_EventScript_ExpertF_Text_16:
# 44 "data/maps/SootopolisCity_House2/scripts.pory"
	.string "Fairy$"

SootopolisCity_House2_EventScript_ExpertF_Text_17:
# 45 "data/maps/SootopolisCity_House2/scripts.pory"
	.string "Cancel$"

SootopolisCity_House2_EventScript_ExpertF_Text_18:
# 57 "data/maps/SootopolisCity_House2/scripts.pory"
	.string "Good choice, let us exchange Plates.$"

SootopolisCity_House2_EventScript_ExpertF_Text_19:
# 59 "data/maps/SootopolisCity_House2/scripts.pory"
	.string "Come back if you want to trade\nPlates again.$"

SootopolisCity_House2_EventScript_ArceusExpertNo_Text_0:
# 66 "data/maps/SootopolisCity_House2/scripts.pory"
	.string "I see, come back if you change\nyour mind.$"

SootopolisCity_House2_ArceusExpertIntro::
# 71 "data/maps/SootopolisCity_House2/scripts.pory"
	.string "Hello, young trainer. I can tell from the\n"
	.string "look on your face that you have what it\l"
	.string "takes to use this Item correctly; I've\l"
	.string "been waiting for someone like you.$"

SootopolisCity_House2_SeeGoodPlate::
# 78 "data/maps/SootopolisCity_House2/scripts.pory"
	.string "I've spent years collecting these\n"
	.string "Plates, come back if you want to swap\l"
	.string "for a new type of Plate.$"

ArceusExpertSwapPlate::
# 84 "data/maps/SootopolisCity_House2/scripts.pory"
	.string "Welcome back, young trainer. I see you \n"
	.string "want to trade Plates.\p"
	.string "Which Plate do you want?$"

SootopolisCity_House2_Text_NoPlates::
# 90 "data/maps/SootopolisCity_House2/scripts.pory"
	.string "Ah, I see you don't have one of the\n"
	.string "Plates with you. Come back when you do.$"
