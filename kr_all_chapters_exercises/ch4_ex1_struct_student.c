#include <stdio.h>
#include <string.h>

/*
 * ch4_ex1_struct_student.c
 * Exercise: Create a student struct and display average marks
 */
struct student {
    char name[50];
    int roll;
    int age;
    float marks[5];
};

int main(void) {
    struct student s = {"Alice", 1, 20, {80,85,78,90,88}};
    float sum = 0;
    for (int i=0;i<5;i++) sum += s.marks[i];
    printf("Name: %s\\nAverage marks: %.2f\\n", s.name, sum/5.0);
    return 0;
}
