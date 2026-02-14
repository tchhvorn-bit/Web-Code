#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	
	char caffee[100];
	char key;
	float a = 1.5;
	float b = 1.60;
	float c = 1;
	float d = 1.25;
	float e = 2;
	float f = 2.25;
	float g = 3;
	
	
	printf(">>======== MENUE OF COFFEE =========<<\n");
	printf("\n1. ICELATE\n");
	printf("\t$%.2f\n", a);
	
	printf("\n2. ICE CAPOCHINO\n");
	printf("\t$%.2f\n", b);
	
	printf("\n3. ICE COFFEE\n");
	printf("\t$%.2f\n", c);
	
	printf("\n4. HOT COFFEE\n");
	printf("\t$%.2f\n", d);
	
	printf("\n5. MACHA LATE\n");
	printf("\t$%.2f\n", e);
	
	printf("\n6. MACHA STRAWBERRY\n");
	printf("\t$%.2f\n", f);
	
	printf("\n7. MACHA CREAM\n");
	printf("\t$%.2f\n", g);
	
	
	printf("\n=> ENTER YOUR FAVOURITE COFFEE: ");
	fgets(caffee, sizeof(caffee), stdin);
	
	printf(">>======== CHECK YOUR MENUE ========<<");
}
