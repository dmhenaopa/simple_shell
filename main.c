#include "holberton.h"

/**
* main - UNIX command line interpreter
* Return: 0
*/

int main(void)
{
	char *line = NULL;
	size_t buf = 0;
	ssize_t size_char = 0;

	do {
	write(1, prompt, 4);
	size_char = getline(&line, &buf, stdin);
	remove_new_line(&line, size_char);
	tokenizator(line);
	} while (*line != EOF);

	return (0);
}
