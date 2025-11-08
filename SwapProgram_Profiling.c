#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap_temp(int a, int b) {
    printf(" Before Swap a= %d, b=%d\n", a,b);
    int temp=a;
    a=b;
    b=temp;
    printf("After Swap a= %d, b=%d\n", a,b);
    }
void swap_op(int a, int b) {
    printf(" Before Swap a= %d, b=%d\n", a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After Swap a= %d, b=%d\n", a,b);
    }


int main() {
    int a;
    int b;

    printf("Enter a ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d", &b);

    
    clock_t start_time_t1 = clock(); 

    swap_temp(a,b);
    
    clock_t end_time_t1 = clock();

    double execution_time_res1 = (double)(end_time_t1 - start_time_t1) / CLOCKS_PER_SEC;
    printf("Execution Time with temp: %f seconds\n", execution_time_res1);
    
    clock_t start_time_t2 = clock(); 

    swap_op(a,b);
    
    clock_t end_time_t2 = clock();

    double execution_time_res2 = (double)(end_time_t2 - start_time_t2) / CLOCKS_PER_SEC;
    printf("Execution Time without temp: %f seconds\n", execution_time_res2);
    return 0;
}