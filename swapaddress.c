
#include <stdio.h>
// Function to swap the values of two integers using pointers
// It takes two integer pointers as arguments.
void swap(int *a, int *b) {
    int t = *a; // Declare a temporary integer 't' and store the value pointed to by 'a'
    *a = *b;    // Assign the value pointed to by 'b' to the memory location pointed to by 'a'
    *b = t;     // Assign the value stored in 't' (original value of *a) to the memory location pointed to by 'b'
}

// Main function where the program execution begins
int main() {
    int a, b; // Declare two integer variables 'a' and 'b'

    // Prompt the user to enter two integers
    printf("Enter a,b: ");
    // Read the two integers entered by the user and store them in 'a' and 'b'
    scanf("%d%d", &a, &b);

    // Call the swap function, passing the addresses of 'a' and 'b'
    swap(&a, &b);

    // Print the values of 'a' and 'b' after the swap operation
    printf("After swap a=%d b=%d\n", a, b);
    return 0; // Indicate successful program execution
}
