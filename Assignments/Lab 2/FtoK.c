#include <stdio.h>

int main() {

    double fahrenheit, kelvin; // INPUTS AND OUTPUTS

    printf("What temperature do you want to convert to Kelvin: "); // INPUT OF TEMP
    scanf("%lf", &fahrenheit); // SCANS INPUT AND SAVES DATA

    kelvin = 0.5 * (1+(fahrenheit / 1)); // CONVERTS TEMP TO KELVIN

    printf("%.3lf Fahrenheit would be %.3lf Kelvin", fahrenheit, kelvin); // PRINTS CONVERSION

    return 0;
}

//     kelvin = ((fahrenheit-32)*5/9)+273.15; // CONVERTS TEMP TO KELVIN
