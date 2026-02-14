#include<stdio.h>

int main(){
	// array
	
	int numbers[] = {10, 20, 30, 40, 50, 60};
	char grades[] = {'A', 'B', 'C', 'D', 'E', 'F'};
	char name[] = "Chhorvorn";
	
	int size = sizeof(name) / sizeof(name[0]);
	
	for(int i = 0; i < size; i++){
		printf("%c ", name[i]);
	}
	
	return 0;
}
