#include <stdio.h>

int calc_15_even(int n);

int main() {

    int i, n;

    printf("pick an term: ");
    scanf("%d", &n);

    calc_15_even(n);

    return 0;
}

int calc_15_even(int n) {
    int sum = 0;
    for (int i=1; i<=n; i++) {
        if(i%15 && (i%2 == 0)) {
            sum += i;
        }
    }
    printf("%d", sum);
}
