#include <stdio.h>
#include <math.h>

int main() {

    double side1, side2, hyp;

    printf("Enter side1: ");
    scanf("%lf", &side1);

    printf("Enter side2: ");
    scanf("%lf", &side2);

    hyp = sqrt((pow(side1, 2) + pow(side2, 2)));

    printf("The Hypo is %.2lf", hyp);

    return 0;
}
