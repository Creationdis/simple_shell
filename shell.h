#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <signal.h>
#include <limits.h>

#define DELIM " \t\r\n\a"
#define BUFSIZE 1024
#define MAX_ARGS 10

/* Function prototypes */

int _putchar(char c);
int print(char *new_str);
int main(int argc, char **argv, char **env);
void prompt(char **argv, char **env);
int main(void);
int execute_command(char **args);
int read_command(char *line, char **args);
void signal_handler(int signum);
int our_strncmp(char *first_str, char *second_str, int index);
int get_built_in(char *command);
extern char **environ;

#endif /* SHELL_H */

