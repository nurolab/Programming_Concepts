#include <stdio.h>

const char *days[7] = {
    "Sunday", "Monday", "Tuesday", "Wednesday",
    "Thursday", "Friday", "Saturday"
};

const char *colors[7] = {
    "Red", "Green", "Yellow", "Blue",
    "Magenta", "Cyan", "Red"
};

int main()
{
    int stack[7] = {0, 1, 2, 3, 4, 5, 6};

    printf("\n========== STACK SIMULATION FOR 15 DAYS ==========\n");

    for (int day = 1; day <= 15; day++)
    {
        int w = (day - 1) % 7;
        int pos = 0;

        // Find the weekday in stack
        while (stack[pos] != w)
            pos++;

        int temp = stack[pos];

        for (int i = pos; i > 0; i--)
            stack[i] = stack[i - 1];

        stack[0] = temp;

        printf("\n----------------------------------------------\n");
        printf("Day %d → Today is %s (%s)\n", day, days[w], colors[w]);
        printf("Ball moved to TOP: %s (%s)\n", days[w], colors[w]);

        printf("\nStack after Day %d:\n", day);
        for (int i = 0; i < 7; i++)
        {
            int index = stack[i];
            printf("%d. %s — %s\n", i + 1, days[index], colors[index]);
        }
    }

    printf("\n========== END OF 15-DAY SIMULATION ==========\n");
    return 0;
}

