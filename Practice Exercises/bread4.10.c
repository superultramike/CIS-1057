/*
    Write a program to control a bread machine.

    DONE: Allow the user to input the type of bread as W for White and S for Sweet.

    DONE: Ask the user if the loaf size is double
        (If the loaf size is double, increase the baking time by 50%.)

    Ask the user if the baking is manual
        (If baking is manual, stop after the loaf-shaping cycle,
         and instruct the user to remove the dough for manual baking.).

    The following table details the time chart for the machine for each bread type.
    Display a statement for each step.

    Use functions to display instructions to the user and to compute the baking time.
*/
/*
    PSEUDOCODE CODE

    1: DECLARE ALL VARIABLES AND SETUP FUNCTION
        1.1: User input bread
        1.2:
    2: PRESENT INSTRUCTIONS FUNCTION TO USER
    4: USING FUNCTION CREATE DIFFERENT STATEMENTS
        4.1:
*/
#include <stdio.h>

char baking_time_function(char bread, char loafSize, char bakingStyle);

int main() { // MAIN FUNCTION
    instructions();

}

void instructions() {

    char bread; // either W or S
    char loafSize; // either S or D
    char bakingStyle; // either M or A
    double totalBakingTime; // total number of minutes needed to make the specific bread

    printf("White (W) or Sweet Bread (S)?: ");
    scanf(" %c", &bread);

    printf("Single (S) or Double Loaf (D)?: ");
    scanf(" %c", &loafSize);

    printf("Manual (M) or Automatic Baking (A)?: ");
    scanf(" %c", &bakingStyle);

    printf(" %c", baking_time_function(bread));

    return 0;
}

char baking_time_function(char bread, char loafSize, char bakingStyle) {
    if (bread == 'W') {
        if (loafSize == 'S') {
            if (bakingStyle == 'M') {

            }
            else if (bakingStyle == 'A') {

            }
        }
        else if (loafSize == 'D'){

        }
    }

    return baking_time_function;
}
