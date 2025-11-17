#include<stdio.h>

void countDown(int n){
    if(n<=0){
        return ;
    }else{
        printf("%d\t",n);
        return countDown(n-1);
    }
}


int main (){
    int n = 10;
    printf("Count Down Begins::");
    countDown(n);
    return 0;
}