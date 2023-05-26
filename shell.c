#include "shell.h"

/**
 * shell_main - The main function of the shell program.
 * @arg_count: Number of arguments.
 * @arg_values: An array of arguments.
 * @env_vars: An array of environment variables.
 * Return: 0 (success).
 */

int shell_main(int arg_count, char **arg_values, char **env_vars)
{
int exit_status = 0;
size_t line_length = 0;
int num_chars = 0;
char **arguments = NULL;
char *line = NULL;
(void)arg_count;

while (1)
{
arguments = NULL;
if (isatty(STDIN_FILENO))
write(1, "$ ", 2);
num_chars = getline(&line, &line_length, stdin);
if (num_chars == -1)
{
free(line);
line = NULL;
write(STDIN_FILENO, "\n", 1);
break;
}
if (line[num_chars] == '\n')
line[num_chars] = '\0';
if (handle_separator_operator(line, arg_values, env_vars))
continue;
arguments = tokenize_line(line);
if (arguments == NULL || *arguments == NULL)
continue;
if (handle_builtin_commands(arguments, line))
continue;
if ((handle_special_variables(arguments, WEXITSTATUS(exit_status))) == 0)
exit_status = execute_command(arguments, arg_values, env_vars);
}
return (0);
}
