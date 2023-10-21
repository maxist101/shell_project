#include "shell.h"

/**
 * main - the entry point of our shell group project
 * Return: O on success always
 */



/* entry point of our group project*/
int main(void)
{
char maxwell[BUFFER_SIZE];
char *echo = "ALXisfun:$ ";
int jessica = isatty(STDIN_FILENO) == 0;

char *Err = NULL;
size_t len_input;

for (;;)
{
write(STDOUT_FILENO, echo, strlen(echo));
if (fgets(maxwell, sizeof(maxwell), stdin) == NULL)
{
if (feof(stdin))
{
char *next_line = "\n";
write(STDOUT_FILENO, next_line, strlen(next_line));
break;
}
Err = "invalid Err Err: fgets\n";
write(STDERR_FILENO, Err, strlen(Err));
exit(EXIT_FAILURE);
}

len_input = strlen(maxwell);
if (len_input > 0 && maxwell[len_input - 1] == '\n')
{
maxwell[len_input - 1] = '\0'; /* we are Removing the next line character*/
}
if (jessica)
{
break; /* we are now Exiting the loop if aboved conditions are not meant*/
}
}
return (0);
}

