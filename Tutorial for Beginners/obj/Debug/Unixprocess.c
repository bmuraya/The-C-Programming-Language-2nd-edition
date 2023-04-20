#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <unistd.h>


/*fork function 
int main (int argc, char* argv[])
{
    fork();
    printf("hello world\n");
    return 0;
}*/

int main(int __attribute__((unused)) ac, char **av)
{
	char **av_ptr = av, newline = '\n';
  
	while (*av_ptr != NULL)
	{
		write(STDOUT_FILENO, *av_ptr, strlen(*av_ptr));
		write(STDOUT_FILENO, &newline, 1);
		av_ptr++;
	}

	return (0);
}


