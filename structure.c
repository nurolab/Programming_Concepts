#include <stdio.h>

struct Student {
    char name[20];
    int age;
    float marks;
};

int main() {
    struct Student s[3];
    int i;

    for(i = 0; i < 3; i++) {
        printf("\nEnter details of student %d\n", i+1);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Age: ");
        scanf("%d", &s[i].age);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("\n--- Student Details ---\n");
    for(i = 0; i < 3; i++) {
        printf("\nStudent %d:\n", i+1);
        printf("Name  : %s\n", s[i].name);
        printf("Age   : %d\n", s[i].age);
        printf("Marks : %.2f\n", s[i].marks);
    }

    return 0;
}
