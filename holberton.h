#ifndef holberton_H
#define holberton_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <signal.h>
#define separator ": "
#define prompt ("($) ")
#define DELIMITER_ " "
#define DELIMITER ":"

extern char **environ;

/**
* struct builtins - built-ins selector
* @s: built-in we get from the user
* @f: name of the function
*/

typedef struct builtins
{
	char *s;
	int (*f)(void);
} selector_t;

char **allocate_memory(void);
char *get_path(char **buffer, char **argv, int count);
void tokenizator(char *line, char **argv, int count);
int verify_access(char *full_path, char **buffer, char **argv, int count);
int execute_function(char *full_path, char **buffer);
char *_strdup(char *str);
char *_strcat(char *dest, char *src);
char *_strcpy(char *dest, char *src);
void remove_new_line(char **line, ssize_t size_line);
int selector3000(char *string);
int get_environment(void);
int change_directory(char *str);
int putchar_func(char character);
int _strcmp(char *s1, char *s2);
void controlador(int numeroSenhal);
void _puts(char *str);
void print_err(int count, char **argv, char **buffer);

#endif
