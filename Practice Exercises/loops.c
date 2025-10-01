#include <stdio.h>
#include <math.h>

int main() {

    printf("For Loop\n");

    for(int i=0; i<5; i++)
        printf("i = %d\n", i);


    printf("While Loop\n");

    int j = 0;
    while(j<5) {
        printf("j = %d\n", j++);
    }


    printf("Do-while loop\n");

    int k = 0;
    do {
        printf("k = %d\n", k++);
    } while(k<0);

    printf("Do-while loop\n");

    /*
    do {
        printf("Enter an int between 0 and 150 inclusive: ");
        scanf("%d", &k);
    }   while(k < 0 || k > 150);
    printf("You entered %d\n", k);
    */

    int n = 5;
    int x = fact(n);
    printf("%d! = %d\n", n, x);

    x = 0;
    for(int i=0; i<=10; i++) {
        if(i%2 == 1)
            break;
        x += i;
    }
    printf("x = %d\n", x);

    // Break terminates a loop
    // Continue ends the current iteration and starts the next

    return 0;
}

// Iterative factorial
int fact(int n) {
    int x = 1;
    for(int i=1; i <= n; i++)
        x *= i;
    return x;
}

// Recursive factorial
/*
int fact(int n) {
    printf("n = %d\n", n);
    if(n == 0)
        return 1;
    return n * fact(n=1);
}
*/
