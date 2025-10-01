/*
    The table below shows the normal boiling points of several substances.
    Write a program that prompts the user for the observed boiling point of a substance in °C and
    identifies the substance if the observed boiling point is within 5% of the expected boiling point.
    If the data input is more than 5% higher or lower than any of the boiling points in the table,
    the program should output the message Substance unknown
*/
/*
    PSEUDOCODE CODE

    1: DECLARE ALL VARIABLES AND SETUP FUNCTION
    2: PRESENT INSTRUCTIONS TO USER
    3: EQUATE WITHIN_X_PRESENT FUNCTION
    4: USING FUNCTION CREATE DIFFERENT STATEMENTS
*/
#include <stdio.h>
#include <math.h>

double within_x_percent(double substance, double boilpoint, double boilthresh);

int main() { // MAIN FUNCTION

    double boilpoint; // the boiling point the user inputs
    double boilthresh = .05; // the boiling point threshold
    double WATER = 100; // CAN BE USED FOR REF
    double MERCURY = 357; // CAN BE USED FOR REF
    double COPPER = 1187; // CAN BE USED FOR REF
    double SILVER = 2193; // CAN BE USED FOR REF
    double GOLD = 2660; // CAN BE USED FOR REF

    printf("What is your boiling point?: "); // ASKS USER FOR BOILPOINT
    scanf("%lf", &boilpoint); // SAVES DATA

    // STATEMENTS FOR DIFFERENT SCENARIOS
    if (within_x_percent(WATER, boilpoint, boilthresh)) {
        printf("WATER");
    }
    else if (within_x_percent(MERCURY, boilpoint, boilthresh)) {
        printf("MERCURY");
    }
    else if (within_x_percent(COPPER, boilpoint, boilthresh)) {
        printf("COPPER");
    }
    else if (within_x_percent(SILVER, boilpoint, boilthresh)) {
        printf("SILVER");
    }
    else if (within_x_percent(GOLD, boilpoint, boilthresh)) {
        printf("GOLD");
    }
    else {
        printf("substance unknown");
    }

    return 0;
}

double within_x_percent(double substance, double boilpoint, double boilthresh) {
    return (substance - (boilthresh * substance) <= boilpoint) && (boilpoint <= substance + (boilthresh * substance) );
//             100         0.05         100            98             98          100            0.05        100
//             100               5                                                100                    5
//                     95                        <=    98     AND     98     <=            105
}
