#include <stdio.h>

const char *names[7] = {
    "Sunday", "Monday", "Tuesday", "Wednesday",
    "Thursday", "Friday", "Saturday"
};

int main() 
{
    int stack[7] = {0, 1, 2, 3, 4, 5, 6};  

    int target;
    printf("Enter day number: ");
    scanf("%d", &target);

    for (int d = 1; d <= target; d++) 
    {
        int w = (d - 1) % 7;  
        int pos = 0;
        while (stack[pos] != w)
        {
            pos++;
        }

        int temp = stack[pos];
        for (int i = pos; i > 0; i--) 
        {
            stack[i] = stack[i - 1];
        }
        stack[0] = temp;
    }

    printf("\nStack on Day %d:\n", target);

    for (int i = 0; i < 7; i++) 
    {
        printf("%s\n", names[stack[i]]);
    }

    return 0;
}
