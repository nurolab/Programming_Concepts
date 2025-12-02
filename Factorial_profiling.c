#include<stdio.h>
#include<time.h>

double fact_TopDown(int n){
    if(n<=1)
        return 1.0;
    else
        return n * fact_TopDown(n - 1);
}

 double fact_ButtomUp(int n, double x){
    if(n==1)
        return x;
    else 
        return fact_ButtomUp(n-1, n*x);
 }

 double fact(int n){
    double result = 1.0;
    for(int i=1; i<=n; i++){
        result =result*i;
    }
    return result;
}
int main(){
    double t1, t2;
    int n=5;
    int iterations=1000000;
    
    t1=clock();
    for(int i=0; i<iterations; i++)
        fact_TopDown(n);
    printf("Factorial (Top-Down): %.0f\n", fact_TopDown(n));
    t2=clock();
    double total_time=(double)(t2-t1)/CLOCKS_PER_SEC;
    printf("Time taken (Top-Down): %f seconds\n", total_time);

    t1=clock();
    for(int i=0; i<iterations; i++)
        fact_ButtomUp(n, 1);
    printf("Factorial (Bottom-Up): %.0f\n", fact_ButtomUp(n, 1.0));
    t2=clock();
    total_time=(double)(t2-t1)/CLOCKS_PER_SEC;
    printf("Time taken (Bottom-Up): %f seconds\n", total_time);

    t1=clock();
    for(int i=0; i<iterations; i++)
        fact(n); 
    printf("Factorial (Iterative): %.0f\n", fact(n));
    t2=clock();
    total_time=(double)(t2-t1)/CLOCKS_PER_SEC;  
    printf("Time taken (Iterative): %f seconds\n", total_time);
    return 0;
}