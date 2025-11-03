#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n = 50000;  
    int arr1[50000], arr2[50000];
    struct timespec start, end;
    double t_bubble, t_selection;

    // generate random numbers
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        int num = rand() % 100000;
        arr1[i] = arr2[i] = num;
    }

    // ----- Bubble Sort -----
    clock_gettime(CLOCK_MONOTONIC, &start);
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (arr1[j] > arr1[j + 1]) {
                int temp = arr1[j];
                arr1[j] = arr1[j + 1];
                arr1[j + 1] = temp;
            }
    clock_gettime(CLOCK_MONOTONIC, &end);
    t_bubble = (end.tv_sec - start.tv_sec) + (end.tv_nsec - start.tv_nsec) / 1e9;

    // ----- Selection Sort -----
    clock_gettime(CLOCK_MONOTONIC, &start);
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++)
            if (arr2[j] < arr2[min])
                min = j;
        int temp = arr2[i];
        arr2[i] = arr2[min];
        arr2[min] = temp;
    }
    clock_gettime(CLOCK_MONOTONIC, &end);
    t_selection = (end.tv_sec - start.tv_sec) + (end.tv_nsec - start.tv_nsec) / 1e9;

    printf("Time taken by Bubble Sort: %.6f seconds\n", t_bubble);
    printf("Time taken by Selection Sort: %.6f seconds\n", t_selection);

    if (t_bubble < t_selection)
        printf("\nResult: Bubble Sort was faster.\n");
    else if (t_selection < t_bubble)
        printf("\nResult: Selection Sort was faster.\n");
    else
        printf("\nResult: Both took nearly the same time.\n");

    return 0;
}
