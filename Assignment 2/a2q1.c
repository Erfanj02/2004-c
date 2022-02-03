#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>


int main(int argc, char *argv[]){
	
	
	int k = atoi(argv[1]);
	int n = 0;
	//printf("%d\n", k);
	
	while (k >= 0){
	
		int pid = fork();
		
		if (pid == 0){
		
			printf("Child is working..\n");
			printf("%d\n", k);
			
			while (k != 1) {
				
				if (k % 2 == 0){
				
					k = k/2;
				}
				else {//if (k % 2 == 1){
					
					k = 3 * k + 1;
				}
				
				printf("%d\n", k);
				
					
			}
			
			printf("Child process is done.\n");
			
		}
		
		else {
			
			printf("Parents is waiting on child process...\n");
			wait(&n);
			printf("Parent process is done.\n");
		}
		
		
		return 0;
	}
	

}
