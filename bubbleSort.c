#include <stdio.h>
#include <stdlib.h> // For rand() and srand()
#include <time.h>   // For clock(), CLOCKS_PER_SEC, and time()

#define SIZE 100000 // Define the size of the array

// Function to perform Bubble Sort
void bubbleSort(int arr[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        // Last i elements are already in place
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap if the element found is greater than the next element
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[SIZE];
    int i;
    clock_t start, end;
    double cpu_time_used;

    srand(time(NULL));

    // Fill the array with 1 lakh (100,000) random values
    printf("Generating %d random numbers...\n", SIZE);
    for (i = 0; i < SIZE; i++) {
        arr[i] = rand(); // Generate a random integer
    }
    printf("Random numbers generated.\n");

    // Measure the time taken for Bubble Sort
    start = clock(); // Record the starting time

    bubbleSort(arr, SIZE); // Sort the array

    end = clock(); // Record the ending time

    // Calculate the CPU time used

    printf("Array sorted using Bubble Sort.\n");
     cpu_time_used = ((double)(end - start)); // CLOCKS_PER_SEC;


    printf("Time taken to sort %d elements: %f seconds\n", SIZE, cpu_time_used);

   
    return 0;
}