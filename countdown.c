#include <stdio.h>
#include <windows.h>

void countdown(int n)
{
    if (n < 0)
        return;
    else{
        Sleep(1000);
        printf("%d\n", n);
        countdown(n - 1);  
    }   
     
}

int main()
{
    int n=10;
    countdown(n);
    printf("Time's up!\n");
    return 0;
}