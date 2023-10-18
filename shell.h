#ifndef SHELL_H
#define SHELL_H

/* starting point of all our team project #include files*/
#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>







/* starting point of all our prototypes, see Man in terminal*/
int our_strcmp(char *s1, char *s2);
void our_env(void);
int line_emp(char *buff);
char **our_split(char *str, char *sep);
char *pathfinder(char *command);
int terminator(char **arg);

#endif
