/*
    Find out if the following info is true for each positive integer.
        Is the value a multiple of 7, 11, or 13?
        Is the sum of the digits odd or even?
        Is the value a prime number?

    Write a function with three type int output parameters
    that send back the answers.

    Sample Data: '104 3773 13 121 77 30751'
*/
#include <stdio.h>

int main() {
    while(1) {
        int n; // DECLARE STARTING VARIABLES

        printf("enter a number: "); // ASK USER FOR NUMBER INPUT
        scanf("%d", &n); // SAVES INPUT OF USER


        if(multiple(n)==1) // IF "MULTIPLE" PRINTF FUNCTION
            printf("%d is divisible by 7, 11 or 13\n", n); // RETURNS A "1" PRINT STATEMENT
        else
            printf("%d is not divisible by 7, 11 or 13\n", n); // OR NOT

        if(evenOrOdd(n)==1) // IF "EVENODD" PRINTF FUNCTION
            printf("%d is even\n", n); // RETURNS A "1" PRINT STATEMENT
        else
            printf("%d is odd\n", n); // OR NOT

        if(prime(n)==1) // IF "PRIME" PRINTF FUNCTION
            printf("%d is prime\n", n); // RETURNS A "1" PRINT STATEMENT
        else
            printf("%d is not prime\n", n); // OR NOT
    }

    return 0;
}

int multiple(int n) { // DECLARING THE FUNCTION FOR "MULTIPLE" SUBPROBLEM
    if(n%7==0) // RETURN 1 IF USER INPUT IS A MULTIPLE OF 7
        return 1;
    if(n%11==0) // RETURN 1 IF USER INPUT IS A MULTIPLE OF 11
        return 1;
    if(n%13==0) // RETURN 1 IF USER INPUT IS A MULTIPLE OF 13
        return 1;

    return 0;
}

int evenOrOdd(int n) { // DECLARING THE FUNCTION FOR "EVEN/ODD" SUBPROBLEM
    if(n % 2 == 0) // RETURN 1 IF USER INPUT IS EVEN
        return 1;

    return 0; // RETURN 0 IF USER INPUT IS ODD
}

int prime(int n) { // DECLARING THE FUNCTION FOR "PRIME" SUBPROBLEM
    if(n % n == 0) { // CONTIUNE IF USER INPUT IS DIVISBLE OF ITSELF
        if(n % 1 == 0){ // RETURN 1 IF USER INPUT IS DIVISBLE BY 1
            return 1;
        }
        else { // RETURN 0 IF NOT
            return 0;
        }
    }
    else // RETURN 0 IF NOT
        return 0;

    return 0;
}
