#include <stdio.h>

struct student {
    char name[50]; // Character array to store the student's name
    int roll;      // Integer to store the student's roll number
    int age;       // Integer to store the student's age
    float marks[5]; // Array of floats to store marks in 5 subjects
};

// Main function where the program execution begins
int main() {
    struct student s; // Declare a variable 's' of type 'struct student'
    float sum = 0;    // Declare a float variable 'sum' to calculate total marks, initialized to 0

    printf("Enter name: "); // Prompt the user to enter the student's name 
    scanf("%s", s.name);    // Read the name and store it in s.name

    printf("Enter roll no and age: "); // Prompt for roll number and age
    scanf("%d%d", &s.roll, &s.age);    // Read roll number and age

    printf("Enter marks of 5 subjects: "); // Prompt for marks in 5 subjects
    for (int i = 0; i < 5; i++) { // Loop to read marks for each of the 5 subjects
        scanf("%f", &s.marks[i]); // Read the mark for the current subject
        sum += s.marks[i];        // Add the current mark to the total sum
    }

    printf("\nAverage marks: %.2f", sum / 5); // Calculate and print the average marks, formatted to two decimal places
    return 0; // Indicate successful program execution
} 