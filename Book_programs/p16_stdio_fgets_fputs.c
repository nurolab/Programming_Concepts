#include <stdio.h>

/* p16_stdio_fgets_fputs.c
 * Demonstrate using fgets and fputs for safe string input/output.
 */
int main(void)
{
    char buf[128];
    printf("Enter a line: ");
    if (fgets(buf, sizeof buf, stdin) != NULL) {
        fputs("You entered: ", stdout);
        fputs(buf, stdout);
    }
    return 0;
}
