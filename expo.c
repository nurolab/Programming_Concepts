#include <stdio.h>
#include <time.h>

// power using normal multiplication
long long power_mul(int base, int exp) 
{
    long long result = 1;
    for (int i = 0; i < exp; i++)
        result *= base;
    return result;
}

// power using bitwise method 
long long power_bitwise(int base, int exp) 
{
    long long result = 1;
    while (exp > 0)
     {
        if (exp & 1)           // if last bit of exp is 1
            result *= base;
        base *= base;
        exp >>= 1;             // divide exp by 2
    }
    return result;
}

int main() 
{
    int base = 2, exp = 30;
    long long res1, res2;
    double t1, t2;
    struct timespec start, end;

    clock_gettime(CLOCK_MONOTONIC, &start);
    res1 = power_mul(base, exp);
    clock_gettime(CLOCK_MONOTONIC, &end);
    t1 = (end.tv_sec - start.tv_sec) + (end.tv_nsec - start.tv_nsec) / 1e9;

    clock_gettime(CLOCK_MONOTONIC, &start);
    res2 = power_bitwise(base, exp);
    clock_gettime(CLOCK_MONOTONIC, &end);
    t2 = (end.tv_sec - start.tv_sec) + (end.tv_nsec - start.tv_nsec) / 1e9;

    printf("\nNormal multiplication result: %lld", res1);
    printf("\nBitwise power result: %lld", res2);
    printf("\n\nTime (normal): %.9f sec", t1);
    printf("\nTime (bitwise): %.9f sec\n", t2);

    if (t1 < t2)
        printf("\n=> Normal multiplication is faster.\n");
    else
        printf("\n=> Bitwise method is faster.\n");

    return 0;
}

