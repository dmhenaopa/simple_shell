#ifndef holberton_H
#define holberton_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <dirent.h>
#include <sys/types.h>
#include <sys/wait.h>

#define prompt ("($ )")

char *_strcat(char *dest, char *src);
int verify_access(char *full_path, char *buffer);
int execute_f(char *full_path, char *buffer);
void tokenizator(char *buffer);
char **get_path(char *buffer);
char **mallocargument(void);
int putchar_func(char character);

#endif
