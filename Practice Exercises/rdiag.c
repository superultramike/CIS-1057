#include <stdio.h>

int rdiag(int n);

int main() {

    int n;

    printf("What is n?: ");
    scanf("%d", &n);

    rdiag(n);

    return 0;
}

int rdiag(int n) {
    for(int i = 0; i<n; i++) {
        for(int j=n-1; j>=0; j--) {
            if(i == j)
                printf("1");
            else
                printf("0");
        }
        printf("\n");
    }
}
