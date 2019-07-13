/*--------------------------------------------------------
 * CS362 Assignment 3
 * Author: Hyunwook Shin
 * Description: Unit test for initializeGame
 *-------------------------------------------------------*/

#include "dominion.h"
#include "dominion_helpers.h"
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include "rngs.h"
#include <math.h>
#include <stdlib.h>

int main() {
    int seed = 1000;
    int numPlayers = 2;
    int k[10] = {treasure_map, minion, mine, gardens, mine
               , remodel, ambassador, village, baron, great_hall};
    struct gameState G;
   
    initializeGame(numPlayers, k, seed, &G);

    printf("Testing initializeGame function():\n");

    if(G.numPlayers > 0)
	printf("Passed, players are greater than 0.\n");
    else
	printf("Failed, unsuccessful initialization.\n");

    if(G.handCount[1] == 5)
    	printf("Passed, player1 cards are initialized.\n");
    else
	printf("Failed, player1 cards are not initiailized.\n");

    if(G.handCount[2] == 5)
    	printf("Passed, player2 cards are initialized.\n");
    else
	printf("Failed, player2 cards are not initiailized.\n");

    printf("End testing initliazeGame function():\n");

    return 0;
}
