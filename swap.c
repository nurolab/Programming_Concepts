#include <stdio.h>
#include <time.h>

// 1. Swap using temporary variable
void swap_temp(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// 2. Swap using arithmetic 
void swap_arithmetic(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

// 3. Swap using bitwise XOR
void swap_xor(int *a, int *b) {
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

// 4. Swap using shifts 
void swap_shift(int *a, int *b) {

    *a = *a * *b;      
    *b = *a / *b;
    *a = *a / *b;
}

int main() {
    int a = 8, b = 4;
    int x, y;
    clock_t start, end;
    double t1, t2, t3, t4, t5;
    int repeat = 10000000; 

    // 1. Temporary variable
    x = a; y = b;
    start = clock();
    for (int i = 0; i < repeat; i++)
        swap_temp(&x, &y);
    end = clock();
    t1 = (double)(end - start) / CLOCKS_PER_SEC;

    // 2. Arithmetic
    x = a; y = b;
    start = clock();
    for (int i = 0; i < repeat; i++)
        swap_arithmetic(&x, &y);
    end = clock();
    t2 = (double)(end - start) / CLOCKS_PER_SEC;

    // 3. XOR
    x = a; y = b;
    start = clock();
    for (int i = 0; i < repeat; i++)
        swap_xor(&x, &y);
    end = clock();
    t3 = (double)(end - start) / CLOCKS_PER_SEC;

    // 4. Shift-based (only for powers of 2)
    x = a; y = b;
    start = clock();
    for (int i = 0; i < repeat; i++)
        swap_shift(&x, &y);
    end = clock();
    t4 = (double)(end - start) / CLOCKS_PER_SEC;

    printf("Final values after last swap: x = %d, y = %d\n", x, y);
    printf("\nTime (Temp variable):       %.9f sec", t1);
    printf("\nTime (Arithmetic):          %.9f sec", t2);
    printf("\nTime (XOR):                 %.9f sec", t3);
    printf("\nTime (Shift-based):         %.9f sec\n", t4);


    return 0;
}
