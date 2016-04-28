#include "dominion.c"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void assertNotNull(){
	
}

void testGameCreation(){
	gameState* game = newGame();
	assertNotNull(game);
}