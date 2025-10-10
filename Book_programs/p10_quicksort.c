#include <stdio.h>
#include <stdlib.h>

/* p10_quicksort.c
 * Simple quicksort implementation (in-place) for integers.
 * Demonstrates recursion and partitioning.
 */

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int a[], int lo, int hi)
{
    int pivot = a[hi];
    int i = lo - 1;
    for (int j = lo; j < hi; j++) {
        if (a[j] <= pivot) {
            i++;
            swap(&a[i], &a[j]);
        }
    }
    swap(&a[i + 1], &a[hi]);
    return i + 1;
}

void quicksort(int a[], int lo, int hi)
{
    if (lo < hi) {
        int p = partition(a, lo, hi);
        quicksort(a, lo, p - 1);
        quicksort(a, p + 1, hi);
    }
}

int main(void)
{
    int a[] = { 33, 10, 55, 71, 29, 15 };
    int n = sizeof a / sizeof a[0];
    quicksort(a, 0, n - 1);
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}
