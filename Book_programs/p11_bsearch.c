#include <stdio.h>

/* p11_bsearch.c
 * Simple binary search on a sorted array (iterative).
 */
int bsearch_int(int a[], int n, int key)
{
    int lo = 0, hi = n - 1;
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if (a[mid] == key) return mid;
        else if (a[mid] < key) lo = mid + 1;
        else hi = mid - 1;
    }
    return -1;
}

int main(void)
{
    int a[] = { 2, 4, 6, 8, 10, 12 };
    int n = sizeof a / sizeof a[0];
    int key = 8;
    int idx = bsearch_int(a, n, key);
    if (idx >= 0) printf("Found %d at index %d\n", key, idx);
    else printf("%d not found\n", key);
    return 0;
}
