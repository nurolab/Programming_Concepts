#include <stdio.h>

/*
 * ch2_ex2_swap.c
 * Exercise: Swap two numbers using function and pointers
 */
void swap(int *x, int *y) {
    int t = *x; *x = *y; *y = t;
}

int main(void) {
    int a = 3, b = 7;
    printf("Before swap: a=%d, b=%d\\n", a, b);
    swap(&a, &b);
    printf("After swap: a=%d, b=%d\\n", a, b);
    return 0;
}
