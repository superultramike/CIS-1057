#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int search (char codes[10][7], char target[], int size); // FUNCTION PROTOTYPE

int main() {
    char COLOR_CODES [10][7] = {"black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "gray", "white"}; // DECLARES BAND COLOR STRINGS
    char question; // DECLARES VAR FOR QUESTION
    char band1[7], band2[7], band3[7]; // DECLARES STRING ARRAY FOR EACH POSSIBLE BAND (3 OF THEM)
    double resistance_value; // DECLARES DOUBLE VALUE OF THE RESISTANCE

    printf("This program is designed to calculate the resistance value between the ends of a resistor.\n"); // PRINTS INSTRUCTIONS
    printf("Do you want to decode resistor now (Type 'y' for yes, or 'n' for no)?\n"); // PRINTS INSTRUCTIONS
    printf("=> "); // PLACE FOR USER TO INPUT DATA
    scanf("%c", &question); // SAVES USER INPUT

    while (question == 'y') { // IF THE USER INPUT FROM ABOVE IS "Y" THEN CONTIUNE
        printf("Enter the colors of the resistor's three bands, beginning with the band nearest the end.\n"); // PRINTS INSTRUCTIONS
        printf("Type the colors in lowercase letters only, NO CAPS.\n"); // PRINTS INSTRUCTIONS

        printf("Band 1 => "); // PRINTS INSTRUCTIONS
        scanf("%s", &band1); // SAVES USER INPUT AS A STRING
        printf("Band 2 => "); // PRINTS INSTRUCTIONS
        scanf("%s", &band2); // SAVES USER INPUT AS A STRING
        printf("Band 3 => "); // PRINTS INSTRUCTIONS
        scanf("%s", &band3); // SAVES USER INPUT AS A STRING

        resistance_value = ( (10*(search(COLOR_CODES, band1, 10)) + (search(COLOR_CODES, band2, 10))) * (pow(10, (search(COLOR_CODES, band3, 10)) )))/1000; // LONG EQUATION TO CALCULATE RESIST

        if (search(COLOR_CODES, band1, 10) == -1 || search(COLOR_CODES, band1, 10) == 0) { // IF THE FIRST BAND IS IN THE WRONG USER INPUT COMBOINATION THEN REPEAT CYCLE AGAIN
            printf ("Invalid colors : %s", search(COLOR_CODES, band1, 10)); // PRINTS INSTRUCTIONS
        }
        if (search(COLOR_CODES, band2, 10) == -1 ) { // IF THE SECOND BAND IS IN THE WRONG USER INPUT COMBOINATION THEN REPEAT CYCLE AGAIN
            printf ("Invalid colors : %s", search(COLOR_CODES, band2, 10)); // PRINTS INSTRUCTIONS
        }
        if (search(COLOR_CODES, band3, 10) == -1 ) { // IF THE THIRD BAND IS IN THE WRONG USER INPUT COMBOINATION THEN REPEAT CYCLE AGAIN
            printf ("Invalid colors : %s", search(COLOR_CODES, band3, 10)); // PRINTS INSTRUCTIONS
        }
        else { // IF USER INPUTS CORRECT USER INPUT COMBO THEN PRINT RESIST VALUE
            printf ("Resistance value: %.0lf kilo-ohms\n", resistance_value); // PRINTS FINAL RESULT
        }

        printf("\nDo you want to decode another resistor (Type 'y' for yes, or 'n' for no)? "); // PRINTS INSTRUCTIONS
        printf("\n=> "); // PRINTS INSTRUCTIONS
        scanf(" %c", &question); // SAVES USER INPUT AS A CHAR
    }
    return 0;
}

int search (char codes[][7], char target[], int size) {
    int x = 0; // FINDS WHICH BAND YOU ARE TRYING TO INPUT
    int match = 0; // FINDING IF THE BAND IS MATCHING WITH 1 OR NOT
    int location = 0; // CONFIRMING IF THE BAND IS IN THE RIGHT POSITION OR NOT (X OR -1)

    while (!match && x < size) { //
		if(strcmp(codes[x], target) == 0) { // THE TYPE OF BAND THE USER INPUTS IS IN THE CORRECT SPOT THEN CONTINUE PROGRAM
			match = 1; // THE PROGRAM DOES CONTINUE
		}
		else { // IF NOT THEN ADD 1 TO X UNTIL YOU FIND THE CORRECT PLACEMENT
			++x; // INCREMENT X
		}
	}
    if(match == 1) { // IF THE MATCH IS CORRECT (1) THEN IT SENDS X AS A 0 SO THE PROGRAM CAN PROPERLY CONTINUE
		location = x; // THE PROGRAM DOES CONTINUE
	}
	else { // IF THE MATCH IS CORRECT (1) THEN IT SENDS X AS A 0 SO THE PROGRAM CAN PROPERLY CONTINUE
		location = -1; // THE PROGRAM DOESN'T CONTINUE
	}
	return location;
}
