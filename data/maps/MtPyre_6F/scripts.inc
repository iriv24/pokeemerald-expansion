# 1 "data/maps/MtPyre_6F/scripts.pory"

# 2 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_MapScripts::
# 3 "data/maps/MtPyre_6F/scripts.pory"
	.byte 0
# 4 "data/maps/MtPyre_6F/scripts.pory"

# 5 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_EventScript_Valerie::
# 6 "data/maps/MtPyre_6F/scripts.pory"
	trainerbattle_single TRAINER_VALERIE_1, MtPyre_6F_Text_ValerieIntro, MtPyre_6F_Text_ValerieDefeat, MtPyre_6F_EventScript_RegisterValerie
# 7 "data/maps/MtPyre_6F/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 8 "data/maps/MtPyre_6F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MtPyre_6F_EventScript_RematchValerie
# 9 "data/maps/MtPyre_6F/scripts.pory"
	msgbox MtPyre_6F_Text_ValeriePostBattle, MSGBOX_DEFAULT
# 10 "data/maps/MtPyre_6F/scripts.pory"
	release
# 11 "data/maps/MtPyre_6F/scripts.pory"
	end
# 12 "data/maps/MtPyre_6F/scripts.pory"

# 13 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_EventScript_RegisterValerie::
# 14 "data/maps/MtPyre_6F/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 15 "data/maps/MtPyre_6F/scripts.pory"
	waitmovement 0
# 16 "data/maps/MtPyre_6F/scripts.pory"
	msgbox MtPyre_6F_Text_ValerieRegister, MSGBOX_DEFAULT
# 17 "data/maps/MtPyre_6F/scripts.pory"
	register_matchcall TRAINER_VALERIE_1
# 18 "data/maps/MtPyre_6F/scripts.pory"
	release
# 19 "data/maps/MtPyre_6F/scripts.pory"
	end
# 20 "data/maps/MtPyre_6F/scripts.pory"

# 21 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_EventScript_RematchValerie::
# 22 "data/maps/MtPyre_6F/scripts.pory"
	trainerbattle_rematch TRAINER_VALERIE_1, MtPyre_6F_Text_ValerieRematchIntro, MtPyre_6F_Text_ValerieRematchDefeat
# 23 "data/maps/MtPyre_6F/scripts.pory"
	msgbox MtPyre_6F_Text_ValeriePostRematch, MSGBOX_AUTOCLOSE
# 24 "data/maps/MtPyre_6F/scripts.pory"
	end
# 25 "data/maps/MtPyre_6F/scripts.pory"

# 26 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_EventScript_Cedric::
# 27 "data/maps/MtPyre_6F/scripts.pory"
	trainerbattle_single TRAINER_CEDRIC, MtPyre_6F_Text_CedricIntro, MtPyre_6F_Text_CedricDefeat
# 28 "data/maps/MtPyre_6F/scripts.pory"
	msgbox MtPyre_6F_Text_CedricPostBattle, MSGBOX_AUTOCLOSE
# 29 "data/maps/MtPyre_6F/scripts.pory"
	end
# 30 "data/maps/MtPyre_6F/scripts.pory"

# 31 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_ValerieIntro:
# 32 "data/maps/MtPyre_6F/scripts.pory"
	.string "When I'm here…\n"
# 33 "data/maps/MtPyre_6F/scripts.pory"
	.string "A curious power flows into me…$"
# 34 "data/maps/MtPyre_6F/scripts.pory"

# 35 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_ValerieDefeat:
# 36 "data/maps/MtPyre_6F/scripts.pory"
	.string "The power is ebbing away…$"
# 37 "data/maps/MtPyre_6F/scripts.pory"

# 38 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_ValeriePostBattle:
# 39 "data/maps/MtPyre_6F/scripts.pory"
	.string "Perhaps the power is from the spirits\n"
# 40 "data/maps/MtPyre_6F/scripts.pory"
	.string "of Pokémon in fitful sleep here…$"
# 41 "data/maps/MtPyre_6F/scripts.pory"

# 42 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_ValerieRegister:
# 43 "data/maps/MtPyre_6F/scripts.pory"
	.string "Fufufu… I lost the match, but…\n"
# 44 "data/maps/MtPyre_6F/scripts.pory"
	.string "I have this little ability…\p"
# 45 "data/maps/MtPyre_6F/scripts.pory"
	.string "Without ever laying my hands on\n"
# 46 "data/maps/MtPyre_6F/scripts.pory"
	.string "your PokéNav… Hiyah!$"
# 47 "data/maps/MtPyre_6F/scripts.pory"

# 48 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_ValerieRematchIntro:
# 49 "data/maps/MtPyre_6F/scripts.pory"
	.string "Behind you…\n"
# 50 "data/maps/MtPyre_6F/scripts.pory"
	.string "What is it…$"
# 51 "data/maps/MtPyre_6F/scripts.pory"

# 52 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_ValerieRematchDefeat:
# 53 "data/maps/MtPyre_6F/scripts.pory"
	.string "Something faded away…$"
# 54 "data/maps/MtPyre_6F/scripts.pory"

# 55 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_ValeriePostRematch:
# 56 "data/maps/MtPyre_6F/scripts.pory"
	.string "The Pokémon at rest here…\n"
# 57 "data/maps/MtPyre_6F/scripts.pory"
	.string "Sometimes, they play…$"
# 58 "data/maps/MtPyre_6F/scripts.pory"

# 59 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_CedricIntro:
# 60 "data/maps/MtPyre_6F/scripts.pory"
	.string "Have you lost your bearings?\n"
# 61 "data/maps/MtPyre_6F/scripts.pory"
	.string "Have no fear for I am here!$"
# 62 "data/maps/MtPyre_6F/scripts.pory"

# 63 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_CedricDefeat:
# 64 "data/maps/MtPyre_6F/scripts.pory"
	.string "Weren't you lost?$"
# 65 "data/maps/MtPyre_6F/scripts.pory"

# 66 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_CedricPostBattle:
# 67 "data/maps/MtPyre_6F/scripts.pory"
	.string "I had this feeling that a lost TRAINER\n"
# 68 "data/maps/MtPyre_6F/scripts.pory"
	.string "would be panicked and easy to beat.\p"
# 69 "data/maps/MtPyre_6F/scripts.pory"
	.string "It's dirty and I won't try it again…$"

MtPyre6F_EventScript_PowerfulMonSummoner::
# 75 "data/maps/MtPyre_6F/scripts.pory"
	lock
# 76 "data/maps/MtPyre_6F/scripts.pory"
	faceplayer
# 77 "data/maps/MtPyre_6F/scripts.pory"
	goto_if_set FLAG_TEMP_1, MtPyre6F_EventScript_PowerfulMonSummoner_2
# 83 "data/maps/MtPyre_6F/scripts.pory"
	msgbox MtPyre6F_Text_SummonerIntro, MSGBOX_YESNO
MtPyre6F_EventScript_PowerfulMonSummoner_1:
# 86 "data/maps/MtPyre_6F/scripts.pory"
	setflag FLAG_TEMP_1
# 88 "data/maps/MtPyre_6F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MtPyre6F_EventScript_PowerfulMonSummoner_6
MtPyre6F_EventScript_PowerfulMonSummoner_5:
# 93 "data/maps/MtPyre_6F/scripts.pory"
	compare VAR_GAME_SETTING_DIFFICULTY_MODE, GAME_SETTING_DIFFICULTY_HARD_MODE
	goto_if_ge MtPyre6F_EventScript_PowerfulMonSummoner_9
MtPyre6F_EventScript_PowerfulMonSummoner_8:
# 97 "data/maps/MtPyre_6F/scripts.pory"
	release
	end

MtPyre6F_EventScript_PowerfulMonSummoner_2:
# 79 "data/maps/MtPyre_6F/scripts.pory"
	msgbox MtPyre6F_Text_SummonerIntroQuick, MSGBOX_YESNO
	goto MtPyre6F_EventScript_PowerfulMonSummoner_1

MtPyre6F_EventScript_PowerfulMonSummoner_6:
# 90 "data/maps/MtPyre_6F/scripts.pory"
	goto MtPyre6F_EventScript_SummonWomanManNo
	goto MtPyre6F_EventScript_PowerfulMonSummoner_5

MtPyre6F_EventScript_PowerfulMonSummoner_9:
# 95 "data/maps/MtPyre_6F/scripts.pory"
	goto MtPyre6F_EventScript_RandomLegend
	goto MtPyre6F_EventScript_PowerfulMonSummoner_8


MtPyre6F_EventScript_SummonWomanManNo::
# 104 "data/maps/MtPyre_6F/scripts.pory"
	msgbox MtPyre6F_SummonWomanDeclined, MSGBOX_DEFAULT
# 105 "data/maps/MtPyre_6F/scripts.pory"
	release
	end


MtPyre6F_EventScript_RandomLegend::
# 110 "data/maps/MtPyre_6F/scripts.pory"
	randomelement SPECIES_RAIKOU, SPECIES_ENTEI, SPECIES_SUICUNE, SPECIES_TORNADUS, SPECIES_THUNDURUS, SPECIES_AZELF, SPECIES_MESPRIT, SPECIES_UXIE, SPECIES_PECHARUNT, SPECIES_REGIROCK, SPECIES_REGIELEKI, SPECIES_DIANCIE, SPECIES_TAPU_BULU, SPECIES_MEW, SPECIES_JIRACHI, SPECIES_ZAPDOS, SPECIES_REGISTEEL, SPECIES_CRESSELIA, SPECIES_TAPU_LELE, SPECIES_SHAYMIN
# 112 "data/maps/MtPyre_6F/scripts.pory"
	copyvar VAR_0x8005, VAR_RESULT
# 113 "data/maps/MtPyre_6F/scripts.pory"
	clearflag FLAG_TEMP_1
# 114 "data/maps/MtPyre_6F/scripts.pory"
	msgbox MtPyre6F_Text_VeryWell, MSGBOX_DEFAULT
# 115 "data/maps/MtPyre_6F/scripts.pory"
	delay 30
# 117 "data/maps/MtPyre_6F/scripts.pory"
	setwildbattle VAR_0x8005, 85
# 118 "data/maps/MtPyre_6F/scripts.pory"
	waitse
# 119 "data/maps/MtPyre_6F/scripts.pory"
	playmoncry VAR_0x8005, CRY_MODE_ENCOUNTER
# 120 "data/maps/MtPyre_6F/scripts.pory"
	delay 40
# 121 "data/maps/MtPyre_6F/scripts.pory"
	waitmoncry
# 122 "data/maps/MtPyre_6F/scripts.pory"
	dowildbattle
# 123 "data/maps/MtPyre_6F/scripts.pory"
	release
	end


MtPyre6F_Text_SummonerIntro::
# 128 "data/maps/MtPyre_6F/scripts.pory"
	.string "Hello, young trainer.\p"
	.string "I've come to this remote location\n"
	.string "because I have learned a powerful\l"
	.string "technique that allows me to summon one\l"
	.string "Pokémon from a remote location.\p"
	.string "Would you like me to summon a Pokémon\n"
	.string "here so you can battle it?$"

MtPyre6F_Text_SummonerIntroQuick::
# 138 "data/maps/MtPyre_6F/scripts.pory"
	.string "Would you like me to summon a Pokémon\n"
	.string "here so you can battle it?$"

MtPyre6F_Text_VeryWell::
# 144 "data/maps/MtPyre_6F/scripts.pory"
	.string "Very well, prepare yourself for battle.$"

MtPyre6F_SummonWomanDeclined::
# 148 "data/maps/MtPyre_6F/scripts.pory"
	.string "I see. Let me know if you change\n"
	.string "your mind.$"
