# 1 "data/maps/PacifidlogTown_House1/scripts.pory"

# 2 "data/maps/PacifidlogTown_House1/scripts.pory"
PacifidlogTown_House1_MapScripts::
# 3 "data/maps/PacifidlogTown_House1/scripts.pory"
	.byte 0
# 4 "data/maps/PacifidlogTown_House1/scripts.pory"

# 5 "data/maps/PacifidlogTown_House1/scripts.pory"
PacifidlogTown_House1_EventScript_Woman::
# 6 "data/maps/PacifidlogTown_House1/scripts.pory"
	msgbox PacifidlogTown_House1_Text_SixDotsOpenThreeDoors, MSGBOX_NPC
# 7 "data/maps/PacifidlogTown_House1/scripts.pory"
	end
# 8 "data/maps/PacifidlogTown_House1/scripts.pory"

# 9 "data/maps/PacifidlogTown_House1/scripts.pory"
PacifidlogTown_House1_Text_SixDotsOpenThreeDoors:
# 10 "data/maps/PacifidlogTown_House1/scripts.pory"
	.string "“Six dots open three doors.”\p"
# 11 "data/maps/PacifidlogTown_House1/scripts.pory"
	.string "Grandpa used to say that, but I don't\n"
# 12 "data/maps/PacifidlogTown_House1/scripts.pory"
	.string "know what he meant.$"

PacifidlogTown_House1_EventScript_Man::
# 17 "data/maps/PacifidlogTown_House1/scripts.pory"
	lock
# 18 "data/maps/PacifidlogTown_House1/scripts.pory"
	faceplayer
# 19 "data/maps/PacifidlogTown_House1/scripts.pory"
	goto_if_unset FLAG_MET_GENESECT_GUY, PacifidlogTown_House1_EventScript_Man_2
# 28 "data/maps/PacifidlogTown_House1/scripts.pory"
	checkitemdrive
# 29 "data/maps/PacifidlogTown_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PacifidlogTown_House1_EventScript_Man_5
# 36 "data/maps/PacifidlogTown_House1/scripts.pory"
	msgbox GenesectManSwapDrive
# 37 "data/maps/PacifidlogTown_House1/scripts.pory"
	dynmultipush PacifidlogTown_House1_EventScript_Man_Text_0, ITEM_DOUSE_DRIVE
# 38 "data/maps/PacifidlogTown_House1/scripts.pory"
	dynmultipush PacifidlogTown_House1_EventScript_Man_Text_1, ITEM_SHOCK_DRIVE
# 39 "data/maps/PacifidlogTown_House1/scripts.pory"
	dynmultipush PacifidlogTown_House1_EventScript_Man_Text_2, ITEM_BURN_DRIVE
# 40 "data/maps/PacifidlogTown_House1/scripts.pory"
	dynmultipush PacifidlogTown_House1_EventScript_Man_Text_3, ITEM_CHILL_DRIVE
# 41 "data/maps/PacifidlogTown_House1/scripts.pory"
	dynmultipush PacifidlogTown_House1_EventScript_Man_Text_4, MULTI_B_PRESSED
# 44 "data/maps/PacifidlogTown_House1/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, ITEM_DOUSE_DRIVE, DYN_MULTICHOICE_CB_NONE
# 46 "data/maps/PacifidlogTown_House1/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq PacifidlogTown_House1_EventScript_Man_8
PacifidlogTown_House1_EventScript_Man_7:
# 51 "data/maps/PacifidlogTown_House1/scripts.pory"
	copyvar VAR_0x8005, VAR_RESULT
# 52 "data/maps/PacifidlogTown_House1/scripts.pory"
	removeitem VAR_0x8004
# 53 "data/maps/PacifidlogTown_House1/scripts.pory"
	msgbox PacifidlogTown_House1_EventScript_Man_Text_5
# 54 "data/maps/PacifidlogTown_House1/scripts.pory"
	giveitem VAR_0x8005
# 55 "data/maps/PacifidlogTown_House1/scripts.pory"
	msgbox PacifidlogTown_House1_EventScript_Man_Text_6
# 56 "data/maps/PacifidlogTown_House1/scripts.pory"
	release
	end

PacifidlogTown_House1_EventScript_Man_2:
# 21 "data/maps/PacifidlogTown_House1/scripts.pory"
	msgbox PacifidlogTown_House1_GenesectManIntro
# 22 "data/maps/PacifidlogTown_House1/scripts.pory"
	giveitem ITEM_DOUSE_DRIVE
# 23 "data/maps/PacifidlogTown_House1/scripts.pory"
	msgbox PacifidlogTown_House1_SeeGoodDrive
# 24 "data/maps/PacifidlogTown_House1/scripts.pory"
	setflag FLAG_MET_GENESECT_GUY
# 25 "data/maps/PacifidlogTown_House1/scripts.pory"
	release
	end

PacifidlogTown_House1_EventScript_Man_5:
# 31 "data/maps/PacifidlogTown_House1/scripts.pory"
	msgbox PacifidlogTown_House1_Text_NoDrives
# 32 "data/maps/PacifidlogTown_House1/scripts.pory"
	release
	end

PacifidlogTown_House1_EventScript_Man_8:
# 48 "data/maps/PacifidlogTown_House1/scripts.pory"
	goto PacifidlogTown_House1_EventScript_GenesectManNo
	goto PacifidlogTown_House1_EventScript_Man_7


PacifidlogTown_House1_EventScript_GenesectManNo::
# 62 "data/maps/PacifidlogTown_House1/scripts.pory"
	msgbox PacifidlogTown_House1_EventScript_GenesectManNo_Text_0
# 63 "data/maps/PacifidlogTown_House1/scripts.pory"
	release
	end


PacifidlogTown_House1_EventScript_Man_Text_0:
# 37 "data/maps/PacifidlogTown_House1/scripts.pory"
	.string "Douse$"

PacifidlogTown_House1_EventScript_Man_Text_1:
# 38 "data/maps/PacifidlogTown_House1/scripts.pory"
	.string "Shock$"

PacifidlogTown_House1_EventScript_Man_Text_2:
# 39 "data/maps/PacifidlogTown_House1/scripts.pory"
	.string "Burn$"

PacifidlogTown_House1_EventScript_Man_Text_3:
# 40 "data/maps/PacifidlogTown_House1/scripts.pory"
	.string "Chill$"

PacifidlogTown_House1_EventScript_Man_Text_4:
# 41 "data/maps/PacifidlogTown_House1/scripts.pory"
	.string "Cancel$"

PacifidlogTown_House1_EventScript_Man_Text_5:
# 53 "data/maps/PacifidlogTown_House1/scripts.pory"
	.string "Cool, let's swap drives then.$"

PacifidlogTown_House1_EventScript_Man_Text_6:
# 55 "data/maps/PacifidlogTown_House1/scripts.pory"
	.string "Come back if you want to trade\ndrives again!$"

PacifidlogTown_House1_EventScript_GenesectManNo_Text_0:
# 62 "data/maps/PacifidlogTown_House1/scripts.pory"
	.string "No worries, you can come back and trade\ndrives with me anytime.$"

PacifidlogTown_House1_GenesectManIntro::
# 67 "data/maps/PacifidlogTown_House1/scripts.pory"
	.string "People always tell me that I'm really\n"
	.string "driven, but what they don't know is\l"
	.string "that I just have a lot of drives.\p"
	.string "Want to see what I mean?\n"
	.string "Here, take this.$"

PacifidlogTown_House1_SeeGoodDrive::
# 75 "data/maps/PacifidlogTown_House1/scripts.pory"
	.string "Come back anytime if you want a\n"
	.string "different drive.$"

GenesectManSwapDrive::
# 80 "data/maps/PacifidlogTown_House1/scripts.pory"
	.string "Oh hey, you came back! Does this mean\n"
	.string "you want to trade drives?\p"
	.string "Great! Which Drive do you want?$"

PacifidlogTown_House1_Text_NoDrives::
# 86 "data/maps/PacifidlogTown_House1/scripts.pory"
	.string "Hmm? You don't have any drives to trade\n"
	.string "with me.$"
