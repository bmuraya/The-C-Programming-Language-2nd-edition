#include <stdio.h>
#include <unistd.h>

int main() {
    // Get the process ID of the current process
    pid_t pid = getpid();
    
    // Print the process ID
    printf("The process ID is: %d\n", pid);
    
    return 0;
}
