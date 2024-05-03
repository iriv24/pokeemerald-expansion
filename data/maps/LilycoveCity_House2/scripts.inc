# 1 "data/maps/LilycoveCity_House2/scripts.pory"

# 2 "data/maps/LilycoveCity_House2/scripts.pory"
LilycoveCity_House2_MapScripts::
# 3 "data/maps/LilycoveCity_House2/scripts.pory"
	.byte 0
# 4 "data/maps/LilycoveCity_House2/scripts.pory"

# 5 "data/maps/LilycoveCity_House2/scripts.pory"
LilycoveCity_House2_EventScript_FatMan::
# 6 "data/maps/LilycoveCity_House2/scripts.pory"
	lock
# 7 "data/maps/LilycoveCity_House2/scripts.pory"
	faceplayer
# 8 "data/maps/LilycoveCity_House2/scripts.pory"
	msgbox LilycoveCity_House2_Text_SleepIsEssential, MSGBOX_DEFAULT
# 9 "data/maps/LilycoveCity_House2/scripts.pory"
	release
# 10 "data/maps/LilycoveCity_House2/scripts.pory"
	end
# 11 "data/maps/LilycoveCity_House2/scripts.pory"

# 12 "data/maps/LilycoveCity_House2/scripts.pory"
LilycoveCity_House2_Text_SleepIsEssential:
# 13 "data/maps/LilycoveCity_House2/scripts.pory"
	.string "Yawn…\p"
# 14 "data/maps/LilycoveCity_House2/scripts.pory"
	.string "Sleep is essential for good health…\n"
# 15 "data/maps/LilycoveCity_House2/scripts.pory"
	.string "Sleep and regain health…$"
