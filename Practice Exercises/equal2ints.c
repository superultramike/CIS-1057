/*
    Write a C program to accept two integers
    and check whether they are equal or not.
*/
#include <stdio.h>
#include <math.h>

int main() {

    int num1, num2;

    printf("What is your first and second number?\n");
    scanf("%d %d", &num1, &num2);

    if (num1 == num2) {
        printf("Number1 and Number2 are equal");
    }

    else {
        printf("Number1 and Number 2 are NOT equal");
    }

    return 0;
}
