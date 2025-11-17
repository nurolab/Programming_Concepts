#include<stdio.h>

int main(){
    int a=18;
    printf("Address of a:%x\t",&a);
    int *p = 0x751ffd54;
    printf("P's value:%d\t",*p);
    return 0;
}