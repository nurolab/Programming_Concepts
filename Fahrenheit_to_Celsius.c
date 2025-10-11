#include <stdio.h>

int main(void)
{
    const int LOWER = 0;      // Lower limit of temperature scale
    const int UPPER = 300;    // Upper limit
    const int STEP = 20;      // Step size

    printf("Fahrenheit\tCelsius\n");
    printf("-----------------------\n");

    for (int fahr = LOWER; fahr <= UPPER; fahr += STEP) {
        float celsius = (5.0f / 9.0f) * (fahr - 32);
        printf("%10d\t%7.2f\n", fahr, celsius);
    }

    return 0;
}