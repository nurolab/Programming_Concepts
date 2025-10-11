#include <stdio.h>

/* p18_makefile_comment_example.c
 * A trivial program that could be built by a Makefile target.
 * Demonstrates that C source files are typically small units compiled by make.
 */
int main(void)
{
    puts("Built by make - example");
    return 0;
}
