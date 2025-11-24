#include <stdio.h>
#include <time.h>

#define ITERATIONS 100000000

void swap_temp(int *a, int *b) { int t = *a; *a = *b; *b = t; }
void swap_arith(int *a, int *b) { *a = *a + *b; *b = *a - *b; *a = *a - *b; }
void swap_xor(int *a, int *b) { *a ^= *b; *b ^= *a; *a ^= *b; }
void swap_muldiv(int *a, int *b) { *a = (*a)*(*b); *b = (*a)/(*b); *a = (*a)/(*b); }


double profile(void (*swap)(int*, int*), int *a, int *b) {
    int x = *a, y = *b;
    clock_t start = clock();
    for(int i=0;i<ITERATIONS;i++) swap(&x,&y);
    return ((double)(clock() - start))/CLOCKS_PER_SEC;
}

int main() {
    int a, b, *pa = &a, *pb = &b;
    printf("Enter two integers: ");
    scanf("%d %d", pa, pb);

    void (*swaps[])(int*, int*) = {swap_temp, swap_arith, swap_xor, swap_muldiv};
    char *names[] = {"Temp Variable", "Arithmetic (+/-)", "XOR", "Multiplication/Division"};

    printf("\nProfiling %d swaps each:\n", ITERATIONS);
    for(int i=0;i<4;i++){
        double t = profile(swaps[i], pa, pb);
        printf("%s: %.6f seconds\n", names[i], t);
    }
    return 0;
}
