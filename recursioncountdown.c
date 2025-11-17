#include <stdio.h>
#include <unistd.h>  

void countdown(int n) {
    if (n<=0) {                 
        printf("Happy Birthday!\n");
        return;
    } 
    else {
        printf("%d\n", n);     
        sleep(1);          
        countdown(n - 1);
    }
}

int main() {
    int value;

    printf("Enter a value to start the countdown: ");
    scanf("%d", &value);

    countdown(value);

    return 0;
}
