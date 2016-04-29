#include "dominion.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int failed = 0;

void myassert(int num){
	if (!num){
		printf("TEST FAILED.\n");
		failed = 1;
	}
}

//initializeGame(int numPlayers, int kingdomCards[10], int randomSeed, struct gameState *state)

int main(){
	gameState* game = newGame();
	initializeGame(0, 10, 0, game);
	myassert(game.numPlayers == 0);
	if (!failed){
		printf("TEST PASSED.\n");
	}
	return 0;
}