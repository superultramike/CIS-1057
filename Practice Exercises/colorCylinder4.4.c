#include <stdio.h>

int main() { // MAIN FUNCTION

    char letter; // DECLARES USER VAR

    printf("What is the first letter of the cylinder's color ('y' or 'Y' for yellow): "); // PROMPTS USER INSTRUCTIONS
    scanf("%c", &letter); // SAVES DATA

    switch(letter) { // ALLOWS SPECIFIC OUTPUTS FOR SPECIFIC INPUTS
        case 'o' :
        case 'O' :
            printf("ammonia"); // IF TYPED O OR o, PRINT AMMONIA
            break;

        case 'b' :
        case 'B' :
            printf("carbon monoxide"); // IF TYPED B OR b, PRINT CARBON MONOXIDE
            break;

        case 'y' :
        case 'Y' :
            printf("hydrogen"); // IF TYPED Y OR y, PRINT HYDROGEN
            break;

        case 'g' :
        case 'G' :
            printf("oxygen"); // IF TYPED G OR g, PRINT OXYGEN
            break;

        default :
            printf("Try using a lowercase letter next time"); // IF NONE ARE INPUTTED THEN PRESENT ERROR
    }

    return 0;
}
