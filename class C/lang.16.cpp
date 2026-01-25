#include<stdio.h>
#include<string.h>
int main(){
	
	char name[50] = "";
	
	printf("Enter your name: ");
	fgets(name, sizeof(name),stdin);
	name[strlen(name) - 1] = '\0';
	
	while(strlen(name) == 0){
		printf("Name can't be empty! Pls Enter your name: ");
		fgets(name, sizeof(name),stdin);
		name[strlen(name) - 1] = '\0';
	}
	
	printf("I love you!! %s,", name);
	
	return 0;
}
