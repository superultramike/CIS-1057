/*
    Write a program to approximate the value of p
    using the formula given including terms up through 1/99.
*/
#include <stdio.h>

int main() {
    double pi, a, x, y;
    int n = 0;

    a = 1;
    for(n = 1; n<=99;) {

        n += 2; // incre n to get 2nd denom
        //printf("n = %d\n", n);

        x = -1.0/n; // divides -1 by n to get 2nd sum
        //printf("x = %lf\n", x);

        n += 2; // incre n to get 3rd denom
        //printf("n = %d\n", n);

        y = -1.0/n; // divides -1 by n to get 3rd sum
        //printf("y = %lf\n", y);

        a += (x-y); // pushes all sums into 1 var or a=1+(-1/n - (-1/n))
        //printf("a = %lf\n", a);
    }

    pi = 4 * a; // equal too pi = 4 * (1 + (x-y) )
    printf("PI is about-> %lf", pi);
}
