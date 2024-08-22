# 1 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 2 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_MapScripts::
# 3 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.byte 0
# 4 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 5 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_GlassWorker::
# 6 "data/maps/Route113_GlassWorkshop/scripts.pory"
	lock
# 7 "data/maps/Route113_GlassWorkshop/scripts.pory"
	faceplayer
# 8 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto_if_set FLAG_RECEIVED_SCOPE_LENS, Route113_GlassWorkshop_House2_EventScript_ExplainScopeLens
# 9 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_House2_Text_WantYouToHaveScopeLens, MSGBOX_DEFAULT
# 10 "data/maps/Route113_GlassWorkshop/scripts.pory"
	giveitem ITEM_SCOPE_LENS
# 11 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setflag FLAG_RECEIVED_SCOPE_LENS
# 12 "data/maps/Route113_GlassWorkshop/scripts.pory"
	release
# 13 "data/maps/Route113_GlassWorkshop/scripts.pory"
	end
# 14 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 15 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_House2_EventScript_ExplainScopeLens::
# 16 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_House2_Text_ExplainScopeLens, MSGBOX_DEFAULT
# 17 "data/maps/Route113_GlassWorkshop/scripts.pory"
	release
# 18 "data/maps/Route113_GlassWorkshop/scripts.pory"
	end
# 19 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 20 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_NinjaBoy::
# 21 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_House2_Text_NoMoreSoot, MSGBOX_NPC
# 22 "data/maps/Route113_GlassWorkshop/scripts.pory"
	end
# 23 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 24 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_House2_Text_WantYouToHaveScopeLens:
# 25 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "I gave up glass-blowing a long time ago.\p"
# 26 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "It used to be a fun hobby with all this\n"
# 27 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "soot around here, but I figured it was\l"
# 28 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "time to move on.\p"
# 29 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "Here, you can have this instead\n"
# 30 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "of my old Soot Sack.$"
# 31 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 32 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_House2_Text_ExplainScopeLens:
# 33 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "The Scope Lens raises the chances of\n"
# 34 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "getting a Critical Hit. It can be pretty\l"
# 35 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "wicked!$"
# 36 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 37 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_House2_Text_NoMoreSoot:
# 38 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "No more soot! Only crits!$"
