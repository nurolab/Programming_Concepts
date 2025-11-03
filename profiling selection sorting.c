<<<<<<< Updated upstream
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void selectionSort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++)
            if (a[j] < a[min]) min = j;
        if (min != i) {
            int t = a[i];
            a[i] = a[min];
            a[min] = t;
        }
    }
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int *a = malloc(n * sizeof(int));
    srand(time(NULL));
    for (int i = 0; i < n; i++)
        a[i] = rand() % 10000
        ; 14


    clock_t start = clock();
    selectionSort(a, n);
    clock_t end = clock();

    double time = (double)(end - start) / CLOCKS_PER_SEC;

    printf("Sorted array:\n");
    if (n <= 50)
        for (int i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\nTime taken: %.6f seconds\n", time);

    free(a);
    return 0;
}
=======
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void selectionSort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++)
            if (a[j] < a[min]) min = j;
        if (min != i) {
            int t = a[i];
            a[i] = a[min];
            a[min] = t;
        }
    }
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int *a = malloc(n * sizeof(int));
    if (!a) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    srand(time(NULL));
    for (int i = 0; i < n; i++)
        a[i] = rand() % 10000000; // Random numbers (0–9,999,999)

    clock_t start = clock();
    selectionSort(a, n);
    clock_t end = clock();

    double time_sec = (double)(end - start) / CLOCKS_PER_SEC;
    double time_ms = time_sec * 1000.0; // milliseconds

    printf("\nSorted array preview:\n");
    if (n <= 50) {
        for (int i = 0; i < n; i++)
            printf("%d ", a[i]);
    } else {
        // Show only first and last 5 for large arrays
        for (int i = 0; i < 5; i++) printf("%d ", a[i]);
        printf("... ");
        for (int i = n - 5; i < n; i++) printf("%d ", a[i]);
    }

    printf("\n\nTime taken by Selection Sort:\n");
    printf("%.9f seconds (%.3f ms)\n", time_sec, time_ms);

    free(a);
    return 0;
}
>>>>>>> Stashed changes
