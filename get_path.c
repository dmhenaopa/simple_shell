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
	int i, verify = 0;
	char *full_path = NULL, *dup_environ = NULL, tmp[1024], pwd[1024];
	size_t bufsize = 1024;

	getcwd(pwd, bufsize);
	for (i = 0; environ[i]; i++)
	{
		if (environ[i][0] == 'P' && environ[i][1] == 'A' && environ[i][3] == 'H')
		{
			dup_environ = _strdup(environ[i] + 5);
			_strcat(dup_environ, DELIMITER);
			_strcat(dup_environ, pwd);
			full_path = strtok(dup_environ, DELIMITER);
			if (buffer[0][0] == '.' && buffer[0][1] == '/')
			{
				verify = verify_access(*buffer, buffer, argv, count);
				if (verify != 0)
					print_err(count, argv, buffer);
					break;
			}
			while (full_path)
			{
				_strcpy(tmp, full_path);
				_strcat(tmp, "/");
				_strcat(tmp, buffer[0]);
				verify = verify_access(tmp, buffer, argv, count);
				if (verify == 0)
					break;
				full_path = strtok(NULL, DELIMITER);
			}
			if (verify == -1)
			{
				perror(argv[0]);
				break;
			}
			free(dup_environ);
			return (full_path);
		}
	}
	free(dup_environ);
}
