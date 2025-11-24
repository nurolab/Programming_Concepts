#include <stdio.h>
int main() {
    // Declare a 2D array 'a' to store the matrix elements. Max size 10x10.
    int a[10][10];
    int n; // Declare an integer variable 'n' to store the size of the square matrix (n x n)

    // Prompt the user to enter the size of the square matrix
    printf("Enter n: ");
    // Read the integer entered by the user and store it in 'n'
    scanf("%d", &n);

    // Input for the matrix elements
    printf("Enter elements of the matrix:\n");
    // Loop through rows
    for (int i = 0; i < n; i++) {
        // Loop through columns
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]); // Read element for matrix 'a'
        }
    }

    // Print the diagonal elements of the matrix
    printf("Diagonal elements are: ");
    // Loop through the rows (and implicitly columns, as it's a square matrix)
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i][i]); // Print the element where row index equals column index (diagonal)
    }
    printf("\n"); // Print a newline character for better formatting

    return 0; // Indicate successful program execution
}
