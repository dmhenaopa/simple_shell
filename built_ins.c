#include "holberton.h"

/**
* get_environment - Current environment
*
* Description: Function that prints the current environment
* Return: 0 on success
*/
int get_environment(void)
{
	int i, j;

	for (i = 0; environ[i] != NULL; i++)
	{
		for (j = 0; environ[i][j] != '\0'; j++)
		{
			putchar_func(environ[i][j]);
		}
		putchar_func('\n');
	}

	return (0);
}
