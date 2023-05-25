#include "shell.h"

/**
 * allocate_buffer - Allocate memory for arguments.
 * @num_args: Number of arguments.
 * @command: Command line.
 * Return: Pointer to the allocated argument array.
 */
char **allocate_buffer(int num_args, char *command)
{
char **args, *delimiter = " ", *arg_token;
int i = 0;

args = malloc((num_args + 1) * sizeof(char *));
if (!args)
return (NULL);
arg_token = strtok(command, delimiter);
while (arg_token != NULL)
{
args[i] = _strdup(arg_token);
arg_token = strtok(NULL, delimiter);
i++;
}
args[i] = NULL;
return (args);
}