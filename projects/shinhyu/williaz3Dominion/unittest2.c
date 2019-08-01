/*--------------------------------------------------------
 * CS362 Assignment 3
 * Author: Hyunwook Shin
 * Description: Unit test 2 tests minionCard function.
 * From assignment 2 there were 2 bugs that were introduced.
 * 1) Mixes up the parameter list for choice2 and choice1.
 * 2) the i parameter is changed from 4 to 2 so the number
 * of cards a player draws is reduced to 2.
 *-------------------------------------------------------*/

#include "dominion.h"
#include "dominion_helpers.h"
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include "rngs.h"

int main() {
    int seed = 1000;
    int numPlayers = 2;
    int player = 0;
    int choice1 = 0, choice2 = -1, choice3 = 0, handPos = 0, bonus = 0;
    int k[10] = {adventurer, minion, feast, gardens, mine
               , remodel, smithy, village, baron, great_hall};
    struct gameState G, test;
    
    initializeGame(numPlayers, k, seed, &G);
    
    printf("TESTING minionCard function():\n");
    
    memcpy(&test, &G, sizeof(struct gameState));
    cardEffect(minion, choice1, choice2, choice3, &G, handPos, &bonus);

    player = whoseTurn(&test);

    if(test.handCount[player]-1 == -G.handCount[player])
        printf("Passed, choice1 and choice2 were correctly passed.\n");
    else
	printf("Failed, choice1 and choice2 were not passed in the correct order.\n");

    if(test.handCount[player] + 4 == G.handCount[player])
	printf("Passed, correct number of cards were drawn.\n");
    else
	printf("Failed, incorrect number of cards were drawn.\n");
    
    printf("End Testing for minionCard function().\n");

    return 0;
}
