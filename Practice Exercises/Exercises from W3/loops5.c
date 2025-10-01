/*
    Write a program in C to display the cube of the number up to a given integer.

    *write vars (n)
    *print general instructions

    **for loop
        start i at 1
        iterations dependent on user input
        increment by 1
        result = pow(i, 3)
        print final results
*/
#include <stdio.h>
#include <math.h>

int main() {

    int n;
    int result;

    printf("Pick a num to display the cube upto: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++) {
        //printf("%d\n", i);
        result = pow(i, 3);
        printf("Number is: %d and the cube of the %d is: %d\n", i, i, result);
    }

    return 0;
}
