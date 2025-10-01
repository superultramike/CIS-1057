/*
    Write a program that takes the x–y coordinates of a point
    in the Cartesian plane and prints a message telling either
    an axis on which the point lies or the quadrant in which it is found.
*/

#include <stdio.h>
#include <math.h>

int main() {

    double x, y;

    printf("What is your x and y coord: \n");
    scanf("%lf %lf", &x, &y);

    // STATEMENTS FOR QUADRANTS
    if (x > 0 && y > 0)
        printf("(%.1lf, %.1lf) is in Quadrant 1", x, y);
    else if (x > 0 && y < 0)
            printf("(%.1lf, %.1lf) is in Quadrant 4", x, y);
    else if (x < 0 && y < 0)
            printf("(%.1lf, %.1lf) is in Quadrant 3", x, y);
    else if (x < 0 && y > 0)
            printf("(%.1lf, %.1lf) is in Quadrant 2", x, y);

    // STATEMENTS FOR ORIGIN
    if (x == 0 && y == 0) {
        printf("Your point is on the origin of (0,0)");
    }

    // STATEMENTS FOR AXISES
    if (x == 0)
        printf("(%.1lf, %.1lf) is on the y-axis", x, y);
    else if (y == 0)
        printf("(%.1lf, %.1lf) is on the x-axis", x, y);

    return 0;
}
