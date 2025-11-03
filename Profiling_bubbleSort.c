#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Bubble Sort Function
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Print Array Function (only used for small n)
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int n = 10000; // Change size for testing
    int arr[n];

    // Seed random generator
    srand(time(NULL));

    // Fill array with random numbers
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100000; // Random digits
    }

    printf("Sorting %d random elements using Bubble Sort...\n", n);

    clock_t start_time = clock(); // Start time

    bubbleSort(arr, n);

    clock_t end_time = clock(); // End time

    // Calculate time taken
    double execution_time = (double)(end_time - start_time) / CLOCKS_PER_SEC;
    printf("Execution Time: %f seconds\n", execution_time);

    return 0;
}
