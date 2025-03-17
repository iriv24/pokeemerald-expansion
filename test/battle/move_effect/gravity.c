#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_GRAVITY].effect == EFFECT_GRAVITY);
}

DOUBLE_BATTLE_TEST("Gravity cancels fly and sky drop if they are in the air")
{
    u8 visibility;
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Speed(100); }
        PLAYER(SPECIES_WYNAUT) { Speed(90); }
        OPPONENT(SPECIES_PIDGEY) { Speed(50); }
        OPPONENT(SPECIES_ROOKIDEE) { Speed(45); }
    } WHEN {
        TURN { MOVE(opponentLeft, MOVE_SKY_DROP, target: playerRight); MOVE(opponentRight, MOVE_FLY, target: playerLeft); }
        TURN { MOVE(playerLeft, MOVE_GRAVITY); SKIP_TURN(opponentRight); SKIP_TURN(opponentLeft); }
    } SCENE {
        // turn 1
        MESSAGE("Foe Pidgey used Sky Drop!");
        MESSAGE("Foe Pidgey took Wynaut into the sky!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SKY_DROP, opponentLeft);
        MESSAGE("Foe Rookidee used Fly!");
        MESSAGE("Foe Rookidee flew up high!");
        // turn 2
        MESSAGE("Wobbuffet used Gravity!");
        MESSAGE("Gravity intensified!");
        MESSAGE("Foe Pidgey fell from the sky due to the gravity!");
        MESSAGE("Foe Rookidee fell from the sky due to the gravity!");
        MESSAGE("Foe Pidgey can't use Sky Drop because of gravity!");
        MESSAGE("Foe Rookidee can't use Fly because of gravity!");
    } THEN {
        // all battlers should be visible. assign to var first because expect_eq not working with bitfield address
        visibility = gBattleSpritesDataPtr->battlerData[0].invisible;
        EXPECT_EQ(visibility, 0);
        visibility = gBattleSpritesDataPtr->battlerData[1].invisible;
        EXPECT_EQ(visibility, 0);
        visibility = gBattleSpritesDataPtr->battlerData[2].invisible;
        EXPECT_EQ(visibility, 0);
        visibility = gBattleSpritesDataPtr->battlerData[3].invisible;
        EXPECT_EQ(visibility, 0);
        // ensure moveend properly recorded
        EXPECT_EQ(gLastMoves[0], MOVE_GRAVITY);
    }
}
