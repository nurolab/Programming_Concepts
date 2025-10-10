#include <stdio.h>
#include <string.h>

/*
 * ch1_ex5_remove_trailing_spaces.c
 * Exercise 5: Remove trailing blanks and tabs from each input line
 */
#define MAXLINE 1024

int main(void)
{
    char line[MAXLINE];
    int len, i;

    while (fgets(line, MAXLINE, stdin)) {
        len = (int)strlen(line);
        if (len > 0 && line[len - 1] == '\n') line[--len] = '\0';

        for (i = len - 1; i >= 0 && (line[i] == ' ' || line[i] == '\t'); i--)
            ;
        line[i + 1] = '\0';

        printf("%s\n", line);
    }

    return 0;
}
