#include "holberton.h"
/**
 *get_path - function shell
 *counter - another counter
 *@buffer: save the value of the line
 *@argv: input argument
 *@count: counter
 *Return: full_path
 */
char *get_path(char **buffer, char **argv, int count)
{
int i, counter = 0;

char *full_path = NULL, *dup_environ = NULL, tmp[1024];

for (i = 0; environ[i]; i++)
{
if (environ[i][0] == 'P' && environ[i][1] == 'A' && environ[i][3] == 'H')
{
dup_environ = _strdup(environ[i] + 5);
full_path = strtok(dup_environ, DELIMITER);
for (i = 0; full_path[i] != '\0'; i++)
{
counter++;
}
counter = counter - 1;
while (full_path)
{
_strcpy(tmp, full_path);

if (full_path[counter] != '/')
{
_strcat(tmp, "/");
}
_strcat(tmp, buffer[0]);
full_path = strtok(NULL, DELIMITER);
}
verify_access(tmp, buffer, argv, count);
free(dup_environ);
return (full_path);
}
}
free(dup_environ);
return (full_path);
}
