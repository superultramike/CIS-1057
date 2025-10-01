/*
    Write a C program to check
    whether a given number is even or odd.
*/
#include <stdio.h>
#include <math.h>

int main() {

    int num, result;

    printf("Choose a number: ");
    scanf("%d", &num);

    if (num % 2 == 0) { // if the remainder of dividing by 2 is 0 then it is EVEN
        printf("EVEN");
    }
    else {
        printf("ODD");
    }

    return 0;
}
