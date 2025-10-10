#include <stdio.h>
#include <string.h>

/* p08_strcpy_strcat_strlen.c
 * Demonstrate strcpy, strcat, and strlen.

 */
int main(void)
{
    char a[100] = "Hello";
    char b[] = " K&R";
    printf("a before: \"%s\"\n", a);
    strcat(a, b);                 /* append b onto a */
    printf("After strcat: \"%s\" (len=%zu)\n", a, strlen(a));
    char dest[100];
    strcpy(dest, a);              /* copy */
    printf("Copied to dest: \"%s\"\n", dest);
    return 0;
}
