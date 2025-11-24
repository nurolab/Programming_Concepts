#include <stdio.h>

union Data {
    int i;
    float f;
    char c;
};

int main() {
    union Data d;

    // Store integer
    d.i = 100;
    printf("After storing integer:\n");
    printf("i = %d, f = %.2f, c = %c\n", d.i, d.f, d.c);

    // Store float
    d.f = 25.5;
    printf("\nAfter storing float:\n");
    printf("i = %d, f = %.2f, c = %c\n", d.i, d.f, d.c);

    // Store char
    d.c = 'A';
    printf("\nAfter storing char:\n");
    printf("i = %d, f = %.2f, c = %c\n", d.i, d.f, d.c);

    return 0;
}

