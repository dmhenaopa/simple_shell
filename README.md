![Holberton Logo](https://www.holbertonschool.com/holberton-logo.png)

# Super simple shell

_In this this github repository you will find a simple UNIX command interpreter, just as the shell of Linux, but simpler and without somethings_.

---

# How to compile it?

_The way to compile this program is very simple, just go to the directory where you have all the files and run the next code:_

```
gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
```

---

# How can i use this program?

_Here you will find how can you use the super simple shell, for example how to run it and some commands._

```c
 $ ./hsh
 ($ ) ls
 file1  file2  filename.c  header.h  tests
 ($ ) pwd
 /home/vagrant
 ($ ) exit
 $
```

_You can also work with the super simple shell in non-interactive mode in the next way:_

```c
$ echo "/bin/ls" | ./hsh
file1  file2  filename.c  header.h  tests
$ cat test_ls_2 | ./hsh
This is the content of the file test_ls_2
$
```

---

# Manual Page

_If you want to see more information about the super simple shell you can open the manual page with the next command._

```
man ./man_1_simple_shell
```

### Authors

- *Diana Henao* : [@dmhenaopa](https://github.com/dmhenaopa).
- *Jean Pierre Ballen* : [@jeanpierreba](https://github.com/jeanpierreba).
- *Steven Gonzalez* : [@stevengm45](https://github.com/stevengm45).

