#include <stdio.h>
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    int result = num >> 3;
    printf("num = %d, result = %d\n", num, result);
    return 0;
}
