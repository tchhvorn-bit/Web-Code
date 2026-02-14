#include<stdio.h>

int main(){
	
	int choice;
	printf("--------MENUE-------\n");
	printf("1.Coffe Bar\n");
	printf("2. ICE COFFEE\n");
	printf("3. MACHA LATE\n");
	printf("Enter menue[1-3]:");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			printf("\n\t Coffe Bar");
			break;
		case 2:
			printf("\n\t ICE COFFEE");
			break;
		case 3:
			printf("\n\t MACHA LATE");
			break;
	}

}
