#include "dominion.c"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void assert(){
	
}

//initializeGame(int numPlayers, int kingdomCards[10], int randomSeed, struct gameState *state)

void testGameInitialization(){
	gameState* game = newGame();
	initializeGame(0, 10, 0, game);
	assert();
}