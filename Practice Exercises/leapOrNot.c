/*
    Write a C program to check whether
    a given number is positive or negative.
*/
#include <stdio.h>
#include <math.h>

int main() {

    int year;

    printf("What year is it?: ");
    scanf("%d", &year);

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                printf("Is a leap year!");
            }
            else {
                printf("Not a leap year!");
            }
        }
        else {
            printf("Is a leap year!");
        }
    }
    else {
        printf("Not a leap year!");
    }

    return 0;
}
