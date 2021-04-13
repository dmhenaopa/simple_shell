#include "holberton.h"

/**
* selector3000 - Select built in function
* @string: arguments
*
* Description: Selector of built in functions
* Return: 1 on success. Otherwise 0.
*/

int selector3000(char *string)
{
	selector_t built_in[] = {
		{"env", get_environment},
		{NULL, NULL}
		};
	int i;

	for (i = 0; built_in[i].s; i++)
	{
		if (_strcmp(built_in[i].s, string))
		{
			built_in[i].f();
			return (1);
		}
	}
	return (0);
}
