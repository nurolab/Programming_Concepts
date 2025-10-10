#include <stdio.h>

/*
 * ch1_ex2_io.c
 * Exercise 2: Input integer, float, and character, and print them
 */
int main(void)
{
    int i;
    float f;
    char c;
    printf("Enter an integer, a float, and a character separated by spaces: ");
    if (scanf("%d %f %c", &i, &f, &c) == 3) {
        printf("You entered: integer=%d, float=%.2f, character='%c'\n", i, f, c);
    } else {
        printf("Invalid input!\n");
    }
    return 0;
}
