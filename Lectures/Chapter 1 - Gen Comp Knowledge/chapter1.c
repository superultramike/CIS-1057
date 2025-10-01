#include <stdio.h>
#include <math.h>

#define PI 3.14159
#define ADD(a, b) (a + b)

int main() {

    char c = 'C'; // EH DONT USE
    unsigned char C = 240; // UNSIGNED ALLOWS POSITIVE NUMS
    short s = 12; // EH DONT USE
    int i = 0; // USE AS SINGLULAR NUMBER

    float f = 12.3;
    double dbl = 123.45;    // USE AS NUMBER STANDARD

    /*
    %f is for float
    %d is for double
    %c is for chars
    %s is for strings
    */

    /*
    printf("PI = %f\n", PI); // This prints PI = 3.14...

    printf("ADD(1+2) = %d\n", ADD(1,2) ); // This prints 1+2=3

    printf("c = %c\n", c); // Prints the variable C as a double "C"
    printf("c = %d\n", c); // Prints the variable C as a char "67"

    printf("%d %d \n", s, i); // Prints the variable short "s" & int "i"

    printf("f = %f dbl = %f\n", f, dbl); // Prints variable "f" and "dbl"
    */

    /*

        ALL FUNCTIONS BELOW

    */

    // pyth3();
    // scantest();
    // hw2();
    // mileage();
    // tempfreeze();
    // FtoK();
    // sum_average();

    return 0;
}

void scantest() {

    int a, b, c, d; // ESTABLISHES VARS

    printf("Enter the first value:"); // ALLOWS USER TO TYPE IN NUM VALUE
    scanf("%d", &a); // SCANS NUM VALUE AND SAVES IT "&a"

    printf("Enter the second value:"); // ABOVE
    scanf("%d", &b); // ABOVE

    printf("Enter the third value:"); // ABOVE
    scanf("%d", &c); // ABOVE

    d = a + b + c; // COMBINES VARS INTO EQUATION
    printf("%d + %d + %d = %d\n", a, b, c, d); // PRINTS RESULT OF EQUATION

    return;
}

void pyth3() {
    /*

        Calculate Pythagorean triple

    */

    double m, n; // inputs from user
    double side1, side2, hyp; // Program variables

    // Get m and n from the user
    printf("Enter m: ");
    scanf("%lf", &m);
    printf("Enter n: ");
    scanf("%lf", &n);
    printf("m = %f n = %f\n", m, n);

    // Calc side1
    side1 = m*m - n*n; // THIS IS CHEAPER
    // printf("side1 = %f\n", side1);

    // Calc side2
    side2 = 2*m*n;
    // printf("side2 = %f\n", side2);

    // Calc hyp
    hyp = m*m + n*n;
    //printf("hyp = %f\n", hyp);

    // Print triple
    printf("For m = %f and n = %f, the triple is: (%f, %f, %f).\n", m, n, side1, side2, hyp);

    return;
}

void hw2() {
    /*

        To multiply a number by 2 and then subtract it by 10

    */

    int a, ds; // DECLARES ALL INPUT AND OUTPUTS

    printf("Enter an integer: "); // ALLOWS USER TO TYPE IN NUM VALUE
    scanf("%d", &a); // SCANS NUM AND SAVES IT "&a"

    ds = a*2-10; // DECLARES EQUATION AND TELLS WHAT TO DO WITH PREVIOUS VAR

    printf("%d*2-10=%d\n", a, ds); // EXECUTES EQUATION AND DISPLAYS IT

    return;
}

void mileage() {
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

    return;
}

void tempfreeze() {
    /*

        Estimate the temp in a freezer (in C) given the elapsed time (hours) since failure

    */

    double rawTimeHours, rawTimeMins, convertMinTime, finalTime, finalTemp; // INPUTS AND OUTPUTS

    printf("How many hours since last power failure: "); // INPUT OF TIME IN HOURS
    scanf("%lf", &rawTimeHours); // SCANS INPUT AND SAVES DATA

    printf("How many minutes since last power failure: "); // INPUT OF TIME IN MINS
    scanf("%lf", &rawTimeMins); // SCANS INPUT AND SAVES DATA

    convertMinTime = rawTimeMins/60; // CONVERTS RAW TIME TO READABLE TIME FOR AN EQUATION
    finalTime = rawTimeHours+convertMinTime; // ADDS READABLE HOURS TO READABLE MINS

    finalTemp = ((4*(finalTime*finalTime))/(finalTime+2))-20; // EQUATION FOR CALC FINAL TEMP

    printf("The temperature is estimated to be %.1lf Celsius.", finalTemp); // DISPLAYS FINAL RESULT

    return;
}

void FtoK() {

    double fahrenheit, kelvin; // INPUTS AND OUTPUTS

    printf("What temperature do you want to convert to Kelvin: "); // INPUT OF TEMP
    scanf("%lf", &fahrenheit); // SCANS INPUT AND SAVES DATA

    kelvin = ((fahrenheit-32)*5/9)+273.15; // CONVERTS TEMP TO KELVIN

    printf("%.3lf", kelvin); // PRINTS CONVERSION

    return 0;
}

void sum_average() {
    double one, two, sum, average;

    printf("Enter your first integer: ");
    scanf("%lf", &one);

    printf("Enter your second integer: ");
    scanf("%lf", &two);

    sum = one + two;
    average = sum/2;

    printf("The sum of your integers is: %.2lf\n", sum);
    printf("The average of your integers is: %.2lf\n", average);

    return 0;
}
