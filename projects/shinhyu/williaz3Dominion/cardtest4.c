/*--------------------------------------------------------
 * CS362 Assignment 3
 * Author: Hyunwook Shin
 * Description: Unit test for getWinners function
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
    int players[1] = {3}; 
    struct gameState test;

    printf("Testing getWinners function().\n");
    
    if(getWinners(&players[0] , &test) >= 0)
	printf("Passed, high score was valid.\n");
    else
  	printf("Failed, high score was invalid.\n");

    printf("End testing for getWinners function().\n");

    return 0;

}
