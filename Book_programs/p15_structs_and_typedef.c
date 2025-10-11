#include <stdio.h>

/* p15_structs_and_typedef.c
 * Demonstrate a simple struct and typedef usage.
 */
typedef struct {
    int day, month, year;
} Date;

int main(void)
{
    Date d = { 1, 1, 2020 };
    printf("Date: %02d-%02d-%04d\\n", d.day, d.month, d.year);
    return 0;
}
