#include <stdio.h>

int main() {
    int sum, n;

    printf("How many terms?: ");
    scanf("%d", &n);

    for (int i = 1; i<=n; i++) {
        printf("%d\n", i);
        sum += i;
    }

    printf("\nThe Sum is: %d", sum);
}
