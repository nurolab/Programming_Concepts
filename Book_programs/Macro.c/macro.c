#include<stdio.h>
# define CUBE(a)((a)*(a)*(a))

int main()
{
  int num=5;
   int result = CUBE(num);
  printf("%d %d",num,result);
  return 0;
}