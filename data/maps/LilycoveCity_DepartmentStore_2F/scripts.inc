# 1 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 2 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_MapScripts::
# 3 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.byte 0
# 4 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 5 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_EventScript_Cook::
# 6 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_2F_Text_LearnToUseItemsProperly, MSGBOX_NPC
# 7 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	end
# 8 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 9 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_EventScript_Sailor::
# 10 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_2F_Text_StockUpOnItems, MSGBOX_NPC
# 11 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	end
# 12 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 13 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_EventScript_ClerkLeft::
# 14 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	lock
# 15 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	faceplayer
# 16 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	message gText_HowMayIServeYou
# 17 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmessage
# 18 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	pokemart LilycoveCity_DepartmentStore_2F_Pokemart1
# 19 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 20 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	release
# 21 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	end
# 22 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 23 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.align 2
# 24 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Pokemart1:
# 25 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_POKE_BALL
# 26 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 27 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 28 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 29 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 30 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 31 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 32 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 33 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 34 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_AWAKENING
# 35 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_FLUFFY_TAIL
# 36 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_NONE
# 37 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	release
# 38 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	end
# 39 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 40 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_EventScript_ClerkRight::
# 41 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	lock
# 42 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	faceplayer
# 43 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	message gText_HowMayIServeYou
# 44 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmessage
# 45 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	pokemart LilycoveCity_DepartmentStore_2F_Pokemart2
# 46 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 47 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	release
# 48 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	end
# 49 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 50 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.align 2
# 51 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Pokemart2:
# 52 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_POTION
# 53 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 54 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 55 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_MAX_POTION
# 56 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_REVIVE
# 57 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_REPEL
# 58 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 59 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 60 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_WAVE_MAIL
# 61 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_MECH_MAIL
# 62 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_NONE
# 63 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	release
# 64 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	end
# 65 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 66 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Text_LearnToUseItemsProperly:
# 67 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "Learn to use items properly.\n"
# 68 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "That's basic, really.$"
# 69 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 70 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Text_GoodGiftForHusband:
# 71 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "My husband is waiting at home.\n"
# 72 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "What would make a good gift for him?$"
# 73 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 74 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Text_StockUpOnItems:
# 75 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "I'm leaving on a long journey soon.\n"
# 76 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "I need to stock up on items.$"
# 77 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 78 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Text_HereTakeThis:
# 79 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "Oh, here, it looks like you should\n"
# 80 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "have this!$"

LilycoveCity_DepartmentStore_2F_EventScript_PokefanF::
# 85 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	lock
# 86 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	faceplayer
# 87 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	checkitem ITEM_TM_HEAVY_SLAM
# 88 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, LilycoveCity_DepartmentStore_2F_EventScript_PokefanF_Base
# 89 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	goto_if_defeated TRAINER_ROARK, LilycoveCity_DepartmentStore_2F_EventScript_PokefanF_GiveSpikes
# 90 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_2F_Text_GoodGiftForHusband, MSGBOX_DEFAULT
# 91 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	release
	end


LilycoveCity_DepartmentStore_2F_EventScript_PokefanF_Base::
# 96 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_2F_Text_GoodGiftForHusband, MSGBOX_DEFAULT
# 97 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	release
	end


LilycoveCity_DepartmentStore_2F_EventScript_PokefanF_GiveSpikes::
# 102 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_2F_Text_HereTakeThis, MSGBOX_DEFAULT
# 103 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	giveitem ITEM_TM_HEAVY_SLAM
# 104 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	release
	end

