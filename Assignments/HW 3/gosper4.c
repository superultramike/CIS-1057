#include <stdio.h>
#include <math.h>

int main(){

	double n; // USER INPUT VAR
    double factorial; // USER OUTPUT VAR

	printf("Enter n: "); // ASKS USER FOR INT
	scanf("%lf", &n); // SAVES INPUT

	double PI = 3.14159265; // DEFINES PI AS CONSTANT
	double eNeg = exp(-n); // SIMPLIFIES E^-N AS SINGLE VAR

	factorial = pow(n, n) * eNeg * sqrt(PI * ((2.0 * n) + (1/3.0))); // GENERAL EQUATION

	printf("%.0lf! equals approximately %.6f\n", n, factorial); // DISPLAYS FINAL RESULT

	return 0;
}
