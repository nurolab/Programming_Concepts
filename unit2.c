#include<stdio.h>
/* strlen:  return length of s */ 
    int strleng(char s[]) 
    { 
       int i=0; 
       while (s[i] != '\0') 
           ++i; 
       return(i); 
    } 
    void main()
    {
        char s[] = "Sonal";
        int num;  
        num = strleng(s);
        printf("%d",num);
    }


   

