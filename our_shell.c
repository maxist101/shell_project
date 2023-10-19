#include "shell.h"
/**
  *main - entry point/path to our team project
  *Return: 0 always on successful
  */
int main(void)
{
	char *neto_buffx = NULL, **arg;
	size_t jess_size = 0;
	ssize_t alx_size = 0;
	int terminate = 0;

	while (1)
	{
		if (isatty(0))
			write(1, "ALXisfun$ ", 2); /* our code to display prompt, Alxisfun$ */

		alx_size = getline(&neto_buffx, &jess_size, stdin);
		if (alx_size == -1 || our_strcmp("exit\n", neto_buffx) == 0)
		{
			free(neto_buffx);
			break;
		}
		neto_buffx[alx_size - 1] = '\0';

		if (our_strcmp("env", neto_buffx) == 0)
		{
			our_env(); /* calling our_env fuction from the shell.h file*/
			continue;
		}

		if (line_emp(neto_buffx) == 1)
		{
			terminate = 0;
			continue;
		}

		arg = our_split(neto_buffx, " "); /* calling our_split function */
		arg[0] = pathfinder(arg[0]);

		if (arg[0] != NULL)
			terminate = terminator(arg);
		else /* calling next line of action if conditions fail */
			perror("error in error");/* print an error message on display*/
		free(arg);
	}
	free(neto_buffx); /* freeing memeory from our loop*/
	return (terminate);
}
