#include <stdio.h>
#include <math.h>

double bmiF(double weight, double height);

int main() {
    double weight, height;

    printf("How many pounds are you?: ");
    scanf("%lf", &weight);

    printf("How tall are you in inches?: ");
    scanf("%lf", &height);

    if (bmiF(weight, height) < 18.5 ) {
        printf("You are underweight");
    }

    if (bmiF(weight, height) >= 18.5 && bmiF(weight, height) <= 24.9 ) {
        printf("You are normal");
    }

    if (bmiF(weight, height) >= 25.0 && bmiF(weight, height) <= 29.9 ) {
        printf("You are overweight");
    }

    if (bmiF(weight, height) >= 30 ) {
        printf("You are obese");
    }

    return 0;
}

double bmiF(double weight, double height) {
    double bmi;
    bmi = (703 * weight) / (pow(height, 2));
    return bmi;
}
