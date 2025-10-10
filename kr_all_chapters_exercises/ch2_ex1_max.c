#include <stdio.h>

/*
 * ch2_ex1_max.c
 * Exercise: Return maximum of two numbers using function
 */
int max(int a, int b) { return (a > b) ? a : b; }

int main(void) {
    int a = 5, b = 10;
    printf("max(%d, %d) = %d\\n", a, b, max(a,b));
    return 0;
}
