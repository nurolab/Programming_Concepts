#include <stdio.h>
#include <stdlib.h> // For rand() and srand()
#include <time.h>   // For clock(), CLOCKS_PER_SEC, and time()

#define ARRAY_SIZE 100000

// Function to swap two integers
void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

// Bubble Sort function
void bubbleSort(int arr[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        // Last i elements are already in place
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main() {
    int arr[ARRAY_SIZE];
    int n = ARRAY_SIZE;

    // Seed the random number generator
    srand(time(NULL));

    // Populate the array with random values
    printf("Generating %d random values...\n", ARRAY_SIZE);
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 1000000; // Random values between 0 and 999,999
    }
    printf("Values generated.\n");

    // Measure time taken for bubble sort
    clock_t start_time = clock();

    printf("Starting Bubble Sort...\n");
    bubbleSort(arr, n);
    printf("Bubble Sort completed.\n");

    clock_t end_time = clock();

    // Calculate the elapsed time in seconds
    double time_taken = (double)(end_time - start_time) / CLOCKS_PER_SEC;

    printf("Time taken for Bubble Sort on %d values: %f seconds\n", ARRAY_SIZE, time_taken);

    // Optional: Print a few sorted elements to verify (not recommended for 100,000 elements)
    // printf("First 10 sorted elements: ");
    // for (int i = 0; i < 10; i++) {
    //     printf("%d ", arr[i]);
    // }
    // printf("\n");

    return 0;
}