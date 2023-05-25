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
int main(void);
int execute_command(char **args);
int read_command(char *line, char **args);
void signal_handler(int signum);
int our_strncmp(char *first_str, char *second_str, int index);
int get_built_in(char *command);
int is_built_in(char *cmd, char *free_line, int status);
void print_env(void);
char *remove_comment(char *cmd_line);
int get_string_length(char *str);
int countArguments(char *line);
char *duplicateString(char *str);
char *copyString(char *dest, char *src);
char *concatenateStrings(char *dest, char *src);

extern char **environ;

#endif /* SHELL_H */

