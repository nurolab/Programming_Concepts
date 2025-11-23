#include <stdio.h>

int main() {
    FILE *fp;
    char text[100];

    // ---- Writing to File ----
    fp = fopen("data.txt", "w");

    if (fp == NULL) {
        printf("Error: Cannot create file.\n");
        return 1;
    }

    printf("Enter a line of text: ");
    gets(text);

    fprintf(fp, "%s", text);
    fclose(fp);

    // ---- Reading from File ----
    fp = fopen("data.txt", "r");

    if (fp == NULL) {
        printf("Error: Cannot open file for reading.\n");
        return 1;
    }

    printf("\nContent of file:\n");

    while (fgets(text, sizeof(text), fp) != NULL) {
        printf("%s", text);
    }

    fclose(fp);

    return 0;
}
