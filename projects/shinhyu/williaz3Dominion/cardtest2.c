/*--------------------------------------------------------
 * CS362 Assignment 3
 * Author: Hyunwook Shin
 * Description: Unit test for shuffle
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
    int numplayers1 = 1;
    struct gameState G;

    printf("Testing shuffle function().\n");

    if(shuffle(numplayers1, &G) >= 0)
	printf("Passed, deck was successfully shuffled.\n");
    else
	printf("Failed, deck was not shuffled.\n");

    printf("End Testing for shuffle function().\n");

    return 0;
}
    
    
    
