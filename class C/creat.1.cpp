#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	
	int choice;
	float price1 = 2.5;
	float price2 = 1;
	float price3 = 2;
	float price4 = 2.5;
	float price5 = 2.25;
	float price6 = 1.25;
	float price7 = 0.75;
	float price8 = 2.75;
	float price9 = 2.15;
	float price10 = 0.5;
	char key;    
	
	menue:
		system("cls");
		printf(">>======== MENUE OF COFEE AND MACHA ========<<\n");
		printf("\n1. ICE LATE\n");
		printf("2. HOT COFFEE\n");
		printf("3. MACHA LATE\n");
		printf("4. MACHA STRAWBERRY\n");
		printf("5. SAFL COFFEE\n");
		printf("6. PASSION CREAM\n");
		printf("7. ICE COFFEE\n");
		printf("8. ICE CAPOCHINO\n");
		printf("9. STRAWBERRY CREAM\n");
		printf("10. ICE TEA \n");
	
		printf("\nENTER YOUR CHOICE: ");
		scanf("%d", &choice);
	
		switch(choice){
			case 1:
				printf("ICE LATE: $%.2f\n", price1);
				break;
			case 2:
				printf("HOT COFFEE: $%.2f\n", price2);
				break;
			case 3:
				printf("MACHA LATE: $%.2f\n", price3);
				break;
			case 4:
				printf("MACHA STRAWBERRY: $%.2f\n", price4);
				break;
			case 5:
				printf("SAFL COFFEE: $%.2f\n", price5);
				break;
			case 6:
				printf("PASSION CREAM: $%.2f\n", price6);
				break;
			case 7:
				printf("ICE COFFEE: $%.2f\n", price7);
				break;
			case 8:
				printf("ICE CAPOCHINO: $%.2f\n", price8);
				break;
			case 9:
				printf("STRAWBERRY CREAM: $%.2f\n", price9);
				break;
			case 10:
				printf("ICE TEA: $%.2f\n", price10);
				break;
		}
	printf("\n>>======== CHECK YOUR MENUE ========<<\n");	
	
	if(choice == 1){
		printf("\n\tYOU HAVE ORDER < ICI LATE >.\n");
	}
	else if(choice == 2){
		printf("\n\tYOU HAVE ORDER < HOT COFFEE >.\n");
	}
	else if(choice == 3){
		printf("\n\tYOU HAVE ORDER < MACHA LATE >.\n");
	}
	else if(choice == 4){
		printf("\n\tYOU HAVE ORDER < MACHA STRAWBERRY >.\n");
	}
	else if(choice == 5){
		printf("\n\tYOU HAVE ORDER < SAFL COFFEE >.\n");
	}
	else if(choice == 6){
		printf("\n\tYOU HAVE ORDER < PASSION CREAM >.\n");
	}
	else if(choice == 7){
		printf("\n\tYOU HAVE ORDER < ICE COFFEE >.\n");
	}
	else if(choice == 8){
		printf("\n\tYOU HAVE ORDER < ICE CAPOCHINO >.\n");
	}
	else if(choice == 9){
		printf("\n\tYOU HAVE ORDER < STRAWBERRY CREAM >.\n");
	}
	else if(choice == 10){
		printf("\n\tYOU HAVE ORDER < ICE TEA >.\n");
	}
	else{
		printf("\n\tHAVEN'T IN MENUE. PLS ENTER 1-10.\n");
	}
	printf("\nPRESS KEY 'C' OR 'c' TO CHANGE ORDER, KEY 'E' OR 'e' TO ADD ORDER, KEY 'F' TO COMFIRM. \n");
	printf("\nYOUR KEY: ");
	key = getch();
	
	if(key == 'C' || key == 'c' || key == 'E' || key == 'e'){
		goto menue;
	}
	printf("THANK YOU SO MUCH FOR SUPPORTING!! ");
	
	return 0;
}	

