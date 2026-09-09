# 1 "data/maps/DewfordTown_Gym/scripts.pory"

# 2 "data/maps/DewfordTown_Gym/scripts.pory"
.set LOCALID_BRAWLY, 1
# 3 "data/maps/DewfordTown_Gym/scripts.pory"
.set LOCALID_HARIYAMA, 8
# 4 "data/maps/DewfordTown_Gym/scripts.pory"
.set LOCALID_ROCKSMASHLEFT, 9
# 5 "data/maps/DewfordTown_Gym/scripts.pory"
.set LOCALID_ROCKSMASHRIGHT, 10
# 6 "data/maps/DewfordTown_Gym/scripts.pory"

# 7 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_MapScripts::
# 8 "data/maps/DewfordTown_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DewfordTown_Gym_OnTransition
# 9 "data/maps/DewfordTown_Gym/scripts.pory"
	.byte 0
# 10 "data/maps/DewfordTown_Gym/scripts.pory"

# 11 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_OnTransition:
# 12 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 13 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 14 "data/maps/DewfordTown_Gym/scripts.pory"

# 15 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel::
# 16 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_defeated TRAINER_BRAWLY_1, DewfordTown_Gym_EventScript_SetLightsOn
# 17 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_CountTrainersDefeated
# 18 "data/maps/DewfordTown_Gym/scripts.pory"
	copyvar VAR_0x8001, VAR_0x8000
# 19 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 0, DewfordTown_Gym_EventScript_SetFlashLevel7
# 20 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 1, DewfordTown_Gym_EventScript_SetFlashLevel6
# 21 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 2, DewfordTown_Gym_EventScript_SetFlashLevel5
# 22 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 3, DewfordTown_Gym_EventScript_SetFlashLevel4
# 23 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 4, DewfordTown_Gym_EventScript_SetFlashLevel3
# 24 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 5, DewfordTown_Gym_EventScript_SetFlashLevel2
# 25 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_SetFlashLevel1
# 26 "data/maps/DewfordTown_Gym/scripts.pory"

# 27 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetLightsOn::
# 28 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 0
# 29 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 30 "data/maps/DewfordTown_Gym/scripts.pory"

# 31 "data/maps/DewfordTown_Gym/scripts.pory"
@ Brightest
# 32 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel1::
# 33 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 1
# 34 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 35 "data/maps/DewfordTown_Gym/scripts.pory"

# 36 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel2::
# 37 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 2
# 38 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 39 "data/maps/DewfordTown_Gym/scripts.pory"

# 40 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel3::
# 41 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 3
# 42 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 43 "data/maps/DewfordTown_Gym/scripts.pory"

# 44 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel4::
# 45 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 4
# 46 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 47 "data/maps/DewfordTown_Gym/scripts.pory"

# 48 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel5::
# 49 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 5
# 50 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 51 "data/maps/DewfordTown_Gym/scripts.pory"

# 52 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel6::
# 53 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 6
# 54 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 55 "data/maps/DewfordTown_Gym/scripts.pory"

# 56 "data/maps/DewfordTown_Gym/scripts.pory"
@ Darkest
# 57 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel7::
# 58 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 7
# 59 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 60 "data/maps/DewfordTown_Gym/scripts.pory"

# 61 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrightenRoom::
# 62 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_CountTrainersDefeated
# 63 "data/maps/DewfordTown_Gym/scripts.pory"
	nop1
# 64 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, VAR_0x8001, DewfordTown_Gym_EventScript_NoLightChange
# 65 "data/maps/DewfordTown_Gym/scripts.pory"
	copyvar VAR_0x8001, VAR_0x8000
# 66 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 1, DewfordTown_Gym_EventScript_AnimateFlash1Trainer
# 67 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 2, DewfordTown_Gym_EventScript_AnimateFlash2Trainers
# 68 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 3, DewfordTown_Gym_EventScript_AnimateFlash3Trainers
# 69 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 4, DewfordTown_Gym_EventScript_AnimateFlash4Trainers
# 70 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 5, DewfordTown_Gym_EventScript_AnimateFlash5Trainers
# 71 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 6, DewfordTown_Gym_EventScript_AnimateFlash6Trainers
# 72 "data/maps/DewfordTown_Gym/scripts.pory"

# 73 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_NoLightChange::
# 74 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 75 "data/maps/DewfordTown_Gym/scripts.pory"

# 76 "data/maps/DewfordTown_Gym/scripts.pory"
@ NOTE: A little confusingly, a larger animateflash param value is a smaller flash radius
# 77 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash1Trainer::
# 78 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 79 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 6
# 80 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 81 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 82 "data/maps/DewfordTown_Gym/scripts.pory"

# 83 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash2Trainers::
# 84 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 85 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 5
# 86 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 87 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 88 "data/maps/DewfordTown_Gym/scripts.pory"

# 89 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash3Trainers::
# 90 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 91 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 4
# 92 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 93 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 94 "data/maps/DewfordTown_Gym/scripts.pory"

# 95 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash4Trainers::
# 96 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 97 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 3
# 98 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 99 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 100 "data/maps/DewfordTown_Gym/scripts.pory"

# 101 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash5Trainers::
# 102 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 103 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 2
# 104 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 105 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 106 "data/maps/DewfordTown_Gym/scripts.pory"

# 107 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash6Trainers::
# 108 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 109 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 1
# 110 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 111 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 112 "data/maps/DewfordTown_Gym/scripts.pory"

# 113 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlashFullBrightness::
# 114 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 115 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 0
# 116 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 117 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 118 "data/maps/DewfordTown_Gym/scripts.pory"

# 119 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CountTrainersDefeated::
# 120 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_0x8000, 0
# 121 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_TAKAO, DewfordTown_Gym_EventScript_CheckJocelyn
# 122 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 123 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckJocelyn::
# 124 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_JOCELYN, DewfordTown_Gym_EventScript_CheckLaura
# 125 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 126 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckLaura::
# 127 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_LAURA, DewfordTown_Gym_EventScript_CheckBrenden
# 128 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 129 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckBrenden::
# 130 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_BRENDEN, DewfordTown_Gym_EventScript_CheckCristian
# 131 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 132 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckCristian::
# 133 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_CRISTIAN, DewfordTown_Gym_EventScript_CheckLilith
# 134 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 135 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckLilith::
# 136 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_LILITH, DewfordTown_Gym_EventScript_StopCountingTrainers
# 137 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 138 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_StopCountingTrainers::
# 139 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 140 "data/maps/DewfordTown_Gym/scripts.pory"

# 141 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrawlyDefeated::
# 142 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_AnimateFlashFullBrightness
# 143 "data/maps/DewfordTown_Gym/scripts.pory"
	message DewfordTown_Gym_Text_ReceivedKnuckleBadge
# 144 "data/maps/DewfordTown_Gym/scripts.pory"
	waitmessage
# 145 "data/maps/DewfordTown_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 146 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_KnuckleBadgeInfoTakeThis, MSGBOX_DEFAULT
# 147 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_DEFEATED_DEWFORD_GYM
# 148 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_BADGE02_GET
# 149 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_PETALBURG_GYM_STATE, 1
# 150 "data/maps/DewfordTown_Gym/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 7, Common_EventScript_ReadyPetalburgGymForBattle
# 151 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_0x8008, 2
# 152 "data/maps/DewfordTown_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 153 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_GiveLowSweep
# 154 "data/maps/DewfordTown_Gym/scripts.pory"
	closemessage
# 155 "data/maps/DewfordTown_Gym/scripts.pory"
	delay 30
# 156 "data/maps/DewfordTown_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 157 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_RegisteredBrawly, MSGBOX_DEFAULT
# 158 "data/maps/DewfordTown_Gym/scripts.pory"
	waitfanfare
# 159 "data/maps/DewfordTown_Gym/scripts.pory"
	closemessage
# 160 "data/maps/DewfordTown_Gym/scripts.pory"
	delay 30
# 161 "data/maps/DewfordTown_Gym/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 162 "data/maps/DewfordTown_Gym/scripts.pory"
	specialvar VAR_0x8006, GetLevelCapForText
# 163 "data/maps/DewfordTown_Gym/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_0x8006
# 164 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox LevelCapIncreasedTo, MSGBOX_DEFAULT
# 165 "data/maps/DewfordTown_Gym/scripts.pory"
	waitfanfare
# 166 "data/maps/DewfordTown_Gym/scripts.pory"
	closemessage
# 167 "data/maps/DewfordTown_Gym/scripts.pory"
	delay 30
# 168 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_ENABLE_BRAWLY_MATCH_CALL
# 169 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_ROXANNE_CALL_STEP_COUNTER, 0
# 170 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_ENABLE_ROXANNE_FIRST_CALL
# 171 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 172 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 173 "data/maps/DewfordTown_Gym/scripts.pory"

# 174 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GiveLowSweep::
# 175 "data/maps/DewfordTown_Gym/scripts.pory"
	compare VAR_GAME_SETTING_DIFFICULTY_MODE, GAME_SETTING_DIFFICULTY_HARD_MODE
# 176 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_ge DewfordTown_Gym_EventScript_GiveLowSweep_2
# 177 "data/maps/DewfordTown_Gym/scripts.pory"
	giveitem ITEM_TM_LOW_SWEEP
# 178 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_ExplainLowSweep, MSGBOX_DEFAULT
# 179 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_LOW_SWEEP
# 180 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 181 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GiveLowSweep_1:
# 182 "data/maps/DewfordTown_Gym/scripts.pory"
	giveitem ITEM_TM_LOW_SWEEP
# 183 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_ExplainLowSweep, MSGBOX_DEFAULT
# 184 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_LOW_SWEEP
# 185 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 186 "data/maps/DewfordTown_Gym/scripts.pory"

# 187 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GiveLowSweep_2:
# 188 "data/maps/DewfordTown_Gym/scripts.pory"
	giveitem ITEM_BOTTLE_CAP
# 189 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_GiveLowSweep_1
# 190 "data/maps/DewfordTown_Gym/scripts.pory"

# 191 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GiveLowSweep2:
# 192 "data/maps/DewfordTown_Gym/scripts.pory"
	giveitem ITEM_TM_LOW_SWEEP
# 193 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_ExplainLowSweep, MSGBOX_DEFAULT
# 194 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_LOW_SWEEP
# 195 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 196 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 197 "data/maps/DewfordTown_Gym/scripts.pory"

# 198 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrawlyRematch::
# 199 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyPreRematch, DewfordTown_Gym_Text_BrawlyRematchDefeat, DewfordTown_Gym_Text_BrawlyRematchNeedTwoMons
# 200 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrawlyPostRematch, MSGBOX_AUTOCLOSE
# 201 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 202 "data/maps/DewfordTown_Gym/scripts.pory"

# 203 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Takao::
# 204 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_TAKAO, DewfordTown_Gym_Text_TakaoIntro, DewfordTown_Gym_Text_TakaoDefeat, DewfordTown_Gym_EventScript_TakaoBrightenRoom
# 205 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_TakaoPostBattle, MSGBOX_AUTOCLOSE
# 206 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 207 "data/maps/DewfordTown_Gym/scripts.pory"

# 208 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_TakaoBrightenRoom::
# 209 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 210 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 211 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 212 "data/maps/DewfordTown_Gym/scripts.pory"

# 213 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Jocelyn::
# 214 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_JOCELYN, DewfordTown_Gym_Text_JocelynIntro, DewfordTown_Gym_Text_JocelynDefeat, DewfordTown_Gym_EventScript_JocelynBrightenRoom
# 215 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_JocelynPostBattle, MSGBOX_AUTOCLOSE
# 216 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 217 "data/maps/DewfordTown_Gym/scripts.pory"

# 218 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_JocelynBrightenRoom::
# 219 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 220 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 221 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 222 "data/maps/DewfordTown_Gym/scripts.pory"

# 223 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Laura::
# 224 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_LAURA, DewfordTown_Gym_Text_LauraIntro, DewfordTown_Gym_Text_LauraDefeat, DewfordTown_Gym_EventScript_LauraBrightenRoom
# 225 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_LauraPostBattle, MSGBOX_AUTOCLOSE
# 226 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 227 "data/maps/DewfordTown_Gym/scripts.pory"

# 228 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LauraBrightenRoom::
# 229 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 230 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 231 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 232 "data/maps/DewfordTown_Gym/scripts.pory"

# 233 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Brenden::
# 234 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_BRENDEN, DewfordTown_Gym_Text_BrendenIntro, DewfordTown_Gym_Text_BrendenDefeat, DewfordTown_Gym_EventScript_BrendenBrightenRoom
# 235 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrendenPostBattle, MSGBOX_AUTOCLOSE
# 236 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 237 "data/maps/DewfordTown_Gym/scripts.pory"

# 238 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrendenBrightenRoom::
# 239 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 240 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 241 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 242 "data/maps/DewfordTown_Gym/scripts.pory"

# 243 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Cristian::
# 244 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_CRISTIAN, DewfordTown_Gym_Text_CristianIntro, DewfordTown_Gym_Text_CristianDefeat, DewfordTown_Gym_EventScript_CristianBrightenRoom
# 245 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_CristianPostBattle, MSGBOX_AUTOCLOSE
# 246 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 247 "data/maps/DewfordTown_Gym/scripts.pory"

# 248 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CristianBrightenRoom::
# 249 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 250 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 251 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 252 "data/maps/DewfordTown_Gym/scripts.pory"

# 253 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Lilith::
# 254 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_LILITH, DewfordTown_Gym_Text_LilithIntro, DewfordTown_Gym_Text_LilithDefeat, DewfordTown_Gym_EventScript_LilithBrightenRoom
# 255 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_LilithPostBattle, MSGBOX_AUTOCLOSE
# 256 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 257 "data/maps/DewfordTown_Gym/scripts.pory"

# 258 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LilithBrightenRoom::
# 259 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 260 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 261 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 262 "data/maps/DewfordTown_Gym/scripts.pory"

# 263 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymGuide::
# 264 "data/maps/DewfordTown_Gym/scripts.pory"
	lock
# 265 "data/maps/DewfordTown_Gym/scripts.pory"
	faceplayer
# 266 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_DEWFORD_GYM, DewfordTown_Gym_EventScript_GymGuidePostVictory
# 267 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 268 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 269 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 270 "data/maps/DewfordTown_Gym/scripts.pory"

# 271 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymGuidePostVictory::
# 272 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 273 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 274 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 275 "data/maps/DewfordTown_Gym/scripts.pory"

# 276 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LeftGymStatue::
# 277 "data/maps/DewfordTown_Gym/scripts.pory"
	lockall
# 278 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_GymStatueCertified
# 279 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_GymStatue
# 280 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 281 "data/maps/DewfordTown_Gym/scripts.pory"

# 282 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_RightGymStatue::
# 283 "data/maps/DewfordTown_Gym/scripts.pory"
	lockall
# 284 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_GymStatueCertified
# 285 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_GymStatue
# 286 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 287 "data/maps/DewfordTown_Gym/scripts.pory"

# 288 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymStatueCertified::
# 289 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 290 "data/maps/DewfordTown_Gym/scripts.pory"
	releaseall
# 291 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 292 "data/maps/DewfordTown_Gym/scripts.pory"

# 293 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymStatue::
# 294 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 295 "data/maps/DewfordTown_Gym/scripts.pory"
	releaseall
# 296 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 297 "data/maps/DewfordTown_Gym/scripts.pory"

# 298 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Hariyama::
# 299 "data/maps/DewfordTown_Gym/scripts.pory"
	lock
# 300 "data/maps/DewfordTown_Gym/scripts.pory"
	faceplayer
# 301 "data/maps/DewfordTown_Gym/scripts.pory"
	waitse
# 302 "data/maps/DewfordTown_Gym/scripts.pory"
	playmoncry SPECIES_HARIYAMA, CRY_MODE_NORMAL
# 303 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_Hariyama, MSGBOX_DEFAULT
# 304 "data/maps/DewfordTown_Gym/scripts.pory"
	waitmoncry
# 305 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 306 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 307 "data/maps/DewfordTown_Gym/scripts.pory"

# 308 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymGuideAdvice:
# 309 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Hey, how's it going, Champion-\n"
# 310 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "bound {PLAYER}?\p"
# 311 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Dewford's Gym Leader Brawly commands\n"
# 312 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Fighting-type Pokémon.\p"
# 313 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Going against him with Normal-type\n"
# 314 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Pokémon is asking for trouble.\p"
# 315 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Fighting Pokémon will lay a serious\n"
# 316 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "smack down on Normal Pokémon,\l"
# 317 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "so be careful!\p"
# 318 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "What's worse, the Gym is as dark as\n"
# 319 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "the ocean floor.\p"
# 320 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "But it will get brighter after defeating\n"
# 321 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "the trainers in your way.\p"
# 322 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Hey, okay, go for it!$"
# 323 "data/maps/DewfordTown_Gym/scripts.pory"

# 324 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymGuidePostVictory:
# 325 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Whoah! It's turned too bright in here!\p"
# 326 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Your future is bright, too!$"
# 327 "data/maps/DewfordTown_Gym/scripts.pory"

# 328 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_TakaoIntro:
# 329 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Might is right!\n"
# 330 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Come on!$"
# 331 "data/maps/DewfordTown_Gym/scripts.pory"

# 332 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_TakaoDefeat:
# 333 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Not enough power…$"
# 334 "data/maps/DewfordTown_Gym/scripts.pory"

# 335 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_TakaoPostBattle:
# 336 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Your skill overcame my strength!\n"
# 337 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Your technique is commendable!$"
# 338 "data/maps/DewfordTown_Gym/scripts.pory"

# 339 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_JocelynIntro:
# 340 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "There's no need for Brawly to be\n"
# 341 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "involved!\p"
# 342 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'll crush you!$"
# 343 "data/maps/DewfordTown_Gym/scripts.pory"

# 344 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_JocelynDefeat:
# 345 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "But… How?\n"
# 346 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "How could I lose so easily?$"
# 347 "data/maps/DewfordTown_Gym/scripts.pory"

# 348 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_JocelynPostBattle:
# 349 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'm not going to waste this loss.\n"
# 350 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'll use it to motivate me to train!\p"
# 351 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "One day I'll become a Gym Leader…\p"
# 352 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "No, I'll become the Pokémon League\n"
# 353 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Champion!$"
# 354 "data/maps/DewfordTown_Gym/scripts.pory"

# 355 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LauraIntro:
# 356 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Don't you dare brush me off!\n"
# 357 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "It's not my fault if you cry!$"
# 358 "data/maps/DewfordTown_Gym/scripts.pory"

# 359 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LauraDefeat:
# 360 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Waaaaaaah!\n"
# 361 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I lost!$"
# 362 "data/maps/DewfordTown_Gym/scripts.pory"

# 363 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LauraPostBattle:
# 364 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I battle in the dark to make my heart\n"
# 365 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "stronger.\p"
# 366 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "But because it's so dark, I can never\n"
# 367 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "see Brawly's face…$"
# 368 "data/maps/DewfordTown_Gym/scripts.pory"

# 369 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LilithIntro:
# 370 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Ufufu…\n"
# 371 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Are you stumbling around in the dark?$"
# 372 "data/maps/DewfordTown_Gym/scripts.pory"

# 373 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LilithDefeat:
# 374 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Oh, you…\n"
# 375 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I don't want to know you!$"
# 376 "data/maps/DewfordTown_Gym/scripts.pory"

# 377 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LilithPostBattle:
# 378 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You deserve to stay lost and end up\n"
# 379 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "back at the entrance again!$"
# 380 "data/maps/DewfordTown_Gym/scripts.pory"

# 381 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrendenIntro:
# 382 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'll show you the gumption of\n"
# 383 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "a sailing man!$"
# 384 "data/maps/DewfordTown_Gym/scripts.pory"

# 385 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrendenDefeat:
# 386 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "How'd this happen?\n"
# 387 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "It's not like me to lose this way!$"
# 388 "data/maps/DewfordTown_Gym/scripts.pory"

# 389 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrendenPostBattle:
# 390 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Oh, aye! You're worthy of seeing\n"
# 391 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "our Gym Leader.$"
# 392 "data/maps/DewfordTown_Gym/scripts.pory"

# 393 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_CristianIntro:
# 394 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "If you mean to pass, it has to be\n"
# 395 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "through me!$"
# 396 "data/maps/DewfordTown_Gym/scripts.pory"

# 397 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_CristianDefeat:
# 398 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Grrrrr!\n"
# 399 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Vastly overpowered!$"
# 400 "data/maps/DewfordTown_Gym/scripts.pory"

# 401 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_CristianPostBattle:
# 402 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You win!\n"
# 403 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Go after that Badge!$"
# 404 "data/maps/DewfordTown_Gym/scripts.pory"

# 405 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyIntro:
# 406 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Hariyama is as pumped as I am!\n"
# 407 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "So you wanted to challenge me?\l"
# 408 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Let me see what you're made of!$"
# 409 "data/maps/DewfordTown_Gym/scripts.pory"

# 410 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyDefeat:
# 411 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Whoah, wow! You made a much bigger\n"
# 412 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "splash than I expected!\p"
# 413 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You swamped me!\p"
# 414 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Okay, you've got me.\n"
# 415 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Take this Gym Badge!$"
# 416 "data/maps/DewfordTown_Gym/scripts.pory"

# 417 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_ReceivedKnuckleBadge:
# 418 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "{PLAYER} received the Knuckle Badge\n"
# 419 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "from Brawly.$"
# 420 "data/maps/DewfordTown_Gym/scripts.pory"

# 421 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_KnuckleBadgeInfoTakeThis:
# 422 "data/maps/DewfordTown_Gym/scripts.pory"
    .string "You'll now be able to use the HM move\n"
# 423 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Flash outside of battle.\p"
# 424 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "If you'd like, use this Technical\n"
# 425 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Machine, too.$"
# 426 "data/maps/DewfordTown_Gym/scripts.pory"

# 427 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_ExplainLowSweep:
# 428 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "That TM78 contains Low Sweep. It's a\n"
# 429 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "move that lowers your opponent's Speed\l"
# 430 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "stat. It's pretty gnarly, dude.\p"
# 431 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "… … … … … …$"
# 432 "data/maps/DewfordTown_Gym/scripts.pory"

# 433 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_RegisteredBrawly:
# 434 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Registered Gym Leader Brawly\n"
# 435 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "in the PokéNav.$"
# 436 "data/maps/DewfordTown_Gym/scripts.pory"

# 437 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyPostBattle:
# 438 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I can see your talent becoming a giant\n"
# 439 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "wave to cause a storm of astonishment\l"
# 440 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "among trainers one day!$"
# 441 "data/maps/DewfordTown_Gym/scripts.pory"

# 442 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymStatue:
# 443 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Dewford Town Pokémon Gym$"
# 444 "data/maps/DewfordTown_Gym/scripts.pory"

# 445 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymStatueCertified:
# 446 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Dewford Town Pokémon Gym\p"
# 447 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Brawly'S Certified trainers:\n"
# 448 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "{PLAYER}$"
# 449 "data/maps/DewfordTown_Gym/scripts.pory"

# 450 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyPreRematch:
# 451 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Brawly: A wave may draw back, but it\n"
# 452 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "always returns to the shore.\p"
# 453 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "A giant wave of a talent like you…\n"
# 454 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I knew you would return!\p"
# 455 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Show me how much higher\n"
# 456 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "you've gone!$"
# 457 "data/maps/DewfordTown_Gym/scripts.pory"

# 458 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyRematchDefeat:
# 459 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Wow!\n"
# 460 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Swamped again!$"
# 461 "data/maps/DewfordTown_Gym/scripts.pory"

# 462 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyPostRematch:
# 463 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Brawly: Battling is vast and it's deep.\n"
# 464 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You can't see the bottom.\l"
# 465 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "It's just like the sea of Hoenn!$"
# 466 "data/maps/DewfordTown_Gym/scripts.pory"

# 467 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyRematchNeedTwoMons:
# 468 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Brawly: A wave may draw back, but it\n"
# 469 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "always returns to the shore.\p"
# 470 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "A giant wave of a talent like you…\n"
# 471 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I knew you would return!\p"
# 472 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Oh? You only have one Pokémon\n"
# 473 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "that can battle.\p"
# 474 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'm sorry, but I'd like you to come back\n"
# 475 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "with at least two Pokémon.$"
# 476 "data/maps/DewfordTown_Gym/scripts.pory"

# 477 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_Hariyama:
# 478 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Hariyama: Har- Har- HARIYAMA!$"

DewfordTown_Gym_EventScript_Brawly::
# 483 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_defeated TRAINER_BRAWLY_1, DewfordTown_Gym_EventScript_BrawlyPostBattle
# 484 "data/maps/DewfordTown_Gym/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 485 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, DewfordTown_Gym_EventScript_BrawlyRematch
# 486 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrawlyFirstTalk, MSGBOX_AUTOCLOSE
# 487 "data/maps/DewfordTown_Gym/scripts.pory"
	setobjectmovementtype LOCALID_HARIYAMA, MOVEMENT_TYPE_FACE_LEFT
# 488 "data/maps/DewfordTown_Gym/scripts.pory"
	applymovement LOCALID_HARIYAMA, Common_Movement_FaceLeft
# 489 "data/maps/DewfordTown_Gym/scripts.pory"
	applymovement LOCALID_BRAWLY, DewfordTown_Gym_EventScript_BrawlyBreakRock
# 490 "data/maps/DewfordTown_Gym/scripts.pory"
	applymovement LOCALID_HARIYAMA, DewfordTown_Gym_EventScript_HariyamaBreakRock
# 491 "data/maps/DewfordTown_Gym/scripts.pory"
	waitmovement 0
# 492 "data/maps/DewfordTown_Gym/scripts.pory"
	delay 8
# 493 "data/maps/DewfordTown_Gym/scripts.pory"
	playmoncry SPECIES_HARIYAMA, CRY_MODE_ENCOUNTER
# 494 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_BREAKABLE_DOOR
# 495 "data/maps/DewfordTown_Gym/scripts.pory"
	applymovement LOCALID_ROCKSMASHRIGHT, Movement_SmashRock
# 496 "data/maps/DewfordTown_Gym/scripts.pory"
	applymovement LOCALID_ROCKSMASHLEFT, Movement_SmashRock
# 497 "data/maps/DewfordTown_Gym/scripts.pory"
	waitmovement 0
# 498 "data/maps/DewfordTown_Gym/scripts.pory"
	waitmoncry
# 499 "data/maps/DewfordTown_Gym/scripts.pory"
	delay 8
# 500 "data/maps/DewfordTown_Gym/scripts.pory"
	applymovement LOCALID_HARIYAMA, Common_Movement_FaceDown
# 501 "data/maps/DewfordTown_Gym/scripts.pory"
	applymovement LOCALID_BRAWLY, Common_Movement_FacePlayer
# 502 "data/maps/DewfordTown_Gym/scripts.pory"
	waitmovement 0
# 503 "data/maps/DewfordTown_Gym/scripts.pory"
	setobjectmovementtype LOCALID_HARIYAMA, MOVEMENT_TYPE_FACE_LEFT
# 504 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyIntro, DewfordTown_Gym_Text_BrawlyDefeat, DewfordTown_Gym_EventScript_BrawlyDefeated, NO_MUSIC
# 505 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_LOW_SWEEP, DewfordTown_Gym_EventScript_GiveLowSweep2
# 506 "data/maps/DewfordTown_Gym/scripts.pory"
	releaseall
	end


DewfordTown_Gym_EventScript_BrawlyBreakRock::
# 511 "data/maps/DewfordTown_Gym/scripts.pory"
	face_right
# 512 "data/maps/DewfordTown_Gym/scripts.pory"
	walk_in_place_faster_right
# 513 "data/maps/DewfordTown_Gym/scripts.pory"
	step_end
	return


DewfordTown_Gym_EventScript_HariyamaBreakRock::
# 517 "data/maps/DewfordTown_Gym/scripts.pory"
	walk_in_place_faster_left
# 518 "data/maps/DewfordTown_Gym/scripts.pory"
	step_end
	return


DewfordTown_Gym_EventScript_BrawlyPostBattle::
# 533 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrawlyPostBattle, MSGBOX_AUTOCLOSE
	end


DewfordTown_Gym_Text_BrawlyFirstTalk::
# 521 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'm Brawly!\n"
	.string "Dewford's Gym Leader!\p"
	.string "I've been churned in the rough waves\n"
	.string "of these parts, and I've grown tough\l"
	.string "in the pitch-black cave!\p"
	.string "I've seen you fight my trainers,\n"
	.string "you've got guts… But it will take a lot\l"
	.string "more than spirit to defeat me.$"
