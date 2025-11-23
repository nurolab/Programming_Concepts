#include <stdio.h>
#define CUBE(x) ((x) * (x) * (x))

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Cube = %d", CUBE(n));

    return 0;
}
