/*--------------------------------------------------------
 * CS362 Assignment 3
 * Author: Hyunwook Shin
 * Description: Unit test 5 tests mineCard function.
 * From assignment 2 there were 2 bugs that were introduced.
 * 1) and 2) both OR logical operators in the function are
 * switched to AND operators.  
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
    int k[10] = {treasure_map, minion, mine, gardens, mine
               , remodel, ambassador, village, baron, great_hall};
    struct gameState G, test;
    
    initializeGame(numPlayers, k, seed, &G);
    
    printf("TESTING mineCard function():\n");
    
    memcpy(&test, &G, sizeof(struct gameState));
    cardEffect(mine, choice1, choice2, choice3, &G, handPos, &bonus);
    player = whoseTurn(&test);

    if(test.discardCount[player] == G.discardCount[player])
	printf("Passed, successful discard.\n");
    else
	printf("Failed, unsuccessful discard.\n");

    if(test.deckCount[player]-1 == G.deckCount[player])
	printf("Passed, correct number of cards in deck.\n");
    else
	printf("Failed, incorrect number of cards in deck.\n");

    printf("End Testing for mineCard function().\n");

    return 0;
}
