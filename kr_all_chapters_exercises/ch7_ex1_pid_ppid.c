#include <stdio.h>
#include <unistd.h>

/*
 * ch7_ex1_pid_ppid.c
 * Exercise: Display PID and PPID of current process
 */
int main(void) {
    printf("PID = %d, PPID = %d\\n", (int)getpid(), (int)getppid());
    return 0;
}
