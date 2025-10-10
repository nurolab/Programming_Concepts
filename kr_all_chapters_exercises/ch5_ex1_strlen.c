#include <stdio.h>

/*
 * ch5_ex1_strlen.c
 * Exercise: Compute string length using pointers
 */
size_t my_strlen(const char *s) {
    const char *p = s;
    while (*p) p++;
    return p - s;
}

int main(void) {
    const char *str = "Kernighan";
    printf("Length of '%s' = %zu\\n", str, my_strlen(str));
    return 0;
}
