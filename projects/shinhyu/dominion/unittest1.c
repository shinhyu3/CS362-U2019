/*--------------------------------------------------------
 * CS362 Assignment 3
 * Author: Hyunwook Shin
 * Description: Unit test 1 tests baronCard function.
 * From assignment 2 there were 2 bugs that were introduced.
 * 1) nextPlayer adds +2 to currentPlayer and 2) Number of coins
 * gained is reduced to +1 from +4. Unit test will examine
 * both scenarios and find bugs.
 *-------------------------------------------------------*/

#include "dominion.h"
#include "dominion_helpers.h"
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include "rngs.h"
#include <stdlib.h>
#include <math.h>

int main() {
    int seed = 1000;
    int numPlayers = 2;
    int player = 0;
    int choice1 = 0, choice2 = 0, choice3 = 0, handPos = 0, bonus = 0;
    int k[10] = {adventurer, council_room, feast, gardens, mine
               , remodel, smithy, village, baron, great_hall};
    struct gameState G, test;
    
    initializeGame(numPlayers, k, seed, &G);
    
    printf("TESTING baronCard function():\n");
    
    memcpy(&test, &G, sizeof(struct gameState));
    cardEffect(baron, choice1, choice2, choice3, &G, handPos, &bonus);
    player = whoseTurn(&test);

    if(G.hand[player][test.handCount[player]] != -1)
        printf("Passed where next player is after current player.\n");
    else
	printf("Failed where next player is after current player.\n");

    if(test.coins == G.coins + 4)
	printf("Passed +4 coins gained.\n");
    else
	printf("Failed incorrect amount of coins added.\n");

    if(test.discardCount[player] == G.discardCount[player])
	printf("passed where baron was discarded\n");
    else
	printf("Failed where baron was discarded\n");

    printf("End Testing for BaronCard function().\n");

    return 0;
}
