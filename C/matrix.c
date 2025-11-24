#include <stdio.h>
// Main function where the program execution begins
int main() {
    // Declare 2D arrays for matrices a, b, and c (resultant matrix)
    // Max size 10x10, though actual size will be user-defined.
    int a[10][10], b[10][10], c[10][10];
    int r, c1; // 'r' for rows, 'c1' for columns (using c1 to avoid conflict with 'c' matrix)
    int ch;    // 'ch' for user's choice of operation

// Prompt the user to enter the number of rows and columns for the matrices
    printf("Enter rows and columns for matrices: ");
    // Read the rows and columns and store them in 'r' and 'c1'
    scanf("%d%d", &r, &c1);

    // Input for the first matrix
    printf("Enter elements of the first matrix:\n");
    // Loop through rows
    for (int i = 0; i < r; i++) {
        // Loop through columns
        for (int j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]); // Read element for matrix 'a'
        }
    }

    // Input for the second matrix
    printf("Enter elements of the second matrix:\n");
    // Loop through rows
    for (int i = 0; i < r; i++) {
        // Loop through columns
        for (int j = 0; j < c1; j++) {
            scanf("%d", &b[i][j]); // Read element for matrix 'b'
        }
    }

    // Prompt user to choose an operation
    printf("Choose an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("Enter your choice (1, 2, or 3): ");
    scanf("%d", &ch); // Read user's choice

    // Perform operation based on user's choice using if-else if statements
    if (ch == 1) { // Matrix Addition
        printf("Result of Addition:\n");
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c1; j++) {
                c[i][j] = a[i][j] + b[i][j]; // Add corresponding elements
                printf("%d ", c[i][j]);      // Print the result
            }
            printf("\n"); // Newline after each row
        }
    } else if (ch == 2) { // Matrix Subtraction
        printf("Result of Subtraction:\n");
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c1; j++) {
                c[i][j] = a[i][j] - b[i][j]; // Subtract corresponding elements
                printf("%d ", c[i][j]);      // Print the result
            }
            printf("\n"); // Newline after each row
        }
    } else if (ch == 3) { // Matrix Multiplication
        printf("Result of Multiplication:\n");
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c1; j++) {
                c[i][j] = 0; // Initialize element of result matrix to 0
                for (int k = 0; k < c1; k++) {
                    c[i][j] += a[i][k] * b[k][j]; // Perform dot product for each element
                }
                printf("%d ", c[i][j]); // Print the result
            }
            printf("\n"); // Newline after each row
        }
    } else {
        printf("Invalid choice. Please enter 1, 2, or 3.\n"); // Error for invalid choice
    }

    return 0; // Indicate successful program execution
}