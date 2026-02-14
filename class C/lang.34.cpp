#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
	// QUIZ GAME
	
	char questions[][100] = {"What is the largest planet in the solar system?\n",
							 "What is the hottest planet?\n",
							 "What planet has the most moon?\n",
							 "Is the Earth flat?\n"};
	
	char options[][100] = {"A. Jupiter\nB. Satrun\nC. Uranus\nD. Neptune",
							"A. Mercury\nB. Venrs\nC. Earth\nD. Mars",
							"A. Earth\nB. Mars\nC. Jupiter\nD. Saturn",
							"A. Yes\nB. NO\nC. Maybe\nD. Sometime"};
	
	char answerKey[] = {'A','B', 'D', 'B'};
	
	int questionCount = sizeof(questions) / sizeof(questions[0]);
	
	char guess = '\0';
	int score = 0;
	
	printf(">>===== QUIZ GAME =====<<\n");
	
	for(int i = 0; i < questionCount; i++){
		printf("\n%s", questions[i]);
		printf("\n%s\n", options[i]);
		printf("\nEnter your choice: ");
		scanf(" %c", &guess);
		
		guess = toupper(guess);
		
		if(guess == answerKey[i]){
			printf("CORRECT! GOOD JOB.\n");
			score++;
		}
		else{
			printf("WRONG! TRY AGAIN.\n");
		}
	}
	
	printf("\nYour score is %d out of %d points\n", score, questionCount);
}
