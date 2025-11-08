#include<stdio.h>
int main()
{
    int i, n;
    printf("Enter n: ");
    scanf("%d", &n);
    int s[n];
    for (int i = 0; i < n; i++)
    {
        s[i] = 0;
    }  
    if (n > 0)
        for (i = 0; i < n; i++)
            if (s[i] > 0) {
                printf("...");
                return(i) ;
            }
    else
        printf("error -- n is negative\n");
    return(0);
}