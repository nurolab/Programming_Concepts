#include <stdio.h>
#include <time.h>

long long multiply(long long a, long long b) 
{
    return a * b;
}

long long bitwisem(long long a, long long b) 
{
    long long result = 0;
    while (b > 0) 
    {
        if (b & 1)
            result += a;
        a <<= 1;   // performs multiplication by 2
        b >>= 1;  // division is done to know when to stop
    }
    return result;
}

int main() {
    long long a = 123456, b = 98765, result;
    clock_t start, end;
    double time_normal, time_bitwise;
    int i;

    start = clock();
    for (i = 0; i < 1000000; i++)
        result = multiply(a, b);
    end = clock();
    time_normal = (double)(end - start) / CLOCKS_PER_SEC;

    start = clock();
    for (i = 0; i < 1000000; i++)
        result = bitwisem(a, b);
    end = clock();
    time_bitwise = (double)(end - start) / CLOCKS_PER_SEC;

    printf("Normal Multiply Time: %lf sec\n", time_normal);
    printf("Bitwise Multiply Time: %lf sec\n", time_bitwise);

    // comparision
     if (time_normal < time_bitwise)
        printf("\nNormal multiplication is faster.\n");
    else if (time_bitwise < time_normal)
        printf("\nBitwise multiplication is faster.\n");
    else
        printf("\nBoth took the same time.\n");

    return 0;
}
