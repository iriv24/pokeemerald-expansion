# 1 "data/maps/Route125/scripts.pory"

# 2 "data/maps/Route125/scripts.pory"
.set LOCALID_ROARK, 11
# 3 "data/maps/Route125/scripts.pory"

# 4 "data/maps/Route125/scripts.pory"

# 5 "data/maps/Route125/scripts.pory"
Route125_MapScripts::
# 6 "data/maps/Route125/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route125_OnTransition
# 7 "data/maps/Route125/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route125_OnLoad
# 8 "data/maps/Route125/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route125_OnFrame
# 9 "data/maps/Route125/scripts.pory"
	.byte 0
# 10 "data/maps/Route125/scripts.pory"

# 11 "data/maps/Route125/scripts.pory"
Route125_OnTransition:
# 12 "data/maps/Route125/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
# 13 "data/maps/Route125/scripts.pory"
	call_if_defeated TRAINER_ROARK, SetRoarkPermLoc
# 14 "data/maps/Route125/scripts.pory"
	call_if_eq VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_HideMapNamePopup
# 15 "data/maps/Route125/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_125_WEST, AbnormalWeather_StartKyogreWeather
# 16 "data/maps/Route125/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_125_EAST, AbnormalWeather_StartKyogreWeather
# 17 "data/maps/Route125/scripts.pory"
	end
# 18 "data/maps/Route125/scripts.pory"

# 19 "data/maps/Route125/scripts.pory"
Route125_OnLoad:
# 20 "data/maps/Route125/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_125_WEST, AbnormalWeather_EventScript_PlaceTilesRoute125West
# 21 "data/maps/Route125/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_125_EAST, AbnormalWeather_EventScript_PlaceTilesRoute125East
# 22 "data/maps/Route125/scripts.pory"
	call_if_defeated TRAINER_ROARK, SetRoarkPermLoc
# 23 "data/maps/Route125/scripts.pory"
	end
# 24 "data/maps/Route125/scripts.pory"

# 25 "data/maps/Route125/scripts.pory"
Route125_OnFrame:
# 26 "data/maps/Route125/scripts.pory"
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
# 27 "data/maps/Route125/scripts.pory"
	.2byte 0
# 28 "data/maps/Route125/scripts.pory"

# 29 "data/maps/Route125/scripts.pory"
Route125_EventScript_Nolen::
# 30 "data/maps/Route125/scripts.pory"
	trainerbattle_single TRAINER_NOLEN, Route125_Text_NolenIntro, Route125_Text_NolenDefeat
# 31 "data/maps/Route125/scripts.pory"
	msgbox Route125_Text_NolenPostBattle, MSGBOX_AUTOCLOSE
# 32 "data/maps/Route125/scripts.pory"
	end
# 33 "data/maps/Route125/scripts.pory"

# 34 "data/maps/Route125/scripts.pory"
Route125_EventScript_Stan::
# 35 "data/maps/Route125/scripts.pory"
	trainerbattle_single TRAINER_STAN, Route125_Text_StanIntro, Route125_Text_StanDefeat
# 36 "data/maps/Route125/scripts.pory"
	msgbox Route125_Text_StanPostBattle, MSGBOX_AUTOCLOSE
# 37 "data/maps/Route125/scripts.pory"
	end
# 38 "data/maps/Route125/scripts.pory"

# 39 "data/maps/Route125/scripts.pory"
Route125_EventScript_Tanya::
# 40 "data/maps/Route125/scripts.pory"
	trainerbattle_single TRAINER_TANYA, Route125_Text_TanyaIntro, Route125_Text_TanyaDefeat
# 41 "data/maps/Route125/scripts.pory"
	msgbox Route125_Text_TanyaPostBattle, MSGBOX_AUTOCLOSE
# 42 "data/maps/Route125/scripts.pory"
	end
# 43 "data/maps/Route125/scripts.pory"

# 44 "data/maps/Route125/scripts.pory"
Route125_EventScript_Sharon::
# 45 "data/maps/Route125/scripts.pory"
	trainerbattle_single TRAINER_SHARON, Route125_Text_SharonIntro, Route125_Text_SharonDefeat
# 46 "data/maps/Route125/scripts.pory"
	msgbox Route125_Text_SharonPostBattle, MSGBOX_AUTOCLOSE
# 47 "data/maps/Route125/scripts.pory"
	end
# 48 "data/maps/Route125/scripts.pory"

# 49 "data/maps/Route125/scripts.pory"
Route125_EventScript_Ernest::
# 50 "data/maps/Route125/scripts.pory"
	trainerbattle_single TRAINER_ERNEST_1, Route125_Text_ErnestIntro, Route125_Text_ErnestDefeat, Route125_EventScript_RegisterErnest
# 51 "data/maps/Route125/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 52 "data/maps/Route125/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route125_EventScript_RematchErnest
# 53 "data/maps/Route125/scripts.pory"
	msgbox Route125_Text_ErnestPostBattle, MSGBOX_DEFAULT
# 54 "data/maps/Route125/scripts.pory"
	release
# 55 "data/maps/Route125/scripts.pory"
	end
# 56 "data/maps/Route125/scripts.pory"

# 57 "data/maps/Route125/scripts.pory"
Route125_EventScript_RegisterErnest::
# 58 "data/maps/Route125/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 59 "data/maps/Route125/scripts.pory"
	waitmovement 0
# 60 "data/maps/Route125/scripts.pory"
	msgbox Route125_Text_ErnestRegister, MSGBOX_DEFAULT
# 61 "data/maps/Route125/scripts.pory"
	register_matchcall TRAINER_ERNEST_1
# 62 "data/maps/Route125/scripts.pory"
	release
# 63 "data/maps/Route125/scripts.pory"
	end
# 64 "data/maps/Route125/scripts.pory"

# 65 "data/maps/Route125/scripts.pory"
Route125_EventScript_RematchErnest::
# 66 "data/maps/Route125/scripts.pory"
	trainerbattle_rematch TRAINER_ERNEST_1, Route125_Text_ErnestRematchIntro, Route125_Text_ErnestRematchDefeat
# 67 "data/maps/Route125/scripts.pory"
	msgbox Route125_Text_ErnestRematchPostBattle, MSGBOX_AUTOCLOSE
# 68 "data/maps/Route125/scripts.pory"
	end
# 69 "data/maps/Route125/scripts.pory"

# 70 "data/maps/Route125/scripts.pory"
Route125_EventScript_Kim::
# 71 "data/maps/Route125/scripts.pory"
	trainerbattle_double TRAINER_KIM_AND_IRIS, Route125_Text_KimIntro, Route125_Text_KimDefeat, Route125_Text_KimNotEnoughMons
# 72 "data/maps/Route125/scripts.pory"
	msgbox Route125_Text_KimPostBattle, MSGBOX_AUTOCLOSE
# 73 "data/maps/Route125/scripts.pory"
	end
# 74 "data/maps/Route125/scripts.pory"

# 75 "data/maps/Route125/scripts.pory"
Route125_EventScript_Iris::
# 76 "data/maps/Route125/scripts.pory"
	trainerbattle_double TRAINER_KIM_AND_IRIS, Route125_Text_IrisIntro, Route125_Text_IrisDefeat, Route125_Text_IrisNotEnoughMons
# 77 "data/maps/Route125/scripts.pory"
	msgbox Route125_Text_IrisPostBattle, MSGBOX_AUTOCLOSE
# 78 "data/maps/Route125/scripts.pory"
	end
# 79 "data/maps/Route125/scripts.pory"

# 80 "data/maps/Route125/scripts.pory"
Route125_EventScript_Presley::
# 81 "data/maps/Route125/scripts.pory"
	trainerbattle_single TRAINER_PRESLEY, Route125_Text_PresleyIntro, Route125_Text_PresleyDefeat
# 82 "data/maps/Route125/scripts.pory"
	msgbox Route125_Text_PresleyPostBattle, MSGBOX_AUTOCLOSE
# 83 "data/maps/Route125/scripts.pory"
	end
# 84 "data/maps/Route125/scripts.pory"

# 85 "data/maps/Route125/scripts.pory"
Route125_EventScript_Auron::
# 86 "data/maps/Route125/scripts.pory"
	trainerbattle_single TRAINER_AURON, Route125_Text_AuronIntro, Route125_Text_AuronDefeat
# 87 "data/maps/Route125/scripts.pory"
	msgbox Route125_Text_AuronPostBattle, MSGBOX_AUTOCLOSE
# 88 "data/maps/Route125/scripts.pory"
	end

Route125_EventScript_Roark::
# 93 "data/maps/Route125/scripts.pory"
	lockall
# 94 "data/maps/Route125/scripts.pory"
	applymovement LOCALID_ROARK, Common_Movement_FacePlayer
# 95 "data/maps/Route125/scripts.pory"
	goto_if_defeated TRAINER_ROARK, Route125_EventScript_RoarkDefeated
# 96 "data/maps/Route125/scripts.pory"
	goto_if_set FLAG_TEMP_1, Route125_EventScript_RoarkRequestBattleAgain
# 97 "data/maps/Route125/scripts.pory"
	msgbox Roark_Greeting, MSGBOX_YESNO
# 98 "data/maps/Route125/scripts.pory"
	goto Route125_EventScript_BattleRoarkPrompt
	end


Route125_EventScript_RoarkRequestBattleAgain::
# 103 "data/maps/Route125/scripts.pory"
	msgbox Roark_ReadyYet, MSGBOX_YESNO
# 104 "data/maps/Route125/scripts.pory"
	goto Route125_EventScript_BattleRoarkPrompt
	end


Route125_EventScript_BattleRoarkPrompt::
# 109 "data/maps/Route125/scripts.pory"
	call_if_eq VAR_RESULT, YES, Route125_EventScript_BattleRoark
# 110 "data/maps/Route125/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route125_EventScript_DeclineRoarkBattle
# 111 "data/maps/Route125/scripts.pory"
	closemessage
	end


Route125_EventScript_DeclineRoarkBattle::
# 116 "data/maps/Route125/scripts.pory"
	setflag FLAG_TEMP_1
# 117 "data/maps/Route125/scripts.pory"
	msgbox Roark_ComeBackWhenReady, MSGBOX_DEFAULT
# 118 "data/maps/Route125/scripts.pory"
	release
	end


Route125_EventScript_BattleRoark::
# 123 "data/maps/Route125/scripts.pory"
	msgbox Route125_EventScript_BattleRoark_Text_0, MSGBOX_DEFAULT
# 124 "data/maps/Route125/scripts.pory"
	trainerbattle_no_intro TRAINER_ROARK, Roark_Outro
# 125 "data/maps/Route125/scripts.pory"
	goto Route125_EventScript_RoarkGiveItems
	return


Route125_EventScript_RoarkDefeated::
# 131 "data/maps/Route125/scripts.pory"
	msgbox PostBattle_Roark, MSGBOX_DEFAULT
# 132 "data/maps/Route125/scripts.pory"
	releaseall
	end


Route125_EventScript_RoarkGiveItems::
# 137 "data/maps/Route125/scripts.pory"
	giveitem ITEM_TM_STONE_EDGE
# 138 "data/maps/Route125/scripts.pory"
	giveitem ITEM_TM_HEAVY_SLAM
# 139 "data/maps/Route125/scripts.pory"
	msgbox Roark_ExplainItems
# 140 "data/maps/Route125/scripts.pory"
	waitmessage
# 141 "data/maps/Route125/scripts.pory"
	switch VAR_FACING
# 142 "data/maps/Route125/scripts.pory"
	case DIR_EAST, Route125_EventScript_RoarkGiveItems_3
# 145 "data/maps/Route125/scripts.pory"
	goto RoarkMoveScript1
Route125_EventScript_RoarkGiveItems_1:
# 147 "data/maps/Route125/scripts.pory"
	release
	end

Route125_EventScript_RoarkGiveItems_3:
# 143 "data/maps/Route125/scripts.pory"
	goto RoarkMoveScript2
	goto Route125_EventScript_RoarkGiveItems_1


RoarkMoveScript1::
# 152 "data/maps/Route125/scripts.pory"
	applymovement LOCALID_ROARK, RoarkUnblockCaveStepWest
# 153 "data/maps/Route125/scripts.pory"
	copyobjectxytoperm LOCALID_ROARK
	return


RoarkMoveScript2::
# 157 "data/maps/Route125/scripts.pory"
	applymovement LOCALID_ROARK, RoarkUnblockCaveStepEast
# 158 "data/maps/Route125/scripts.pory"
	copyobjectxytoperm LOCALID_ROARK
	return


RoarkUnblockCaveStepWest::
# 163 "data/maps/Route125/scripts.pory"
	walk_left
# 164 "data/maps/Route125/scripts.pory"
	face_down
# 165 "data/maps/Route125/scripts.pory"
	step_end
	return


RoarkUnblockCaveStepEast::
# 170 "data/maps/Route125/scripts.pory"
	walk_right
# 171 "data/maps/Route125/scripts.pory"
	face_down
# 172 "data/maps/Route125/scripts.pory"
	step_end
	return


SetRoarkPermLoc::
# 176 "data/maps/Route125/scripts.pory"
	setobjectxyperm LOCALID_ROARK, 21, 20
	return


Route125_EventScript_BattleRoark_Text_0:
# 123 "data/maps/Route125/scripts.pory"
	.string "Okay then!$"

Roark_Greeting::
# 180 "data/maps/Route125/scripts.pory"
	.string "Oh, hello there. I take it you're a\n"
	.string "trainer who wants to get into this\l"
	.string "cave?\p"
	.string "Well, I did some investigating, and\n"
	.string "there are a lot of strong Pokémon\l"
	.string "inside, so I've decided to stay out here\l"
	.string "and make sure no weak trainers enter.\p"
	.string "So if you want to go in, you'll have to\n"
	.string "go through me.\p"
	.string "… … … … … …\p"
	.string "Who am I to have such authority?\n"
	.string "I'm Roark, the 1st Gym Leader from\l"
	.string "the Sinnoh region, of course!\p"
	.string "I may be the 1st Gym Leader back home,\n"
	.string "but I brought my strongest team with\l"
	.string "me here for exploring!\p"
	.string "But enough talk, are you here to\n"
	.string "challenge me or not?$"

Roark_ReadyYet::
# 201 "data/maps/Route125/scripts.pory"
	.string "Up to the challenge now?$"

Roark_ComeBackWhenReady::
# 205 "data/maps/Route125/scripts.pory"
	.string "Well, you're not getting into this cave\n"
	.string "unless you can beat me.$"

Roark_ExplainItems::
# 210 "data/maps/Route125/scripts.pory"
	.string "Those are some of my favorite TMs!\n"
	.string "You'll have to be smart with how you use\l"
	.string "them, but they sure do hit hard if you\l"
	.string "use them correctly!\p"
	.string "I'll step out of the way now and\n"
	.string "let you through.$"

Roark_Outro::
# 219 "data/maps/Route125/scripts.pory"
	.string "Looks like you'll be just fine in this\n"
	.string "cave.$"

PostBattle_Roark::
# 225 "data/maps/Route125/scripts.pory"
	.string "The Pokémon in there are strong,\n"
	.string "aren't they?$"
