#include "dominion.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void myassert(){
	
}

//kingdomCards(int k1, int k2, int k3, int k4, int k5, int k6, int k7, int k8, int k9, int k10)

int main(){
	kingdomCards(0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	assert();
	kingdomCards(1, 2, 3, 4, 5, 6, 7, 8, 9, 10);
	assert();
	kingdomCards(10, 9, 8, 7, 6, 5, 4, 3, 2, 1);
	assert();
}