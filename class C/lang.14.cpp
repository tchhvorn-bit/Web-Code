#include<stdio.h>


void happyBirthday(char name[], int age) {
    printf("\nhappy Birthday to you!");
    printf("\nHappy Birthday to you!");
    printf("\nHappy Birthday dear %s!", name);
    printf("\nHappy Birthday to you!");
    printf("\nyou are %d year old!", age);
    printf("\nI love you so much my little girl.\n");
}

int main() {

    char name[] = "Chhorvy";
    int age = 18;

    happyBirthday(name, age);

    return 0;
}
