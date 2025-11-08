#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void swap_temp(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swap_arithmetic(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

void swap_xor(int *a, int *b) {
    if (a != b) {
        *a = *a ^ *b;
        *b = *a ^ *b;
        *a = *a ^ *b;
    }
}

int main() {
    int x=4, y=9;
    clock_t start,end;
    double cpuTime;
    
       srand(time(NULL));

    //METHOD 1: Temp
    start=clock();
        swap_temp(&x, &y);
    end=clock();
     cpuTime=((double)(end-start))/ CLOCKS_PER_SEC;
    printf("1st:%f seconds.\n",cpuTime);

    // Method 2: Arithmetic
        srand(time(NULL));

   start=clock();
         swap_arithmetic(&x, &y);
   end=clock();
    cpuTime=((double)(end-start))/ CLOCKS_PER_SEC;
    printf("2nd:%f seconds.\n",cpuTime);

    // Method 3: XOR
        srand(time(NULL));

    start=clock();
        swap_xor(&x, &y);
    end=clock();
     cpuTime=((double)(end-start))/ CLOCKS_PER_SEC;
    printf("3rd:%f seconds.\n",cpuTime);
   

    return 0;
}
