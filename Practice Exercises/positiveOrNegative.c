/*
    Write a C program to check whether
    a given number is positive or negative.
*/
#include <stdio.h>
#include <math.h>

int main() {

    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("POSITIVE");
    }
    else if (num < 0) {
        printf("NEGATIVE");
    }
    else {
        printf("bruh it's zero");
    }

    return 0;
}
