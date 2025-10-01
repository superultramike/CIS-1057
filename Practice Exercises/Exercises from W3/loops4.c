/*
    Write a program in C to read 10 numbers from keyboard and find their sum and average.

    *establish vars (n, sum, avg)
    *print instructions
    *for loop of 11 (10 print outs)
        *print user input
        *save user input
        *add user input to sum
    *print sum
    *avg = sum / 10
    *print average

*/
#include <stdio.h>

int main() {

    int n;
    double sum, avg;

    printf("Input 10 Numbers\n");

    for(int i=1; i<=10; i++) {
        printf("Number - %d: ", i);
        scanf("%d", &n);
        sum += n;
    }
    printf("The sum of 10 nums is %.0lf\n", sum);
    avg = sum / 10;
    printf("The average is: %.2lf", avg);

    return 0;
}
