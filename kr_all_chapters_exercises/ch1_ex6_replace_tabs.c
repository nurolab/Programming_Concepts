#include <stdio.h>

/*
 * ch1_ex6_replace_tabs.c
 * Exercise 6: Replace tabs with spaces (tab stop every 4 columns)
 */
#define TABSIZE 4

int main(void)
{
    int c, pos = 0;

    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            int spaces = TABSIZE - (pos % TABSIZE);
            for (int i = 0; i < spaces; i++) {
                putchar(' ');
                pos++;
            }
        } else {
            putchar(c);
            pos++;
            if (c == '\n') pos = 0;
        }
    }

    return 0;
}
