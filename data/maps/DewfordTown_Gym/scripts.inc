# 1 "data/maps/DewfordTown_Gym/scripts.pory"

# 2 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_MapScripts::
# 3 "data/maps/DewfordTown_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DewfordTown_Gym_OnTransition
# 4 "data/maps/DewfordTown_Gym/scripts.pory"
	.byte 0
# 5 "data/maps/DewfordTown_Gym/scripts.pory"

# 6 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_OnTransition:
# 7 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 8 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 9 "data/maps/DewfordTown_Gym/scripts.pory"

# 10 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel::
# 11 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_defeated TRAINER_BRAWLY_1, DewfordTown_Gym_EventScript_SetLightsOn
# 12 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_CountTrainersDefeated
# 13 "data/maps/DewfordTown_Gym/scripts.pory"
	copyvar VAR_0x8001, VAR_0x8000
# 14 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 0, DewfordTown_Gym_EventScript_SetFlashLevel7
# 15 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 1, DewfordTown_Gym_EventScript_SetFlashLevel6
# 16 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 2, DewfordTown_Gym_EventScript_SetFlashLevel5
# 17 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 3, DewfordTown_Gym_EventScript_SetFlashLevel4
# 18 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 4, DewfordTown_Gym_EventScript_SetFlashLevel3
# 19 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 5, DewfordTown_Gym_EventScript_SetFlashLevel2
# 20 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_SetFlashLevel1
# 21 "data/maps/DewfordTown_Gym/scripts.pory"

# 22 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetLightsOn::
# 23 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 0
# 24 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 25 "data/maps/DewfordTown_Gym/scripts.pory"

# 26 "data/maps/DewfordTown_Gym/scripts.pory"
@ Brightest
# 27 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel1::
# 28 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 1
# 29 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 30 "data/maps/DewfordTown_Gym/scripts.pory"

# 31 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel2::
# 32 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 2
# 33 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 34 "data/maps/DewfordTown_Gym/scripts.pory"

# 35 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel3::
# 36 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 3
# 37 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 38 "data/maps/DewfordTown_Gym/scripts.pory"

# 39 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel4::
# 40 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 4
# 41 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 42 "data/maps/DewfordTown_Gym/scripts.pory"

# 43 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel5::
# 44 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 5
# 45 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 46 "data/maps/DewfordTown_Gym/scripts.pory"

# 47 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel6::
# 48 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 6
# 49 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 50 "data/maps/DewfordTown_Gym/scripts.pory"

# 51 "data/maps/DewfordTown_Gym/scripts.pory"
@ Darkest
# 52 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel7::
# 53 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 7
# 54 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 55 "data/maps/DewfordTown_Gym/scripts.pory"

# 56 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrightenRoom::
# 57 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_CountTrainersDefeated
# 58 "data/maps/DewfordTown_Gym/scripts.pory"
	nop1
# 59 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, VAR_0x8001, DewfordTown_Gym_EventScript_NoLightChange
# 60 "data/maps/DewfordTown_Gym/scripts.pory"
	copyvar VAR_0x8001, VAR_0x8000
# 61 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 1, DewfordTown_Gym_EventScript_AnimateFlash1Trainer
# 62 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 2, DewfordTown_Gym_EventScript_AnimateFlash2Trainers
# 63 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 3, DewfordTown_Gym_EventScript_AnimateFlash3Trainers
# 64 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 4, DewfordTown_Gym_EventScript_AnimateFlash4Trainers
# 65 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 5, DewfordTown_Gym_EventScript_AnimateFlash5Trainers
# 66 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 6, DewfordTown_Gym_EventScript_AnimateFlash6Trainers
# 67 "data/maps/DewfordTown_Gym/scripts.pory"

# 68 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_NoLightChange::
# 69 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 70 "data/maps/DewfordTown_Gym/scripts.pory"

# 71 "data/maps/DewfordTown_Gym/scripts.pory"
@ NOTE: A little confusingly, a larger animateflash param value is a smaller flash radius
# 72 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash1Trainer::
# 73 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 74 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 6
# 75 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 76 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 77 "data/maps/DewfordTown_Gym/scripts.pory"

# 78 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash2Trainers::
# 79 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 80 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 5
# 81 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 82 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 83 "data/maps/DewfordTown_Gym/scripts.pory"

# 84 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash3Trainers::
# 85 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 86 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 4
# 87 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 88 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 89 "data/maps/DewfordTown_Gym/scripts.pory"

# 90 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash4Trainers::
# 91 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 92 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 3
# 93 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 94 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 95 "data/maps/DewfordTown_Gym/scripts.pory"

# 96 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash5Trainers::
# 97 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 98 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 2
# 99 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 100 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 101 "data/maps/DewfordTown_Gym/scripts.pory"

# 102 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash6Trainers::
# 103 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 104 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 1
# 105 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 106 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 107 "data/maps/DewfordTown_Gym/scripts.pory"

# 108 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlashFullBrightness::
# 109 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 110 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 0
# 111 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 112 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 113 "data/maps/DewfordTown_Gym/scripts.pory"

# 114 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CountTrainersDefeated::
# 115 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_0x8000, 0
# 116 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_TAKAO, DewfordTown_Gym_EventScript_CheckJocelyn
# 117 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 118 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckJocelyn::
# 119 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_JOCELYN, DewfordTown_Gym_EventScript_CheckLaura
# 120 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 121 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckLaura::
# 122 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_LAURA, DewfordTown_Gym_EventScript_CheckBrenden
# 123 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 124 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckBrenden::
# 125 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_BRENDEN, DewfordTown_Gym_EventScript_CheckCristian
# 126 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 127 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckCristian::
# 128 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_CRISTIAN, DewfordTown_Gym_EventScript_CheckLilith
# 129 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 130 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckLilith::
# 131 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_LILITH, DewfordTown_Gym_EventScript_StopCountingTrainers
# 132 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 133 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_StopCountingTrainers::
# 134 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 135 "data/maps/DewfordTown_Gym/scripts.pory"

# 136 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Brawly::
# 137 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyIntro, DewfordTown_Gym_Text_BrawlyDefeat, DewfordTown_Gym_EventScript_BrawlyDefeated, NO_MUSIC
# 138 "data/maps/DewfordTown_Gym/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 139 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, DewfordTown_Gym_EventScript_BrawlyRematch
# 140 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_LOW_SWEEP, DewfordTown_Gym_EventScript_GiveLowSweep2
# 141 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrawlyPostBattle, MSGBOX_DEFAULT
# 142 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 143 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 144 "data/maps/DewfordTown_Gym/scripts.pory"

# 145 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrawlyDefeated::
# 146 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_AnimateFlashFullBrightness
# 147 "data/maps/DewfordTown_Gym/scripts.pory"
	message DewfordTown_Gym_Text_ReceivedKnuckleBadge
# 148 "data/maps/DewfordTown_Gym/scripts.pory"
	waitmessage
# 149 "data/maps/DewfordTown_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 150 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_KnuckleBadgeInfoTakeThis, MSGBOX_DEFAULT
# 151 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_DEFEATED_DEWFORD_GYM
# 152 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_BADGE02_GET
# 153 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_PETALBURG_GYM_STATE, 1
# 154 "data/maps/DewfordTown_Gym/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 7, Common_EventScript_ReadyPetalburgGymForBattle
# 155 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_0x8008, 2
# 156 "data/maps/DewfordTown_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 157 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_GiveLowSweep
# 158 "data/maps/DewfordTown_Gym/scripts.pory"
	closemessage
# 159 "data/maps/DewfordTown_Gym/scripts.pory"
	delay 30
# 160 "data/maps/DewfordTown_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 161 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_RegisteredBrawly, MSGBOX_DEFAULT
# 162 "data/maps/DewfordTown_Gym/scripts.pory"
	waitfanfare
# 163 "data/maps/DewfordTown_Gym/scripts.pory"
	closemessage
# 164 "data/maps/DewfordTown_Gym/scripts.pory"
	delay 30
# 165 "data/maps/DewfordTown_Gym/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 166 "data/maps/DewfordTown_Gym/scripts.pory"
	specialvar VAR_0x8006, GetLevelCapForText
# 167 "data/maps/DewfordTown_Gym/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_0x8006
# 168 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox LevelCapIncreasedTo, MSGBOX_DEFAULT
# 169 "data/maps/DewfordTown_Gym/scripts.pory"
	waitfanfare
# 170 "data/maps/DewfordTown_Gym/scripts.pory"
	closemessage
# 171 "data/maps/DewfordTown_Gym/scripts.pory"
	delay 30
# 172 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_ENABLE_BRAWLY_MATCH_CALL
# 173 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_ROXANNE_CALL_STEP_COUNTER, 0
# 174 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_ENABLE_ROXANNE_FIRST_CALL
# 175 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 176 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 177 "data/maps/DewfordTown_Gym/scripts.pory"

# 178 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GiveLowSweep::
# 179 "data/maps/DewfordTown_Gym/scripts.pory"
	compare VAR_GAME_SETTING_DIFFICULTY_MODE, GAME_SETTING_DIFFICULTY_HARD_MODE
# 180 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_ge DewfordTown_Gym_EventScript_GiveLowSweep_2
# 181 "data/maps/DewfordTown_Gym/scripts.pory"
	giveitem ITEM_TM_LOW_SWEEP
# 182 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_ExplainLowSweep, MSGBOX_DEFAULT
# 183 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_LOW_SWEEP
# 184 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 185 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GiveLowSweep_1:
# 186 "data/maps/DewfordTown_Gym/scripts.pory"
	giveitem ITEM_TM_LOW_SWEEP
# 187 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_ExplainLowSweep, MSGBOX_DEFAULT
# 188 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_LOW_SWEEP
# 189 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 190 "data/maps/DewfordTown_Gym/scripts.pory"

# 191 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GiveLowSweep_2:
# 192 "data/maps/DewfordTown_Gym/scripts.pory"
	giveitem ITEM_BOTTLE_CAP
# 193 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_GiveLowSweep_1
# 194 "data/maps/DewfordTown_Gym/scripts.pory"

# 195 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GiveLowSweep2:
# 196 "data/maps/DewfordTown_Gym/scripts.pory"
	giveitem ITEM_TM_LOW_SWEEP
# 197 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_ExplainLowSweep, MSGBOX_DEFAULT
# 198 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_LOW_SWEEP
# 199 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 200 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 201 "data/maps/DewfordTown_Gym/scripts.pory"

# 202 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrawlyRematch::
# 203 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyPreRematch, DewfordTown_Gym_Text_BrawlyRematchDefeat, DewfordTown_Gym_Text_BrawlyRematchNeedTwoMons
# 204 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrawlyPostRematch, MSGBOX_AUTOCLOSE
# 205 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 206 "data/maps/DewfordTown_Gym/scripts.pory"

# 207 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Takao::
# 208 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_TAKAO, DewfordTown_Gym_Text_TakaoIntro, DewfordTown_Gym_Text_TakaoDefeat, DewfordTown_Gym_EventScript_TakaoBrightenRoom
# 209 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_TakaoPostBattle, MSGBOX_AUTOCLOSE
# 210 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 211 "data/maps/DewfordTown_Gym/scripts.pory"

# 212 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_TakaoBrightenRoom::
# 213 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 214 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 215 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 216 "data/maps/DewfordTown_Gym/scripts.pory"

# 217 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Jocelyn::
# 218 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_JOCELYN, DewfordTown_Gym_Text_JocelynIntro, DewfordTown_Gym_Text_JocelynDefeat, DewfordTown_Gym_EventScript_JocelynBrightenRoom
# 219 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_JocelynPostBattle, MSGBOX_AUTOCLOSE
# 220 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 221 "data/maps/DewfordTown_Gym/scripts.pory"

# 222 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_JocelynBrightenRoom::
# 223 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 224 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 225 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 226 "data/maps/DewfordTown_Gym/scripts.pory"

# 227 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Laura::
# 228 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_LAURA, DewfordTown_Gym_Text_LauraIntro, DewfordTown_Gym_Text_LauraDefeat, DewfordTown_Gym_EventScript_LauraBrightenRoom
# 229 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_LauraPostBattle, MSGBOX_AUTOCLOSE
# 230 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 231 "data/maps/DewfordTown_Gym/scripts.pory"

# 232 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LauraBrightenRoom::
# 233 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 234 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 235 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 236 "data/maps/DewfordTown_Gym/scripts.pory"

# 237 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Brenden::
# 238 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_BRENDEN, DewfordTown_Gym_Text_BrendenIntro, DewfordTown_Gym_Text_BrendenDefeat, DewfordTown_Gym_EventScript_BrendenBrightenRoom
# 239 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrendenPostBattle, MSGBOX_AUTOCLOSE
# 240 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 241 "data/maps/DewfordTown_Gym/scripts.pory"

# 242 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrendenBrightenRoom::
# 243 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 244 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 245 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 246 "data/maps/DewfordTown_Gym/scripts.pory"

# 247 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Cristian::
# 248 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_CRISTIAN, DewfordTown_Gym_Text_CristianIntro, DewfordTown_Gym_Text_CristianDefeat, DewfordTown_Gym_EventScript_CristianBrightenRoom
# 249 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_CristianPostBattle, MSGBOX_AUTOCLOSE
# 250 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 251 "data/maps/DewfordTown_Gym/scripts.pory"

# 252 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CristianBrightenRoom::
# 253 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 254 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 255 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 256 "data/maps/DewfordTown_Gym/scripts.pory"

# 257 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Lilith::
# 258 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_LILITH, DewfordTown_Gym_Text_LilithIntro, DewfordTown_Gym_Text_LilithDefeat, DewfordTown_Gym_EventScript_LilithBrightenRoom
# 259 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_LilithPostBattle, MSGBOX_AUTOCLOSE
# 260 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 261 "data/maps/DewfordTown_Gym/scripts.pory"

# 262 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LilithBrightenRoom::
# 263 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 264 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 265 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 266 "data/maps/DewfordTown_Gym/scripts.pory"

# 267 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymGuide::
# 268 "data/maps/DewfordTown_Gym/scripts.pory"
	lock
# 269 "data/maps/DewfordTown_Gym/scripts.pory"
	faceplayer
# 270 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_DEWFORD_GYM, DewfordTown_Gym_EventScript_GymGuidePostVictory
# 271 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 272 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 273 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 274 "data/maps/DewfordTown_Gym/scripts.pory"

# 275 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymGuidePostVictory::
# 276 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 277 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 278 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 279 "data/maps/DewfordTown_Gym/scripts.pory"

# 280 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LeftGymStatue::
# 281 "data/maps/DewfordTown_Gym/scripts.pory"
	lockall
# 282 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_GymStatueCertified
# 283 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_GymStatue
# 284 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 285 "data/maps/DewfordTown_Gym/scripts.pory"

# 286 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_RightGymStatue::
# 287 "data/maps/DewfordTown_Gym/scripts.pory"
	lockall
# 288 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_GymStatueCertified
# 289 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_GymStatue
# 290 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 291 "data/maps/DewfordTown_Gym/scripts.pory"

# 292 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymStatueCertified::
# 293 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 294 "data/maps/DewfordTown_Gym/scripts.pory"
	releaseall
# 295 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 296 "data/maps/DewfordTown_Gym/scripts.pory"

# 297 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymStatue::
# 298 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 299 "data/maps/DewfordTown_Gym/scripts.pory"
	releaseall
# 300 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 301 "data/maps/DewfordTown_Gym/scripts.pory"

# 302 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Hariyama::
# 303 "data/maps/DewfordTown_Gym/scripts.pory"
	lock
# 304 "data/maps/DewfordTown_Gym/scripts.pory"
	faceplayer
# 305 "data/maps/DewfordTown_Gym/scripts.pory"
	waitse
# 306 "data/maps/DewfordTown_Gym/scripts.pory"
	playmoncry SPECIES_HARIYAMA, CRY_MODE_NORMAL
# 307 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_Hariyama, MSGBOX_DEFAULT
# 308 "data/maps/DewfordTown_Gym/scripts.pory"
	waitmoncry
# 309 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 310 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 311 "data/maps/DewfordTown_Gym/scripts.pory"

# 312 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymGuideAdvice:
# 313 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Hey, how's it going, Champion-\n"
# 314 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "bound {PLAYER}?\p"
# 315 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Dewford's Gym Leader Brawly commands\n"
# 316 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Fighting-type Pokémon.\p"
# 317 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Going against him with Normal-type\n"
# 318 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Pokémon is asking for trouble.\p"
# 319 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Fighting Pokémon will lay a serious\n"
# 320 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "smack down on Normal Pokémon,\l"
# 321 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "so be careful!\p"
# 322 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "What's worse, the Gym is as dark as\n"
# 323 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "the ocean floor.\p"
# 324 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "But it will get brighter after defeating\n"
# 325 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "the trainers in your way.\p"
# 326 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Hey, okay, go for it!$"
# 327 "data/maps/DewfordTown_Gym/scripts.pory"

# 328 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymGuidePostVictory:
# 329 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Whoah! It's turned too bright in here!\p"
# 330 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Your future is bright, too!$"
# 331 "data/maps/DewfordTown_Gym/scripts.pory"

# 332 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_TakaoIntro:
# 333 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Might is right!\n"
# 334 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Come on!$"
# 335 "data/maps/DewfordTown_Gym/scripts.pory"

# 336 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_TakaoDefeat:
# 337 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Not enough power…$"
# 338 "data/maps/DewfordTown_Gym/scripts.pory"

# 339 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_TakaoPostBattle:
# 340 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Your skill overcame my strength!\n"
# 341 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Your technique is commendable!$"
# 342 "data/maps/DewfordTown_Gym/scripts.pory"

# 343 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_JocelynIntro:
# 344 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "There's no need for Brawly to be\n"
# 345 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "involved!\p"
# 346 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'll crush you!$"
# 347 "data/maps/DewfordTown_Gym/scripts.pory"

# 348 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_JocelynDefeat:
# 349 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "But… How?\n"
# 350 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "How could I lose so easily?$"
# 351 "data/maps/DewfordTown_Gym/scripts.pory"

# 352 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_JocelynPostBattle:
# 353 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'm not going to waste this loss.\n"
# 354 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'll use it to motivate me to train!\p"
# 355 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "One day I'll become a Gym Leader…\p"
# 356 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "No, I'll become the Pokémon League\n"
# 357 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Champion!$"
# 358 "data/maps/DewfordTown_Gym/scripts.pory"

# 359 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LauraIntro:
# 360 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Don't you dare brush me off!\n"
# 361 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "It's not my fault if you cry!$"
# 362 "data/maps/DewfordTown_Gym/scripts.pory"

# 363 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LauraDefeat:
# 364 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Waaaaaaah!\n"
# 365 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I lost!$"
# 366 "data/maps/DewfordTown_Gym/scripts.pory"

# 367 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LauraPostBattle:
# 368 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I battle in the dark to make my heart\n"
# 369 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "stronger.\p"
# 370 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "But because it's so dark, I can never\n"
# 371 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "see Brawly's face…$"
# 372 "data/maps/DewfordTown_Gym/scripts.pory"

# 373 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LilithIntro:
# 374 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Ufufu…\n"
# 375 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Are you stumbling around in the dark?$"
# 376 "data/maps/DewfordTown_Gym/scripts.pory"

# 377 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LilithDefeat:
# 378 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Oh, you…\n"
# 379 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I don't want to know you!$"
# 380 "data/maps/DewfordTown_Gym/scripts.pory"

# 381 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LilithPostBattle:
# 382 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You deserve to stay lost and end up\n"
# 383 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "back at the entrance again!$"
# 384 "data/maps/DewfordTown_Gym/scripts.pory"

# 385 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrendenIntro:
# 386 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'll show you the gumption of\n"
# 387 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "a sailing man!$"
# 388 "data/maps/DewfordTown_Gym/scripts.pory"

# 389 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrendenDefeat:
# 390 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "How'd this happen?\n"
# 391 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "It's not like me to lose this way!$"
# 392 "data/maps/DewfordTown_Gym/scripts.pory"

# 393 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrendenPostBattle:
# 394 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Oh, aye! You're worthy of seeing\n"
# 395 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "our Gym Leader.$"
# 396 "data/maps/DewfordTown_Gym/scripts.pory"

# 397 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_CristianIntro:
# 398 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "If you mean to pass, it has to be\n"
# 399 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "through me!$"
# 400 "data/maps/DewfordTown_Gym/scripts.pory"

# 401 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_CristianDefeat:
# 402 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Grrrrr!\n"
# 403 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Vastly overpowered!$"
# 404 "data/maps/DewfordTown_Gym/scripts.pory"

# 405 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_CristianPostBattle:
# 406 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You win!\n"
# 407 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Go after that Badge!$"
# 408 "data/maps/DewfordTown_Gym/scripts.pory"

# 409 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyIntro:
# 410 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'm Brawly!\n"
# 411 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Dewford's Gym Leader!\p"
# 412 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I've been churned in the rough waves\n"
# 413 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "of these parts, and I've grown tough\l"
# 414 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "in the pitch-black cave!\p"
# 415 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "So you wanted to challenge me?\n"
# 416 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Let me see what you're made of!$"
# 417 "data/maps/DewfordTown_Gym/scripts.pory"

# 418 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyDefeat:
# 419 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Whoah, wow! You made a much bigger\n"
# 420 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "splash than I expected!\p"
# 421 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You swamped me!\p"
# 422 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Okay, you've got me.\n"
# 423 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Take this Gym Badge!$"
# 424 "data/maps/DewfordTown_Gym/scripts.pory"

# 425 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_ReceivedKnuckleBadge:
# 426 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "{PLAYER} received the Knuckle Badge\n"
# 427 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "from Brawly.$"
# 428 "data/maps/DewfordTown_Gym/scripts.pory"

# 429 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_KnuckleBadgeInfoTakeThis:
# 430 "data/maps/DewfordTown_Gym/scripts.pory"
    .string "You'll now be able to use the HM move\n"
# 431 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Flash outside of battle.\p"
# 432 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "If you'd like, use this Technical\n"
# 433 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Machine, too.$"
# 434 "data/maps/DewfordTown_Gym/scripts.pory"

# 435 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_ExplainLowSweep:
# 436 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "That TM78 contains Low Sweep. It's a\n"
# 437 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "move that lowers your opponent's Speed\l"
# 438 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "stat. It's pretty gnarly, dude.\p"
# 439 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "… … … … … …$"
# 440 "data/maps/DewfordTown_Gym/scripts.pory"

# 441 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_RegisteredBrawly:
# 442 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Registered Gym Leader Brawly\n"
# 443 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "in the PokéNav.$"
# 444 "data/maps/DewfordTown_Gym/scripts.pory"

# 445 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyPostBattle:
# 446 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I can see your talent becoming a giant\n"
# 447 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "wave to cause a storm of astonishment\l"
# 448 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "among trainers one day!$"
# 449 "data/maps/DewfordTown_Gym/scripts.pory"

# 450 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymStatue:
# 451 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Dewford Town Pokémon Gym$"
# 452 "data/maps/DewfordTown_Gym/scripts.pory"

# 453 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymStatueCertified:
# 454 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Dewford Town Pokémon Gym\p"
# 455 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Brawly'S Certified trainers:\n"
# 456 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "{PLAYER}$"
# 457 "data/maps/DewfordTown_Gym/scripts.pory"

# 458 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyPreRematch:
# 459 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Brawly: A wave may draw back, but it\n"
# 460 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "always returns to the shore.\p"
# 461 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "A giant wave of a talent like you…\n"
# 462 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I knew you would return!\p"
# 463 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Show me how much higher\n"
# 464 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "you've gone!$"
# 465 "data/maps/DewfordTown_Gym/scripts.pory"

# 466 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyRematchDefeat:
# 467 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Wow!\n"
# 468 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Swamped again!$"
# 469 "data/maps/DewfordTown_Gym/scripts.pory"

# 470 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyPostRematch:
# 471 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Brawly: Battling is vast and it's deep.\n"
# 472 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You can't see the bottom.\l"
# 473 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "It's just like the sea of Hoenn!$"
# 474 "data/maps/DewfordTown_Gym/scripts.pory"

# 475 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyRematchNeedTwoMons:
# 476 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Brawly: A wave may draw back, but it\n"
# 477 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "always returns to the shore.\p"
# 478 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "A giant wave of a talent like you…\n"
# 479 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I knew you would return!\p"
# 480 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Oh? You only have one Pokémon\n"
# 481 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "that can battle.\p"
# 482 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'm sorry, but I'd like you to come back\n"
# 483 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "with at least two Pokémon.$"
# 484 "data/maps/DewfordTown_Gym/scripts.pory"

# 485 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_Hariyama:
# 486 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Hariyama: Har- Har- HARIYAMA!$"
