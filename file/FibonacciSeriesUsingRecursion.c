#include <stdio.h>

int fibonacci(int n) {
    if (n == 0)
        return 0;          // 0th term is 0
    else if (n == 1)
        return 1;          // 1st term is 1
    else
        return fibonacci(n-1) + fibonacci(n-2);   // Recursive call
}

int main() {
    int n, i;

    printf("Enter how many terms you want: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }

    return 0;
}
