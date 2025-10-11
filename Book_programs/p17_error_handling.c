#include <stdio.h>
#include <errno.h>
#include <string.h>

/* p17_error_handling.c
 * Demonstrate checking errno and printing strerror message when fopen fails.
 */
int main(void)
{
    FILE *f = fopen("does_not_exist.txt", "r");
    if (!f) {
        fprintf(stderr, "Error opening file: %s\n", strerror(errno));
        return 1;
    }
    fclose(f);
    return 0;
}
