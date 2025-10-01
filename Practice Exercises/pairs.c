#include <stdio.h>

int pairs(int m, int n);

int main() {
    int m, n;

    printf("What is m?: ");
    scanf("%d", &m);

    printf("What is n?: ");
    scanf("%d", &n);

    pairs(m,n);

    return 0;
}

int pairs(int m, int n) {
    for (int i=0; i <= m; i++) {
        for (int k = 0; k < n; k++) {
            if(i > k) {
                printf("%d %d\n", i, k);
            }
        }
    }
}
