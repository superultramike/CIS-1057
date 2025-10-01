#include <stdio.h>
#include <math.h>

double celcius_at_depth(double dX);
double fahrenheit(double cX);

int main() {
    instructions();
}

int instructions() {
    double depth;

    printf("How many kilometers down are you?: ");
    scanf("%lf", &depth);

    printf("In Celsius: %lf\n", celcius_at_depth(depth));

    printf("In Fahrenheit: %lf\n", fahrenheit(celcius_at_depth(depth)) );

    return 0;
}

double celcius_at_depth(double dX) {
    double c;
    c = (10 * dX) + 20;
    return c;
}

double fahrenheit(double cX) {
    double f;
    f = (1.8 * cX) + 32;
    return f;
}

