#include <stdio.h>
#include <math.h>

int main() {
    // Write a program to find the ASCII value of a character.

    char character; // Declare a character variable

    // Prompt the user to enter a character
    printf("Enter a character: ");
    // Read the character from the user
    scanf("%c", &character);

    // Print the ASCII value of the character
    printf("ASCII value of %c = %d\n", character, character);
    return 0;
}