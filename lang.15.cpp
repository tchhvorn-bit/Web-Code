// function
#include<stdio.h>
#include<stdbool.h>

bool agaCheck(int age) {
    if (age >= 18) {
        return true;
    }
    else {
        return false;
    }
}
int main() {

    int age = 15;
    if (agaCheck(age)) {
        printf("You may sign up");
    }
    else {
        printf("You must be 18+ to sign up");
    }


    return 0;
 
// variable scope

