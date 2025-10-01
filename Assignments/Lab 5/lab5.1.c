/*
    Develop a program to display each digit, starting with the rightmost digit.
    Your program should also determine whether or not the number is divisible by 9.
    Test it on the following numbers:
        N = 154368
*/
#include <stdio.h>

int main() {

    int n; // DELCARE USER INPUT VAR
    double test;

    test = 1+2;

    printf("%lf", test);
    printf("Give me a digit: "); // ASKS THE NUMBER FOR INSTRUCTIONS
    scanf("%d", &n); // SAVES USER INPUT

    while(n > 0) { // A WHILE LOOP THAT REPEATS AS LONG AS THE NUM IS GREATER 0

        int d = n % 10; // TAKES USER INPUT AND FINDS RIGHT MOST DIGIT (8 WOULD PRINT ON FIRST EXAMPLE)

        printf("%d\n", d); // PRINTS NEW USER VALUE WITH JUST THE REMAINDER (AKA THE RIGHT MOST DIGIT)

        n = n / 10; // REFORMATS THE USER NUM INTO A NEW NUMBER WITHOUT THE RIGHTMOST DIGIT AVALIABLE
    }
}
