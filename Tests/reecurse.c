#include <stdio.h>
void countdown(int n){
    if(n<=0){
        printf("Blastoff!\n");
    } else {
        printf("%d\n", n);
        countdown(n-1);
    }
}
int factorial_bu(int n, int i, int product){
    if(i > n)
        return product;
    return factorial_bu(n, i + 1, product * i);
}
int factorial_td(int n){
    if(n <= 1)
        return 1;
    return n * factorial_td(n - 1);
}
int main(){
    countdown(5);
    printf("%d\n", factorial_bu(4, 1, 1));
    printf("%d\n", factorial_td(4));
}