#include "holberton.h"

/**
* main - UNIX command line interpreter
* @argc: attribute unused - number of arguments
* @argv: Array of pointers to string arguments
*
* Description: Main function with infinite loop for
* interactive mode and option to non interactive mode too.
* Return: 0 in success.
*/

int main(int argc __attribute__((unused)), char **argv)
{
	int counter_error = 0;
	char *line = NULL;
	size_t buf = 0;
	ssize_t size_char = 0;

	signal(SIGINT, controlador);
	while (1)
	{
		if (isatty(STDIN_FILENO))
		{
			write(1, prompt, 4);
		}
		counter_error++;
		size_char = getline(&line, &buf, stdin);

		if (size_char == EOF || (line[0] == 'e' && line[3] == 't'))
		{
			if (size_char == EOF && isatty(STDIN_FILENO))
			{
				putchar_func('\n');
			}
			free(line);
			exit(EXIT_SUCCESS);
		}
		if (*line == '\n')
		{
			continue;
		}

		remove_new_line(&line, size_char);
		if (line[0] == '/')
			tokenizator(line, argv, counter_error);
		else
		{
			if (!selector3000(line))
				tokenizator(line, argv, counter_error);
		}
	}
	free(line);
	return (0);
}
