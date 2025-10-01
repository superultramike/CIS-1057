#include <stdio.h>
#include <string.h>

int main() {
  	char str[20]; // DECLARES STRING ARRAY

  	printf("Please Enter any Noun: "); // PRINTS INSTRUCTIONS
  	scanf("%s", str); // SAVES USER INPUT

  	for(int i = 0; i <= strlen(str); i++) { // LOOP FOR THE DURATION OF THE STRING LENGTH
        if (str[i - 1] == 'y') { // IF THE LAST CHARACTER IS 'Y'...
            str[i - 1] = 'i'; // REPLACE LAST CHARACTER WITH 'I'
            str[i] = 'e'; // REPLACE NEXT CHARACTER WITH 'E'
            str[i + 1] = 's'; // REPLACE NEXT CHARACTER WITH 'E'
            str[i + 2] = '\0'; // REPLACE NEXT CHARACTER WITH 'NULL'
  		}

  		// IF THE LAST CHARACTER IS 'S' OR 'CH' OR 'SH'...
  		else if (str[i - 1] == 's' || (str[i - 2] == 'c' && str[i - 1] == 'h') || (str[i - 2] == 's' && str[i - 1] == 'h')) {
           strcat(str, "es"); // ADD 'ES' TO THE ORIGINAL STRING
        }
  		else { // IF NONE OF THE OPTIONS ABOVE...
            strcat(str, "s"); // ADD 'S' TO THE ORIGINAL STRING
        }
	}
	printf("The plural of your original word is: %s ", str); // PRINTS FINAL RESULT

  	return 0;
}
/*
    DISCLAIMER!DISCLAIMER!DISCLAIMER!DISCLAIMER!
    I COULDN'T GET THE LAST TWO ELSE STATMENTS WORKING BUT THE SETUP IS PARTIALLY CORRECT

    WHEN THE LAST TWO ELSE STATEMENTS ARE REMOVED THE FIRST IF STATEMENT WILL WORK
*/
