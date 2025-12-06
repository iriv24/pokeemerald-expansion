#include "global.h"
#include "test/battle.h"
#include "battle_ai_util.h"

AI_SINGLE_BATTLE_TEST("AI will not further increase Attack / Sp. Atk stat if it knows it faints to target: AI faster")
{
    u16 move;

    PARAMETRIZE { move = MOVE_HOWL; }
    PARAMETRIZE { move = MOVE_CALM_MIND; }

    GIVEN {
        ASSUME(gMovesInfo[MOVE_SKY_UPPERCUT].power == 85);
        ASSUME(gMovesInfo[MOVE_HOWL].effect == EFFECT_ATTACK_UP_USER_ALLY);
        ASSUME(gMovesInfo[MOVE_CALM_MIND].effect == EFFECT_CALM_MIND);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT);
        PLAYER(SPECIES_COMBUSKEN) { Speed(15); Moves(MOVE_SKY_UPPERCUT, MOVE_CELEBRATE); };
        OPPONENT(SPECIES_KANGASKHAN) { Speed(20); Moves(MOVE_CHIP_AWAY, MOVE_SWIFT, move); }
    } WHEN {
        TURN { MOVE(player, MOVE_SKY_UPPERCUT); EXPECT_MOVE(opponent, move); }
        TURN { EXPECT_MOVE(opponent, MOVE_CHIP_AWAY); MOVE(player, MOVE_SKY_UPPERCUT); }
    }
}

AI_SINGLE_BATTLE_TEST("AI will not further increase Attack / Sp. Atk stat if it knows it faints to target: AI slower")
{
    u16 move;

    PARAMETRIZE { move = MOVE_HOWL; }
    PARAMETRIZE { move = MOVE_CALM_MIND; }

    GIVEN {
        ASSUME(gMovesInfo[MOVE_SKY_UPPERCUT].power == 85);
        ASSUME(gMovesInfo[MOVE_HOWL].effect == EFFECT_ATTACK_UP_USER_ALLY);
        ASSUME(gMovesInfo[MOVE_CALM_MIND].effect == EFFECT_CALM_MIND);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT);
        PLAYER(SPECIES_COMBUSKEN) { Speed(20); Moves(MOVE_DOUBLE_KICK, MOVE_CELEBRATE); };
        OPPONENT(SPECIES_KANGASKHAN) { Speed(15); Moves(MOVE_CHIP_AWAY, MOVE_SWIFT, move); }
    } WHEN {
        TURN { MOVE(player, MOVE_DOUBLE_KICK); EXPECT_MOVE(opponent, move); }
        TURN { EXPECT_MOVE(opponent, MOVE_CHIP_AWAY); MOVE(player, MOVE_DOUBLE_KICK); }
    }
}

AI_SINGLE_BATTLE_TEST("AI will increase speed if it is slower")
{
    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT);
        PLAYER(SPECIES_COMBUSKEN) { Speed(20); Moves(MOVE_DOUBLE_KICK, MOVE_CELEBRATE); };
        OPPONENT(SPECIES_KANGASKHAN) { Speed(15); Moves(MOVE_CHIP_AWAY, MOVE_AGILITY); }
    } WHEN {
        TURN { MOVE(player, MOVE_DOUBLE_KICK); EXPECT_MOVE(opponent, MOVE_AGILITY); }
        TURN { EXPECT_MOVE(opponent, MOVE_CHIP_AWAY); MOVE(player, MOVE_DOUBLE_KICK); }
    }
}

AI_SINGLE_BATTLE_TEST("AI will correctly predict what move foe mon going to use")
{
    u16 move;

    PARAMETRIZE { move = MOVE_HOWL; }
    PARAMETRIZE { move = MOVE_CALM_MIND; }

    GIVEN {
        ASSUME(gMovesInfo[MOVE_SKY_UPPERCUT].power == 85);
        ASSUME(gMovesInfo[MOVE_HOWL].effect == EFFECT_ATTACK_UP_USER_ALLY);
        ASSUME(gMovesInfo[MOVE_CALM_MIND].effect == EFFECT_CALM_MIND);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT);
        PLAYER(SPECIES_COMBUSKEN) { Speed(15); Moves(MOVE_SKY_UPPERCUT, MOVE_DOUBLE_KICK, MOVE_FLAME_WHEEL, MOVE_CELEBRATE); };
        OPPONENT(SPECIES_KANGASKHAN) { Speed(20); Moves(MOVE_CHIP_AWAY, MOVE_SWIFT, move); }
    } WHEN {
        TURN { MOVE(player, MOVE_DOUBLE_KICK); EXPECT_MOVE(opponent, move); }
        TURN { EXPECT_MOVE(opponent, MOVE_CHIP_AWAY); MOVE(player, MOVE_SKY_UPPERCUT); }
    }
}

AI_SINGLE_BATTLE_TEST("AI will not use Throat Chop if opposing mon has a better move")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_PSYCHIC_FANGS].power == 85);
        ASSUME(gMovesInfo[MOVE_THROAT_CHOP].power == 80);
        ASSUME(gMovesInfo[MOVE_DISARMING_VOICE].power == 40);
        ASSUME(gMovesInfo[MOVE_FLAME_BURST].power == 70);
        ASSUME(MoveHasAdditionalEffect(MOVE_THROAT_CHOP, MOVE_EFFECT_THROAT_CHOP) == TRUE);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT);
        PLAYER(SPECIES_REGIROCK) { Speed(15); Moves(MOVE_DISARMING_VOICE, MOVE_FLAME_BURST); };
        OPPONENT(SPECIES_WOBBUFFET) { Speed(20); Moves(MOVE_THROAT_CHOP, MOVE_PSYCHIC_FANGS); }
    } WHEN {
        TURN { EXPECT_MOVE(opponent, MOVE_PSYCHIC_FANGS); MOVE(player, MOVE_FLAME_BURST); }
        TURN { EXPECT_MOVE(opponent, MOVE_PSYCHIC_FANGS); MOVE(player, MOVE_DISARMING_VOICE); }
        TURN { EXPECT_MOVE(opponent, MOVE_PSYCHIC_FANGS); MOVE(player, MOVE_FLAME_BURST);}
    }
}

AI_SINGLE_BATTLE_TEST("AI will select Throat Chop if the sound move is the best damaging move from opposing mon")
{
    GIVEN {
        ASSUME(MoveHasAdditionalEffect(MOVE_THROAT_CHOP, MOVE_EFFECT_THROAT_CHOP) == TRUE);
        ASSUME(gMovesInfo[MOVE_PSYCHIC_FANGS].power == 85);
        ASSUME(gMovesInfo[MOVE_THROAT_CHOP].power == 80);
        ASSUME(gMovesInfo[MOVE_FLAME_BURST].power == 70);
        ASSUME(gMovesInfo[MOVE_HYPER_VOICE].power == 90);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT);
        PLAYER(SPECIES_REGIROCK) { Speed(15); Moves(MOVE_HYPER_VOICE, MOVE_FLAME_BURST); };
        OPPONENT(SPECIES_WOBBUFFET) { Speed(20); Moves(MOVE_THROAT_CHOP, MOVE_PSYCHIC_FANGS); }
    } WHEN {
        TURN { EXPECT_MOVE(opponent, MOVE_PSYCHIC_FANGS); MOVE(player, MOVE_FLAME_BURST); }
        TURN { EXPECT_MOVE(opponent, MOVE_PSYCHIC_FANGS); MOVE(player, MOVE_HYPER_VOICE); }
        TURN { EXPECT_MOVE(opponent, MOVE_THROAT_CHOP); MOVE(player, MOVE_HYPER_VOICE);}
    }
}

AI_SINGLE_BATTLE_TEST("Explosion interaction - glalie should correctly score crunch over EQ when high enough HP, or pick explosion when it's viable"){

    u32 hpVal;
    PARAMETRIZE { hpVal = 1; }
    PARAMETRIZE { hpVal = 138; }

    GIVEN{
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_SMART_MON_CHOICES | AI_FLAG_OMNISCIENT);
        PLAYER(SPECIES_CLOYSTER) {
            Level(44);
            HP(68); 
            Item(ITEM_SITRUS_BERRY); 
            Nature(NATURE_ADAMANT);
            Ability(ABILITY_SHELL_ARMOR);
            Moves(MOVE_DETECT, MOVE_RAZOR_SHELL, MOVE_ICICLE_SPEAR, MOVE_ICE_SHARD);
        }
        OPPONENT(SPECIES_GLALIE_MEGA) {
            Level(44);
            HP(hpVal);
            Nature(NATURE_JOLLY);
            Ability(ABILITY_REFRIGERATE);
            Moves(MOVE_RETURN, MOVE_EARTHQUAKE, MOVE_EXPLOSION, MOVE_CRUNCH);
        }
    } WHEN {
        TURN{
            MOVE(player, MOVE_RAZOR_SHELL);
            EXPECT_MOVE(opponent, hpVal == 1 ? MOVE_EXPLOSION : MOVE_EARTHQUAKE);
        }
    }
}

AI_SINGLE_BATTLE_TEST("Explosion interaction - glalie should correctly score crunch over EQ when high enough HP, or pick low sweep over explosion due to explosion negative effect"){

    u32 hpVal;
    PARAMETRIZE { hpVal = 1; }
    PARAMETRIZE { hpVal = 138; }

    GIVEN{
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_SMART_MON_CHOICES | AI_FLAG_OMNISCIENT);
        PLAYER(SPECIES_CLOYSTER) {
            Level(44);
            HP(68); 
            Item(ITEM_SITRUS_BERRY); 
            Nature(NATURE_ADAMANT);
            Ability(ABILITY_SHELL_ARMOR);
            Moves(MOVE_DETECT, MOVE_RAZOR_SHELL, MOVE_ICICLE_SPEAR, MOVE_ICE_SHARD);
        }
        OPPONENT(SPECIES_GLALIE_MEGA) {
            Level(44);
            HP(hpVal);
            Nature(NATURE_JOLLY);
            Ability(ABILITY_REFRIGERATE);
            Moves(MOVE_LOW_SWEEP, MOVE_EARTHQUAKE, MOVE_EXPLOSION, MOVE_CRUNCH);
        }
    } WHEN {
        TURN{
            MOVE(player, MOVE_RAZOR_SHELL);
            EXPECT_MOVE(opponent, hpVal == 1 ? MOVE_LOW_SWEEP : MOVE_LOW_SWEEP);
        }
    }
}

AI_SINGLE_BATTLE_TEST("Guaranteed secondary effect - AI should care about player's moveset for attack and special attack drops (spatk drop vs atk only set)"){
    GIVEN{
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_SMART_MON_CHOICES | AI_FLAG_OMNISCIENT);
        PLAYER(SPECIES_RUNERIGUS){
            Level(59);
            Speed(5);
            Nature(NATURE_RELAXED);
            Ability(ABILITY_SHADOW_SHIELD);
            Moves(MOVE_EARTHQUAKE, MOVE_SCARY_FACE);
        }
        OPPONENT(SPECIES_IRON_VALIANT){
            Level(59);
            Speed(10);
            Item(ITEM_BOOSTER_ENERGY);
            Nature(NATURE_JOLLY);
            Moves(MOVE_CLOSE_COMBAT, MOVE_SPIRIT_BREAK, MOVE_BULK_UP, MOVE_KNOCK_OFF);
        }
    } WHEN {
        TURN{
            MOVE(player, MOVE_SCARY_FACE);
            EXPECT_MOVE(opponent, MOVE_BULK_UP);
        }
    }
}

AI_SINGLE_BATTLE_TEST("Guaranteed secondary effect - AI should care about player's moveset for attack and special attack drops (atk drop vs spatk only set)"){
    GIVEN{
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_SMART_MON_CHOICES | AI_FLAG_OMNISCIENT);
        PLAYER(SPECIES_RUNERIGUS){
            Level(59);
            Speed(5);
            Nature(NATURE_RELAXED);
            Ability(ABILITY_SHADOW_SHIELD);
            Moves(MOVE_SHADOW_BALL, MOVE_SCARY_FACE);
        }
        OPPONENT(SPECIES_IRON_VALIANT){
            Level(59);
            Speed(10);
            Item(ITEM_BOOSTER_ENERGY);
            Nature(NATURE_JOLLY);
            Moves(MOVE_CLOSE_COMBAT, MOVE_LUNGE, MOVE_BULK_UP, MOVE_KNOCK_OFF);
        }
    } WHEN {
        TURN{
            MOVE(player, MOVE_SCARY_FACE);
            EXPECT_MOVE(opponent, MOVE_BULK_UP);
        }
    }
}

AI_SINGLE_BATTLE_TEST("MoveEffectInPlus - AI prefers stat drop to neutral move in 2+HKO cases"){
    GIVEN{
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_SMART_MON_CHOICES | AI_FLAG_OMNISCIENT);
        PLAYER(SPECIES_RUNERIGUS){
            Level(59);
            Speed(5);
            Nature(NATURE_RELAXED);
            Ability(ABILITY_SHADOW_SHIELD);
            Moves(MOVE_SHADOW_BALL, MOVE_SCARY_FACE);
        }
        OPPONENT(SPECIES_IRON_VALIANT){
            Level(59);
            Speed(10);
            Item(ITEM_BOOSTER_ENERGY);
            Nature(NATURE_JOLLY);
            Moves(MOVE_LIQUIDATION, MOVE_AQUA_TAIL);
        }
    } WHEN {
        TURN{
            MOVE(player, MOVE_SCARY_FACE);
            EXPECT_MOVE(opponent, MOVE_LIQUIDATION);
        }
    }
}

AI_SINGLE_BATTLE_TEST("HasMoveToStopSetup - AI should not see self-targeted speed drops as preventing setup moves in 2hko cases"){
    u16 move;
    PARAMETRIZE { move = MOVE_EARTHQUAKE; }
    PARAMETRIZE { move = MOVE_BULLDOZE; }

    GIVEN{
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_SMART_MON_CHOICES | AI_FLAG_OMNISCIENT);
        PLAYER(SPECIES_RHYDON){
            Level(100);
            Nature(NATURE_ADAMANT);
            Item(ITEM_EVIOLITE);
            Speed(1);
            Ability(ABILITY_LIGHTNING_ROD);
            Moves(MOVE_HAMMER_ARM, move);
        }
        OPPONENT(SPECIES_GRIMMSNARL){
            Level(100);
            Nature(NATURE_JOLLY);
            Ability(ABILITY_INFILTRATOR);
            Speed(2);
            HP(331);
            Moves(MOVE_NASTY_PLOT, MOVE_AURA_SPHERE);
        }
    } WHEN {
        TURN{
            MOVE(player, MOVE_HAMMER_ARM);
            EXPECT_MOVE(opponent, move == MOVE_EARTHQUAKE ? MOVE_NASTY_PLOT : MOVE_AURA_SPHERE);
        }
    }
}

AI_SINGLE_BATTLE_TEST("Rapid Spin should prevent secondary hazard effect moves from getting a setup score boost")
{
    ASSUME(MoveHasAdditionalEffectSelf(MOVE_STONE_AXE, MOVE_EFFECT_STEALTH_ROCK));
    ASSUME(MoveHasAdditionalEffectSelf(MOVE_RAPID_SPIN, MOVE_EFFECT_RAPID_SPIN));
    ASSUME(gMovesInfo[MOVE_X_SCISSOR].power == 80);
    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_SMART_MON_CHOICES | AI_FLAG_OMNISCIENT);
        PLAYER(SPECIES_BLASTOISE){ Level(56); Nature(NATURE_ADAMANT); Ability(ABILITY_TORRENT); Item(ITEM_MYSTIC_WATER); Speed(109); Moves(MOVE_FAKE_OUT, MOVE_FLIP_TURN, MOVE_SCALD, MOVE_RAPID_SPIN); }
        OPPONENT(SPECIES_KLEAVOR){ Level(54); Nature(NATURE_JOLLY); Ability(ABILITY_SHARPNESS); Item(ITEM_FOCUS_SASH); Speed(124); Moves(MOVE_STONE_AXE, MOVE_X_SCISSOR, MOVE_ACCELEROCK, MOVE_NIGHT_SLASH); }
    } WHEN {
        TURN { MOVE(player, MOVE_FLIP_TURN); EXPECT_MOVE(opponent, MOVE_X_SCISSOR); }
    }
}
