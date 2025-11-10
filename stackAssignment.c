#include <stdio.h>
#include <string.h>

#define MAX 7

struct Stack {
    char days[MAX][10];
    int top;
};

// Function declarations
void initialize(struct Stack *s);
void push(struct Stack *s, char day[]);
char* getDay(struct Stack *s, int n);

int main() {
    struct Stack s;
    initialize(&s);

    // Push days of the week into stack (Sun → Sat)
    push(&s, "Sunday");
    push(&s, "Monday");
    push(&s, "Tuesday");
    push(&s, "Wednesday");
    push(&s, "Thursday");
    push(&s, "Friday");
    push(&s, "Saturday");

    int dayNumber;
    printf("Enter the day number (e.g. 14): ");
    scanf("%d", &dayNumber);

    char *result = getDay(&s, dayNumber);
    printf("Day %d is: %s\n", dayNumber, result);

    return 0;
}

// Initialize stack
void initialize(struct Stack *s) {
    s->top = -1;
}

// Push day into stack
void push(struct Stack *s, char day[]) {
    if (s->top == MAX - 1) {
        printf("Stack full!\n");
        return;
    }
    strcpy(s->days[++(s->top)], day);
}

// Find the day name for given day number
char* getDay(struct Stack *s, int n) {
    // day 1 = Sunday, day 2 = Monday, etc.
    int index = (n - 1) % MAX;  
    return s->days[index];
}