#include<stdio.h>
int main()
{
	float math, chimetry, physic, khmer, beology, history;
	int total;
	float average;
	
	printf("input score Math: ");
	scanf("%f", &math);
	
	printf("input score Chimetry: ");
	scanf("%f", &chimetry);
	
	printf("input score Physic: ");
	scanf("%f", &physic);
	
	printf("input score khmer: ");
	scanf("%f", &khmer);
	
	printf("input score beology: ");
	scanf("%f", &beology);
	
	printf("input score history: ");
	scanf("%f", &history);
	
	total = (math + chimetry + physic + khmer + beology + history);
	average = (math + chimetry + physic + khmer + beology + history)/3;
	
	printf("\nScore total is : %d\n", total);
	printf("Average score is : %.2f", average);
	
	
	return 0;
}
