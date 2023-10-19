#include "shell.h"

 /**
 * line_emp - checks if exists a empty line
 * @buff: line
 * Return: 0 or 1 (int)
 */

int line_emp(char *buff) /* our function to check for empty line*/
{
	int africa;

	for (africa = 0; buff[africa] != '\0'; africa++)
	{
	if (buff[africa] != ' ')
	return (0);
	}

	return (1);
}
