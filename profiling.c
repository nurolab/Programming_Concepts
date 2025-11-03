#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 5000  // Increase this for clearer time difference

void c_log(const char *msg) {
    printf("%s\n", msg);
}

void bubbleSort(int arr[], int n) {
    int i, j, temp, swapped;
    clock_t start, end;
    double cpu_time_used;

    c_log("Starting Bubble Sort...");
    start = clock();

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

    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Bubble Sort Time: %.6f seconds\n", cpu_time_used);
}

void selectionSort(int arr[], int n) {
    int i, j, min_idx, temp;
    clock_t start, end;
    double cpu_time_used;

    c_log("Starting Selection Sort...");
    start = clock();

    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
        temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }

    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Selection Sort Time: %.6f seconds\n", cpu_time_used);
}

int main() {
    int bubbleArr[SIZE], selectionArr[SIZE];
    srand(time(NULL)); // seed random number generator

    // Fill array with random numbers
    for (int i = 0; i < SIZE; i++) {
        bubbleArr[i] = rand() % 10000; // random numbers from 0–9999
        selectionArr[i] = bubbleArr[i]; // make identical copy
    }

    c_log("Sorting random array...");
    bubbleSort(bubbleArr, SIZE);
    selectionSort(selectionArr, SIZE);

    c_log("Sorting completed!");

    return 0;
}
