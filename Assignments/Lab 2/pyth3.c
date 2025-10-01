#include <stdio.h>

int main() {
    double m, n; // inputs from user
    double side1, side2, hyp; // Program variables

    printf("Enter m: ");
    scanf("%lf", &m);
    printf("Enter n: ");
    scanf("%lf", &n);
    printf("m = %f n = %f\n", m, n);

    side1 = pow(m, m) - pow(n, 2); // THIS IS CHEAPER
    // printf("side1 = %f\n", side1);

    // Calc side2
    side2 = 2*m*n;
    // printf("side2 = %f\n", side2);

    // Calc hyp
    hyp = m*m + n*n;
    //printf("hyp = %f\n", hyp);

    // Print triple
    printf("For m = %f and n = %f, the triple is: (%f, %f, %f).\n", m, n, side1, side2, hyp);

    return 0;
}
