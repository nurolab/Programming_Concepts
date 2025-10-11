#include <stdio.h>
#include <ctype.h>

/*
 * ch1_ex3_wc.c
 * Exercise 3: Count lines, words, and characters from input
 */
int main(void)
{
    int c;
    long lines = 0, words = 0, chars = 0;
    int inword = 0;

    while ((c = getchar()) != EOF) {
        chars++;
        if (c == '\n') lines++;
        if (isspace(c)) inword = 0;
        else if (!inword) { inword = 1; words++; }
    }

    printf("Lines: %ld\nWords: %ld\nCharacters: %ld\n", lines, words, chars);
    return 0;
}
