#include "dominion.c"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void assert(){
	
}

//compare(const void* a, const void* b)

void testCompare(){
	compare(0, 1);
	assert();
	compare(1, 0);
	assert();
	compare(0, 0);
	assert();
}