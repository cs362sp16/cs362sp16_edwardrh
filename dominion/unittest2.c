#include "dominion.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void myassert(){
	
}

//initializeGame(int numPlayers, int kingdomCards[10], int randomSeed, struct gameState *state)

int main(){
	gameState* game = newGame();
	initializeGame(0, 10, 0, game);
	assert();
}