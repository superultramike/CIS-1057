/*
    Write a program in C to display the multiplication table of a given integer.

    write vars (n)
    print general instructions

    for loop
        start i at 1
        iterations dependent on user input
        increment by 1
        result = n * i;
        print final results
*/
#include <stdio.h>
#include <math.h>

int main() {

    int n;
    int result;

    printf("Input the number (Table to be calculated): ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++) {
        //printf("%d\n", i);
        result = n * i;
        printf("%d X %d = %d\n", n, i, result);
    }

    return 0;
}
