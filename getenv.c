#include "shell.h"

/**
 * search_env_var - A function that the value of an environment variable.
 * @name: The name of the environment variable.
 * Return: The value, NULL if not found.
 */
char *search_env_var(char *name)
{
char **env = environ;
char *env_var;
int i = 0;

while (*env != NULL)
{
env_var = *env;
while (name[i] == env_var[i] && name[i] != '\0' && env_var[i] != '=')
i++;
if (name[i] == '\0' && env_var[i] == '=')
return (&env_var[i + 1]);
env++;
}
return (NULL);
}
