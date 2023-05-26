#include "shell.h"

/**
 * handle_separator_operator - A function that handles the ";" separator.
 * @input: The input string.
 * @argv: An array of arguments.
 * @env: An array of environment variables.
 * Return: 0 on success.
 */

int handle_separator_operator(char *input, char **argv, char **env)
{
char *command = tokenize_string(input, ";");
char **arguments = NULL;
char **lines = NULL;
int i = 0, j = 0;

arguments = malloc(sizeof(char *) * 10);
if (arguments == NULL)
{
free(arguments);
return (-1);
}

while (command)
{
arguments[i] = command;
i++;
command = tokenize_string(NULL, ";");
}
arguments[i] = NULL;

while (j < i)
{
lines = NULL;
lines = tokenize_line(arguments[j]);
j++;
execute_command(lines, argv, env);
}

free(arguments);
arguments = NULL;
return (0);
}
