/*
    Write a program that determines the day number (1 to 366) in a year for a date
    that is provided as input data. As an example, January 1, 1994, is day 1.
    December 31, 1993, is day 365. December 31, 1996, is day 366, since 1996 is a leap year.
    A year is a leap year if it is divisible by four, except that any year divisible by 100
    is a leap year only if it is divisible by 400.
    Your program should accept the month, day, and year as integers.
    Include a function leap that returns 1 if called with a leap year, 0 otherwise.
*/
/*
    PSEUDOCODE CODE

    1: DECLARE ALL VARIABLES AND SETUP FUNCTION
    2: PRESENT INSTRUCTIONS TO USER
    3: EQUATE LEAP FUNCTION
    4: USING FUNCTION CREATE DIFFERENT STATEMENTS
*/

#include <stdio.h>

int leap (int year);

int main() {

    int month, day, year, leapyear, daynumber;

    printf("What month is it (just number)?: ");
    scanf("%d", &month);

    printf("What day is it is it (just number)?: ");
    scanf("%d", &day);

    printf("What year is it (just number)?: ");
    scanf("%d", &year);

    // day calculations
    switch (month) {

        // THERE CAN ONLY BE 31 OR LESS DAYS COUNTED, THAT'S WHY THERE'S NO "DAY" OR "LEAP"
        case 1: daynumber = day;
        break;

        case 2: daynumber = 31 + day + leap(year);
        break;

        case 3: daynumber = 59 + day + leap(year);
        break;

        case 4: daynumber = 90 + day + leap(year);
        break;

        case 5: daynumber = 120 + day + leap(year);
        break;

        case 6: daynumber = 151 + day + leap(year);
        break;

        case 7: daynumber = 181 + day + leap(year);
        break;

        case 8: daynumber = 212 + day + leap(year);
        break;

        case 9: daynumber = 242 + day + leap(year);
        break;

        case 10: daynumber = 273 + day + leap(year);
        break;

        case 11: daynumber = 303 + day + leap(year);
        break;

        case 12: daynumber = 334 + day  + leap(year);
        break;

        default: break;
    }

    printf("Your date is %d/%d/%d and the Day number is %d\n", month, day, year, daynumber);

    return 0;
}

int leap (int year) {
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                printf("Is a leap year!");
            }
            else {
                printf("Not a leap year!");
            }
        }
        else {
            printf("Is a leap year!");
        }
    }
    else {
        printf("Not a leap year!");
    }

    return 0;
}

