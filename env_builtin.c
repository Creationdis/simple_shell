#include <stdio.h>
#include <stdlib.h>

/**
 * env_builtin - function that implements the printenv builtins
 * @args: the parsed arguments
 * Return: 0
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
if (strcmp(args[0], "env") == 0)
{
env_builtin(args);
return (1);
}
