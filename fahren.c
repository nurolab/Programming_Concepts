#include <stdio.h>

int main()
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