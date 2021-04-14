#include "holberton.h"

/**
* _strcmp - Compares two strings
* @s1: first string
* @s2: second string to compare
*
* Description: compares two strings to see which is
* Return: -15 if s1 is less than s2, 0 if equal, 15
* if s1 is greater
*/
int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 == *s2);
}

/**
* allocate_memory - Memory allocation malloc
*
* Description: allow memory allocation of strings
* Return: buffer allocated
*/
char **allocate_memory(void)
{
	char **buffer = NULL;

	buffer = malloc(sizeof(char *) * 1024);
	return (buffer);
}

/**
* controlador - Prints ^C
* @numeroSenhal: nothing
*
* Description: Ctrl+C doesn't work
*/
void controlador(int numeroSenhal)
{
	(void)numeroSenhal;

	putchar_func('\n');
	write(1, prompt, 4);

	signal(SIGINT, controlador);
}

/**
* _puts - print the string
* @str: pointer to string
*
* Description: Print the string
*/
void _puts(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		putchar_func(str[a]);
		a++;
	}
}

/**
* putchar_func - write character c
* @character: The character to print
*
* Description: Writes the character c to stdout
* Return: On success 1. On error, -1 is returned,
* and errno is set appropriately.
*/
int putchar_func(char character)
{
	write(1, &character, 1);
	return (1);
}
