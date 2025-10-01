/*
    Write a function that calculates the square root of a number using this method.

    The square root of a number N (closer overtime)
        NG = 0.5 (LG + N / LG)
    NG is next guess
    LG is last guess (Initial guess of 1)

    Program computes NG and replaces LG on repeat until
    NG and LG are identical within a difference of 0.005 then accept NG as square root

    Sample Data: '4, 120.5, 88, 36.01, 10,000, 0.25'
*/
#include <stdio.h>
#include <math.h>

double square(double n, double LG); // FUNCTION PROTOTYPE

int main() {
    double n, LG; // DECLARE VARIABLES

    printf("Enter the value to square root and initial guess: "); // ASKS FOR USER INPUT
    scanf("%lf %lf", &n, &LG); // SAVES USER INPUT

    square(n, LG); // DECLARE SQUARING FUNCTION

    return 0;
}

double square(double n, double LG) {
    double NG, *a = &LG, *b = &NG, temp; // DECLARES VARIABLES

    do{
        NG = 0.5 * (LG + (n / LG)); // DECLARES EQUATION TO FIND NEXT GUESS

        temp = *b; // TEMP VARIABLE TO HOLD VALUE OF B (NG)
        *b = *a; // VALUE OF B (NG) BECOMES THE VALUE OF A (LG)
        *a = temp; // VALUE OF A (LG) RETURNS TO ORIGINAL VALUE
    }while(fabs(NG * NG - n)>0.005); // DO THIS UNTIL EQUATION IS FALSE

    printf("The approximate root of %.0lf is %lf\n", n, NG); // DISPLAY FINAL RESULTS
}
