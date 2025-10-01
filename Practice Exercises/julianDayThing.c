/*
    Write a program to determine the day of the week a person was born given his or her birth date (keyboard input in the form of 5 15 98 for May 15, 1998)
    The following steps should be used to find the day for the week corresponding to any date.
*/
/*
    1:Understand Problem
        1.1: Determine the day of the week a person was born
    2:Present instructions to user
        2.1: Display and save month, day, year
        2.2: Total
    3:Interpret user input
        3.1: Use instructions in lab provided
    4:Display final results
        4.1: Display a switch case for what day of the week it is according to previous output
*/
#include <stdio.h>
#include <math.h>

int main() {

    int month, day, year;
    int total;

    printf("What is your birth date (month, day, year)?: \n");
    scanf("%d %d %d", &month, &day, &year);

    //printf("%.0lf, %.0lf, %.0lf", month, day, year);

    if (year >= 2000) {
        year -= 1;
    }
    else {
        return 0;
    }

    total = ((year % 100) / 4) + (year % 100) + (day);

    printf("total: %d", &total);

    if (month == 4 || month == 7) {

    }
    else if (month == 1 || month == 10) {
        total += 1;
    }

    else if (month == 5) {
        total += 2;
    }

    else if (month == 8) {
        total += 3;
    }

    else if (month == 2 || month == 3 || month == 11) {
        total += 4;
    }

    else if (month == 6) {
        total += 5;
    }

    else if (month == 9 || month == 12) {
        total += 6;
    }

    if (year % 4 == 0) {
        if (year % 100 == 0 && (month == 1 || month == 2)) {
            if (year % 400 == 0 && (month == 1 || month == 2)) {
                total -= 1;
                printf("%d\n", total);
            }
            else {
                printf("%d\n", total);
            }
        }
        else {
            total -= 1;
            printf("%d\n", total);
        }
    }
    else {
        printf("%d\n", total);
    }

    printf("Almost final total: %d", total);

    /*
    switch((total % 7) {
        case 1:
            printf("")
    }
*/
    return 0;
}
