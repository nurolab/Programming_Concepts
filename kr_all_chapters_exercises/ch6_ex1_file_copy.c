#include <stdio.h>

/*
 * ch6_ex1_file_copy.c
 * Exercise: Copy a file content (argv[1] -> argv[2])
 */
int main(int argc, char *argv[]) {
    if (argc != 3) { fprintf(stderr, "Usage: %s source dest\\n", argv[0]); return 1; }
    FILE *src = fopen(argv[1], "rb");
    if (!src) { perror("fopen source"); return 1; }
    FILE *dest = fopen(argv[2], "wb");
    if (!dest) { perror("fopen dest"); fclose(src); return 1; }
    int c;
    while ((c = fgetc(src)) != EOF) fputc(c, dest);
    fclose(src); fclose(dest);
    return 0;
}
