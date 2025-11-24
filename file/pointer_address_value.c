#include <stdio.h>

// Main function where the program execution begins
int main() {
    int x = 10; // Declare an integer variable 'x' and initialize it to 10
    int *p = &x; // Declare an integer pointer 'p' and initialize it with the address of 'x'
    int **pp = &p; // Declare a pointer to an integer pointer 'pp' and initialize it with the address of 'p'

    // Print the value of 'x' using direct access, through pointer 'p', and through pointer to pointer 'pp'
    printf("Value=%d via p=%d via pp=%d\n", x, *p, **pp);

    return 0; // Indicate successful program execution
}

