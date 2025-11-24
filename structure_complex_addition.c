#include <stdio.h>

// Define a structure named 'complex' to represent a complex number
struct complex { float real, imag; };

// Main function where the program execution begins
int main() {
    // Declare three 'complex' type variables: c1, c2 for input, and sum for the result
    struct complex c1, c2, sum;

    // Prompt the user to enter the first complex number
    printf("Enter first complex number (real imag): ");
    scanf("%f%f", &c1.real, &c1.imag);
    // Prompt the user to enter the second complex number
    printf("Enter second complex number (real imag): ");
    scanf("%f%f", &c2.real, &c2.imag);
    // Calculate the sum of the real parts and imaginary parts
    sum.real = c1.real + c2.real;
    sum.imag = c1.imag + c2.imag;
    // Print the sum of the complex numbers in the format "real + imag i"
    printf("Sum = %.2f + %.2fi", sum.real, sum.imag);
 return 0;
}