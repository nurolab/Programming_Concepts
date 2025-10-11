#include <stdio.h>

/*
 * ch1_ex4_copy_input.c
 * Exercise 4: Copy input to output using getchar() and putchar()
 */
int main(void)
{
    int c;
    while ((c = getchar()) != EOF) {
        putchar(c);
    }
    return 0;
}
