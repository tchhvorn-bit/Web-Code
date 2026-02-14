#include<stdio.h>
#include<string.h>

int main(){
	// ARRAY OF STRING.
	char names[3][40]= {0};
	
	for(int i = 0; i < 3; i++){
		printf("Enter your name: ");
	fgets(names[i], sizeof(names[i]), stdin);
	names[i][strlen(names[i]) - 1] = '\0';
	}
	
	for(int i = 0; i < 3; i++){
		printf("\n%s\n", names[i]);
	}
}
