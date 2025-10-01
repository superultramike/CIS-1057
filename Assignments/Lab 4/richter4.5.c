#include <stdio.h>

int main() { // MAIN FUNCTION

    double n; // DECLARE RICHTER SCALE

    printf("What is the Richter Scale of the earthquake?: "); // ASKS USER FOR RICHTER SCALE
    scanf("%lf", &n); // SAVES INPUT

    if (n < 5.0) { // IF 5 OR LESS PRINT BELOW
        printf("Little or no damage");
    }

    if (5.0 <= n && n < 5.5) { // IF IN RANGE OF 5->5.5 PRINT BELOW
        printf("Some damage");
    }

    if (5.5 <= n && n < 6.5) { // IF IN RANGE OF 5.5->6.5 PRINT BELOW
        printf("Serious damage: walls may crack or fall");
    }

    if (6.5 <= n && n < 7.5) { // IF IN RANGE OF 6.5->7.5 PRINT BELOW
        printf("Disaster: houses and buildings may collapse");
    }

    if (n >= 7.5) { // IF IN RANGE OF 7.5 OR MORE PRINT BELOW
        printf("Catastrophe: most buildings destroyed");
    }

    return 0;
}
