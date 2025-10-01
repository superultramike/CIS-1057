#include <stdio.h>
#define SPECIAL_SLOPE 0.0

int main(void) {

    int n, status;
    do {
        printf("Enter an int: ");
        status = scanf("%d", &n);
        if(status != 1) {
            scanf("%d", &n);
            printf("Invalid data type. \n");
        }


    } while (n > 15 || n < 0);

return (0);
}
