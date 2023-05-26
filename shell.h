#ifndef SHELL_H
#define SHELL_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <time.h>
#include <stdbool.h>

#define DELIM " \t\r\n\a"
#define BUFSIZE 1024

struct builtin
{
	char *env;
	char *exit;
} builtin;

struct info
{
	int final_exit;
	int ln_count;
} info;

struct flags
{
	bool interactive;
} flags;


/* Function prototypes */

int _putchar(char c);
void print_string(char *str);
char *test_path(char **path, char *cmd);
void print_env(void);
int main(int argc, char **argv, char *env[]);
void prompt_user(void);
int _strlen(char *s);
char *_strchr(char *str, char c);
char *_strdup(char *str);
int _strncmp(char *varname, char *dirname, int n);
int _strcmp(char *varname, char *dirname);
char **tokenizer(char *line);
extern char **environ;
char *append_path(char *path, char *command);
void handle_signal(int m);
void handle_exit(char **command, char *line);
void free_buffers(char **buffers);
char *find_path(void);
void execution(char *cp, char **cmd);
int checker(char **cmd, char *buf);
int handle_builtin(char **command, char *line);

#endif /* SHELL_H */

