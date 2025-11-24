#include <stdio.h>
int main() { // Changed return type from void to int
    FILE *fp;
    char text[100];
    fp = fopen("sample.txt", "a");
    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin); // Replaced gets() with fgets() for safer input
    fputs(text, fp); // fputs already handles newline if present in text from fgets
    fclose(fp);
    printf("Text appended successfully.");
    return 0; // Added return statement for main function
}