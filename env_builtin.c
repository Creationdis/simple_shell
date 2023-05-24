#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "shell.h"

/**
 * env_builtin - Function that displays environment variables
 * @args: Array of arguments (not used in this function)
 *
 * This function iterates through the environment variables and displays
 * each one using the printf function. It does not modify the environment variables.
 *
 * Return: Always 0.
 */
int env_builtin(char **args)
{
char **env = environ;

while (*env)
{
printf("%s\n", *env);
env++;
}

return (0);
}

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
