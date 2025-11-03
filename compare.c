#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// ---------- Bubble Sort ----------
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// ---------- Quick Sort ----------
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivot = arr[high];
        int i = (low - 1);
        for (int j = low; j < high; j++) {
            if (arr[j] < pivot) {
                i++;
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        int temp = arr[i + 1];
        arr[i + 1] = arr[high];
        arr[high] = temp;

        int pi = i + 1;

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// ---------- Helper to copy arrays ----------
void copyArray(int *src, int *dest, int n) {
    for (int i = 0; i < n; i++)
        dest[i] = src[i];
}

// ---------- Main ----------
int main() {
    int n = 10000;  // number of elements
    int *arr = malloc(n * sizeof(int));
    int *arr1 = malloc(n * sizeof(int));
    int *arr2 = malloc(n * sizeof(int));

    srand(time(NULL));

    // Generate random numbers
    for (int i = 0; i < n; i++)
        arr[i] = rand() % 10000;

    // Copy to both arrays
    copyArray(arr, arr1, n);
    copyArray(arr, arr2, n);

    clock_t start, end;
    double cpu_time_used;

    // ---------- Bubble Sort ----------
    start = clock();
    bubbleSort(arr1, n);
    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Bubble Sort time: %.6f seconds\n", cpu_time_used);

    // ---------- Quick Sort ----------
    start = clock();
    quickSort(arr2, 0, n - 1);
    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Quick Sort time: %.6f seconds\n", cpu_time_used);

    free(arr);
    free(arr1);
    free(arr2);

    return 0;
}
