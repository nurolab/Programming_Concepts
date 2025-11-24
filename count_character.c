
#include <stdio.h>

// main function where the program execution begins
int main() { // Changed return type from void to int
    FILE *fp;
    char ch;
    int chars = 0, lines = 0;

    // Open the file "sample.txt" in read mode ("r")
    fp = fopen("sample.txt", "r");
    if (fp == NULL) { printf("File not found."); return 1; } // Return 1 to indicate an error

    // Read character by character until the end of the file (EOF)
    while ((ch = fgetc(fp)) != EOF) {
        chars++;
        if (ch == '\n') lines++;
    }
    fclose(fp);
    printf("Characters: %d\nLines: %d", chars, lines);
 return 0; // Indicate successful program execution
}
