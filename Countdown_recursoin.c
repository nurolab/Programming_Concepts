#include <stdio.h>
void Count(int x){
    if(x>0){
        printf("%d\n",x);
        return Count(x-1);
    }
    else{
        printf("%d\n YAY! HBD!",x);
    }
}
int main() {
 int x=10;
printf("Countdown begins:::\n");
Count(x);
    return 0;
}