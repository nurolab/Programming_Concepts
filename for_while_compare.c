#include<stdio.h>
#include<time.h>
void my_for_func()
{
    int i;
    for(i=0;i<10000000;i++){
    //    printf("%d",i);
    }
}
void my_while_func()
{
    int i=0;
    while(i<10000000)
    {
        // printf("%d",i);
        i++;
    }
}
int main(){
    clock_t start_time, end_time;
    start_time=clock();
    my_for_func();
    end_time=clock();
    double time_for=(double) (end_time - start_time) / CLOCKS_PER_SEC;
    start_time=clock();
     my_while_func();
    end_time=clock();
    double time_while=(double) (end_time - start_time) / CLOCKS_PER_SEC;
    printf("Profiling report:\n");
    printf("Function my_for_func() took **%f seconds** of CPU time to execute.\n",time_for);
    printf("Function my_while_func() took **%f seconds** of CPU time to execute.\n",time_while);
    return 0;
}