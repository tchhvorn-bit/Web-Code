#include<stdio.h>
#include<stdbool.h>
int main(){
//use int
	int age = 12;
	int year = 2026;
	int quantity = 3;
//use float
	float gpa = 5.6;
	float price = 35.99;
	float temperature = -10.5;
//use double
	double pi = 3.1415926535;
	double e = 2.71828;
//use char is mean character
	char grade = 'A';
	char sambol = '?';
//use string
	char name[] = "Mazer cute";
	char food[] = "dragon";
//
	printf("You are %d years old\n", age);
	printf("The year is %d\n", year);
	printf("you are orderes %d gun item\n", quantity);
//
	printf("The gpa %f\n", gpa);
	printf("This price for item is $%.2f\n", price);
	printf("temperature is %f\n", temperature);
//
	printf("the value pi is %.2lf\n", pi);
	printf("the value e is %.1lf\n", e);
//
	printf("you are grade %c\n", grade);
	printf("you are good %c\n", sambol);
//
	printf("Haloo %s\n", name);
	printf("My food is %s\n", food);
	return 0;
}
