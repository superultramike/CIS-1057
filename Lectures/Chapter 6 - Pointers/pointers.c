#include <stdio.h>
int main() {

    int first, second, sum;
    int *ptr = &first, *qtr = &second;

    printf("What is 1st value: ");
    scanf("%d", &first);

    printf("What is 2nd value: ");
    scanf("%d", &second);

    sum = *ptr + *qtr;

    printf("%d", sum);

    return 0;
}
