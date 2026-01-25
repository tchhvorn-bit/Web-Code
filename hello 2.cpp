#include<stdio.h>
int main(){
	float math = 90.0, eng = 77.50, kh = 99.00;
	float average;
	
	average = (math + kh + eng)/3;
	printf("Math : %.2f\tKh : %.2f\tEng : %.2f\tAverage : %f", math, kh, eng, average);
	
	
	return 0;
	
	
}
