#include <stdio.h>

union Student {
    int roll;
    float marks;
};

int main() {
    union Student s;

    printf("Enter roll number: ");
    scanf("%d", &s.roll);

    printf("Roll = %d\n", s.roll);

    printf("Enter marks: ");
    scanf("%f", &s.marks);

    printf("Marks = %.2f\n", s.marks);

    // Now roll is lost because marks is stored last
    printf("Roll after entering marks = %d\n", s.roll);

    return 0;
}
