#include "shell.h"

/**
 * change_directory - A function that handles changing the directory.
 * @path: The path of the directory to change to.
 * @args: An array of arguments.
 * Return: 0 on success.
 */

int change_directory(char *path, char **args)
{
char *old_dir = NULL;
char *home_dir = NULL;

old_dir = search_env_var("OLDPWD");
home_dir = search_env_var("HOME");

if (args[1] == NULL)
{
if (chdir(home_dir) != 0)
{
perror("cd");
return (-1);
}
}
else if (compare_strings(args[1], "-") == 0)
{
if (chdir(old_dir) != 0)
{
perror("cd");
return (-1);
}
}
else
{
if (chdir(path) != 0)
{
perror("cd");
return (-1);
}
}

return (0);
}

