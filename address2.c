
#include<stdio.h>

int main(){
    int a = 5;
    int *p = &a;
    printf("%d\n",&a);
    *p = 0x751ffd54;
    printf("A's value:%d\t",a);
    printf("P's value:%d\t",p);
    printf("Pointer P's value:%d\t",*p);
    return 0;
}