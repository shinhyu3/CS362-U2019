/*--------------------------------------------------------
 * CS362 Assignment 3
 * Author: Hyunwook Shin
 * Description: Unit test 3 tests ambassadorCard function.
 * From assignment 2 there were 2 bugs that were introduced.
 * 1) Variable i is declared at 100 instead of 0.
 * 2) Variable j is declared at 200 instead of 0.
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
    int choice1 = 0, choice2 = 0, choice3 = 0, handPos = 0, bonus = 0;
    int k[10] = {adventurer, minion, feast, gardens, mine
               , remodel, ambassador, village, baron, great_hall};
    struct gameState G, test;
    
    initializeGame(numPlayers, k, seed, &G);
    
    printf("TESTING ambassadorCard function():\n");
    
    memcpy(&test, &G, sizeof(struct gameState));
    cardEffect(ambassador, choice1, choice2, choice3, &G, handPos, &bonus);

    player = whoseTurn(&test);

    if(test.handCount[player] + 2 == G.handCount[player])
	printf("Passed player hand count is correct.\n");
    else
	printf("Failed player hand count is incorrect.\n");

    if(G.hand[player][test.handCount[player]] != -1)
	printf("Passed, variables in correct order.\n");
    else
	printf("Failed, variables in incorrect order.\n");

    printf("end of Testing for ambassadorCard function().\n");

    return 0;
}

    
