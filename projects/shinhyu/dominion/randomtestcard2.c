/*--------------------------------------------------------
 * CS362 Assignment 3
 * Author: Hyunwook Shin
 *-------------------------------------------------------*/

#include "dominion.h"
#include "dominion_helpers.h"
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include "rngs.h"
#include <stdlib.h>
#include <time.h>

int main() {

    srand(time(NULL));

    int i;
    int player = 0;
    int choice1 = 0, choice2 = -1, choice3 = 0, handPos = 0, bonus = 0;
    int k[10] = {adventurer, minion, feast, gardens, mine
               , remodel, smithy, village, baron, great_hall};
    struct gameState G, test;
    
    for (i = 0; i < 30; i++)
    {
	 int numPlayers = (rand() % 50);
	 int seed = (rand() % 1000);

   	 initializeGame(numPlayers, k, seed, &G);
    
   	 printf("TESTING minionCard function():\n");
    
   	 memcpy(&test, &G, sizeof(struct gameState));
    	 cardEffect(minion, choice1, choice2, choice3, &G, handPos, &bonus);
   	 player = whoseTurn(&test);

   	 if(G.hand[player][test.handCount[player]] != -1)
       	     printf("Passed where next player is after current player.\n");
    	 else
	     printf("Failed where next player is after current player.\n");

    	 if(test.discardCount[player] == G.discardCount[player])
	     printf("Passed where minion was discarded\n");
    	 else
	     printf("Failed where minion was discarded\n");
   
    	 if(test.playedCardCount + 1 == G.playedCardCount)
	     printf("Passed, minion card played.\n");
    	 else
	     printf("Failed, where minion card not played.\n");
   
    	 if(test.numActions + 1 == G.numActions)
	     printf("Passed, an extra action was added.\n");
    	 else
	     printf("Failed, an extra action was not added.\n");

        if(test.handCount[player] + 4 == G.handCount[player])
	     printf("Passed, correct number of cards were drawn.\n");
        else
	     printf("Failed, incorrect number of cards were drawn.\n");
    
        printf("End Testing for minionCard function().\n");
    }
    return 0;
}
