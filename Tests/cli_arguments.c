#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("Program name: %s\n", argv[0]);

    if (argc == 1) {
        printf("No command-line arguments were passed.\n");
    } else {
        printf("Number of command-line arguments: %d\n", argc - 1);
        for(int i = 1; i < argc; i++) {
            printf("Value No. = %d: %s\n", i, argv[i]);
        }
    }

    return 0;
}
