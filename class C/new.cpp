#include<stdio.h>

int main(){
	
	float weight;
	float hight;
	float bmi;
	
	printf("=== BMI CALCULATOR === \n");
	printf("\nEnter Your wright: ");
	scanf("%f", &weight);
	
	printf("Enter Your hight: ");
	scanf("%f", &hight);
	
	bmi = weight / (hight * hight);
	
	printf("YOUR BMI is : %.2f\n", bmi);
	
	if(bmi < 18.5){
		printf("Underweight");
	}
	else if(bmi >= 18.5 && bmi <= 24.9){
		printf("Healthy Weight");
	}
	else if(bmi >= 25 && bmi <= 29.9){
		printf("Overweight");
	}
	else{
		printf("Obesity");
	}
	
	return 0;
	
}
