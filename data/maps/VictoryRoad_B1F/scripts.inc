# 1 "data/maps/VictoryRoad_B1F/scripts.pory"

# 2 "data/maps/VictoryRoad_B1F/scripts.pory"
.set LOCALID_REGIGIGAS, 22
# 3 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_MapScripts::
# 4 "data/maps/VictoryRoad_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, VictoryRoad_B1F_OnResume
# 5 "data/maps/VictoryRoad_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, VictoryRoad_B1F_OnTransition
# 6 "data/maps/VictoryRoad_B1F/scripts.pory"
	.byte 0
# 7 "data/maps/VictoryRoad_B1F/scripts.pory"

# 8 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_OnResume:
# 9 "data/maps/VictoryRoad_B1F/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, VictoryRoad_B1F_EventScript_TryRemoveRegigigas
# 10 "data/maps/VictoryRoad_B1F/scripts.pory"
	end
# 11 "data/maps/VictoryRoad_B1F/scripts.pory"

# 12 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_EventScript_TryRemoveRegigigas::
# 13 "data/maps/VictoryRoad_B1F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 14 "data/maps/VictoryRoad_B1F/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 15 "data/maps/VictoryRoad_B1F/scripts.pory"
	removeobject VAR_LAST_TALKED
# 16 "data/maps/VictoryRoad_B1F/scripts.pory"
	return
# 17 "data/maps/VictoryRoad_B1F/scripts.pory"

# 18 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_OnTransition:
# 19 "data/maps/VictoryRoad_B1F/scripts.pory"
	call_if_unset FLAG_DEFEATED_REGIGIGAS, VictoryRoad_B1F_EventScript_ShowRegigigas
# 20 "data/maps/VictoryRoad_B1F/scripts.pory"
	end
# 21 "data/maps/VictoryRoad_B1F/scripts.pory"

# 22 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_EventScript_ShowRegigigas::
# 23 "data/maps/VictoryRoad_B1F/scripts.pory"
	clearflag FLAG_HIDE_REGIGIGAS
# 24 "data/maps/VictoryRoad_B1F/scripts.pory"
	call_if_set FLAG_DEFEATED_REGICE, VictoryRoad_B1F_EventScript_AnimateRegigigas1
# 25 "data/maps/VictoryRoad_B1F/scripts.pory"
	return
# 26 "data/maps/VictoryRoad_B1F/scripts.pory"

# 27 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_EventScript_AnimateRegigigas1::
# 28 "data/maps/VictoryRoad_B1F/scripts.pory"
	call_if_set FLAG_DEFEATED_REGIDRAGO, VictoryRoad_B1F_EventScript_AnimateRegigigas2
# 29 "data/maps/VictoryRoad_B1F/scripts.pory"
	return
# 30 "data/maps/VictoryRoad_B1F/scripts.pory"

# 31 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_EventScript_AnimateRegigigas2::
# 32 "data/maps/VictoryRoad_B1F/scripts.pory"
	call_if_set FLAG_DEFEATED_REGIELEKI, VictoryRoad_B1F_EventScript_AnimateRegigigas3
# 33 "data/maps/VictoryRoad_B1F/scripts.pory"
	return
# 34 "data/maps/VictoryRoad_B1F/scripts.pory"

# 35 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_EventScript_AnimateRegigigas3::
# 36 "data/maps/VictoryRoad_B1F/scripts.pory"
	call_if_set FLAG_DEFEATED_REGIROCK, VictoryRoad_B1F_EventScript_AnimateRegigigas4
# 37 "data/maps/VictoryRoad_B1F/scripts.pory"
	return
# 38 "data/maps/VictoryRoad_B1F/scripts.pory"

# 39 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_EventScript_AnimateRegigigas4::
# 40 "data/maps/VictoryRoad_B1F/scripts.pory"
	call_if_set FLAG_DEFEATED_REGISTEEL, VictoryRoad_B1F_EventScript_AnimateRegigigas5
# 41 "data/maps/VictoryRoad_B1F/scripts.pory"
	return
# 42 "data/maps/VictoryRoad_B1F/scripts.pory"

# 43 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_EventScript_AnimateRegigigas5::
# 44 "data/maps/VictoryRoad_B1F/scripts.pory"
	setobjectmovementtype LOCALID_REGIGIGAS, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 45 "data/maps/VictoryRoad_B1F/scripts.pory"
	return
# 46 "data/maps/VictoryRoad_B1F/scripts.pory"

# 47 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_EventScript_Regigigas::
# 48 "data/maps/VictoryRoad_B1F/scripts.pory"
	lock
# 49 "data/maps/VictoryRoad_B1F/scripts.pory"
	goto_if_unset FLAG_DEFEATED_REGIDRAGO, VictoryRoad_B1F_EventScript_MustBeatRegis
# 50 "data/maps/VictoryRoad_B1F/scripts.pory"
	goto_if_unset FLAG_DEFEATED_REGIELEKI, VictoryRoad_B1F_EventScript_MustBeatRegis
# 51 "data/maps/VictoryRoad_B1F/scripts.pory"
	goto_if_unset FLAG_DEFEATED_REGIROCK, VictoryRoad_B1F_EventScript_MustBeatRegis
# 52 "data/maps/VictoryRoad_B1F/scripts.pory"
	goto_if_unset FLAG_DEFEATED_REGISTEEL, VictoryRoad_B1F_EventScript_MustBeatRegis
# 53 "data/maps/VictoryRoad_B1F/scripts.pory"
	goto_if_unset FLAG_DEFEATED_REGICE, VictoryRoad_B1F_EventScript_MustBeatRegis
# 54 "data/maps/VictoryRoad_B1F/scripts.pory"
	faceplayer
# 55 "data/maps/VictoryRoad_B1F/scripts.pory"
	waitse
# 56 "data/maps/VictoryRoad_B1F/scripts.pory"
	playmoncry SPECIES_REGIGIGAS, CRY_MODE_ENCOUNTER
# 57 "data/maps/VictoryRoad_B1F/scripts.pory"
	delay 40
# 58 "data/maps/VictoryRoad_B1F/scripts.pory"
	waitmoncry
# 59 "data/maps/VictoryRoad_B1F/scripts.pory"
	setwildbattle SPECIES_REGIGIGAS, 70
# 60 "data/maps/VictoryRoad_B1F/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 61 "data/maps/VictoryRoad_B1F/scripts.pory"
	special StartRegiBattle
# 62 "data/maps/VictoryRoad_B1F/scripts.pory"
	waitstate
# 63 "data/maps/VictoryRoad_B1F/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 64 "data/maps/VictoryRoad_B1F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 65 "data/maps/VictoryRoad_B1F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, VictoryRoad_B1F_EventScript_DefeatedRegigigas
# 66 "data/maps/VictoryRoad_B1F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, VictoryRoad_B1F_EventScript_RanFromRegigigas
# 67 "data/maps/VictoryRoad_B1F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, VictoryRoad_B1F_EventScript_RanFromRegigigas
# 68 "data/maps/VictoryRoad_B1F/scripts.pory"
	setflag FLAG_DEFEATED_REGIGIGAS
# 69 "data/maps/VictoryRoad_B1F/scripts.pory"
	release
# 70 "data/maps/VictoryRoad_B1F/scripts.pory"
	end
# 71 "data/maps/VictoryRoad_B1F/scripts.pory"

# 72 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_EventScript_MustBeatRegis::
# 73 "data/maps/VictoryRoad_B1F/scripts.pory"
	msgbox VictoryRoad_B1F_Text_LooksLikeStatue, MSGBOX_DEFAULT
# 74 "data/maps/VictoryRoad_B1F/scripts.pory"
	release
# 75 "data/maps/VictoryRoad_B1F/scripts.pory"
	end
# 76 "data/maps/VictoryRoad_B1F/scripts.pory"

# 77 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_EventScript_DefeatedRegigigas::
# 78 "data/maps/VictoryRoad_B1F/scripts.pory"
	setflag FLAG_DEFEATED_REGIGIGAS
# 79 "data/maps/VictoryRoad_B1F/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
# 80 "data/maps/VictoryRoad_B1F/scripts.pory"
	end
# 81 "data/maps/VictoryRoad_B1F/scripts.pory"

# 82 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_EventScript_RanFromRegigigas::
# 83 "data/maps/VictoryRoad_B1F/scripts.pory"
	setvar VAR_0x8004, SPECIES_REGIGIGAS
# 84 "data/maps/VictoryRoad_B1F/scripts.pory"
	goto Common_EventScript_LegendaryFlewAway
# 85 "data/maps/VictoryRoad_B1F/scripts.pory"
	end
# 86 "data/maps/VictoryRoad_B1F/scripts.pory"

# 87 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_EventScript_Samuel::
# 88 "data/maps/VictoryRoad_B1F/scripts.pory"
	trainerbattle_single TRAINER_SAMUEL, VictoryRoad_B1F_Text_SamuelIntro, VictoryRoad_B1F_Text_SamuelDefeat
# 89 "data/maps/VictoryRoad_B1F/scripts.pory"
	msgbox VictoryRoad_B1F_Text_SamuelPostBattle, MSGBOX_AUTOCLOSE
# 90 "data/maps/VictoryRoad_B1F/scripts.pory"
	end
# 91 "data/maps/VictoryRoad_B1F/scripts.pory"

# 92 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_EventScript_Shannon::
# 93 "data/maps/VictoryRoad_B1F/scripts.pory"
	trainerbattle_single TRAINER_SHANNON, VictoryRoad_B1F_Text_ShannonIntro, VictoryRoad_B1F_Text_ShannonDefeat
# 94 "data/maps/VictoryRoad_B1F/scripts.pory"
	msgbox VictoryRoad_B1F_Text_ShannonPostBattle, MSGBOX_AUTOCLOSE
# 95 "data/maps/VictoryRoad_B1F/scripts.pory"
	end
# 96 "data/maps/VictoryRoad_B1F/scripts.pory"

# 97 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_EventScript_Michelle::
# 98 "data/maps/VictoryRoad_B1F/scripts.pory"
	trainerbattle_single TRAINER_MICHELLE, VictoryRoad_B1F_Text_MichelleIntro, VictoryRoad_B1F_Text_MichelleDefeat
# 99 "data/maps/VictoryRoad_B1F/scripts.pory"
	msgbox VictoryRoad_B1F_Text_MichellePostBattle, MSGBOX_AUTOCLOSE
# 100 "data/maps/VictoryRoad_B1F/scripts.pory"
	end
# 101 "data/maps/VictoryRoad_B1F/scripts.pory"

# 102 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_EventScript_Mitchell::
# 103 "data/maps/VictoryRoad_B1F/scripts.pory"
	trainerbattle_single TRAINER_MITCHELL, VictoryRoad_B1F_Text_MitchellIntro, VictoryRoad_B1F_Text_MitchellDefeat
# 104 "data/maps/VictoryRoad_B1F/scripts.pory"
	msgbox VictoryRoad_B1F_Text_MitchellPostBattle, MSGBOX_AUTOCLOSE
# 105 "data/maps/VictoryRoad_B1F/scripts.pory"
	end
# 106 "data/maps/VictoryRoad_B1F/scripts.pory"

# 107 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_EventScript_Halle::
# 108 "data/maps/VictoryRoad_B1F/scripts.pory"
	trainerbattle_single TRAINER_HALLE, VictoryRoad_B1F_Text_HalleIntro, VictoryRoad_B1F_Text_HalleDefeat
# 109 "data/maps/VictoryRoad_B1F/scripts.pory"
	msgbox VictoryRoad_B1F_Text_HallePostBattle, MSGBOX_AUTOCLOSE
# 110 "data/maps/VictoryRoad_B1F/scripts.pory"
	end
# 111 "data/maps/VictoryRoad_B1F/scripts.pory"

# 112 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_Text_LooksLikeStatue:
# 113 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "It looks like a statue of an ancient,\n"
# 114 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "powerful Pokémon…$"
# 115 "data/maps/VictoryRoad_B1F/scripts.pory"

# 116 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_Text_SamuelIntro:
# 117 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "The thought that I'm getting closer to\n"
# 118 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "the Pokémon LEAGUE…\p"
# 119 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "I'm getting stage fright…$"
# 120 "data/maps/VictoryRoad_B1F/scripts.pory"

# 121 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_Text_SamuelDefeat:
# 122 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "I couldn't do a thing…$"
# 123 "data/maps/VictoryRoad_B1F/scripts.pory"

# 124 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_Text_SamuelPostBattle:
# 125 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "The Pokémon LEAGUE became distant\n"
# 126 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "again… What a letdown…$"
# 127 "data/maps/VictoryRoad_B1F/scripts.pory"

# 128 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_Text_ShannonIntro:
# 129 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "To win your way through the Pokémon\n"
# 130 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "LEAGUE, you need the trust of your\l"
# 131 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "Pokémon.$"
# 132 "data/maps/VictoryRoad_B1F/scripts.pory"

# 133 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_Text_ShannonDefeat:
# 134 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "Your relationship is based on\n"
# 135 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "solid trust.$"
# 136 "data/maps/VictoryRoad_B1F/scripts.pory"

# 137 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_Text_ShannonPostBattle:
# 138 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "By being together all the time, trust\n"
# 139 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "grows between Pokémon and TRAINERS.$"
# 140 "data/maps/VictoryRoad_B1F/scripts.pory"

# 141 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_Text_MichelleIntro:
# 142 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "This isn't the goal. It's only a place\n"
# 143 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "on the way to the Pokémon LEAGUE.$"
# 144 "data/maps/VictoryRoad_B1F/scripts.pory"

# 145 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_Text_MichelleDefeat:
# 146 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "That's the way!$"
# 147 "data/maps/VictoryRoad_B1F/scripts.pory"

# 148 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_Text_MichellePostBattle:
# 149 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "You'll do fine, for sure!\n"
# 150 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "Your Pokémon are all eager to go!$"
# 151 "data/maps/VictoryRoad_B1F/scripts.pory"

# 152 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_Text_MitchellIntro:
# 153 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "My Pokémon are cosmically\n"
# 154 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "awe inspiring!$"
# 155 "data/maps/VictoryRoad_B1F/scripts.pory"

# 156 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_Text_MitchellDefeat:
# 157 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "I've never met anyone like you before.$"
# 158 "data/maps/VictoryRoad_B1F/scripts.pory"

# 159 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_Text_MitchellPostBattle:
# 160 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "Even outside of battle, I sense\n"
# 161 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "incredible power emanating from you\l"
# 162 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "and your Pokémon.$"
# 163 "data/maps/VictoryRoad_B1F/scripts.pory"

# 164 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_Text_HalleIntro:
# 165 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "Okay, no need to get your back up!\n"
# 166 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "Relax, let's take it easy!$"
# 167 "data/maps/VictoryRoad_B1F/scripts.pory"

# 168 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_Text_HalleDefeat:
# 169 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "Whoa!\n"
# 170 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "Wonderful!$"
# 171 "data/maps/VictoryRoad_B1F/scripts.pory"

# 172 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_Text_HallePostBattle:
# 173 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "Sure, this is VICTORY ROAD.\p"
# 174 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "But it's not all that different from\n"
# 175 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "the path you've taken so far.\p"
# 176 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "Try to enjoy things the rest of\n"
# 177 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "the way!$"
