#ifndef SHELL_H
#define SHELL_H

/* starting point of all our team project #include files*/
#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>
#include <stdbool.h>
#include <sys/stat.h>

#define BUFFER_SIZE 256

/* starting point of all our prototypes, see Man in terminal*/
void exe_cmd(char *cmd, char *argv[]);



#endif
