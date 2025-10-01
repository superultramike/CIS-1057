#include <stdio.h>
int print_odd_7_no_5(int m, int n);

int main() {

    int m, n;

    print_odd_7_no_5(1,200);

    return 0;
}
int print_odd_7_no_5(int m, int n) {
    int i = 0;
    for (i=m; i <= n; i++) {
        if((i%2==1) && (i%5!=0) && (i%7==0)) {
            printf("%d ", i);
        }
    }
}
