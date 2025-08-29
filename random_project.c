#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int guess = -1; //hold input
	int right; //read input
	int tries = 0; //hold number of attempts
	
	srand(time(NULL)); //random seed
	right = rand() % 100; //random number 1-100 but might only go to 99
	
	while(guess != right){ 
		tries++;
		printf("%d) Your guess: ", tries);
		scanf("%d", &guess);
		if(guess < right){
			printf("too small \n");
		} else if (guess > right){
			printf("too large \n");
		} else {
			printf("correct! \n");
		}
	}
	printf("%d attempts: ", tries);
	return(0);
}

