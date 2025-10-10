#include <stdio.h>
#include <string.h>

/* p06_getline_and_trim.c
 * Read a line using a safe getline-like function and demonstrate trimming trailing newline.
 */

#define MAXLINE 1024

int my_getline(char s[], int lim)
{
    int c, i;
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i++] = c;
    }
    s[i] = '\0';
    return i;
}

int main(void)
{
    char line[MAXLINE];
    printf("Type a line and press Enter:\n");
    if (my_getline(line, MAXLINE) > 0) {
        /* remove trailing newline if present */
        size_t len = strlen(line);
        if (len > 0 && line[len - 1] == '\n') {
            line[len - 1] = '\0';
        }
        printf("You typed: \"%s\"\n", line);
    }
    return 0;
}
