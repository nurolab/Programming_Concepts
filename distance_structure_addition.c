#include <stdio.h>

// Define a structure named 'distance' to represent a length in feet and inches
struct distance {
    int feet;  // Integer part for feet
    float inch; // Floating-point part for inches
};

// Main function where the program execution begins
int main() {
    // Declare three 'distance' type variables: d1, d2 for input, and sum for the result
    struct distance d1, d2, sum;

    // Prompt the user to enter the first distance
    printf("Enter first distance (feet inch): ");
    // Read the feet and inch values for the first distance and store them in d1
    scanf("%d%f", &d1.feet, &d1.inch);

    // Prompt the user to enter the second distance
    printf("Enter second distance (feet inch): ");
    // Read the feet and inch values for the second distance and store them in d2
    scanf("%d%f", &d2.feet, &d2.inch);

    // Calculate the sum of feet and inches separately
    sum.feet = d1.feet + d2.feet;
    sum.inch = d1.inch + d2.inch;

    // Normalize the inches: if inches are 12 or more, convert 12 inches to 1 foot
    // This loop handles cases where sum.inch might be significantly greater than 12.0
    while (sum.inch >= 12.0) {
        sum.inch -= 12.0; // Subtract 12 inches from the total inches
        sum.feet++;       // Add 1 to feet for every 12 inches subtracted
    }

    // Print the sum of the distances in the format feet' inch"
    printf("Sum of distances = %d' %.2f\"\n", sum.feet, sum.inch);
    return 0; // Indicate successful program execution
}