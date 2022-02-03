#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	
	// prints error message if there are no inputs in command line and stops the program
	if (argc == 1){
		printf("Error, please enter a number\n");
		return 0;
		
	}
	
	int input = atoi(argv[1]);
	
	// prints error if the number is smaller than 0 or greater than 999
	if (input < 1 || input > 999){
		printf("Input out of range\n");
		return 0;
	}
	
	// checks if the number is a multiple of 3 or 5 and prints accordingly
	for (int i = 1; i <= input; i++){
	
		if (i % 3 == 0 && i % 5 == 0){
		
			printf("THREEFIVE\n");
		}
		else if (i % 3 == 0){
		
			printf("THREE\n");
		}
		else if (i % 5 == 0){
		
			printf("FIVE\n");
		}
		
		else {
			printf("%d\n", i);
		}
	}
		

}
	
