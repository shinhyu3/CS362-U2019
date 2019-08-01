/*--------------------------------------------------------
 * CS362 Assignment 3
 * Author: Hyunwook Shin
 * Description: Unit test for drawCard function
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
    int player1 = 0;
    struct gameState test;
  
    printf("Testing drawCard function().\n");

    if(drawCard(player1, &test) != -1)
    	printf("Passed, cards were drawn.\n");
    else
	printf("Failed, cards were not drawn.\n");

    printf("Ending test drawCard function().\n");

    return 0;
}
    
