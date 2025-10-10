#include <stdio.h>

/* p02_temp_f_to_c.c
 * Convert Fahrenheit to Celsius using formula: C = 5*(F-32)/9
 * Demonstrates arithmetic and scanf/printf.
 */
int main(void)
{
    double f, c;
    printf("Enter temperature in Fahrenheit: ");
    if (scanf("%lf", &f) != 1) {
        fprintf(stderr, "Invalid input\n");
        return 1;
    }
    c = 5.0 * (f - 32.0) / 9.0;
    printf("%.2f F = %.2f C\n", f, c);
    return 0;
}
