#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* p07_atoi_itoa_reverse.c
 * Simple implementations illustrating atoi (string to int), itoa (int to string),
 * and a reverse helper similar to K&R examples.
 */

void reverse(char s[])
{
    int i, j;
    char c;
    for (i = 0, j = strlen(s) - 1; i < j; i++, j--) {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}

void itoa(int n, char s[])
{
    int i = 0;
    int sign = n;
    if (sign < 0) n = -n;
    do {           /* generate digits in reverse order */
        s[i++] = n % 10 + '0';
    } while ((n /= 10) > 0);
    if (sign < 0) s[i++] = '-';
    s[i] = '\0';
    reverse(s);
}

int main(void)
{
    char s[100];
    int n = -12345;
    itoa(n, s);
    printf("itoa(%d) -> \"%s\"\n", n, s);
    printf("atoi(\"%s\") -> %d\n", s, atoi(s));
    return 0;
}
