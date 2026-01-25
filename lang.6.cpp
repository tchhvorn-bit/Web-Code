#include<stdio.h>
int main(){
	char grade;
	printf("Your grade is: ");
	scanf("%c", &grade);
	switch(grade){
		case'A':
			printf("Your grade is very good\n"); break;
		case'B':
		case'C':
			printf("well done good");
			break;
		case'D':
		case'E':
			printf("Your passed good luck.");
			break;
		case'F':
			printf("Better try again!!");
		default:
			printf("Your grade haven't in class!!");
			
		
		
	}
	
	return 0;
}
