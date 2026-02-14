#include<stdio.h>

int main(){
	// Array and loop
	int scores[6] = {0};
	
	for(int i = 0; i < 6; i++){
		printf("Enter a score: ");
		scanf("%d", &scores[i]);	
	}
	
	for(int i = 0; i < 6; i++){
		printf("%d ", scores[i]);
		
	}
}
