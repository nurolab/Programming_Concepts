#include <stdio.h>
#define MAX 100

double atof_simple(char s[]) {
    double val = 0, power = 1;
    int i = 0, sign = 1;

    if (s[i] == '-') { sign = -1; i++; }
    for (; s[i] >= '0' && s[i] <= '9'; i++)
        val = val * 10 + (s[i] - '0');
    if (s[i] == '.')
        for (i++; s[i] >= '0' && s[i] <= '9'; i++) {
            val = val * 10 + (s[i] - '0');
            power *= 10;
        }
    return sign * val / power;
}

int main() {
    char line[MAX];
    double sum = 0;
    while (fgets(line, MAX, stdin))
        printf("\t%g\n", sum += atof_simple(line));
    return 0;
}
