#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	
	char coffee1[30] = "1. ICE LATE";
	char coffee2[30] = "2. ICE CAPOCHINO";
	char coffee3[30] = "3. MACHA LATE";
	char coffee4[30] = "4. MACHA STRAWBERRY";
	
	float price1 = 1.25;
	float price2 = 1.5;
	float price3 = 1.75;
	float price4 = 2;
	printf(">>======== MENUE OF COFFEE ========<<\n");
	
	printf("\n%s\n", coffee1);
	printf("%s\n", coffee2);
	printf("%s\n", coffee3);
	printf("%s", coffee4);
	
	printf("ENTER YOUR FAVORITE COFFEE: ");
	fgets(coffee1, sizeof(coffee1), stdin);

	
	if(coffee1 == "ICE LATE"){
		printf("%f", price1);
	}
	else if(coffee2 == "ICE CAPOCHINO"){
		printf("%f", price2);
	}
	
}
