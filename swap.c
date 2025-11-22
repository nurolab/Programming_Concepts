#include <stdio.h>

// Function to swap two integers using pointers
void swap(int *a, int *b) {
    int temp;
    temp = *a; // Store the value pointed to by 'a' in 'temp'
    *a = *b;   // Assign the value pointed to by 'b' to the address pointed to by 'a'
    *b = temp; // Assign the value in 'temp' to the address pointed to by 'b'
}

int main() {
    int num1 = 10;
    int num2 = 20;

    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    // Call the swap function, passing the addresses of num1 and num2
    swap(&num1, &num2);

    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}