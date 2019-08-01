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
#include <math.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int i;
    int player = 0;
    int choice1 = 0, choice2 = 0, choice3 = 0, handPos = 0, bonus = 0;
    int k[10] = {adventurer, council_room, feast, gardens, mine
               , remodel, smithy, village, baron, great_hall};
    struct gameState G, test;

    for (i = 0; i < 30; i++)
    {
	 int numPlayers = (rand() % 50);
	 int seed = (rand() % 1000);

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
	     printf("Passed where baron was discarded\n");
    	 else
	     printf("Failed where baron was discarded\n");
   
    	 if(test.playedCardCount + 1 == G.playedCardCount)
	     printf("Passed, baron card played.\n");
    	 else
	     printf("Failed, where baron card not played.\n");
   
    	 if(test.numBuys + 1 == G.numBuys)
	     printf("Passed, an extra buy was added.\n");
    	 else
	     printf("Failed, an extra buy was not added.\n");

    	 if(test.supplyCount > 0)
	     printf("Passed, estate card is gained.\n");
    	 else
	     printf("Failed, estate card is not gained.\n");  

         printf("End Testing for BaronCard function().\n");

    }
    return 0;
}
