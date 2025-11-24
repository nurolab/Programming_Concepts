#include <stdio.h>
#include <unistd.h>  

int main() {
    int t;
    printf("Enter time in seconds: ");
    scanf("%d", &t);

    while (t >= 0) {
        printf("%d\n", t--);
        sleep(1);
    }

    printf("GO RUN!!\n");
    return 0;
}
