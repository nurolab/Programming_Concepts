#include <stdio.h>
#include <ctype.h>

/* p04_wc.c
 * Word/line/character count (simple 'wc' style) - counts lines, words, and characters from stdin.
 * Demonstrates stateful input processing.
 */
int main(void)
{
    int c;
    // c= 78;
    long lines = 0, words = 0, chars = 0;
    int inword = 0;

    while ((c = getchar()) != EOF) {
        chars++;
        if (c == '\n') lines++;
        if (isspace(c)) {
            inword = 0;
        } else if (!inword) {
            inword = 1;
            words++;
        }
    }

    printf("Lines: %ld Words: %ld Characters: %ld\n", lines, words, chars);
    return 0;
}