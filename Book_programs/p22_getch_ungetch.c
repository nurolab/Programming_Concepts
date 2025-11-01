#include <ctype.h>
#include <stdio.h>
#define NUMBER '0'

int getch(void);
void ungetch(int);

/* getop: get next operator or numeric operand */
int getop(char s[])
{
    int i, c;

    /* skip whitespace */
    while ((s[0] = c = getch()) == ' ' || c == '\t')
        ;

    s[1] = '\0';

    if (!isdigit(c) && c != '.')
        return c;  /* not a number */

    i = 0;

    /* integer part */
    if (isdigit(c))
        while (isdigit(s[++i] = c = getch()))
            ;

    /* fraction part */
    if (c == '.') {
        s[++i] = c;
        while (isdigit(s[++i] = c = getch()))
            ;
    }

    s[i] = '\0';

    if (c != EOF)
        ungetch(c);

    return NUMBER;
}
