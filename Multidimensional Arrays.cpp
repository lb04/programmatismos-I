#include <stdio.h>

int main() {
	int grades[2][5];
	float avar;
	int i;
	int j;
	
	grades[0][0] = 80;
	grades[0][1] = 70;
	grades[0][2] = 65;
	grades[0][3] = 89;
	grades[0][4] = 90;
	
	grades[1][0] = 85;
	grades[1][1] = 80;
	grades[1][2] = 80;
	grades[1][3] = 82;
	grades[1][4] = 87;
	
	
	for (i = 0; i<2; i++){
		avar = 0;
		for (j = 0; j<5; j++){
			avar += grades[i][j]; 
		
		}
		avar = avar/5;
		printf("The average marks obtained in subject %d is: %.2f\n", i, avar);
	}	
	return 0; 
}




	