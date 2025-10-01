#include <stdio.h>
#include <string.h>

#define WORD_LENGTH 256

char * longest_suffix(const char * first, const char * second);

int main(void) {
    char first[WORD_LENGTH], second[WORD_LENGTH];

    while(1) {
        printf("First: ");
        scanf("%s", first);

        printf("Second: ");
        scanf("%s", second);

        printf("Longest suffix: %s\n", longest_suffix(first, second));
    }

    return 0;
}

char * longest_suffix(const char * first, const char * second) {
    const char * pFirst = first + strlen(first);
    const char * pSecond = second + strlen(second);

    while ( pFirst >= first && pSecond >= second && *pFirst == *pSecond ) {
        --pFirst;
        --pSecond;
    }

    return (char*)++pFirst;
}
