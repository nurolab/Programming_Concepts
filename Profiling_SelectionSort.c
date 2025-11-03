#include <stdio.h>
#include <stdlib.h>
#include <time.h> // Required for clock() and CLOCKS_PER_SEC

// Function to perform selection sort
void selectionSort(int arr[], int n) {
    int i, j, min_idx;

    // Traverse through all array elements
    for (i = 0; i < n - 1; i++) {
        // Find the minimum element in the unsorted portion
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }

        // Swap the found minimum element with the first element of the unsorted portion
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

// Function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Dynamically allocate memory for the array
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Populate the array with random numbers
    srand(time(NULL)); // Seed for random number generation
    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 1000; // Generate random numbers between 0 and 999
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Record start time
    clock_t start_time = clock();

    // Perform selection sort
    selectionSort(arr, n);

    // Record end time
    clock_t end_time = clock();

    // Calculate execution time
    double execution_time = (double)(end_time - start_time) / CLOCKS_PER_SEC;

    printf("Sorted array: ");
    printArray(arr, n);

    printf("Execution time: %f seconds\n", execution_time);

    // Free the dynamically allocated memory
    free(arr);

    return 0;
}