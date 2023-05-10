#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <signal.h>

#define DELIM " \t\r\n\a"
#define BUFSIZE 1024

/* Function prototypes */
int _putchar(char c);
int print(char *new_str)
int execute_command(char **args);
int read_command(char *line, char **args);
void signal_handler(int signum);

#endif /* SHELL_H */

