#include <stdio.h>

/* p20_command_line_args.c
 * Demonstrate reading command-line arguments.
 */
int main(int argc, char *argv[])
{
    printf("Program name: %s\\n", argv[0]);
    for (int i = 1; i < argc; ++i)
        printf("arg[%d] = %s\\n", i, argv[i]);
    return 0;
}
