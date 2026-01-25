#include<stdio.h>
#include<string.h>

int main()
{
	char name[30] = "";
	
	printf("Enter your name: ");
	fgets(name, sizeof(name), stdin);
	name[strlen(name) - 1] = '\0';
	
	if(strlen(name) == 0){
		printf("Your name is empty. Pls enter your name!");
	}
	else{
		printf("ohh, Hello %s", name);
	}
	
	
	return 0;
}
