#include <stdio.h>

int main() {
    FILE *fp;
    char ch;

    fp = fopen("myfile.txt", "r");   // Try to open a file

    // Error handling
    if (fp == NULL) {
        printf("Error: File not found or cannot be opened.\n");
        return 1;   // Exit the program with error code
    }

    printf("File opened successfully. Content:\n");
    while ((ch = fgetc(fp)) != EOF) {
        printf("%c", ch);
    }

    fclose(fp);
    return 0;
}
