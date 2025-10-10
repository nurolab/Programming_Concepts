#include <stdio.h>

/*
 * ch3_ex1_pointer_basics.c
 * Exercise: Demonstrate basic pointers and indirection
 */
int main(void) {
    int a = 10;
    int *p = &a;
    printf("Value of a = %d\\n", a);
    printf("Value via pointer *p = %d\\n", *p);
    *p = 20;
    printf("Value of a after change = %d\\n", a);
    return 0;
}
