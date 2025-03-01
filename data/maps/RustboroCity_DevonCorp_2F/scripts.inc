# 1 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 2 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
.set LOCALID_FOSSIL_SCIENTIST, 5
# 3 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 4 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_MapScripts::
# 5 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_DevonCorp_2F_OnTransition
# 6 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.byte 0
# 7 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 8 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_OnTransition:
# 9 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call_if_eq VAR_FOSSIL_RESURRECTION_STATE, 1, RustboroCity_DevonCorp_2F_EventScript_SetFossilReady
# 10 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 11 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 12 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_SetFossilReady::
# 13 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_FOSSIL_RESURRECTION_STATE, 2
# 14 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	return
# 15 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 16 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_TalkToPokemonScientist::
# 17 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 18 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	faceplayer
# 19 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call_if_eq VAR_FOSSIL_RESURRECTION_STATE, 1, RustboroCity_DevonCorp_2F_EventScript_SetFossilReady
# 20 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_DeviceForTalkingToPokemon, MSGBOX_DEFAULT
# 21 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 22 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 23 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 24 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_PokemonDreamsScientist::
# 25 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 26 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	faceplayer
# 27 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call_if_eq VAR_FOSSIL_RESURRECTION_STATE, 1, RustboroCity_DevonCorp_2F_EventScript_SetFossilReady
# 28 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_DeviceToVisualizePokemonDreams, MSGBOX_DEFAULT
# 29 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 30 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 31 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 32 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_FossilScientist::
# 33 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 34 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	faceplayer
# 35 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_FOSSIL_RESURRECTION_STATE, 2, RustboroCity_DevonCorp_2F_EventScript_FossilMonReady
# 36 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_FOSSIL_RESURRECTION_STATE, 1, RustboroCity_DevonCorp_2F_EventScript_StillRegenerating
# 37 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_DevelopDeviceToResurrectFossils, MSGBOX_DEFAULT
# 38 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	checkitem ITEM_ROOT_FOSSIL
# 39 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, RustboroCity_DevonCorp_2F_EventScript_NoticeRootFossil
# 40 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	checkitem ITEM_CLAW_FOSSIL
# 41 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, RustboroCity_DevonCorp_2F_EventScript_NoticeClawFossil
# 42 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 43 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 44 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 45 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
@ This whole section has needless duplication and could be condensed considerably
# 46 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_NoticeRootFossil::
# 47 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	closemessage
# 48 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playse SE_PIN
# 49 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	applymovement LOCALID_FOSSIL_SCIENTIST, Common_Movement_ExclamationMark
# 50 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmovement 0
# 51 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	applymovement LOCALID_FOSSIL_SCIENTIST, Common_Movement_Delay48
# 52 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmovement 0
# 53 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_WantToBringFossilBackToLife, MSGBOX_YESNO
# 54 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, RustboroCity_DevonCorp_2F_EventScript_DeclineGiveFossil
# 55 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	checkitem ITEM_CLAW_FOSSIL
# 56 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, RustboroCity_DevonCorp_2F_EventScript_ChooseFossil
# 57 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_GiveRootFossil
# 58 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 59 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 60 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_GiveRootFossil::
# 61 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ROOT_FOSSIL
# 62 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_HandedFossilToResearcher, MSGBOX_DEFAULT
# 63 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem ITEM_ROOT_FOSSIL
# 64 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_FOSSIL_RESURRECTION_STATE, 1
# 65 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, 1
# 66 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 67 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 68 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 69 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_NoticeClawFossil::
# 70 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	closemessage
# 71 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playse SE_PIN
# 72 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	applymovement LOCALID_FOSSIL_SCIENTIST, Common_Movement_ExclamationMark
# 73 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmovement 0
# 74 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	applymovement LOCALID_FOSSIL_SCIENTIST, Common_Movement_Delay48
# 75 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmovement 0
# 76 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_WantToBringFossilBackToLife, MSGBOX_YESNO
# 77 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, RustboroCity_DevonCorp_2F_EventScript_DeclineGiveFossil
# 78 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	checkitem ITEM_ROOT_FOSSIL
# 79 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, RustboroCity_DevonCorp_2F_EventScript_ChooseFossil
# 80 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_GiveClawFossil
# 81 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 82 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 83 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_GiveClawFossil::
# 84 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CLAW_FOSSIL
# 85 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_HandedFossilToResearcher, MSGBOX_DEFAULT
# 86 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem ITEM_CLAW_FOSSIL
# 87 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_FOSSIL_RESURRECTION_STATE, 1
# 88 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, 2
# 89 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 90 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 91 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 92 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_DeclineGiveFossil::
# 93 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_OhIsThatSo, MSGBOX_DEFAULT
# 94 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 95 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 96 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 97 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_StillRegenerating::
# 98 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_FossilRegeneratorTakesTime, MSGBOX_DEFAULT
# 99 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 100 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 101 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 102 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_FossilMonReady::
# 103 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_WHICH_FOSSIL_REVIVED, 1, RustboroCity_DevonCorp_2F_EventScript_LileepReady
# 104 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_WHICH_FOSSIL_REVIVED, 2, RustboroCity_DevonCorp_2F_EventScript_AnorithReady
# 105 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 106 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 107 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_LileepReady::
# 108 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_LILEEP
# 109 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_FossilizedMonBroughtBackToLife, MSGBOX_DEFAULT
# 110 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_ReceiveLileep
# 111 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 112 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 113 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_AnorithReady::
# 114 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_ANORITH
# 115 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_FossilizedMonBroughtBackToLife, MSGBOX_DEFAULT
# 116 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_ReceiveAnorith
# 117 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 118 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 119 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ReceiveLileep::
# 120 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_LILEEP
# 121 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	givemonrandom SPECIES_LILEEP, 20
# 122 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, RustboroCity_DevonCorp_2F_EventScript_ReceiveLileepParty
# 123 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, RustboroCity_DevonCorp_2F_EventScript_ReceiveLileepPC
# 124 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 125 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 126 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 127 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ReceiveLileepParty::
# 128 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call RustboroCity_DevonCorp_2F_EventScript_ReceivedLileepFanfare
# 129 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 130 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, RustboroCity_DevonCorp_2F_EventScript_FinishReceivingLileep
# 131 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 132 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 133 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_FinishReceivingLileep
# 134 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 135 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 136 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ReceiveLileepPC::
# 137 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call RustboroCity_DevonCorp_2F_EventScript_ReceivedLileepFanfare
# 138 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 139 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, RustboroCity_DevonCorp_2F_EventScript_TransferLileepToPC
# 140 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 141 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_TransferLileepToPC
# 142 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 143 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 144 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_TransferLileepToPC::
# 145 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_TransferredToPC
# 146 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_FinishReceivingLileep
# 147 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 148 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 149 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ReceivedLileepFanfare::
# 150 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_LILEEP
# 151 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 152 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	message RustboroCity_DevonCorp_2F_Text_ReceivedMonFromResearcher
# 153 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmessage
# 154 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitfanfare
# 155 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_LILEEP
# 156 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	return
# 157 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 158 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_FinishReceivingLileep::
# 159 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_FOSSIL_RESURRECTION_STATE, 0
# 160 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setflag FLAG_RECEIVED_REVIVED_FOSSIL_MON
# 161 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 162 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 163 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 164 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ReceiveAnorith::
# 165 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_ANORITH
# 166 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	givemonrandom SPECIES_ANORITH, 20
# 167 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, RustboroCity_DevonCorp_2F_EventScript_ReceiveAnorithParty
# 168 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, RustboroCity_DevonCorp_2F_EventScript_ReceiveAnorithPC
# 169 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 170 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 171 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 172 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ReceiveAnorithParty::
# 173 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call RustboroCity_DevonCorp_2F_EventScript_ReceivedAnorithFanfare
# 174 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 175 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, RustboroCity_DevonCorp_2F_EventScript_FinishReceivingAnorith
# 176 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 177 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 178 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_FinishReceivingAnorith
# 179 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 180 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 181 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ReceiveAnorithPC::
# 182 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call RustboroCity_DevonCorp_2F_EventScript_ReceivedAnorithFanfare
# 183 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 184 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, RustboroCity_DevonCorp_2F_EventScript_TransferAnorithToPC
# 185 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 186 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_TransferAnorithToPC
# 187 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 188 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 189 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_TransferAnorithToPC::
# 190 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_TransferredToPC
# 191 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_FinishReceivingAnorith
# 192 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 193 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 194 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ReceivedAnorithFanfare::
# 195 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_ANORITH
# 196 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 197 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	message RustboroCity_DevonCorp_2F_Text_ReceivedMonFromResearcher
# 198 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmessage
# 199 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitfanfare
# 200 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_ANORITH
# 201 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	return
# 202 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 203 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_FinishReceivingAnorith::
# 204 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_FOSSIL_RESURRECTION_STATE, 0
# 205 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setflag FLAG_RECEIVED_REVIVED_FOSSIL_MON
# 206 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 207 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 208 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 209 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ChooseFossil::
# 210 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	message RustboroCity_DevonCorp_2F_Text_TwoFossilsPickOne
# 211 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmessage
# 212 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	multichoice 17, 6, MULTI_FOSSIL, FALSE
# 213 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	switch VAR_RESULT
# 214 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 0, RustboroCity_DevonCorp_2F_EventScript_ChooseClawFossil
# 215 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 1, RustboroCity_DevonCorp_2F_EventScript_ChooseRootFossil
# 216 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 2, RustboroCity_DevonCorp_2F_EventScript_CancelFossilSelect
# 217 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case MULTI_B_PRESSED, RustboroCity_DevonCorp_2F_EventScript_CancelFossilSelect
# 218 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 219 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 220 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ChooseClawFossil::
# 221 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_GiveClawFossil
# 222 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 223 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 224 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ChooseRootFossil::
# 225 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_GiveRootFossil
# 226 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 227 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 228 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_CancelFossilSelect::
# 229 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 230 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 231 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 232 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_MatchCallScientist::
# 233 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 234 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	faceplayer
# 235 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call_if_eq VAR_FOSSIL_RESURRECTION_STATE, 1, RustboroCity_DevonCorp_2F_EventScript_SetFossilReady
# 236 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_ge VAR_RUSTBORO_CITY_STATE, 6, RustboroCity_DevonCorp_2F_EventScript_WorkOnNext
# 237 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_DevelopNewPokenavFeature, MSGBOX_DEFAULT
# 238 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 239 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 240 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 241 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_WorkOnNext::
# 242 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_WhatToWorkOnNext, MSGBOX_DEFAULT
# 243 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 244 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 245 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 246 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_DeviceForTalkingToPokemon:
# 247 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "We're developing a device for talking\n"
# 248 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "with Pokémon.\p"
# 249 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "But we haven't had much success…$"
# 250 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 251 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_DeviceToVisualizePokemonDreams:
# 252 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I'm trying to develop a device that\n"
# 253 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "visually reproduces the dreams of\l"
# 254 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Pokémon…\p"
# 255 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "But it's not going well.$"
# 256 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 257 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_DevelopDeviceToResurrectFossils:
# 258 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I've been trying to develop a device\n"
# 259 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "that resurrects Pokémon from fossils…\p"
# 260 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "And, it's working!$"
# 261 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 262 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_WantToBringFossilBackToLife:
# 263 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Wait! That thing you have there…\n"
# 264 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Is that a Pokémon fossil?\p"
# 265 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Would you like to bring that Pokémon\n"
# 266 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "back to life?\p"
# 267 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I can with my newly developed\n"
# 268 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "FOSSIL REGENERATOR.$"
# 269 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 270 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_OhIsThatSo:
# 271 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Oh, is that so?\p"
# 272 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "DEVON's technological expertise\n"
# 273 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "is outstanding, I tell you.$"
# 274 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 275 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_TwoFossilsPickOne:
# 276 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Oh, now that's a surprise!\n"
# 277 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "You have not one, but two, fossils?\p"
# 278 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Unfortunately, my machine can only\n"
# 279 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "regenerate one Pokémon at a time.\p"
# 280 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Would you like to pick one of your\n"
# 281 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "fossils for regeneration?$"
# 282 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 283 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_HandedFossilToResearcher:
# 284 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Excellent!\n"
# 285 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Let's do this right away.\p"
# 286 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "{PLAYER} handed the {STR_VAR_1} to\n"
# 287 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "the DEVON RESEARCHER.$"
# 288 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 289 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_FossilRegeneratorTakesTime:
# 290 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "The FOSSIL REGENERATOR, which I made,\n"
# 291 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "is incredible.\p"
# 292 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "But it has one drawback--it takes\n"
# 293 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "a long time to work.\p"
# 294 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "So, uh… How about you go for a stroll\n"
# 295 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "and look around for a while?$"
# 296 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 297 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_FossilizedMonBroughtBackToLife:
# 298 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Thanks for waiting!\p"
# 299 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Your fossilized Pokémon has been\n"
# 300 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "brought back to life!\p"
# 301 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "The fossil was an ancient Pokémon.\n"
# 302 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "{STR_VAR_2}, it was!$"
# 303 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 304 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_ReceivedMonFromResearcher:
# 305 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "{PLAYER} received {STR_VAR_2} from\n"
# 306 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "the DEVON RESEARCHER.$"
# 307 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 308 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
@ Unused
# 309 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_TooManyPokemon:
# 310 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Uh-oh, you've got too many Pokémon.\n"
# 311 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "You have no room for this one.$"
# 312 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 313 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_DevelopNewPokenavFeature:
# 314 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I'm trying to develop a new feature\n"
# 315 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "for the PokéNav…\p"
# 316 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "But it's not going well.$"
# 317 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 318 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_WhatToWorkOnNext:
# 319 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Well, now what shall I work on\n"
# 320 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "developing next?\p"
# 321 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Our company allows us to make our\n"
# 322 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "inspirations into reality.\p"
# 323 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "One couldn't ask for a better\n"
# 324 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "environment as an engineer.$"

RustboroCity_DevonCorp_2F_EventScript_DNASplicers::
# 330 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 331 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	faceplayer
# 333 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_unset FLAG_BADGE08_GET, RustboroCity_DevonCorp_2F_EventScript_DNASplicers_2
# 339 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_set FLAG_RECEIVED_DNA_SPLICERS, RustboroCity_DevonCorp_2F_EventScript_DNASplicers_5
# 345 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_DnaSplicersReady, MSGBOX_DEFAULT
# 346 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	special ChoosePartyMon
# 347 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitstate
# 348 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	copyvar VAR_RESULT, VAR_0x8004
# 349 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_NOTHING_CHOSEN, RustboroCity_DevonCorp_2F_EventScript_CancelKyurem
# 350 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 351 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	switch VAR_RESULT
# 352 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case SPECIES_KYUREM, RustboroCity_DevonCorp_2F_EventScript_DNASplicers_9
# 353 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case SPECIES_KYUREM_WHITE, RustboroCity_DevonCorp_2F_EventScript_DNASplicers_9
# 354 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case SPECIES_KYUREM_BLACK, RustboroCity_DevonCorp_2F_EventScript_DNASplicers_9
# 360 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_NotKyurem, MSGBOX_DEFAULT
# 361 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
	end

RustboroCity_DevonCorp_2F_EventScript_DNASplicers_2:
# 334 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_DoingFusionResearch, MSGBOX_DEFAULT
# 335 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
	end

RustboroCity_DevonCorp_2F_EventScript_DNASplicers_5:
# 340 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_GiveUsDataDnaSplicers, MSGBOX_DEFAULT
# 341 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
	end

RustboroCity_DevonCorp_2F_EventScript_DNASplicers_7:
# 365 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_GiveUsDataDnaSplicers, MSGBOX_DEFAULT
# 366 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
	end

RustboroCity_DevonCorp_2F_EventScript_DNASplicers_9:
# 355 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_PleaseTakeTheseSplicers, MSGBOX_DEFAULT
# 356 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	giveitem ITEM_DNA_SPLICERS
# 357 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setflag FLAG_RECEIVED_DNA_SPLICERS
	goto RustboroCity_DevonCorp_2F_EventScript_DNASplicers_7


RustboroCity_DevonCorp_2F_EventScript_CancelKyurem::
# 371 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_DontHaveKyurem, MSGBOX_DEFAULT
# 372 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
	end


RustboroCity_DevonCorp_2F_EventScript_ReinsOfUnity::
# 419 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 420 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	faceplayer
# 422 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_unset FLAG_BADGE08_GET, RustboroCity_DevonCorp_2F_EventScript_ReinsOfUnity_2
# 428 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_set FLAG_RECEIVED_REINS_OF_UNITY, RustboroCity_DevonCorp_2F_EventScript_ReinsOfUnity_5
# 434 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_ReinsReady, MSGBOX_DEFAULT
# 435 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	special ChoosePartyMon
# 436 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitstate
# 437 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	copyvar VAR_RESULT, VAR_0x8004
# 438 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_NOTHING_CHOSEN, RustboroCity_DevonCorp_2F_EventScript_CancelCalyrex
# 439 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 440 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	switch VAR_RESULT
# 441 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case SPECIES_CALYREX, RustboroCity_DevonCorp_2F_EventScript_ReinsOfUnity_9
# 442 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case SPECIES_CALYREX_ICE, RustboroCity_DevonCorp_2F_EventScript_ReinsOfUnity_9
# 443 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case SPECIES_CALYREX_SHADOW, RustboroCity_DevonCorp_2F_EventScript_ReinsOfUnity_9
# 449 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_NotCalyrex, MSGBOX_DEFAULT
# 450 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
	end

RustboroCity_DevonCorp_2F_EventScript_ReinsOfUnity_2:
# 423 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_DoingFusionResearch, MSGBOX_DEFAULT
# 424 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
	end

RustboroCity_DevonCorp_2F_EventScript_ReinsOfUnity_5:
# 429 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_GiveUsDataReinsOfUnity, MSGBOX_DEFAULT
# 430 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
	end

RustboroCity_DevonCorp_2F_EventScript_ReinsOfUnity_7:
# 454 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_GiveUsDataReinsOfUnity, MSGBOX_DEFAULT
# 455 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
	end

RustboroCity_DevonCorp_2F_EventScript_ReinsOfUnity_9:
# 444 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_PleaseTakeTheseReins, MSGBOX_DEFAULT
# 445 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	giveitem ITEM_REINS_OF_UNITY
# 446 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setflag FLAG_RECEIVED_REINS_OF_UNITY
	goto RustboroCity_DevonCorp_2F_EventScript_ReinsOfUnity_7


RustboroCity_DevonCorp_2F_EventScript_CancelCalyrex::
# 460 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_DontHaveCalyrex, MSGBOX_DEFAULT
# 461 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
	end


RustboroCity_DevonCorp_2F_EventScript_NFusions::
# 499 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 500 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	faceplayer
# 502 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_unset FLAG_BADGE08_GET, RustboroCity_DevonCorp_2F_EventScript_NFusions_2
# 508 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_set FLAG_RECEIVED_NECROZMA_FUSION, RustboroCity_DevonCorp_2F_EventScript_NFusions_5
# 514 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_NFusionsReady, MSGBOX_DEFAULT
# 515 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	special ChoosePartyMon
# 516 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitstate
# 517 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	copyvar VAR_RESULT, VAR_0x8004
# 518 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_NOTHING_CHOSEN, RustboroCity_DevonCorp_2F_EventScript_CancelNecrozma
# 519 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 520 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	switch VAR_RESULT
# 521 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case SPECIES_NECROZMA, RustboroCity_DevonCorp_2F_EventScript_NFusions_9
# 522 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case SPECIES_NECROZMA_DUSK_MANE, RustboroCity_DevonCorp_2F_EventScript_NFusions_9
# 523 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case SPECIES_NECROZMA_DAWN_WINGS, RustboroCity_DevonCorp_2F_EventScript_NFusions_9
# 524 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case SPECIES_NECROZMA_ULTRA, RustboroCity_DevonCorp_2F_EventScript_NFusions_9
# 531 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_NotNecrozma, MSGBOX_DEFAULT
# 532 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
	end

RustboroCity_DevonCorp_2F_EventScript_NFusions_2:
# 503 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_DoingFusionResearch, MSGBOX_DEFAULT
# 504 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
	end

RustboroCity_DevonCorp_2F_EventScript_NFusions_5:
# 509 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_GiveUsDataNFusions, MSGBOX_DEFAULT
# 510 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
	end

RustboroCity_DevonCorp_2F_EventScript_NFusions_7:
# 536 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_GiveUsDataNFusions, MSGBOX_DEFAULT
# 537 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
	end

RustboroCity_DevonCorp_2F_EventScript_NFusions_9:
# 525 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_PleaseTakeTheseNFusions, MSGBOX_DEFAULT
# 526 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	giveitem ITEM_N_SOLARIZER
# 527 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	giveitem ITEM_N_LUNARIZER
# 528 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setflag FLAG_RECEIVED_NECROZMA_FUSION
	goto RustboroCity_DevonCorp_2F_EventScript_NFusions_7


RustboroCity_DevonCorp_2F_EventScript_CancelNecrozma::
# 542 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_DontHaveNecrozma, MSGBOX_DEFAULT
# 543 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
	end


RustboroCity_DevonCorp_2F_Text_DnaSplicersReady::
# 376 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Our research is finally complete!\n"
	.string "I'm looking for a trainer with Kyurem\l"
	.string "who would be willing to try these DNA\l"
	.string "Splicers.\p"
	.string "Do you have a Kyurem?$"

RustboroCity_DevonCorp_2F_Text_PleaseTakeTheseSplicers::
# 384 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Amazing! Here, take these DNA Splicers.$"

RustboroCity_DevonCorp_2F_DoingFusionResearch::
# 388 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "My colleagues and I are doing research\n"
	.string "into fusing various Pokémon species.\p"
	.string "I think our research is progressing\n"
	.string "nicely, but we need a little more time\l"
	.string "until we are ready to give our\l"
	.string "technology to a real trainer.$"

RustboroCity_DevonCorp_2F_Text_GiveUsDataDnaSplicers::
# 397 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "You can use those DNA Splicers to fuse\n"
	.string "Kyurem with either Zekrom or Reshiram.\l"
	.string "You can also un-fuse them if you want!\p"
	.string "You'll have to come back and let us know\n"
	.string "how the fusion technology is\l"
	.string "performing!\p"
	.string "We would love to get more data from\n"
	.string "real-world usage!$"

RustboroCity_DevonCorp_2F_Text_DontHaveKyurem::
# 408 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I see, you don't have Kyurem.$"

RustboroCity_DevonCorp_2F_Text_NotKyurem::
# 411 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "That's not Kyurem.$"

RustboroCity_DevonCorp_2F_Text_ReinsReady::
# 465 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Our research is finally complete!\n"
	.string "I'm looking for a trainer with Calyrex\l"
	.string "who would be willing to try these Reins\l"
	.string "of Unity.\p"
	.string "Do you have a Calyrex?$"

RustboroCity_DevonCorp_2F_Text_PleaseTakeTheseReins::
# 473 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Incredible! Here, take these Reins of\n"
	.string "Unity.$"

RustboroCity_DevonCorp_2F_Text_GiveUsDataReinsOfUnity::
# 478 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "You can use those Reins of Unity to\n"
	.string "fuse Calyrex with either Glastrier or\l"
	.string "Spectrier.\l"
	.string "You can also un-fuse them if you want!\p"
	.string "You'll have to come back and let us know\n"
	.string "how the fusion technology is\l"
	.string "performing!\p"
	.string "We would love to get more data from\n"
	.string "real-world usage!$"

RustboroCity_DevonCorp_2F_Text_DontHaveCalyrex::
# 490 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I see, you don't have Calyrex.$"

RustboroCity_DevonCorp_2F_Text_NotCalyrex::
# 493 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "That's not Calyrex.$"

RustboroCity_DevonCorp_2F_Text_NFusionsReady::
# 547 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Our research is finally complete!\n"
	.string "I'm looking for a trainer with Necrozma\l"
	.string "who would be willing to try this N-\l"
	.string "Solarizer and N-Lunarizer.\p"
	.string "Do you have a Necrozma?$"

RustboroCity_DevonCorp_2F_Text_PleaseTakeTheseNFusions::
# 555 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Wonderful! Here, take this N-Solarizer\n"
	.string "and N-Lunarizer.$"

RustboroCity_DevonCorp_2F_Text_GiveUsDataNFusions::
# 560 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "You can use the N-Solarizer to fuse\n"
	.string "Necrozma with Solgaleo, and you can use\l"
	.string "the N-Lunarizer fuse Necrozma with\l"
	.string "Lunala.\l"
	.string "You can also un-fuse them if you want!\p"
	.string "You'll have to come back and let us know\n"
	.string "how the fusion technology is\l"
	.string "performing!\p"
	.string "We would love to get more data from\n"
	.string "real-world usage!$"

RustboroCity_DevonCorp_2F_Text_DontHaveNecrozma::
# 573 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I see, you don't have Necrozma.$"

RustboroCity_DevonCorp_2F_Text_NotNecrozma::
# 576 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "That's not Necrozma.$"
