#include "shell.h"

/**
 * find_path - locates the PATH within the global environmen
 * Return: NULL if PATH is not found, or the PATH if found
 */
char *find_path(void)
{
int j = 0;
char **env = environ;
char *path = NULL;

while (*env)
{
if (_strncmp(*env, "PATH=", 5) == 0)
{
path = *env;
while (*path && j < 5)
{
path++;
j++;
}
return (path);
}
env++;
}
return (NULL);
}
