#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int getComputerChoice();
int getUserChoice();
void checkWinner(int ComputerChoice, int UserChoice);

int main(){
	
	srand(time(NULL));
	
	printf("=== ROCK PAPER SCISSORS ===\n");
	
	int userChoice = getUserChoice();
	int computerChoice = getComputerChoice();
	
	switch(userChoice){
		case 1:
			printf("\nYou choose ROCK!\n");
			break;
		case 2:
			printf("\nYou choose PAPER!\n");
			break;
		case 3:
			printf("\nYou choose SCISSORS!\n");
			break;
	}
	
	switch(computerChoice){
		case 1:
			printf("ncomputer choose ROCK!\n");
			break;
		case 2:
			printf("computer choose PAPER!\n");
			break;
		case 3:
			printf("computer choose SCISSORS!\n");
			break;
	}
	
	checkWinner(userChoice, computerChoice);
	
	
	return 0;
}
int getComputerChoice(){
	return (rand() % 3) + 1;
		
}
int getUserChoice(){
	
	int choice = 0;
	
	do{
		printf("Choose an option\n");
		printf("1. ROCK!\n");
		printf("2. PAPER!\n");
		printf("3. SCISSOR!\n");
		printf("ENTER YOUR CHOICE: ");
		scanf("%d", &choice);
		
	}while(choice < 1 || choice> 3);
	
	return choice;
	
}
void checkWinner(int userChoice, int computerChoice){
	
	if(userChoice == computerChoice){
		printf("It's a TIE!");		
	}
	else if((userChoice == 1 && computerChoice == 3) ||
			(userChoice == 2 && computerChoice == 1) ||
			(userChoice == 3 && computerChoice == 2)){
		printf("YOU WIN!! GOOD.");
	}
	else{
		printf("You LOSE!");
	}	
}
