#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
	
	char name[100];
	int age;
	char gender;
	char Add[1000];
	char pv[50];
	char ut[1000];
	char subject[100];
	char country[100];
	char word;
	
	inform:
		system("cls");
		printf("===== INFORMATION ABOUT YOURSELF =====\n");
		printf("\nEnter Your NAME: ");
		fgets(name, sizeof(name), stdin);
		
		printf("Enter Your AGE: ");
		scanf("%d", &age);
		
		printf("Enter Your GENDER(M or F): ");
		scanf(" %c", &gender); fflush(stdin);
		
		printf("Enter Your ADDRESS: ");
		gets(Add); 
				
		printf("Enter Your PROVINE: ");
		fgets(pv, sizeof(pv), stdin);
		
		printf("Enter Your UNIVERSITY: ");
		fgets(ut, sizeof(ut), stdin);
		
		printf("Enter Your SUBJECT: ");
		fgets(subject, sizeof(subject), stdin);
		
		printf("Enter Your COUNTRY: ");
		fgets(country, sizeof(country), stdin);
	
		printf("\n===== CHECK YOUR INFORMATION =====\n");
		
		printf("\nYOUR NAME: %s", name);
		
		printf("YOUR AGE: %d YEAS OLD\n", age);
		
		printf("YOUR GENDER: %c\n", gender);
		
		printf("YOUR ADDRESS: %s", Add);
		
		printf("YOUR PROVINE NAME: %s", pv);
		
		printf("YOUR UNIVERSITY NAME: %s", ut);
		
		printf("YOUR SUBJECT: %s", subject);
		
		printf("YOUR COUNTRY NAME: %s", country);
	
	printf("\nIF YOU WRONG YOU CAN PRESS 'c' OR 'C' TO COPLETE AGAIN, OR ANY KEY TO EXIT. \n"); 
	printf("\n");
		word = getch(); 
		if(word == 'c' || word == 'C')
			goto inform;
		else{
			printf("THANK YOU!!");
		}
	
	return 0;
}
