#include <stdio.h>

struct student {
    char name[50]; 
    int roll;      
    int age;       
    float marks[5]; 
};
int main() {
    struct student s; 
    float sum = 0;    

    printf("Enter name: "); 
    scanf("%s", s.name);  

    printf("Enter roll no and age: "); 
    scanf("%d%d", &s.roll, &s.age);   

    printf("Enter marks of 5 subjects: "); 
    for (int i = 0; i < 5; i++) { 
        scanf("%f", &s.marks[i]); 
        sum += s.marks[i];    
    }

    printf("\nAverage marks: %.2f", sum / 5); 
    return 0; 
} 
