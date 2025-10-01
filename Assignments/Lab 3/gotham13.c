/*
    Calculate population of Gotham city through user input
*/

/*
    Pseudocode/Steps

    1.Prompt User to input what year it is exactly like "2015"
    2. subtract user input from 1990
    3. plug that new number into equation
        P(t)=52.966+2.184t
            t is the num of years since 1990
    4. Display results of predicted populations (NOT IN EXACT THOUSANDS)
*/

#include <stdio.h>
#include <math.h>

double population(double userYear);

int main() { // "HIGH LEVEL" FUNCTION WITH USER INTERACTION AND CALLING LOGIC FUNCTIONS

    double userYear; // INPUTS & OUTPUTS FOR THIS FUNCTION ONLY

    printf("Enter a year after 1990: "); // ASKS USER FOR THE YEAR
    scanf("%lf", &userYear); // SAVES INPUT

    printf("Predicted Gotham City population for %.0lf (in thousands): %.3lf", userYear, population(userYear)); // PREPARES FINAL DISPLAY RESULTS

    return 0;
}

double population(double userYear) { // "LOW LEVEL" FUNCTION WITH LOGIC AND FINAL DISPLAY
    return 52.966 + (2.184 * (userYear - 1990)); // CALCULATES POPULATION (not in thousands);
}
