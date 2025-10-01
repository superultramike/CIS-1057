/*
    Input a positive integer with a fractional part and round to 2 decimal places
*/

#include <stdio.h>

int main() {

    double num; // INPUTS AND OUTPUTS

    printf("Enter a very precise integer (thousandths place or more, ex: 32.4851): "); // ASKS USER FOR INT TO ROUND
    scanf("%lf", &num); // SAVES USER DATA

    printf("%lf was rounded to %.2lf", num, num); // PRINTS USER DATA BUT ROUNDED TO 2 DECIMAL PLACES "%.2LF"

    return 0;
}
