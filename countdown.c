#include <stdio.h>
#include <windows.h>   // for Sleep() on Windows

void countdown(int n) {
    if (n == 0) {
        printf("0\n");
        printf("Wait is over... BOOM!\n");
        return;
    }

    printf("%d\n", n);
    Sleep(1000);       // 1000 ms = 1 second
    countdown(n - 1);
}

int main() {
    int num;
    printf("Enter starting number: ");
    scanf("%d", &num);

    countdown(num);

    return 0;
}
