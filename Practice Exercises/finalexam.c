#include <stdio.h>

int main() {
    double c;

    for(int i=0; i<101; i++) {
        c = (96 * 0.25) + (97 * 0.2) + (89 * 0.2) + (i * 0.35);
        printf("Exam = %.0d%%, Final grade = %.2f\n", i, c);
    }

    return 0;
}
