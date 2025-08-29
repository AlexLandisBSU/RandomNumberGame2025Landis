#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int guess = -1;
	int correct;
	int tries = 0;
	
	srand(time(NULL));
	
	correct = rand() % 100;
	printf("%d\n", correct);
	return(0);
}

