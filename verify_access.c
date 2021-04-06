#include "holberton.h"
#define DELIMITER ":"

/**
* verify_access - shell function
* @full_path: absolute path to the executable command
* @buffer: additional arguments
*
* Description: Verify if the executable command exists in
* the full path
* Return: 1 if command has founded in some of the directories of
* PATH. Otherwise returns 0
*/
int verify_access(char *full_path, char *buffer)
{
	printf("Aqui es verify_access");
	int i, verify_access, access_flag;

	access_flag = 0;
	for (i = 0; full_path[i] != '\0'; i++)
	{
		verify_access = access(full_path, F_OK);
		if (verify_access == 0)
		{
			printf("Aqui es verify_access, el IF");
			execute_f(full_path, buffer);
		}
	}
	return (access_flag);
}
