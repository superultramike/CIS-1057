/*
    The BINARY SEARCH algorithm that follows may be used to search an array when the elements are in order.
    This algorithm is analogous to the following approach for finding a name in a telephone book.

    Open the book in the middle, and look at the middle name on the page.
    If the middle name isn’t the one you’re looking for, decide whether it comes before or after the name you want.
    Take the appropriate half of the section of the book you were looking in and repeat these steps until you land on the name.
*/
#include <stdio.h>

int binary_srch(int array[], int target, int low, int high);

int main() {
//                 0, 1, 2, 3, 4, 5, 6  element array placement
    int array[] = {0, 1, 2, 3, 4, 5, 6};
    int result, target, low = 0, high = 7;

    printf("What value do you want to find in the array?: ");
    scanf("%d", &target);

    result = binary_srch(array, target, low, high);

    if(result == -1)
        printf("not present in the array\n");
    else
        printf("Target is found at element %d\n", result);
    return 0;
}

int binary_srch(int array[], int target, int low, int high) {
    while (low <= high) {
        int mid = (high + low) / 2;
        if (array[mid] == target)
            return mid;
        if (array[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}
/*
    BINARY SEARCH IS FASTER THEN LINEAR SEARCH
*/
