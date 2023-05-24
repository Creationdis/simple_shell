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
int _strcmp(const char *s1, const char *s2);
char *_getenv(char **environ, char *s1);
int env_builtin(char **args);
void builtins(char *l, char **args, char **env, int *exit_status);
extern char **environ;

#endif /* SHELL_H */

