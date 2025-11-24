#include <stdio.h>
#include <unistd.h>

int main() {
    char spinner[] = {'|', '/', '-', '\\'};
    int i = 0;

    while (1) {  
        printf("\rProcessing... %c", spinner[i]);
        fflush(stdout);
        i = (i + 1) % 4;
        usleep(150000);  
    }

    return 0;
}
