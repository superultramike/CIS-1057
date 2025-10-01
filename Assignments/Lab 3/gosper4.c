#include <stdio.h>
#include <math.h>

#define PI 3.14159265
#define E 2.71828

double factorial_function(double nX);

int main(){
    instructions();
}

int instructions() {

    double n; // USER INPUT VAR

	printf("Enter n: "); // ASKS USER FOR INT
	scanf("%lf", &n); // SAVES INPUT

	printf("%.0lf! equals approximately %.5lf", n, factorial_function(n)); // DISPLAYS FINAL RESULT

	return 0;
}

double factorial_function(double nX) {
    return pow(nX, nX) * pow(E, (nX * -1)) * sqrt(PI * ((2.0 * nX) + (1/3.0)));; // THROWS RESULT BACK TO MAIN
}
