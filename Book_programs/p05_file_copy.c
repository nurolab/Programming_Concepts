#include <stdio.h>

/* p05_file_copy.c
 * Copy from stdin to stdout (or use redirection) - similar to cp when combined with shell redirection.
 * Demonstrates buffered I/O functions fgets/fputs or fread/fwrite; here we use fgets/fputs for portability.
 */
int main(void)
{
    char buf[4096];
    while (fgets(buf, sizeof buf, stdin) != NULL) {
        fputs(buf, stdout);
    }
    return 0;
}
