#include "shell.h"

/**
 * builtins - Function that implements the exit and env built-in commands
 * @l: line
 * @args: The arguments
 * @env: The environment variables
 * @exit_status: The exit status
 * Return: void
 */

void builtins(char *l, char **args, char **env, int *exit_status)
{
if (_strcmp(args[0], "exit") == 0)
{
free(args);
free(l);
exit(*exit_status);
}

if (_strcmp(args[0], "env") == 0)
_getenv(env, exit_status);
}
