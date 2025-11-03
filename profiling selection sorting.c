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
