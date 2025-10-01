/*
    Write a program to process a collection of daily high temperatures.
    Your program should count and print the number of hot days (high temperature 85 or higher),
    the number of pleasant days (high temperature 60–84), and the number of cold days (high temperatures less than 60).
    It should also display the category of each temperature.
*/
/*
    1: Display instructions to enter in TEMP (within a WHILE LOOP since you don't know how many temps they put in)
    2: If the TEMP is hot (85 or higher)
        2.1: Increment HOT by 1
    3: If the TEMP is pleasant (60 to 84)
        3.1: Increment PLEASANT by 1
    4: If the TEMP is cold (60 or lower)
        4.1: Increment COLD by 1
    5: If the TEMP is the SENTINEL of -999
    6: Display final results of HOT, PLEASANT, and COLD

*/
#include <stdio.h> // INCLUDES THE FILE WITH LIBRARY
#define sentinel -999 // DECLARES THE SENTINEL NUMBER OF -999 IN USE BELOW

int main(void) // MAIN FUNCTION THAT RETURNS A VALUE TO DISPLAY
{
	int hot = 0; // THE TOTAL COUNT OF HOT DAYS
	int pleasant = 0; // THE TOTAL COUNT OF PLEASANT DAYS
	int cold = 0; // THE TOTAL COUNT OF COLD DAYS
	int sum = 0; // THE TOTAL COUNT OF TEMPERATURES (55 + 55 = 110 NOT 2 TEMPS)
	int count = 0; // THE TOTAL COUNT OF DAYS
	int temp; // THE USER INPUT TEMPERATURE
	double average; // THE TOTAL AVERAGE OF TEMPERATURE

	printf("Enter temperature (-999 to quit): "); // USER INPUT FOR TEMP WITH SENTINEL VALUE INDICATED
	scanf("%d", &temp); // SCANS AND SAVES USER INPUT

// IF TEMP IS SEN, ARGU IS FALSE AND DOESN'T RUN
// IF TEMP ISN'T SEN, ARGU IS TRUE AND RUNS
	while (temp != sentinel) // WHILE LOOP CAUSE WE DON'T KNOW HOW MANY ITERATIONS
	{
		if (temp <= 59) // IF TEMP IS 59 DEGREES OR LESS...
		{
			cold++; // ... THEN INCREMENT COLD DAY BY 1
		}
		else if (temp >= 60 && temp <= 84) // IF TEMP IS INBETWEEN 60 AND 84...
		{
			pleasant++; // ... THEN INCREMENT PLEASANT DAY BY 1
		}
		else // IF TEMP ISN'T ANY OF THESE THINGS IT'S OBVIOUSLY HOT
		{
			hot++; // ... THEN INCREMENT HOT DAY BY 1
		}
		sum += temp; // EQUATES SUM AS RE-WRITING SUM AS THE NEW TEMP
		count++; // INCREMENTS COUNT OF LOOPS (OR TEMPS) BY 1

		printf("Enter temperature (-999 to quit): "); // USER INPUT FOR TEMP WITH SENTINEL VALUE INDICATED
		scanf("%d", &temp); // SCANS AND SAVES USER INPUT
	}
	printf("There were %d Hot Days\n", hot); // DISPLAYS HOT DAYS
	printf("There were %d Pleasant Days\n", pleasant); // DISPLAYS PLEASANT DAYS
	printf("There were %d Cold Days\n", cold); // DISPLAYS COLD DAYS
	printf("There were %d total temps\n", count); // DISPLAYS TOTAL TEMPS GIVEN

	average = sum / count; // CALCULATES THE AVERAGE OF ALL DATA
	printf("\nAverage temperature is %.2f\n", average); // DISPLAYS AVERAGE

	return 0;
}
