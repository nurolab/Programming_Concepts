#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubble(int *a, int n) {
    for (int i = 0, swapped = 1; i < n - 1 && swapped; i++) {
        swapped = 0;
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int t = a[j]; 
                a[j] = a[j + 1]; 
                a[j + 1] = t;
                swapped = 1;
            }
        }
    }
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int *arr = malloc(n * sizeof(int));
    if (!arr) return 1;

    srand((unsigned)time(NULL));
    for (int i = 0; i < n; i++)
        arr[i] = rand() % 10000; // random values

    clock_t t0 = clock();
    bubble(arr, n);
    clock_t t1 = clock();

    double sec = (double)(t1 - t0) / CLOCKS_PER_SEC;

    printf("\nSorted elements%s:\n", n <= 50 ? "" : " (first 50 shown)");
    for (int i = 0; i < (n < 50 ? n : 50); i++)
        printf("%d ", arr[i]);
    printf("\nTime used: %.6f s\n", sec);

    free(arr);
    return 0;
}
