#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to perform Selection Sort
void selectionSort(int arr[], int n) {
    int i, j, minIndex, temp;
    for (i = 0; i < n - 1; i++) {
        minIndex = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Swap the found minimum element with the first element
        temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int n = 100000;  // Size of the array
    int arr[n];
    
    // Initialize random seed
    srand(time(NULL));

    // Generate random values for the array
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 10000; 
    }

    // Get the starting time
    clock_t start_time = clock();

    // Perform Selection Sort
    selectionSort(arr, n);

    // Get the ending time
    clock_t end_time = clock();

    // Calculate the elapsed time
    double time_taken = ((double)(end_time - start_time)) / CLOCKS_PER_SEC;

    // Print the time taken to sort the array
    printf("Selection Sort completed in %f seconds\n", time_taken);

    return 0;
}
