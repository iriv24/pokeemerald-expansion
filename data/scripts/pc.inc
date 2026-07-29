EventScript_PC::
	lockall
	setvar VAR_0x8004, PC_LOCATION_OTHER
	special DoPCTurnOnEffect
	playse SE_PC_ON
	setflag FLAG_USING_POKEMONPCMENU
	msgbox Text_BootUpPC, MSGBOX_DEFAULT
	goto EventScript_PCMainMenu
	end

EventScript_PCMainMenu::
	message gText_WhichPCShouldBeAccessed
	waitmessage
	special ScriptMenu_CreatePCMultichoice
	waitstate
	goto EventScript_AccessPC
	end

EventScript_AccessPC::
	switch VAR_RESULT
	case 0, EventScript_AccessPokemonStorage
	case 1, EventScript_AccessPlayersPC
	case 2, EventScript_AccessHallOfFame
	case 3, EventScript_TurnOffPC
	case MULTI_B_PRESSED, EventScript_TurnOffPC
	end

EventScript_AccessPlayersPC::
	playse SE_PC_LOGIN
	msgbox gText_AccessedPlayersPC, MSGBOX_DEFAULT
	special PlayerPC
	waitstate
	goto EventScript_PCMainMenu
	end

EventScript_AccessPokemonStorage::
	playse SE_PC_LOGIN
	call_if_unset FLAG_SYS_PC_LANETTE, EventScript_AccessSomeonesPC
	call_if_set FLAG_SYS_PC_LANETTE, EventScript_AccessLanettesPC
	msgbox gText_StorageSystemOpened, MSGBOX_DEFAULT
	special ShowPokemonStorageSystemPC
	waitstate
	goto EventScript_PCMainMenu
	end

EventScript_AccessSomeonesPC::
	msgbox gText_AccessedSomeonesPC, MSGBOX_DEFAULT
	return

EventScript_AccessLanettesPC::
	msgbox gText_AccessedLanettesPC, MSGBOX_DEFAULT
	return

EventScript_TurnOffPC::
	setvar VAR_0x8004, PC_LOCATION_OTHER
	playse SE_PC_OFF
	special DoPCTurnOffEffect
	clearflag FLAG_USING_POKEMONPCMENU
	releaseall
	end

EventScript_AccessHallOfFame::
	goto_if_unset FLAG_SYS_GAME_CLEAR, EventScript_TurnOffPC
	playse SE_PC_LOGIN
	special AccessHallOfFamePC
	waitstate
	goto EventScript_AccessPC
	end

EventScript_AccessPokemonBoxLink::
	playse SE_PC_LOGIN
	msgbox gText_StorageSystemOpened, MSGBOX_DEFAULT
	special ShowPokemonStorageSystemPC
	waitstate
	goto EventScript_TurnOffPC
	end


EventScript_PCLMenu::
	lockall
	setflag FLAG_USING_POKEMONPCMENU
	goto EventScript_PCMainMenuLMenu
	end

EventScript_PCMainMenuLMenu::
	message gText_WhichPCShouldBeAccessed
	waitmessage
	special ScriptMenu_CreatePCMultichoice
	waitstate
	goto EventScript_AccessPCLMenu
	end

EventScript_AccessPCLMenu::
	switch VAR_RESULT
	case 0, EventScript_AccessPokemonStorageLMenu
	case 1, EventScript_AccessPlayersPCLMenu
	case 2, EventScript_AccessHallOfFameLMenu
	case 3, EventScript_TurnOffPCLMenu
	case MULTI_B_PRESSED, EventScript_TurnOffPCLMenu
	end

EventScript_AccessPlayersPCLMenu::
	msgbox gText_AccessedPlayersPC, MSGBOX_DEFAULT
	special PlayerPC
	waitstate
	goto EventScript_PCMainMenuLMenu
	end

EventScript_AccessPokemonStorageLMenu::
	call_if_unset FLAG_SYS_PC_LANETTE, EventScript_AccessSomeonesPCLMenu
	call_if_set FLAG_SYS_PC_LANETTE, EventScript_AccessLanettesPCLMenu
	msgbox gText_StorageSystemOpened, MSGBOX_DEFAULT
	special ShowPokemonStorageSystemPC
	waitstate
	goto EventScript_PCMainMenuLMenu
	end

EventScript_AccessSomeonesPCLMenu::
	msgbox gText_AccessedSomeonesPC, MSGBOX_DEFAULT
	return

EventScript_AccessLanettesPCLMenu::
	msgbox gText_AccessedLanettesPC, MSGBOX_DEFAULT
	return

EventScript_TurnOffPCLMenu::
	clearflag FLAG_USING_POKEMONPCMENU
	releaseall
	end

EventScript_AccessHallOfFameLMenu::
	goto_if_unset FLAG_SYS_GAME_CLEAR, EventScript_TurnOffPCLMenu
	special AccessHallOfFamePC
	waitstate
	goto EventScript_AccessPCLMenu
	end

EventScript_AccessPokemonBoxLinkLMenu::
	msgbox gText_StorageSystemOpened, MSGBOX_DEFAULT
	special ShowPokemonStorageSystemPC
	waitstate
	goto EventScript_TurnOffPCLMenu
	end

EventScript_ReturnPartyItemsLMenu::
    msgbox PartyItemsReturned MSGBOX_SIGN
    end
PartyItemsReturned:
    .string "Party items returned!{COLOR DARK_GRAY}$"
