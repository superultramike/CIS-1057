/*
	This program calculates the weight of a number of
	washers.  The number and dimensions of washers are
	entered at the command line by the user.
	Inputs:
		density of material
		number of washers
		diameter of washer
		diameter of hole
		height of washer
	Output
		total weight of washers
*/

// Preprocessor directives
#include <stdio.h>
#include <math.h>
#define PI 3.14159

// Function prototypes - declare functions that are defined after
// the main function
void getInput(double*, double*, double*, double*, double*);
void setInput(double*, double*, double*, double*, double*);
double calcTotalWeight(double, double, double, double, double);
double calcWeightWasher(double, double, double, double);
double calcVolumeWasher(double, double, double);
double calcAreaWasher(double, double);
double calcAreaCircle(double);

// Driver functions to test other functions
void driver();
void driver2(double, double, double, double, double);
// Function to set variables for testing
void setInput(double*, double*, double*, double*, double*);

// Main function - entry point for all C programs
int main(){

	// Declare variables for inputs
	double density=0.0, numWashers=0.0, diaWasher=0.0, diaHole=0.0, height=0.0;
	// Declare variable for output
	double totalWeight = 0.0;

	// Call driver function to test functions
	//driver();

	// To set variables for faster testing
	//setInput(&density, &numWashers, &diaWasher, &diaHole, &height);

    // Call driver function to test functions with input variables
	//driver2(density, numWashers, diaWasher, diaHole, height);

	// Code to call functions to calculate the
	// Get input
	getInput(&density, &numWashers, &diaWasher, &diaHole, &height);
	printf("The inputs are: %1.2f %1.2f %1.2f %1.2f %1.2f\n",
		density, numWashers, diaWasher, diaHole, height);
	// Calc weight
	totalWeight = calcTotalWeight(density, numWashers, diaWasher, diaHole, height);
	// Print output
	printf("The total weight if %1.0f is %1.3f", numWashers, totalWeight);

	return 0;
}


// Get input from user
void getInput(double *density, double *numWashers, double *diaWasher, double *diaHole, double *height){
	printf("Enter density: ");
	scanf("%lf", density);
	printf("Enter number of washers: ");
	scanf("%lf", numWashers);
	printf("Enter diameter of washer: ");
	scanf("%lf", diaWasher);\
	printf("Enter diameter of hole: ");
	scanf("%lf", diaHole);
	printf("Enter height if washer: ");
	scanf("%lf", height);
	return;
}

// Calculate the total weight of a number of washers
double calcTotalWeight(double density, double numWashers, double diaWasher, double diaHole, double height){
	// Return total weight of washers
	return numWashers * calcWeightWasher(density, diaWasher, diaHole, height);
}

// Calculate the weight of a washer
double calcWeightWasher(double density, double diaWasher, double diaHole, double height){
	// Return the weight of a washer
	return density * calcVolumeWasher(diaWasher, diaHole, height);
}

// Calculate the volume of a washer
double calcVolumeWasher(double diaWasher, double diaHole, double height){
	// Return the volume of a washer
	return height * calcAreaWasher(diaWasher, diaHole);
}

// Calculate the area of a washer
double calcAreaWasher(double diaWasher, double diaHole){
	// Return the area of a washer
	return calcAreaCircle(diaWasher) - calcAreaCircle(diaHole);
}

// Calculate the area of a circle
double calcAreaCircle(double diameter){
	// Return the area of a circle
	return (PI * pow((diameter/2),2));
}
