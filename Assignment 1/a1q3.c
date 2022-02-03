#include <stdio.h>
#include <math.h>

int main(){

	int points[2][1000000]; 	// create a large array to handle any number of points
	int a,b = 0;
	int i,x = 0;
	char c;
	FILE* fd = fopen("points.csv", "rw"); 	// creates a pointer to the csv file
	
	// stores the numbers into an array accordingly
	while (fscanf(fd, "%d%c%d", &a, &c, &b) != EOF){
	

		points[0][i] = a;
		points[1][i] = b;
		i++;
				
	}
	
	x = i;
	
	double total = 0;
	
	// calculates the distance between the points and prints
	for(int j = 1; j < x; j++){
	
		double d = sqrt((points[0][j] - points[0][(j-1)]) * (points[0][j] - points[0][(j-1)]) + (points[1][j] - points[1][j]) * (points[1][(j-1)] - points[1][(j-1)])); 
		
		total += d;
		
		printf("%d, %d - %d, %d: %1.0f\n", points[0][j-1], points[1][j-1],points[0][j], points[1][j], d);
	}
	
	printf("Total path: %1.0f", total); 	// prints the total distance
	
	return 0;
	fclose(fd); 	// close the file



}	
