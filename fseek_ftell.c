
#include <stdio.h>

int main() {
    FILE *fp;
    long file_size;

    // Open the file in read mode
    fp = fopen("sample.txt", "r");

    // Check if the file was opened successfully
    if (fp == NULL) {
        printf("Error: Could not open file 'sample.txt'\n");
        return 1; // Indicate an error
    }

    // Move the file pointer to the end of the file
    fseek(fp, 0, SEEK_END);

    // Get the current position of the file pointer, which is the file size
    file_size = ftell(fp);
    printf("File size: %ld bytes\n", file_size);

    // Rewind the file pointer to the beginning of the file
    rewind(fp);
    printf("File pointer reset to beginning. Current position: %ld bytes\n", ftell(fp));

    // Close the file
    fclose(fp);

    return 0; // Indicate successful program execution
}
