#include <stdio.h>
#include <time.h>

#define ITERATIONS 100000000  

double profile_division(unsigned int value) {
    volatile unsigned int result;  
    clock_t start = clock();

    for (unsigned int i = 0; i < ITERATIONS; i++) {
        result = value / 2;
    }

    clock_t end = clock();
    return ((double)(end - start)) / CLOCKS_PER_SEC;
}
double profile_right_shift(unsigned int value) {
    volatile unsigned int result;  
    clock_t start = clock();

    for (unsigned int i = 0; i < ITERATIONS; i++) {
        result = value >> 1;
    }

    clock_t end = clock();
    return ((double)(end - start)) / CLOCKS_PER_SEC;
}

int main() {
    unsigned int value;
    double time_division, time_shift;

    printf("Enter numbers to profile (0 to exit):\n");

    while (1) {
        printf("\nEnter value: ");
        scanf("%u", &value);

        if (value == 0) break;

        time_division = profile_division(value);
        time_shift = profile_right_shift(value);

        printf("Normal Division Time:     %.6f seconds\n", time_division);
        printf("Bitwise Right Shift Time: %.6f seconds\n", time_shift);
    }

    printf("\nExiting profiling program.\n");
    return 0;
}
