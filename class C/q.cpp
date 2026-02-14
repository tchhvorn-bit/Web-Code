#include <stdio.h>
int mian() {
    int weight;
    float height;
    float bmi;

    printf("BMI (Body Mass Index) Calculator \n");
    printf("\t Weight in Kilograms:");
    scanf("%d",&weight);
    printf("Height in meters:");
    scanf("%f",&height);
    bmi= weight/(height*height);
    printf("BMI = %.2f",bmi);
    if (bmi < 18.5) {
        printf("Underweight");
    }else if (18.5 && bmi <= 24.9) {
        printf("Healthy Weight");
    }else if (bmi >= 25 && bmi >= 25.9) {
        printf("Overweigh");
    }else if (bmi >= 30) {
        printf("Obesity");
    }

    return 0;
}
