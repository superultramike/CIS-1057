/*
    A manufacturer wishes to determine the cost of producing an open-top cylindrical container.
*/
/*
    Write a program to take the
        radius of the base (4)
        height of the container (20)
        cost per square centimeter of the material (cost) (0.025)
        number of containers to be produced (quantity) (15)

    Write surface area, SA = (PI*R^2) + ((2*PI*R) * height) (603.19)

    Write a function to Calculate
    cost of each container
    total cost of producing all the containers.
*/
#include <stdio.h>
#include <math.h>
#define PI 3.141592653589793238

double surface_area(double r, double h); // FUNCTION PROTO THAT ALLOWS MAIN TO USE IT
double total_cost(double c, double sA, double q); // FUNCTION PROTO THAT ALLOWS MAIN TO USE IT

int main(void) { // MAIN FUNCTION FOR INSTUCTIONS AND FINAL DISPLAY
    instructions();
}

int instructions() {
    double r, h, q, c; // ALL IN/OUTPUTS FOR THIS FUNCTION ONLY

    printf("Enter radius of your base: "); // ASKS USER FOR RADIUS
    scanf("%lf", &r); // SAVES DATA

    printf("Enter height of the container: "); // ASKS USER FOR HEIGHT
    scanf("%lf", &h); // SAVES DATA

    printf("Enter quantity of containers that to be produced: "); // ASKS USER FOR QUANTITY
    scanf("%lf", &q); // SAVES DATA

    printf("Enter the cost per cm^3 per container: "); // ASKS USER FOR COST
    scanf("%lf", &c); // SAVES DATA

    printf("The Surface Area is %.2lf cm^3.\n", surface_area(r, h)); // DISPLAYS 1ST FINAL RESULT BY CALLING SURFACE_AREA FUNCTION THAT INCLUDES MAIN VARS AND OUTSIDE FUNCTION BY PROTO
    printf("The total cost of producing %.0lf containers is $%.2lf\n", q, total_cost(c, surface_area(r, h), q));  // DISPLAYS FINAL BY CALLING TOTAL_COST FUNCTION THAT INCLUDES MAIN VARS AND OUTSIDE FUNCTIONS BY PROTO

}

double surface_area(double r, double h) { // DECLARES SURFACE AREA FUNCTION THAT INCLUDES 2 "LINKED VARS" WITH RADIUS AND HEIGHT
    double SA; // DECLARES SURFACE AREA VAR
    SA = (2 * PI * r * h) + (2 * PI * pow(r, 2)); // CALCULATING SURFACE AREA FUNCTION, AND USING "LINKED VARS" THAT ARE CALLED ON PRINTF OF VALUES USED IN MAIN
    return SA; // RETURNS RESULT BACK TO MAIN
}

double total_cost(double c, double sA, double q) { // DECLARES TOTAL COST FUNCTION THAT INCLUDES 3 "LINKED VARS" WITH COST, SA, AND QUANTITY
    double oneContain, totalCost; // DECLARES TOTAL COST OF CONTAINERS AND THE SINGLE COST OF ONE
    oneContain = sA * (c / 1); // CALCULATING THE COST OF ONE CONTAINER, AND USING "LINKED VARS" THAT ARE CALLED ON PRINTF OF VALUES USED IN MAIN
    totalCost = oneContain * q; // CALCULATING THE COST FOR ALL CONTAINERS REQUIRED, AND USING "LINKED VARS" THAT ARE CALLED ON PRINTF OF VALUES USED IN MAIN
    return totalCost; // RETURNS RESULT BACK TO MAIN
}
