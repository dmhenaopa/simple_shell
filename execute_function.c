#include "holberton.h"
/**
 *execute_function - function shell
 *Description: run the shell
 *@full_path: path complete
 *@buffer: get the values of the line
 *Return: 0
 */

int execute_function(char *full_path, char **buffer)
{
	if (execve(full_path, buffer, NULL) == -1)
	{
		exit(127);
	}
	return (0);
}
