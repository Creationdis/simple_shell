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
int execute_command(char *command_line, char *executable_name);
char *find_full_path(char *file_name);
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
int shell_main(int argc __attribute__((unused)), char *argv[]);
char *ignore_surrounded_spaces(char *old_line);
char **allocate_arguments(int num_args, char *command);
void free_arguments(char **args);
int execute_command(char *command_line, char *executable_name);
char *find_full_path(char *file_name);
extern char **environ;

#endif /* SHELL_H */

