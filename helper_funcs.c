#include "holberton.h"

/**
 * _strdup - copy a string and allocate in a new space
 * in memory
 * @str: string we want to copy
 * Return: NULL if str = NULL, otherwise pointer to the duplicated
 * string
 */

char *_strdup(char *str)
{
	unsigned int i, j;
	char *buffer = NULL;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (*(str + i))
	{
		i++;
	}
	buffer = malloc(sizeof(char *) * i + 1);

	if (buffer == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
	{
		*(buffer + j) = *(str + j);
	}
	return (buffer);
}

/**
 *_strcat - concatenates tow strings
 *@src: second string to copy from
 *@dest: string to be overwritten
 *Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * *_strcpy - copies string src to buffer pointed to by dest
 * @dest: string pointer
 * @src: buffer pointer
 * Description: cpies string src to buffer
 * Return: dest pointer
 **/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i >= 0; i++)
	{
		dest[i] = src[i];
		if (src[i] == '\0')
			return (dest);
	}
	return (dest);
}

/**
 * remove_new_line - change the \n to '\0'
 * @line: line from the input
 * @size_line: size of the line we get
 */
void remove_new_line(char **line, ssize_t size_line)
{
	(*line)[size_line - 1] = '\0';
}
