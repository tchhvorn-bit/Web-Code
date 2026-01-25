#include<stdio.h>

void checkBalance(float balance);
float deposit();
float withdraw(float balance);

int main(){
	
	// 	BANKING PROGRAM
	
	int choice = 0;
	float balance = 0.0f;
	
	printf("== WELCOME TO THE BANK ===");
	
	do{
		
		printf("\nSELECT AN OPTION:\n");
		printf("\n1. CHECK BALANCE\n");
		printf("2. DEPOSIT MONEY\n");
		printf("3. WITHDRAW MONEY\n");
		printf("4. EXIT!\n");
		printf("\nENTER YOUR CHOICE: ");
		scanf("%d", &choice);
		
		switch(choice){
			case 1:
				checkBalance(balance);
				break;
			case 2:
				balance += deposit();
				break;
			case 3:
				balance -= withdraw(balance);
				break;
			case 4:
				printf("\n THANK YOU FOR USING THE BANK!\n");
				break;
			default:
				printf("\n INCALID CHOICE. PLEASE SELECT 1 - 4. THANK YOU!\n");
		}		
	}while(choice != 4);
	
	return 0;
}

void checkBalance(float balance){
	printf("\nYOUR CURRENT BALANCE IS: $%.2f\n", balance);
}
float deposit(){
	
	float amount = 0.0f;
	
	printf("\nENTER AMOUNT TO DEPOSIT: $");
	scanf("%f", &amount);
	
	if(amount < 0){
		printf("\nINCALID AMOUNT\n");
		return 0.0f;
	} 
	else{
		printf("\nSUCCESSFULLY DEPOSTITER $%.2f\n", amount);
		return amount;
	}
	
}
float withdraw(float balance){
	
	float amount = 0.0f;
	
	printf("\nENTER AMOUNT TO WITDRAW: $");
	scanf("%f", &amount);
	
	if(amount < 0){
		printf("\nINVALID AMOUNT!\n");
		return 0.0f;
	}
	else if(amount > balance){
		printf("\nINSUFFICIENT FUNDS! YOUR BALANCE IS $%.2f\n", balance);
		return 0.0f;
	}
	else{
		printf("\nSUCCESSFULLY WITHDREW $%.2f\n", amount);
		return amount;
	}
	
}
