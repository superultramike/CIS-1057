/*
    The bubble sort is another technique for sorting an array.
    A bubble sort compares adjacent array elements and exchanges their values if they are out of order.
    In this way, the smaller values “bubble” to the top of the array (toward element 0),
    while the larger values sink to the bottom of the array.
    After the first pass of a bubble sort, the last array element is in the correct position;
    after the second pass the last two elements are correct, and so on.
    Thus, after each pass, the unsorted portion of the array contains one less element.

    Write and test a function that implements this sorting method.
*/
#include <stdio.h>

void bubble_sort(int array[], int size);

int main() {
    int array[] = {-2, 45, 0, 11, -9};
    int size = sizeof(array) / sizeof(array[0]);

    bubbleSort(array, size);

    printf("Sorted Array in Ascending Order:\n");
    for (int i = 0; i < size; ++i) {
        printf("%d  ", array[i]);
    }
}

void bubble_sort(int array[], int size) {
    for (int step = 0; step < size - 1; step++) {
        for (int i = 0; i < size - step - 1; i++) {

            // switches elements in array
            if (array[i] > array[i + 1]) {
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
    }
}
