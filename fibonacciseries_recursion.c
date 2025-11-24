
#include <stdio.h>
// Function to calculate the nth Fibonacci number using recursion
// Base cases:
// If n is 0, return 0 (first Fibonacci number)
// If n is 1, return 1 (second Fibonacci number)
// Recursive step:
// For n > 1, the nth Fibonacci number is the sum of the (n-1)th and (n-2)th Fibonacci numbers
int fib(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fib(n - 1) + fib(n - 2);
    }
}

// Main function where the program execution begins
int main() {
    int n; // Declare an integer variable 'n' to store the number of terms
    printf("Enter terms: "); // Prompt the user to enter the number of terms
    scanf("%d", &n); // Read the integer entered by the user and store it in 'n'

    // Loop to print the first 'n' Fibonacci numbers
    for (int i = 0; i < n; i++) {
        printf("%d ", fib(i)); // Call the fib function for each number from 0 to n-1 and print the result
    }
    printf("\n"); // Print a newline character for better formatting
    return 0; // Indicate successful program execution
}
