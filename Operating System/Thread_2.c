#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

char *parent = "I am the Parent!";
char *child = "I am the Child!";

int main(void)
{
    pid_t PID;
    PID = fork();  

    if (PID == 0) {
        sleep(5);
        printf("%s", child);
        printf("%d", getpid());
    }
    else {
        printf("%s", parent);
        printf("%d", getpid());
    }

    printf("\nBye!\n");
    return 0;
}
