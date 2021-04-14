#include "holberton.h"
/**
 *tokenizator - function shell
 *Description - tokenize command line input for each command
 *buffer: save the value of the line
 *token: create the split tokens
 *@line: value line
 *@argv: imput argument
 *@count: counter
 **/


void tokenizator(char *line, char **argv, int count)
{
	int i;
	char *token = NULL, **buffer = NULL;

	buffer = allocate_memory();
	token = strtok(line, DELIMITER_);

	for (i = 0; token;)
	{
		buffer[i++] = token;
		token = strtok(NULL, DELIMITER_);
	}
	buffer[i] = NULL;
	if (!(buffer[0][0] == '/'))
		get_path(buffer, argv, count);
	else if (buffer[0][0] == '/')
	{
		verify_access(buffer[0], buffer, argv, count);
	}
	free(buffer);
}
