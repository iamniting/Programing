#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(void)
{
    int pid;
    pid = fork();

    if (pid != 0) { // branch based on return value from fork()
        printf("i am parent\n");
        while (1)  // never terminate and never execute
            sleep(1000);
    }
    else {
        printf("i am child\n");
        exit(42);  // exit with a silly number
    }
    return 0;
}
