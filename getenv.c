#include "shell.h"

/**
 * _getenv - Function that gets the value of an environment variable
 * @environ: The array of environment variables
 * @s1: The name of the variable to retrieve
 * Return: The value of the variable, or NULL if not found
 */
char *_getenv(char **environ, char *s1)
{
int i, j;
char *name, *value;

for (i = 0; environ[i]; i++)
{
name = malloc(1024);

for (j = 0; environ[i][j] != '='; j++)
name[j] = environ[i][j];

name[j] = '\0'; 

if (strcmp(name, s1) == 0)
{
value = strdup(environ[i] + j + 1);
free(name);
return (value);
}

free(name);
}

return (NULL);
}

