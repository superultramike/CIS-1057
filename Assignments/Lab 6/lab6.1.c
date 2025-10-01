/*
    Write a program that dispenses money.
    - The user should enter the amount desired (a multiple of 10 dollars)
    - The machine dispenses this amount using the least number of bills.
    - The bills dispensed are 50s, 20s, and 10s.
    - Write a function that determines how many of each kind of bill to dispense.
*/
#include <stdio.h>

int dispenser(int money); // FUNCTION PROTOTYPE

int main() {
    int money; // DECLARE STARTING VARIABLES

    printf("Input value that is a multiple of 10: "); // ASK USER FOR MONEY INPUT (MULTIPLE OF 10)
    scanf("%d", &money); // SAVES INPUT OF USER

    dispenser(money); // CALLS FUNCTION

    return 0;
}

int dispenser(int money) {
    int fifities=0, twenties=0, tens=0, bills=0; // DECLARE STARTING VARIABLES

    while(money >= 50) { // IF THE USER INPUT IS GREATER THEN 50 THEN RUN
        fifities++; // ADD 1 TO "50" COUNT
        bills++; // ADD 1 TO BILLS COUNT
        money-=50; // SUBTRACT 50 FROM USER INPUT
    }
    while(money >= 20) { // IF THE USER INPUT IS GREATER THEN 20 THEN RUN
        twenties++; // ADD 1 TO "20" COUNT
        bills++; // ADD 1 TO BILLS COUNT
        money-=20; // SUBTRACT 20 FROM USER INPUT
    }
    while(money >= 10) { // IF THE USER INPUT IS GREATER THEN 10 THEN RUN
        tens++; // ADD 1 TO "10" COUNT
        bills++; // ADD 1 TO BILLS COUNT
        money-=10; // SUBTRACT 10 FROM USER INPUT
    }
    printf("# of 50s: %d\n", fifities); // PRINT "50" COUNT
    printf("# of 20s: %d\n", twenties); // PRINT "20" COUNT
    printf("# of 10s: %d\n", tens); // PRINT "10" COUNT
    printf("Total Bills: %d\n", bills); // PRINT BILL COUNT
}
