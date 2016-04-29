#include "dominion.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int failed = 0;

void assertNotNull(gameState* g){
	if (!g){
		printf("TEST FAILED.\n");
		failed = 1;
	}
}

int main(){
	gameState* game = newGame();
	assertNotNull(game);
	if (!failed){
		printf("TEST PASSED.\n");
	}
	return 0;
}