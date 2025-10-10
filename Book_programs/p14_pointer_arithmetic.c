#include <stdio.h>

/* p14_pointer_arithmetic.c
 * Illustrate pointer arithmetic with arrays.
 */
int main(void)
{
    int a[] = { 10, 20, 30, 40 };
    int *p = a;            /* points at first element */
    for (int i = 0; i < 4; i++) {
        printf("a[%d] = %d, *(p+%d) = %d\\n", i, a[i], i, *(p + i));
    }
    return 0;
}
