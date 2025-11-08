#include <stdio.h>
#include <time.h>
#include <math.h>
#define iterations 100000000
#define iters 100
/*
Write a program to print even numbers from 0 to 100 using a loop.
Measure and display the execution time taken by the program to complete this task using clock() function.
*/  
void function1(){
    for (int number = 0; number <= iterations; number += 2) {
            // printf("%d\n", number);
    }
}
void function2(){
    int number = 0;
    while (number < iterations) {
        if (number >> 1 == 0) {
            // printf("%d\n", number);
        }
        number++;
    }
}
void function3(){
    for (int number = 0; number < iterations; number++) {
        if (number / 2 == 0) {
            // printf("%d\n", number);
        }
    }
}
double average(int a[iters]){
    int sum = 0;
    for (int i = 0; i < iters; i++) {
        sum += a[i];
    }
    return sum / iters;
}
int main() {
    int t[iters];
    for(int i = 0; i < iters; i++){
        clock_t start_time, end_time;
        double cpu_time_used;
        start_time = clock();
        function3();
        end_time = clock();
        cpu_time_used = ((double) (end_time - start_time));
        t[i] = cpu_time_used;
        // printf("Total clock ticks used: %ld\n", (long)(end_time - start_time));
    }
    printf("Average time taken by function1: %f seconds\n", average(t));
    for(int i = 0; i < iters; i++){
        clock_t start_time, end_time;
        double cpu_time_used;
        start_time = clock();
        function2();
        end_time = clock();
        cpu_time_used = ((double) (end_time - start_time));
        t[i] = cpu_time_used;
        // printf("Total clock ticks used: %ld\n", (long)(end_time - start_time));
    }
    printf("Average time taken by function1: %f seconds\n", average(t));
    return 0;
}