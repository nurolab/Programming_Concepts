#include <stdio.h>
int countdown(int n){
    if(n==0){
        printf("0\n");
        printf("GO RUN!!");
        return 0;
    }
    printf("%d \n",n);
    countdown(n-1);
}
int main() {
    printf("Time starts now !!!");
    countdown(20);

    return 0;
}