![Holberton Logo](https://www.holbertonschool.com/holberton-logo.png)

# Super simple shell

_In this github repository you will find a simple UNIX command interpreter, just as the shell of Linux, but simpler and without some things_.

---

# How to compile it?

_The way to compile this program is very simple, just go to the directory where you have all the files and run the next code:_

```
gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
```
_Or you can just compile without warning flags and just compile it in the next way:_

```
gcc *.c -o hsh
```

---

# How can i use this program?

_Here you will find how can you use the super simple shell, for example how to run it and some commands._

```c
 $ ./hsh
 ($) ls
 file1  file2  filename.c  header.h  tests
 ($) pwd
 /home/vagrant
 ($) ls -z
 ls: invalid option -- 'z'
 Try 'ls --help' for more information.
 ($) NotACommand
 ./hsh: no such file or directory
 ($) exit
 $
```

_If you want to exit you can put exit or do Ctrl + D in your keyboard, you can also work with the super simple shell in non-interactive mode in the next way:_

```c
$ echo "/bin/ls" | ./hsh
file1  file2  filename.c  header.h  tests
$ cat "/bin/pwd" | ./hsh
/home/vagrant
$ echo "./hbtn_ls /var" | ./hsh
./hsh: 1: ./hbtn_ls: not found
$
```

# Files in this repository

File|Description
:---:|:---|
[built_ins.c](./built_ins.c)| Contains the functions to execute the built-ins like env.
[execute_function.c](./execute_function.c)| In this file we have the function to execute every command we pass by the standard input.
[get_path.c](./get_path.c)| We will find a function to search the full path from the environment.
[helper_funcs.c](./helper_funcs.c)| This file contains functions that help us with some functions we can't use, like strdup, strcat, strcpy, and other function.
[helper_funcs2.c](./helper_funcs2.c)| Like helper_funcs but this contains strcmp, a function to allocate memory, a puts function, a putchar function and a signal function.
[main.c](./main.c)| In the main file you will find the infinite loop and some statements to end of files / non interactive mode and funtions calls.
[selector.c](./selector.c)| There we will find a struct with the built-ins cases, like exit.
[tokenizator.c](./tokenizator.c)| This file contains a function to help us to tokenize the line we get from the user.
[verify_acces.c](./verify_acces.c)| The function inside this file will verify if the the file exists.

---

# Flowchart

![Flowchart Image](https://media.discordapp.net/attachments/826839928331436052/832293986902343680/SHELL.png?width=474&height=436)

---
# Manual Page

_If you want to see more information about the simple shell you can open the manual page with the next command._

```
man ./man_1_simple_shell
```

### Authors

- *Diana Henao* : [@dmhenaopa](https://github.com/dmhenaopa).
- *Jean Pierre Ballen* : [@jeanpierreba](https://github.com/jeanpierreba).
- *Steven Gonzalez* : [@stevengm45](https://github.com/stevengm45).

