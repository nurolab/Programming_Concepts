#include <stdio.h>

/* p03_getchar_putchar.c
 * Copy input to output one character at a time using getchar() and putchar().
 */
int main(void)
{
    int c;
    while ((c = getchar()) != EOF) {
        putchar(c);
    }
    return 0;
}
