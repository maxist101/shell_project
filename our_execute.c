#include "shell.h"
/**
 * exe_cmd - our team code to be to execute a command
 * the process is forked to handle error during code execution.
 * @cmd: the command for executuion
 */
void exe_cmd(char *cmd, char *argv[])
{
pid_t ourchild_pid;
int art;
char *Err;
char *envp[] = {NULL};
ourchild_pid = fork();
if (ourchild_pid == -1)
{
Err = "err err invalide: fork\n";
write(STDERR_FILENO, Err, strlen(Err));
}
else if /* */
(ourchild_pid == 0)
{
/* our code for coomand, argement and enviro' variables*/
if (execve(cmd, argv, envp) == -1)
{
/* handling error just in case our execv fails*/
Err = "err err: exec\n";
write(STDERR_FILENO, Err, strlen(Err));
exit(EXIT_FAILURE);
}
}
else
{
/* our code to process the mummy to wait for child*/
waitpid(ourchild_pid, &art, 0);
}
}
