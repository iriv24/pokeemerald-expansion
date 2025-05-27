# 1 "data/maps/LilycoveCity/scripts.pory"

# 2 "data/maps/LilycoveCity/scripts.pory"
.set LOCALID_WOMAN_1, 19
# 3 "data/maps/LilycoveCity/scripts.pory"
.set LOCALID_MAN_1, 20
# 4 "data/maps/LilycoveCity/scripts.pory"

# 5 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_MapScripts::
# 6 "data/maps/LilycoveCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LilycoveCity_OnTransition
# 7 "data/maps/LilycoveCity/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, LilycoveCity_OnLoad
# 8 "data/maps/LilycoveCity/scripts.pory"
	.byte 0
# 9 "data/maps/LilycoveCity/scripts.pory"

# 10 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_OnTransition:
# 11 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_VISITED_LILYCOVE_CITY
# 12 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_CONTEST_HALL_STATE, 0
# 13 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_REPORTER
# 14 "data/maps/LilycoveCity/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
# 15 "data/maps/LilycoveCity/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 16 "data/maps/LilycoveCity/scripts.pory"
	end
# 17 "data/maps/LilycoveCity/scripts.pory"

# 18 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_OnLoad:
# 19 "data/maps/LilycoveCity/scripts.pory"
	call_if_unset FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, LilycoveCity_EventScript_SetWailmerMetatiles
# 20 "data/maps/LilycoveCity/scripts.pory"
	end
# 21 "data/maps/LilycoveCity/scripts.pory"

# 22 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_SetWailmerMetatiles::
# 23 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 76, 12, METATILE_Lilycove_Wailmer0, TRUE
# 24 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 12, METATILE_Lilycove_Wailmer1, TRUE
# 25 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 76, 13, METATILE_Lilycove_Wailmer2, TRUE
# 26 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 13, METATILE_Lilycove_Wailmer3, TRUE
# 27 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 76, 14, METATILE_Lilycove_Wailmer0_Alt, TRUE
# 28 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 14, METATILE_Lilycove_Wailmer1_Alt, TRUE
# 29 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 76, 15, METATILE_Lilycove_Wailmer2, TRUE
# 30 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 15, METATILE_Lilycove_Wailmer3, TRUE
# 31 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 16, METATILE_Lilycove_Wailmer0_Alt, TRUE
# 32 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 78, 16, METATILE_Lilycove_Wailmer1_Alt, TRUE
# 33 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 17, METATILE_Lilycove_Wailmer2, TRUE
# 34 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 78, 17, METATILE_Lilycove_Wailmer3, TRUE
# 35 "data/maps/LilycoveCity/scripts.pory"
	return
# 36 "data/maps/LilycoveCity/scripts.pory"

# 37 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BerryGentleman::
# 38 "data/maps/LilycoveCity/scripts.pory"
	lock
# 39 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 40 "data/maps/LilycoveCity/scripts.pory"
	dotimebasedevents
# 41 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_DAILY_LILYCOVE_RECEIVED_BERRY, LilycoveCity_EventScript_ReceivedBerry
# 42 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BerrySuitsYou, MSGBOX_DEFAULT
# 43 "data/maps/LilycoveCity/scripts.pory"
	random 10
# 44 "data/maps/LilycoveCity/scripts.pory"
	addvar VAR_RESULT, FIRST_BERRY_INDEX
# 45 "data/maps/LilycoveCity/scripts.pory"
	giveitem VAR_RESULT
# 46 "data/maps/LilycoveCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 47 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_DAILY_LILYCOVE_RECEIVED_BERRY
# 48 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BecauseYoureTrainer, MSGBOX_DEFAULT
# 49 "data/maps/LilycoveCity/scripts.pory"
	release
# 50 "data/maps/LilycoveCity/scripts.pory"
	end
# 51 "data/maps/LilycoveCity/scripts.pory"

# 52 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ReceivedBerry::
# 53 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_PokeblocksSuitPokemon, MSGBOX_DEFAULT
# 54 "data/maps/LilycoveCity/scripts.pory"
	release
# 55 "data/maps/LilycoveCity/scripts.pory"
	end
# 56 "data/maps/LilycoveCity/scripts.pory"

# 57 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Man3::
# 58 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ContestHallInTown, MSGBOX_NPC
# 59 "data/maps/LilycoveCity/scripts.pory"
	end
# 60 "data/maps/LilycoveCity/scripts.pory"

# 61 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Girl::
# 62 "data/maps/LilycoveCity/scripts.pory"
	lock
# 63 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 64 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, LilycoveCity_EventScript_GirlAquaGone
# 65 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_StrangeCaveInCove, MSGBOX_DEFAULT
# 66 "data/maps/LilycoveCity/scripts.pory"
	release
# 67 "data/maps/LilycoveCity/scripts.pory"
	end
# 68 "data/maps/LilycoveCity/scripts.pory"

# 69 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_GirlAquaGone::
# 70 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_GoingToMoveDeleterForHMs, MSGBOX_DEFAULT
# 71 "data/maps/LilycoveCity/scripts.pory"
	release
# 72 "data/maps/LilycoveCity/scripts.pory"
	end
# 73 "data/maps/LilycoveCity/scripts.pory"

# 74 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_RichBoy::
# 75 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ImFromKanto, MSGBOX_NPC
# 76 "data/maps/LilycoveCity/scripts.pory"
	end
# 77 "data/maps/LilycoveCity/scripts.pory"

# 78 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Sailor2::
# 79 "data/maps/LilycoveCity/scripts.pory"
	lock
# 80 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 81 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, LilycoveCity_EventScript_Sailor2AquaGone
# 82 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_TeamAquaBeenTrainingWailmer, MSGBOX_DEFAULT
# 83 "data/maps/LilycoveCity/scripts.pory"
	release
# 84 "data/maps/LilycoveCity/scripts.pory"
	end
# 85 "data/maps/LilycoveCity/scripts.pory"

# 86 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Sailor2AquaGone::
# 87 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SomeonePuntedTeamAquaOut, MSGBOX_DEFAULT
# 88 "data/maps/LilycoveCity/scripts.pory"
	release
# 89 "data/maps/LilycoveCity/scripts.pory"
	end
# 90 "data/maps/LilycoveCity/scripts.pory"

# 91 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Woman2::
# 92 "data/maps/LilycoveCity/scripts.pory"
	lock
# 93 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 94 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, LilycoveCity_EventScript_Woman2AquaGone
# 95 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SomeoneStoleMyPokemon, MSGBOX_DEFAULT
# 96 "data/maps/LilycoveCity/scripts.pory"
	release
# 97 "data/maps/LilycoveCity/scripts.pory"
	end
# 98 "data/maps/LilycoveCity/scripts.pory"

# 99 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Woman2AquaGone::
# 100 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MissingPokemonCameBack, MSGBOX_DEFAULT
# 101 "data/maps/LilycoveCity/scripts.pory"
	release
# 102 "data/maps/LilycoveCity/scripts.pory"
	end
# 103 "data/maps/LilycoveCity/scripts.pory"

# 104 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Man2::
# 105 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ImArtDealer, MSGBOX_NPC
# 106 "data/maps/LilycoveCity/scripts.pory"
	end
# 107 "data/maps/LilycoveCity/scripts.pory"

# 108 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ExpertM1::
# 109 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SeaRemainsForeverYoung, MSGBOX_SIGN
# 110 "data/maps/LilycoveCity/scripts.pory"
	end
# 111 "data/maps/LilycoveCity/scripts.pory"

# 112 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ExpertF::
# 113 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SixtyYearsAgoHusbandProposed, MSGBOX_SIGN
# 114 "data/maps/LilycoveCity/scripts.pory"
	end
# 115 "data/maps/LilycoveCity/scripts.pory"

# 116 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ExpertM2::
# 117 "data/maps/LilycoveCity/scripts.pory"
	lock
# 118 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 119 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, LilycoveCity_EventScript_ExpertM2AquaGone
# 120 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_TeamAquaRenovatedCavern, MSGBOX_DEFAULT
# 121 "data/maps/LilycoveCity/scripts.pory"
	release
# 122 "data/maps/LilycoveCity/scripts.pory"
	end
# 123 "data/maps/LilycoveCity/scripts.pory"

# 124 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ExpertM2AquaGone::
# 125 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_TeamAquaLotGoneForGood, MSGBOX_DEFAULT
# 126 "data/maps/LilycoveCity/scripts.pory"
	release
# 127 "data/maps/LilycoveCity/scripts.pory"
	end
# 128 "data/maps/LilycoveCity/scripts.pory"

# 129 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Sailor1::
# 130 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_HeardTowerCalledSkyPillar, MSGBOX_NPC
# 131 "data/maps/LilycoveCity/scripts.pory"
	end
# 132 "data/maps/LilycoveCity/scripts.pory"

# 133 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_FatMan::
# 134 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SawTallTowerOnRoute131, MSGBOX_NPC
# 135 "data/maps/LilycoveCity/scripts.pory"
	end
# 136 "data/maps/LilycoveCity/scripts.pory"

# 137 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Man1::
# 138 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 139 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_JustArrivedAndSawRarePokemon, MSGBOX_NPC
# 140 "data/maps/LilycoveCity/scripts.pory"
	applymovement LOCALID_MAN_1, Common_Movement_FaceOriginalDirection
# 141 "data/maps/LilycoveCity/scripts.pory"
	end
# 142 "data/maps/LilycoveCity/scripts.pory"

# 143 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Woman1::
# 144 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 145 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_HoneymoonVowToSeeRarePokemon, MSGBOX_NPC
# 146 "data/maps/LilycoveCity/scripts.pory"
	applymovement LOCALID_WOMAN_1, Common_Movement_FaceOriginalDirection
# 147 "data/maps/LilycoveCity/scripts.pory"
	end
# 148 "data/maps/LilycoveCity/scripts.pory"

# 149 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_CitySign::
# 150 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_CitySign, MSGBOX_SIGN
# 151 "data/maps/LilycoveCity/scripts.pory"
	end
# 152 "data/maps/LilycoveCity/scripts.pory"

# 153 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ContestHallSign::
# 154 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ContestHallSign, MSGBOX_SIGN
# 155 "data/maps/LilycoveCity/scripts.pory"
	end
# 156 "data/maps/LilycoveCity/scripts.pory"

# 157 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MotelSign::
# 158 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MotelSign, MSGBOX_SIGN
# 159 "data/maps/LilycoveCity/scripts.pory"
	end
# 160 "data/maps/LilycoveCity/scripts.pory"

# 161 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MuseumSign::
# 162 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 163 "data/maps/LilycoveCity/scripts.pory"
	specialvar VAR_0x8004, CountPlayerMuseumPaintings
# 164 "data/maps/LilycoveCity/scripts.pory"
	switch VAR_0x8004
# 165 "data/maps/LilycoveCity/scripts.pory"
	case 0, LilycoveCity_EventScript_MuseumSignNoPaintings
# 166 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MuseumSignPlayersExhibit, MSGBOX_DEFAULT
# 167 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 168 "data/maps/LilycoveCity/scripts.pory"
	end
# 169 "data/maps/LilycoveCity/scripts.pory"

# 170 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MuseumSignNoPaintings::
# 171 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MuseumSign, MSGBOX_DEFAULT
# 172 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 173 "data/maps/LilycoveCity/scripts.pory"
	end
# 174 "data/maps/LilycoveCity/scripts.pory"

# 175 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_HarborSign::
# 176 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 177 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, LilycoveCity_EventScript_HarborSignFerryReady
# 178 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_HarborSignUnderConstruction, MSGBOX_DEFAULT
# 179 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 180 "data/maps/LilycoveCity/scripts.pory"
	end
# 181 "data/maps/LilycoveCity/scripts.pory"

# 182 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_HarborSignFerryReady::
# 183 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_HarborSign, MSGBOX_DEFAULT
# 184 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 185 "data/maps/LilycoveCity/scripts.pory"
	end
# 186 "data/maps/LilycoveCity/scripts.pory"

# 187 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_TrainerFanClubSign::
# 188 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_TrainerFanClubSign, MSGBOX_SIGN
# 189 "data/maps/LilycoveCity/scripts.pory"
	end
# 190 "data/maps/LilycoveCity/scripts.pory"

# 191 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DepartmentStoreSign::
# 192 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_DepartmentStoreSign, MSGBOX_SIGN
# 193 "data/maps/LilycoveCity/scripts.pory"
	end
# 194 "data/maps/LilycoveCity/scripts.pory"

# 195 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MoveDeletersHouseSign::
# 196 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MoveDeletersHouseSign, MSGBOX_SIGN
# 197 "data/maps/LilycoveCity/scripts.pory"
	end
# 198 "data/maps/LilycoveCity/scripts.pory"

# 199 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ErenYeagerGrunt::
# 200 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_Enemies, MSGBOX_NPC
# 201 "data/maps/LilycoveCity/scripts.pory"
	end
# 202 "data/maps/LilycoveCity/scripts.pory"

# 203 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MetWailmerTrainer::
# 204 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_WailmerLeapOutOfWater, MSGBOX_DEFAULT
# 205 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 206 "data/maps/LilycoveCity/scripts.pory"
	end
# 207 "data/maps/LilycoveCity/scripts.pory"

# 208 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_AquaGrunt1::
# 209 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MovedLootIntoHideoutToday, MSGBOX_NPC
# 210 "data/maps/LilycoveCity/scripts.pory"
	end
# 211 "data/maps/LilycoveCity/scripts.pory"

# 212 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_AquaGrunt2::
# 213 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ChanceToDoBigThings, MSGBOX_NPC
# 214 "data/maps/LilycoveCity/scripts.pory"
	end
# 215 "data/maps/LilycoveCity/scripts.pory"

# 216 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_AquaGrunt3::
# 217 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_DontGoNearCaveInCove, MSGBOX_NPC
# 218 "data/maps/LilycoveCity/scripts.pory"
	end
# 219 "data/maps/LilycoveCity/scripts.pory"

# 220 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_AquaGrunt4::
# 221 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_IfWorldBecomesOurs, MSGBOX_NPC
# 222 "data/maps/LilycoveCity/scripts.pory"
	end
# 223 "data/maps/LilycoveCity/scripts.pory"

# 224 "data/maps/LilycoveCity/scripts.pory"

# 225 "data/maps/LilycoveCity/scripts.pory"

# 226 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_SchoolKidM::
# 227 "data/maps/LilycoveCity/scripts.pory"
	lock
# 228 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 229 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_DoYouKnowAboutBerryBlender, MSGBOX_YESNO
# 230 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq VAR_RESULT, YES, LilycoveCity_EventScript_KnowAboutBerryBlender
# 231 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq VAR_RESULT, NO, LilycoveCity_EventScript_DontKnowAboutBerryBlender
# 232 "data/maps/LilycoveCity/scripts.pory"
	release
# 233 "data/maps/LilycoveCity/scripts.pory"
	end
# 234 "data/maps/LilycoveCity/scripts.pory"

# 235 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_KnowAboutBerryBlender::
# 236 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_FasterSpinBetterPokeblocks, MSGBOX_DEFAULT
# 237 "data/maps/LilycoveCity/scripts.pory"
	return
# 238 "data/maps/LilycoveCity/scripts.pory"

# 239 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DontKnowAboutBerryBlender::
# 240 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ExplainBerryBlender, MSGBOX_DEFAULT
# 241 "data/maps/LilycoveCity/scripts.pory"
	return
# 242 "data/maps/LilycoveCity/scripts.pory"

# 243 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_Enemies:
# 244 "data/maps/LilycoveCity/scripts.pory"
	.string "Hey... If we kill all of our enemies...\n"
# 245 "data/maps/LilycoveCity/scripts.pory"
	.string "over there... will we finally... be free?\p"
# 246 "data/maps/LilycoveCity/scripts.pory"
	.string "...\p"
# 247 "data/maps/LilycoveCity/scripts.pory"
	.string "What the -- I mean uh, look at those \n"
# 248 "data/maps/LilycoveCity/scripts.pory"
	.string "Wailmer! Right Mikayla?$"
# 249 "data/maps/LilycoveCity/scripts.pory"

# 250 "data/maps/LilycoveCity/scripts.pory"

# 251 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MovedLootIntoHideoutToday:
# 252 "data/maps/LilycoveCity/scripts.pory"
	.string "Aaron look! We finally made it to the\n"
# 253 "data/maps/LilycoveCity/scripts.pory"
	.string "sea! Aaron?$"
# 254 "data/maps/LilycoveCity/scripts.pory"

# 255 "data/maps/LilycoveCity/scripts.pory"

# 256 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ChanceToDoBigThings:
# 257 "data/maps/LilycoveCity/scripts.pory"
	.string "I hate seeing Aaron lost in thought\n"
# 258 "data/maps/LilycoveCity/scripts.pory"
	.string "like this, I know Armie does too.$"
# 259 "data/maps/LilycoveCity/scripts.pory"

# 260 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_DontGoNearCaveInCove:
# 261 "data/maps/LilycoveCity/scripts.pory"
	.string "Hey, you!\p"
# 262 "data/maps/LilycoveCity/scripts.pory"
	.string "Don't go near the cave in the cove!\p"
# 263 "data/maps/LilycoveCity/scripts.pory"
	.string "Why? You don't need a reason why!\n"
# 264 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm an adult, so you just listen to me!$"
# 265 "data/maps/LilycoveCity/scripts.pory"

# 266 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_IfWorldBecomesOurs:
# 267 "data/maps/LilycoveCity/scripts.pory"
	.string "If this whole wide world becomes ours,\n"
# 268 "data/maps/LilycoveCity/scripts.pory"
	.string "Team Aqua's, it will be a happier\l"
# 269 "data/maps/LilycoveCity/scripts.pory"
	.string "place for Pokémon, too.$"
# 270 "data/maps/LilycoveCity/scripts.pory"

# 271 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_WailmerLeapOutOfWater:
# 272 "data/maps/LilycoveCity/scripts.pory"
	.string "There! Wailmer!\n"
# 273 "data/maps/LilycoveCity/scripts.pory"
	.string "Leap out of the water now!$"
# 274 "data/maps/LilycoveCity/scripts.pory"

# 275 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_GetLostMessingUpTraining:
# 276 "data/maps/LilycoveCity/scripts.pory"
	.string "Hunh? What do you want?\p"
# 277 "data/maps/LilycoveCity/scripts.pory"
	.string "You're messing up our training,\n"
# 278 "data/maps/LilycoveCity/scripts.pory"
	.string "so can you, like, get lost?$"
# 279 "data/maps/LilycoveCity/scripts.pory"

# 280 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ContestHallInTown:
# 281 "data/maps/LilycoveCity/scripts.pory"
	.string "There's a Pokémon Contest Hall\n"
# 282 "data/maps/LilycoveCity/scripts.pory"
	.string "right in this here town. \p"
# 283 "data/maps/LilycoveCity/scripts.pory"
	.string "That means well-raised Pokémon will\n"
# 284 "data/maps/LilycoveCity/scripts.pory"
	.string "come from all over the country.\p"
# 285 "data/maps/LilycoveCity/scripts.pory"
	.string "My heart swells with excitement!$"
# 286 "data/maps/LilycoveCity/scripts.pory"

# 287 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_StrangeCaveInCove:
# 288 "data/maps/LilycoveCity/scripts.pory"
	.string "Have you seen that strange cave in\n"
# 289 "data/maps/LilycoveCity/scripts.pory"
	.string "the cove at the edge of town?$"
# 290 "data/maps/LilycoveCity/scripts.pory"

# 291 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_GoingToMoveDeleterForHMs:
# 292 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm going to teach my Pokémon some new\n"
# 293 "data/maps/LilycoveCity/scripts.pory"
	.string "moves for entering a contest.$"
# 294 "data/maps/LilycoveCity/scripts.pory"

# 295 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ImFromKanto:
# 296 "data/maps/LilycoveCity/scripts.pory"
	.string "I came from Kanto.\p"
# 297 "data/maps/LilycoveCity/scripts.pory"
	.string "The Hoenn region is beautiful with\n"
# 298 "data/maps/LilycoveCity/scripts.pory"
	.string "all its water and verdant nature.\p"
# 299 "data/maps/LilycoveCity/scripts.pory"
	.string "Hunh? Wait a second…\p"
# 300 "data/maps/LilycoveCity/scripts.pory"
	.string "Could there be rare Pokémon that live\n"
# 301 "data/maps/LilycoveCity/scripts.pory"
	.string "only in this area?$"
# 302 "data/maps/LilycoveCity/scripts.pory"

# 303 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_TeamAquaBeenTrainingWailmer:
# 304 "data/maps/LilycoveCity/scripts.pory"
	.string "Team Aqua's been training their\n"
# 305 "data/maps/LilycoveCity/scripts.pory"
	.string "Wailmer in the cove.\p"
# 306 "data/maps/LilycoveCity/scripts.pory"
	.string "We sailors can't get our boats out\n"
# 307 "data/maps/LilycoveCity/scripts.pory"
	.string "to sea with them in the way!$"
# 308 "data/maps/LilycoveCity/scripts.pory"

# 309 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_SomeonePuntedTeamAquaOut:
# 310 "data/maps/LilycoveCity/scripts.pory"
	.string "Ahoy, did you know?\p"
# 311 "data/maps/LilycoveCity/scripts.pory"
	.string "Someone punted Team Aqua out of\n"
# 312 "data/maps/LilycoveCity/scripts.pory"
	.string "the way for us!\p"
# 313 "data/maps/LilycoveCity/scripts.pory"
	.string "That got the Wailmer out of the cove,\n"
# 314 "data/maps/LilycoveCity/scripts.pory"
	.string "so we can get our boats out again.$"
# 315 "data/maps/LilycoveCity/scripts.pory"

# 316 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_SomeoneStoleMyPokemon:
# 317 "data/maps/LilycoveCity/scripts.pory"
	.string "I was taking a relaxing snooze at the\n"
# 318 "data/maps/LilycoveCity/scripts.pory"
	.string "seaside inn to the sound of waves…\p"
# 319 "data/maps/LilycoveCity/scripts.pory"
	.string "When someone stole my Pokémon!\p"
# 320 "data/maps/LilycoveCity/scripts.pory"
	.string "Who's the abductor?\n"
# 321 "data/maps/LilycoveCity/scripts.pory"
	.string "Team Aqua? Is it Team Aqua?$"
# 322 "data/maps/LilycoveCity/scripts.pory"

# 323 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MissingPokemonCameBack:
# 324 "data/maps/LilycoveCity/scripts.pory"
	.string "My missing Pokémon…\n"
# 325 "data/maps/LilycoveCity/scripts.pory"
	.string "It came back without me noticing!$"
# 326 "data/maps/LilycoveCity/scripts.pory"

# 327 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ImArtDealer:
# 328 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm an art dealer.\p"
# 329 "data/maps/LilycoveCity/scripts.pory"
	.string "I am a buyer and seller of fine art,\n"
# 330 "data/maps/LilycoveCity/scripts.pory"
	.string "especially paintings.\p"
# 331 "data/maps/LilycoveCity/scripts.pory"
	.string "I've heard that the museum here has\n"
# 332 "data/maps/LilycoveCity/scripts.pory"
	.string "magnificent works on exhibit…$"
# 333 "data/maps/LilycoveCity/scripts.pory"

# 334 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_SeaRemainsForeverYoung:
# 335 "data/maps/LilycoveCity/scripts.pory"
	.string "Even as we grow old and wrinkled,\n"
# 336 "data/maps/LilycoveCity/scripts.pory"
	.string "the sea remains forever young with\l"
# 337 "data/maps/LilycoveCity/scripts.pory"
	.string "the vivid brilliance of life…\p"
# 338 "data/maps/LilycoveCity/scripts.pory"
	.string "Fwohoho fwohohohoho…$"
# 339 "data/maps/LilycoveCity/scripts.pory"

# 340 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_SixtyYearsAgoHusbandProposed:
# 341 "data/maps/LilycoveCity/scripts.pory"
	.string "It was sixty years ago that my husband\n"
# 342 "data/maps/LilycoveCity/scripts.pory"
	.string "proposed to me here.\l"
# 343 "data/maps/LilycoveCity/scripts.pory"
	.string "The sea remains as beautiful as ever.\p"
# 344 "data/maps/LilycoveCity/scripts.pory"
	.string "Mufufufu mufufufufufu…$"
# 345 "data/maps/LilycoveCity/scripts.pory"

# 346 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_TeamAquaRenovatedCavern:
# 347 "data/maps/LilycoveCity/scripts.pory"
	.string "Hm, you know of the peculiar cavern\n"
# 348 "data/maps/LilycoveCity/scripts.pory"
	.string "in this cove?\p"
# 349 "data/maps/LilycoveCity/scripts.pory"
	.string "That had been a natural formation,\n"
# 350 "data/maps/LilycoveCity/scripts.pory"
	.string "but then that Team Aqua lot came\l"
# 351 "data/maps/LilycoveCity/scripts.pory"
	.string "along and made their renovations.\p"
# 352 "data/maps/LilycoveCity/scripts.pory"
	.string "They call themselves\n"
# 353 "data/maps/LilycoveCity/scripts.pory"
	.string "the “nature-loving Team Aqua”!\p"
# 354 "data/maps/LilycoveCity/scripts.pory"
	.string "But what they do and what they say\n"
# 355 "data/maps/LilycoveCity/scripts.pory"
	.string "don't match at all!$"
# 356 "data/maps/LilycoveCity/scripts.pory"

# 357 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_TeamAquaLotGoneForGood:
# 358 "data/maps/LilycoveCity/scripts.pory"
	.string "That cave in the cove…\p"
# 359 "data/maps/LilycoveCity/scripts.pory"
	.string "I didn't notice it right away,\n"
# 360 "data/maps/LilycoveCity/scripts.pory"
	.string "but it's completely empty now.\p"
# 361 "data/maps/LilycoveCity/scripts.pory"
	.string "That Team Aqua lot, they must\n"
# 362 "data/maps/LilycoveCity/scripts.pory"
	.string "have gone away for good.$"
# 363 "data/maps/LilycoveCity/scripts.pory"

# 364 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_CitySign:
# 365 "data/maps/LilycoveCity/scripts.pory"
	.string "Lilycove City\p"
# 366 "data/maps/LilycoveCity/scripts.pory"
	.string "“Where the land ends and the\n"
# 367 "data/maps/LilycoveCity/scripts.pory"
	.string "sea begins.”$"
# 368 "data/maps/LilycoveCity/scripts.pory"

# 369 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ContestHallSign:
# 370 "data/maps/LilycoveCity/scripts.pory"
	.string "Pokémon Contest Hall\n"
# 371 "data/maps/LilycoveCity/scripts.pory"
	.string "“The gathering place for trainers!”$"
# 372 "data/maps/LilycoveCity/scripts.pory"

# 373 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MotelSign:
# 374 "data/maps/LilycoveCity/scripts.pory"
	.string "Cove Lily Motel\p"
# 375 "data/maps/LilycoveCity/scripts.pory"
	.string "“Remember us as Cove Lily of\n"
# 376 "data/maps/LilycoveCity/scripts.pory"
	.string "Lilycove.”$"
# 377 "data/maps/LilycoveCity/scripts.pory"

# 378 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MuseumSign:
# 379 "data/maps/LilycoveCity/scripts.pory"
	.string "Lilycove Museum\p"
# 380 "data/maps/LilycoveCity/scripts.pory"
	.string "“Pokémon Masterpiece Collection\n"
# 381 "data/maps/LilycoveCity/scripts.pory"
	.string "on exhibit!”$"
# 382 "data/maps/LilycoveCity/scripts.pory"

# 383 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MuseumSignPlayersExhibit:
# 384 "data/maps/LilycoveCity/scripts.pory"
	.string "Lilycove Museum\p"
# 385 "data/maps/LilycoveCity/scripts.pory"
	.string "“{PLAYER}'s Pokémon Collection\n"
# 386 "data/maps/LilycoveCity/scripts.pory"
	.string "on exhibit!”$"
# 387 "data/maps/LilycoveCity/scripts.pory"

# 388 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_HarborSignUnderConstruction:
# 389 "data/maps/LilycoveCity/scripts.pory"
	.string "Lilycove City Harbor\p"
# 390 "data/maps/LilycoveCity/scripts.pory"
	.string "“The ferry S.S. Tidal is under\n"
# 391 "data/maps/LilycoveCity/scripts.pory"
	.string "construction in Slateport City.\p"
# 392 "data/maps/LilycoveCity/scripts.pory"
	.string "“Service is scheduled to begin\n"
# 393 "data/maps/LilycoveCity/scripts.pory"
	.string "shortly.”$"
# 394 "data/maps/LilycoveCity/scripts.pory"

# 395 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_HarborSign:
# 396 "data/maps/LilycoveCity/scripts.pory"
	.string "Lilycove City Harbor\p"
# 397 "data/maps/LilycoveCity/scripts.pory"
	.string "“Enjoy a delightful cruise on\n"
# 398 "data/maps/LilycoveCity/scripts.pory"
	.string "the ferry S.S. Tidal.”$"
# 399 "data/maps/LilycoveCity/scripts.pory"

# 400 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_TrainerFanClubSign:
# 401 "data/maps/LilycoveCity/scripts.pory"
	.string "Pokémon Trainer Fan Club\p"
# 402 "data/maps/LilycoveCity/scripts.pory"
	.string "The names of trainers are scribbled\n"
# 403 "data/maps/LilycoveCity/scripts.pory"
	.string "all over the sign…$"
# 404 "data/maps/LilycoveCity/scripts.pory"

# 405 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_DepartmentStoreSign:
# 406 "data/maps/LilycoveCity/scripts.pory"
	.string "Lilycove Department Store\p"
# 407 "data/maps/LilycoveCity/scripts.pory"
	.string "“Overflowing with great merchandise\n"
# 408 "data/maps/LilycoveCity/scripts.pory"
	.string "and excitement!\p"
# 409 "data/maps/LilycoveCity/scripts.pory"
	.string "“A great place to find that something\n"
# 410 "data/maps/LilycoveCity/scripts.pory"
	.string "you need!”$"
# 411 "data/maps/LilycoveCity/scripts.pory"

# 412 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MoveDeletersHouseSign:
# 413 "data/maps/LilycoveCity/scripts.pory"
	.string "Egg Move Tutor's House\p"
# 414 "data/maps/LilycoveCity/scripts.pory"
	.string "“Teach Pokémon Egg Moves.”$"
# 415 "data/maps/LilycoveCity/scripts.pory"

# 416 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_DoYouKnowAboutBerryBlender:
# 417 "data/maps/LilycoveCity/scripts.pory"
	.string "Do you know about the machine\n"
# 418 "data/maps/LilycoveCity/scripts.pory"
	.string "Berry Blender?$"
# 419 "data/maps/LilycoveCity/scripts.pory"

# 420 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_FasterSpinBetterPokeblocks:
# 421 "data/maps/LilycoveCity/scripts.pory"
	.string "People have to work together to get it\n"
# 422 "data/maps/LilycoveCity/scripts.pory"
	.string "to spin faster.\p"
# 423 "data/maps/LilycoveCity/scripts.pory"
	.string "The faster you can make it spin, the\n"
# 424 "data/maps/LilycoveCity/scripts.pory"
	.string "better {POKEBLOCK}S you can get, I've heard.$"
# 425 "data/maps/LilycoveCity/scripts.pory"

# 426 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ExplainBerryBlender:
# 427 "data/maps/LilycoveCity/scripts.pory"
	.string "It's used for making a kind of candy\n"
# 428 "data/maps/LilycoveCity/scripts.pory"
	.string "called a {POKEBLOCK}.\p"
# 429 "data/maps/LilycoveCity/scripts.pory"
	.string "If you give a good {POKEBLOCK} to a Pokémon,\n"
# 430 "data/maps/LilycoveCity/scripts.pory"
	.string "its condition will improve by a lot.$"
# 431 "data/maps/LilycoveCity/scripts.pory"

# 432 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_HeardTowerCalledSkyPillar:
# 433 "data/maps/LilycoveCity/scripts.pory"
	.string "I heard there's a tower somewhere out\n"
# 434 "data/maps/LilycoveCity/scripts.pory"
	.string "on the sea routes.\p"
# 435 "data/maps/LilycoveCity/scripts.pory"
	.string "It's called the Sky Pillar, I hear.$"
# 436 "data/maps/LilycoveCity/scripts.pory"

# 437 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_SawTallTowerOnRoute131:
# 438 "data/maps/LilycoveCity/scripts.pory"
	.string "I saw this tall tower somewhere\n"
# 439 "data/maps/LilycoveCity/scripts.pory"
	.string "around Route 131.\p"
# 440 "data/maps/LilycoveCity/scripts.pory"
	.string "Could that possibly be…?$"
# 441 "data/maps/LilycoveCity/scripts.pory"

# 442 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_JustArrivedAndSawRarePokemon:
# 443 "data/maps/LilycoveCity/scripts.pory"
	.string "We just arrived here on our\n"
# 444 "data/maps/LilycoveCity/scripts.pory"
	.string "honeymoon vacation.\p"
# 445 "data/maps/LilycoveCity/scripts.pory"
	.string "We happened to see a Dragon-type\n"
# 446 "data/maps/LilycoveCity/scripts.pory"
	.string "Pokémon flying way up in the sky.\p"
# 447 "data/maps/LilycoveCity/scripts.pory"
	.string "Do cool Pokémon like that live in\n"
# 448 "data/maps/LilycoveCity/scripts.pory"
	.string "the Hoenn region?$"
# 449 "data/maps/LilycoveCity/scripts.pory"

# 450 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_HoneymoonVowToSeeRarePokemon:
# 451 "data/maps/LilycoveCity/scripts.pory"
	.string "On our honeymoon, we vowed to see as\n"
# 452 "data/maps/LilycoveCity/scripts.pory"
	.string "many rare Pokémon as we can.\p"
# 453 "data/maps/LilycoveCity/scripts.pory"
	.string "So we were delighted to see a rare\n"
# 454 "data/maps/LilycoveCity/scripts.pory"
	.string "Pokémon as soon as we arrived.\p"
# 455 "data/maps/LilycoveCity/scripts.pory"
	.string "I mean, we are totally happy!$"

LilycoveCity_EventScript_DawnTrigger1::
# 460 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_0x8008, 1
# 461 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DawnScene
	end


LilycoveCity_EventScript_DawnTrigger2::
# 467 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_0x8008, 2
# 468 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DawnScene
	end


LilycoveCity_EventScript_DawnScene::
# 474 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 475 "data/maps/LilycoveCity/scripts.pory"
	call Route104_EventScript_PlayDawnMusic
# 476 "data/maps/LilycoveCity/scripts.pory"
	applymovement 22, Common_Movement_WalkInPlaceFasterDown
# 477 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 0
# 478 "data/maps/LilycoveCity/scripts.pory"
	applymovement 22, Common_Movement_ExclamationMark
# 479 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 0
# 480 "data/maps/LilycoveCity/scripts.pory"
	applymovement 22, Common_Movement_Delay48
# 481 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 0
# 482 "data/maps/LilycoveCity/scripts.pory"
	delay 30
# 483 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, LilycoveCity_EventScript_DawnApproachPlayer1
# 484 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, LilycoveCity_EventScript_DawnApproachPlayer2
# 485 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DawnRivalBattle
# 486 "data/maps/LilycoveCity/scripts.pory"
	releaseall
	end


LilycoveCity_EventScript_DawnRivalBattle::
# 491 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_Dawn_Greeting
# 492 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_DAWN_LILYCOVE, LilycoveCity_Text_Dawn_Defeated
# 493 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DawnDefeated
	end


LilycoveCity_EventScript_DawnDefeated::
# 498 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_Dawn_MagmaAndAqua
# 499 "data/maps/LilycoveCity/scripts.pory"
	giveitem ITEM_EMPOLEONITE_D
# 500 "data/maps/LilycoveCity/scripts.pory"
	giveitem ITEM_AIR_BALLOON, 10
# 501 "data/maps/LilycoveCity/scripts.pory"
	giveitem ITEM_ASSAULT_VEST
# 502 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_DawnGoodbye
# 503 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DawnExit
	end


LilycoveCity_EventScript_DawnApproachPlayer1::
# 510 "data/maps/LilycoveCity/scripts.pory"
	applymovement 22, LilycoveCity_Movement_DawnApproachPlayer1
# 511 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 0
	return


LilycoveCity_Movement_DawnApproachPlayer1::
# 516 "data/maps/LilycoveCity/scripts.pory"
	walk_right
# 517 "data/maps/LilycoveCity/scripts.pory"
	walk_down
# 518 "data/maps/LilycoveCity/scripts.pory"
	step_end
	return


LilycoveCity_EventScript_DawnApproachPlayer2::
# 522 "data/maps/LilycoveCity/scripts.pory"
	applymovement 22, LilycoveCity_Movement_DawnApproachPlayer2
# 523 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 0
	return


LilycoveCity_Movement_DawnApproachPlayer2::
# 528 "data/maps/LilycoveCity/scripts.pory"
	walk_right
# 529 "data/maps/LilycoveCity/scripts.pory"
	walk_right
# 530 "data/maps/LilycoveCity/scripts.pory"
	walk_down
# 531 "data/maps/LilycoveCity/scripts.pory"
	step_end
	return


LilycoveCity_EventScript_DawnExit::
# 536 "data/maps/LilycoveCity/scripts.pory"
	closemessage
# 537 "data/maps/LilycoveCity/scripts.pory"
	delay 45
# 538 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, LilycoveCity_EventScript_ApplyMovementDawn1
# 539 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, LilycoveCity_EventScript_ApplyMovementDawn2
# 540 "data/maps/LilycoveCity/scripts.pory"
	removeobject 22
# 541 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_DAWN_LILYCOVE
# 542 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_FOUGHT_DAWN_LILYCOVE, 1
# 543 "data/maps/LilycoveCity/scripts.pory"
	delay 30
# 544 "data/maps/LilycoveCity/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 545 "data/maps/LilycoveCity/scripts.pory"
	specialvar VAR_0x8006, GetLevelCapForText
# 546 "data/maps/LilycoveCity/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_0x8006
# 547 "data/maps/LilycoveCity/scripts.pory"
	msgbox LevelCapIncreasedTo, MSGBOX_DEFAULT
# 548 "data/maps/LilycoveCity/scripts.pory"
	waitfanfare
# 549 "data/maps/LilycoveCity/scripts.pory"
	closemessage
# 550 "data/maps/LilycoveCity/scripts.pory"
	delay 30
# 551 "data/maps/LilycoveCity/scripts.pory"
	savebgm MUS_DUMMY
# 552 "data/maps/LilycoveCity/scripts.pory"
	fadedefaultbgm
# 553 "data/maps/LilycoveCity/scripts.pory"
	releaseall
	end


LilycoveCity_EventScript_ApplyMovementDawn1::
# 598 "data/maps/LilycoveCity/scripts.pory"
	applymovement 22, LilycoveCity_EventScript_DawnExit1
# 599 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 0
	return


LilycoveCity_EventScript_DawnExit1::
# 604 "data/maps/LilycoveCity/scripts.pory"
	walk_right
# 605 "data/maps/LilycoveCity/scripts.pory"
	walk_down
# 606 "data/maps/LilycoveCity/scripts.pory"
	walk_down
# 607 "data/maps/LilycoveCity/scripts.pory"
	walk_down
# 608 "data/maps/LilycoveCity/scripts.pory"
	walk_down
# 609 "data/maps/LilycoveCity/scripts.pory"
	walk_down
# 610 "data/maps/LilycoveCity/scripts.pory"
	walk_down
# 611 "data/maps/LilycoveCity/scripts.pory"
	walk_down
# 612 "data/maps/LilycoveCity/scripts.pory"
	walk_down
# 613 "data/maps/LilycoveCity/scripts.pory"
	step_end
	return


LilycoveCity_EventScript_ApplyMovementDawn2::
# 617 "data/maps/LilycoveCity/scripts.pory"
	applymovement 22, LilycoveCity_EventScript_DawnExit2
# 618 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 0
	return


LilycoveCity_EventScript_DawnExit2::
# 623 "data/maps/LilycoveCity/scripts.pory"
	walk_left
# 624 "data/maps/LilycoveCity/scripts.pory"
	walk_down
# 625 "data/maps/LilycoveCity/scripts.pory"
	walk_down
# 626 "data/maps/LilycoveCity/scripts.pory"
	walk_down
# 627 "data/maps/LilycoveCity/scripts.pory"
	walk_down
# 628 "data/maps/LilycoveCity/scripts.pory"
	walk_down
# 629 "data/maps/LilycoveCity/scripts.pory"
	walk_down
# 630 "data/maps/LilycoveCity/scripts.pory"
	walk_down
# 631 "data/maps/LilycoveCity/scripts.pory"
	walk_down
# 632 "data/maps/LilycoveCity/scripts.pory"
	step_end
	return


LilycoveCity_Text_Dawn_Greeting::
# 557 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}! Fancy seeing you here!\p"
	.string "{RIVAL} told me about the amazing\n"
	.string "department store here, so I had to come\l"
	.string "check it out myself.\p"
	.string "It did not disappoint!\p"
	.string "It might even be better than\n"
	.string "the one in Veilstone City back\l"
	.string "home.\p"
	.string "Anyway, it's been a little while,\n"
	.string "what do you say we have a battle?$"

LilycoveCity_Text_Dawn_Defeated::
# 570 "data/maps/LilycoveCity/scripts.pory"
	.string "Crushing it as always, {PLAYER}.$"

LilycoveCity_Text_Dawn_MagmaAndAqua::
# 574 "data/maps/LilycoveCity/scripts.pory"
	.string "Geez, I'm running out of things I can\n"
	.string "give you, hope these will suffice.$"

LilycoveCity_Text_DawnGoodbye::
# 579 "data/maps/LilycoveCity/scripts.pory"
	.string "On a more serious note, I'm starting to\n"
	.string "get a little concerned about Team Aqua\l"
	.string "and Team Magma's activities.\p"
	.string "They seem to be ramping up, and I have a\n"
	.string "bad feeling about all of it...\p"
	.string "I even heard that Elite Four Drake is\n"
	.string "doing some investigating into what's\l"
	.string "been going on.\p"
	.string "You've been doing a great job shutting\n"
	.string "them down, but I think I'm going to call\l"
	.string "a friend of mine in the Sinnoh region.\p"
	.string "I want to see if we can get some\n"
	.string "back-up here, just in case.\p"
	.string "In the meantime, stay safe, {PLAYER},\n"
	.string "and keep up the good work!$"
