#include<stdio.h>
#include<stdbool.h>
int main(){
//use boolean
	bool online = false;
	if(online){
		printf("You are ONLINE!\n");
	}
	else{
		printf("You are OFFLINE!\n");
	}
	int x = 6;
	int y = 2;
	int z = 0;
//z = x + y;
//z = x - y;
//z = x * y;
//z = x / y;
//z = x % y;
//x--;
//x+=4;
//x-=2;
	printf("%d\n", x);
	
	int age = 0;
	float gpa = 5.2;
	char grade = '\0';
	char name[20] = "";
	printf("Enter your name: ");
	scanf("%d", &age);
	
	printf("Enter your gpa: ");
	scanf("%f", &gpa);
	
	printf("Enter your grade: ");
	scantf("%c", &grade);
	
	printf("%d\n", age);
	printf("%f\n", gpa);
	printf("%c\n", grade);
	printf("%s", name);
	
	
	
}
