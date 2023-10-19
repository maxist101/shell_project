#include <shell.h>

 /**
 *line_emp - checks if and empty exist
 *@buff: The input line to check empty line:
 *
 *this function checks to determine empty line
 * Return: 0 or return 1 on fail or success
 *
 */

int line_emp(char buff) /* our function to check for empty line*/
{
	int africa;

	for (africa = 0; buff[africa] != '\0'; africa++)
	{
	if (buff[africa] != " ")
	return (0);
	}

	return (1);
}
