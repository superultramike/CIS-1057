#include <stdio.h>

int main() {

    /*

        To calc mileage reimbursement by the difference between end and begin amount by a rate of $0.35

    */

    double mileBeg, mileEnd, mileDif, reimburse; // ALL INPUTS AND OUTPUTS

    printf("MILEAGE REIMBURSEMENT CALCULATOR\n"); // PRINTS MAIN OBJECTIVE

    printf("Enter beginning odometer reading=> "); // INPUT BEG READING
    scanf("%lf", &mileBeg); // SCAN INPUT AND SAVE DATA

    printf("Enter ending odometer reading=> "); // INPUT ENDING READING
    scanf("%lf", &mileEnd); // SCAN INPUT AND SAVE DATA

    mileDif = mileEnd - mileBeg; // FINDS THE DIFFERENCE BETWEEN 2 VALUES
    reimburse = mileDif*0.35; // FINDS THE REIMBURSEMENT BY MULTIPLY THE RATE

    printf("You traveled %.2lf miles. At $0.35 per mile, your reimbursement is $%.2lf.\n", mileDif, reimburse); // DISPLAYS END RESULT

    return 0;
}
