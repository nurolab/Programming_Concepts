#include <stdio.h>
#include <stdlib.h>

/* p12_rpn_calculator.c
 * A minimal reverse Polish notation (RPN) calculator using a stack.
 * Example input: "3 4 + 2 *" (use whitespace between tokens).
 */

#define MAXVAL 100

int sp = 0;            /* next free stack position */
double val[MAXVAL];    /* value stack */

void push(double f)
{
    if (sp < MAXVAL) val[sp++] = f;
    else fprintf(stderr, "stack overflow\n");
}

double pop(void)
{
    if (sp > 0) return val[--sp];
    fprintf(stderr, "stack underflow\n");
    return 0.0;
}

int main(void)
{
    char token[64];
    while (scanf("%63s", token) == 1) {
        char *endptr;
        double num = strtod(token, &endptr);
        if (endptr != token) {         /* it's a number */
            push(num);
        } else if (token[0] == '+') {
            double b = pop(); double a = pop();
            push(a + b);
        } else if (token[0] == '-') {
            double b = pop(); double a = pop();
            push(a - b);
        } else if (token[0] == '*') {
            double b = pop(); double a = pop();
            push(a * b);
        } else if (token[0] == '/') {
            double b = pop(); double a = pop();
            if (b != 0.0) push(a / b);
            else fprintf(stderr, "division by zero\n");
        } else {
            fprintf(stderr, "unknown token: %s\n", token);
        }
    }
    if (sp == 1) printf("Result: %g\n", pop());
    else fprintf(stderr, "stack has %d elements\n", sp);
    return 0;
}
