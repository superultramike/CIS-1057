/*
    Write a program in C to display the multiplication table of a given integer.

    (WRONG BELOW)
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

void main() {
    int n;

    printf("Input upto the table number starting from 1 : ");
    scanf("%d",&n);

    printf("Multiplication table from 1 to %d \n",n);

    for(int i=1;i<=10;i++) {                    // number of columns 10
        for(int j=1;j<=n;j++) {                 // number of rows dependent on user input (n)
            if (j<=n-1)                         // a format if statement on whether it's in middle or end
                printf("%dx%d = %d, ",j,i,i*j); // print format for middle statement
            else
                printf("%dx%d = %d.",j,i,i*j); // print format for end statement
        }
        printf("\n");                           // new line each row after each row completed
    }
}
