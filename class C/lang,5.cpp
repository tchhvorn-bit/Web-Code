#include<stdio.h>
int main()
{
	int age = -1;
	
	if(age >= 18){
		printf("You are Adult.");
	}
	else if(age < 0){
		printf("You haven't been born yet.");
	}
	else{
		printf("You are not adult.");
	}
	
	return 0;
}
