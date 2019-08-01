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
    int choice1 = 0, choice2 = 0, choice3 = 0, handPos = 0, bonus = 0;
    int k[10] = {adventurer, minion, feast, gardens, mine
               , remodel, ambassador, village, baron, tribute};
    struct gameState G, test;
    
    for (i = 0; i < 30; i++)
    {
	 int numPlayers = (rand() % 50);
	 int seed = (rand() % 1000);

    	 initializeGame(numPlayers, k, seed, &G);
    
   	 printf("TESTING tributeCard function():\n");
    
   	 memcpy(&test, &G, sizeof(struct gameState));
   	 cardEffect(tribute, choice1, choice2, choice3, &G, handPos, &bonus);
   	 player = whoseTurn(&test);

         if(test.numActions + 2 == G.numActions)
	     printf("Passed, two extra actions were added.\n");
    	 else
             printf("Failed, two extra actions were not added.\n");

    	 if(test.discardCount[player] == G.discardCount[player])
	     printf("Passed, cards were discarded.\n");
    	 else
	     printf("Failed, cards were not discarded.\n");

         printf("End Testing for ambassadorCard function().\n");

    }
    return 0;
}
