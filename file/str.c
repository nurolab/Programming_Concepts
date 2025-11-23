#include <stdio.h>

struct student {
    char name[20];
    int roll;
    float marks;
};

int main() {
    struct student s[5];
    int i;

    printf("Enter details of 5 students:\n");
    for (i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Roll: ");
        scanf("%d", &s[i].roll);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("\nStudent Details:\n");
    for (i = 0; i < 5; i++) {
        printf("\nName: %s\nRoll: %d\nMarks: %.2f\n",
               s[i].name, s[i].roll, s[i].marks);
    }

    return 0;
}
