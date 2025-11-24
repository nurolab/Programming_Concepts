#include <stdio.h>

int main() {
    FILE *src, *dest;
    char ch;

    // Open source.txt in read mode
    src = fopen("source.txt", "r");
    // Open copy.txt in write mode
    dest = fopen("copy.txt", "w");

    // Check if either file could not be opened
    if (src == NULL || dest == NULL) {
        printf("Error opening file.\n");
        return 1; // Indicate an error
    }

    // Read character by character from source and write to destination
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    printf("File copied successfully.");
    fclose(src); // Close the source file
    fclose(dest); // Close the destination file
    return 0; // Indicate successful execution
}