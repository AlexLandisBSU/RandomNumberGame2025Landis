#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int guess = -1; //hold input
	int right; //hold correct answer
	int tries = 0; //hold number of attempts
	
	char name[20]; //hold name with 20 character limit
	printf("Hello, what is your name? ");
	scanf("%s", name);
	printf("Hello, %s! ", name);
	printf("Let's play a game. \n");
	
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
	printf("%d attempts were needed! \n", tries);
	return(0); 
}

