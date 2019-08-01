/*--------------------------------------------------------
 * CS362 Assignment 3
 * Author: Hyunwook Shin
 * Description: Unit test for endTurn function
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
    struct gameState test;

    printf("Testing endTurn function().\n");

    if(endTurn(&test) >= 0)
	printf("Passed, the hand is 0 cards.\n");
    else
	printf("Failed, the hand still has cards.\n");
    
    printf("Ending Test endTurn function().\n");

    return 0;
}
