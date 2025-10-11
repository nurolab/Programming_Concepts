#include <stdio.h>

/*
 * ch2_ex3_factorial.c
 * Exercise: Compute factorial using recursion
 */
long factorial(int n) {
    return (n <= 1) ? 1 : n * factorial(n-1);
}

int main(void) {
    int n = 6;
    printf("factorial(%d) = %ld\\n", n, factorial(n));
    return 0;
}
