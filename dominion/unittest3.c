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

//compare(const void* a, const void* b)

int main(){
	myassert(compare(0, 1) == (-1));
	myassert(compare(1, 0) == 1);
	myassert(compare() == 0);
	if (!failed){
		printf("TEST PASSED.\n");
	}
	return 0;
}