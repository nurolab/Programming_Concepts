#include <stdio.h>

// Function declaration (prototype)
int add(int x, int y);    

int main() {
    int a, b, result;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    result = add(a, b);   // function calling

    printf("Sum = %d\n", result);

    return 0;
}

// Function definition
int add(int x, int y) {
    return x + y;   // returns sum
}
