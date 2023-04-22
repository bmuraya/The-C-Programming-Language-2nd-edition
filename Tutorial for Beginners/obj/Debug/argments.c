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

/*int main(int ac, char **av) {
    printf("Program name: %s\n", av[0]);
    printf("Number of arguments: %d\n", ac - 1);
    for (int i = 1; i < ac; i++) {git
        printf("Argument %d: %s\n", i, av[i]);
    }
    return 0;
}*/