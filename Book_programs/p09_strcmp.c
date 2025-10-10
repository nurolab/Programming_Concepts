#include <stdio.h>
#include <string.h>

/* p09_strcmp.c
 * Demonstrate strcmp usage for lexical comparison.
 */
int main(void)
{
    const char *s1 = "apple";
    const char *s2 = "banana";
    int cmp = strcmp(s1, s2);
    if (cmp < 0) printf("%s < %s\n", s1, s2);
    else if (cmp > 0) printf("%s > %s\n", s1, s2);
    else printf("%s == %s\n", s1, s2);
    return 0;
}
