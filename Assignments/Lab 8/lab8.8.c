#include <stdio.h>
#include <string.h>

char * longest_suffix(char * first_word, char * second_word); // DECLARING FUNCTION PROTOTYPE

int main() {
    char first_word[50], second_word[50]; // // DECLARES STRING ARRAYS

    printf("\nWhat is your first word?: "); // PRINTS INSTRUCTIONS
    scanf("%s", first_word); // SAVES USER INPUT
    printf("What is your second word?: "); // PRINTS INSTRUCTIONS
    scanf("%s", second_word); // SAVES USER INPUT

    printf("Longest suffix: %s", longest_suffix(first_word, second_word)); // PRINT FINAL RESULT

    return 0;
}

char * longest_suffix(char * first_word, char * second_word) { // FUNCTION CUTS AWAY AT CHARACTERS THAT DON'T MATCH BETWEEN TWO STRINGS
    char * pFirst = first_word + strlen(first_word); // DECLARES POINTER THAT CONSISTS A VALUE OF THE FIRST WORD PLUS THE LENGTH OF THE STRING
    char * pSecond = second_word + strlen(second_word); // DECLARES POINTER THAT CONSISTS A VALUE OF THE SECOND WORD PLUS THE LENGTH OF THE STRING

    while (pFirst >= first_word && pSecond >= second_word && *pFirst == *pSecond ) { // IF THE POSITION BETWEEN THE TWO STRINGS IS NOT EQUAL THEN THAT POSITION IS REMOVED
        --pFirst; // REMOVES THE CHARACTER
        --pSecond; // REMOVES THE CHARACTER
    }
    return (char*) ++pFirst; // RETURNS THE CHARACTERS THAT DO MATCH
}
