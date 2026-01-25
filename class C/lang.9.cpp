??#include <stdio.h>

int main(void) {
    int choice = 0;
    float pounds = 0.0f;
    float kilograms = 0.0f;

    printf("Weight Convertion Calculator\n");
    printf("1. Kilograms to Pounds\n");
    printf("2. Pounds to Kilograms\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
    	// kilograms to pounds
        printf("Enter the weight in Kilograms: ");
        scanf("%f", &kilograms);
        pounds = kilograms * 2.20462;
        printf("%.2f Kilograms is equal to %.2f Pounds\n",kilograms, pounds);
    }
    else if (choice == 2) {
    	// Pounds to kilograms
        printf("Enter the weight in Pounds: ");
        scanf("%f", &pounds);
        kilograms = pounds / 2.20462;
        printf("%.2f Pounds is equal to %.2f Kilogram\n",pounds, kilograms);
    }
    else {
        printf("Wrong choice, Pls enter 1 or 2");
    }


    return 0;
}
