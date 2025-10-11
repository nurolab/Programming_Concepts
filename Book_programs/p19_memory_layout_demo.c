#include <stdio.h>
#include <stdlib.h>

/* p19_memory_layout_demo.c
 * Demonstrate allocation on stack vs heap and printing addresses for insight.
 */
int global_var = 42;

int main(void)
{
    int local_var = 7;
    int *heap_var = malloc(sizeof *heap_var);
    if (!heap_var) return 1;
    *heap_var = 99;

    printf("address of global_var: %p\\n", (void *)&global_var);
    printf("address of local_var:  %p\\n", (void *)&local_var);
    printf("address of heap_var:   %p (value=%d)\\n", (void *)heap_var, *heap_var);

    free(heap_var);
    return 0;
}
