#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    pid_t pid;

    // Fork a new process
    pid = fork();

    if (pid < 0) {
        // Error occurred
        fprintf(stderr, "Fork failed\n");
        exit(-1);
    } else if (pid == 0) {
        // Child process
        printf("This is the child process\n");
        exit(0);
    } else {
        // Parent process
        printf("This is the parent process\n");
        printf("Child process ID is: %d\n", pid);
    }

    return 0;
}
