#include "holberton.h"

/**
* main - UNIX command line interpreter
* @ac: number of arguments we pass to the program
* @av: value of arguments
* Return: 0
*/

int main(int ac, char **av)
{
	char **buffer = NULL;
	char *line = NULL;
	int i;
	ssize_t sizeline = 0;
	size_t buf = 0;

	buffer = mallocargument();

	do {
		write(1, prompt, 5);
	  getline(&line, &buf, stdin);
	printf("antes de entrar a tokenizator");
	tokenizator(line);
	} while (1);
	return (0);
}

/**
* mallocargument - save space in the memory to the arguments
* Return: pointer to the memory allocated
*/

char **mallocargument(void)
{
char **buffer = NULL;
buffer = malloc(sizeof(buffer) * 1024);
return (buffer);
}
