/*
    PESUDO CODE
    Input:
    Purchase price (30,000)
    The down payment (500)
    the annual rate (12) <-MUST BE CONVERTED
    total num of payments (36,48,60)

    Output:
    The amount borrowed
        AKA The purchase price (minus) down payment

    The monthly payment (including $ sign and 2 deci places)
        mon pay is calc by equation in assignment
*/

#include <stdio.h>
#include <math.h>

int main() {

    double pPrice, dPay, rawAnnRate, convertAnnRate, numPay, aBorrow, monPay; // ALL INPUTS AND OUTPUTS

    printf("What was the price of the car (5000): "); // ASKS USER FOR HOW MUCH CAR WAS
    scanf("%lf", &pPrice); // SAVES INPUT

    printf("What was your down payment (500): "); // ASKS USER FOR DOWN PAYMENT
    scanf("%lf", &dPay); // SAVES INPUT

    printf("What percent is your annual rate (12): "); // ASKS USER FOR WHOLE NUMBER OF ANNUAL RATE SO LIKE "12" OR "10" PERCENT
    scanf("%lf", &rawAnnRate); // SAVES INPUT

    convertAnnRate = (rawAnnRate * 0.01) / 12; // CONVERTS WHOLE NUMBER TO USABLE NUM IN EQUATION

    printf("How many payments are you making (48): "); // ASKS USER FOR HOW MANY PAYMENTS TO PAY OFF CAR (36, 48, 60)
    scanf("%lf", &numPay); // SAVES INPUT

    aBorrow = pPrice - dPay; // SOLVES FOR PRINCIPAL COST (AMOUNT YOU BORROWED)
    monPay = (convertAnnRate * aBorrow) / (1 - (pow(convertAnnRate+1, numPay*-1) )); // SOLVES FOR WHAT THE MONTHLY PAYMENT WILL BE

    printf("To pay off your car payment of $%.2lf, you own $%.2lf per month for %.0lf months.\n", aBorrow, monPay, numPay); // PRINTS FINAL TEXT RESULT

    return 0;
}
