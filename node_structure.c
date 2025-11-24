#include <stdio.h>

// Define a structure named 'node'
struct node {
    int data; // Integer data to be stored in the node
    struct node *next; // Pointer to the next node in the list (self-referential)
};

// Main function where the program execution begins
int main() {
    // Declare three 'node' type variables
    struct node n1, n2, n3; 

    n1.data = 10; // Assign data to the first node
    n2.data = 20; // Assign data to the second node
    n3.data = 30; // Assign data to the third node

    n1.next = &n2; // Link n1 to n2
    n2.next = &n3; // Link n2 to n3
    n3.next = NULL; // Mark the end of the list for n3

    struct node *ptr = &n1; // Initialize a pointer 'ptr' to the first node
    printf("Linked list data: "); // Print a header for the linked list data
    while (ptr != NULL) { // Traverse the linked list until 'ptr' becomes NULL
        printf("%d ", ptr->data); // Print the data of the current node
        ptr = ptr->next; // Move 'ptr' to the next node
    }
    return 0; // Indicate successful program execution
}