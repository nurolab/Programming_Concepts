#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int linearSearch(int arr[], int n, int target) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int binarySearch(int arr[], int n, int target) {
    int low = 0, high = n - 1;

    while(low <= high) {
        int mid = (low + high) / 2;

        if(arr[mid] == target)
            return mid;
        else if(arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1; // Not found
}


int main() {
    int n, target;

    printf("Enter the size of array (large input): ");
    scanf("%d", &n);

    int arr[n];

    // Seed for random number generation
    srand(time(0));

    // Generating large set of random values
    for(int i = 0; i < n; i++) {
        arr[i] = rand() % 100000; // random numbers up to 99999
    }

    printf("Enter the number to search: ");
    scanf("%d", &target);
    
    clock_t start_time_linear = clock(); 

    int lineresult = linearSearch(arr, n, target);
    
    clock_t end_time_linear = clock();

    if(lineresult != -1) {
        printf("Element %d found at index %d in linear Search\n", target, lineresult);
    } else {
        printf("Element %d NOT found in the array in linear Search\n", target);
    }
    
    double execution_time_linear = (double)(end_time_linear - start_time_linear) / CLOCKS_PER_SEC;
    printf("Execution Time for linear: %f seconds\n", execution_time_linear);
    
    clock_t start_time_binary = clock(); 
    
    int BinaryResult = binarySearch(arr, n, target);
    
    clock_t end_time_binary = clock();
    if(BinaryResult != -1) {
        printf("Element %d found at index %d in Binary Search\n", target, BinaryResult);
    } else {
        printf("Element %d NOT found in the array in Binary Search\n", target);
    }
    
    // Calculate time taken
    double execution_time_binary = (double)(end_time_binary - start_time_binary) / CLOCKS_PER_SEC;
    printf("Execution Time for binary: %f seconds\n", execution_time_binary);


    return 0;
    
}