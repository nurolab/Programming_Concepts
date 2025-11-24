
#include <stdio.h>

// main function where the program execution begins
int main() {
    FILE *fp;
    char text[100];

    // Open the file "sample.txt" in write mode ("w")
    // If the file does not exist, it will be created. If it exists, its content will be truncated.
    fp = fopen("sample.txt", "w");
    // Prompt the user to enter text to write into the file
    printf("Enter text to write: ");
    // Read a line of text from standard input (keyboard) and store it in the 'text' array
    // Using gets() is generally unsafe; fgets() is preferred for security.
    gets(text);
    // Write the content of the 'text' array to the file pointed to by 'fp'
    fputs(text, fp);
    // Close the file
    fclose(fp);

    // Open the file "sample.txt" in read mode ("r")
    fp = fopen("sample.txt", "r");
    printf("\nFile content:\n");
    // Read content from the file line by line until the end of the file is reached
    while (fgets(text, 100, fp)) { // fgets reads at most 99 characters or until a newline, storing it in 'text'
        printf("%s", text); // Print the read line to the console
    }
    // Close the file
    fclose(fp);

    return 0; // Indicate successful program execution
}
