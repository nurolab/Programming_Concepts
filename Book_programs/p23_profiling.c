#include <stdio.h>
#include <time.h>

#define SIZE 10  // You can change this to test with larger arrays

// Custom log function (renamed from 'clog' to avoid conflict)
void c_log(const char *msg) {
    printf("%s\n", msg);
}

// Bubble Sort function with profiling
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    int swapped;
    clock_t start, end;
    double cpu_time_used;

    c_log("Starting Bubble Sort...");

    start = clock(); // Start timer

    for (i = 0; i < n - 1; i++) {
        swapped = 0;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }
        if (swapped == 0)
            break;
    }

    end = clock(); // End timer
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("Bubble Sort Time: %.6f seconds\n", cpu_time_used);
}

// Selection Sort function with profiling
void selectionSort(int arr[], int n) {
    int i, j, min_idx, temp;
    clock_t start, end;
    double cpu_time_used;

    c_log("Starting Selection Sort...");

    start = clock(); // Start timer

    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
        // Swap the found minimum with the first element
        temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }

    end = clock(); // End timer
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("Selection Sort Time: %.6f seconds\n", cpu_time_used);
}

// Function to print array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Main function
int main() {
    int bubbleArr[SIZE] = {64, 25, 12, 22, 11, 90, 45, 33, 18, 50};
    int selectionArr[SIZE];
    
    // Copy the array for fair comparison
    for (int i = 0; i < SIZE; i++)
        selectionArr[i] = bubbleArr[i];

    c_log("Original Array:");
    printArray(bubbleArr, SIZE);

    bubbleSort(bubbleArr, SIZE);
    selectionSort(selectionArr, SIZE);

    c_log("\nBubble Sorted Array:");
    printArray(bubbleArr, SIZE);

    c_log("\nSelection Sorted Array:");
    printArray(selectionArr, SIZE);

    return 0;
}
