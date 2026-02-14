#include<stdio.h>

int main(){
	
	int numbers[][3] = {{1, 2, 4}, 
					    {4, 5, 6}, 
					    {7, 8, 9},
					    {10, 11, 12}};
	for(int i = 0; i < 4; i++){// rows
		for(int j = 0; j < 3; j++){ // columns
			printf("%d ", numbers[i][j]);
		}
		printf("\n");
	}				   
	
	
	
	
}
