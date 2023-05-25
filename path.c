#include "shell.h"

/**
 * find_full_path - Find the full path of a file.
 * @file_name: The file to search for.
 * Return: A pointer to the full path of the file.
 */

char *find_full_path(char *file_name)
{
char path[BUFSIZE], *path_ptr, **env = environ, *env_paths, *path_token;
int i = 0;

if (access(file_name, F_OK) == 0)
return (file_name);

while (env[i] != NULL)
{
if (our_strncmp(env[i], "PATH=", 5) == 0)
{
env_paths = strdup(env[i] + 5);
path_token = strtok(env_paths, ":");
while (path_token != NULL)
{
path_ptr = strcpy(path, path_token);
path_ptr = strcat(path, "/");
path_ptr = strdup(strcat(path, file_name));
if (access(path_ptr, X_OK) == 0)
{
free(env_paths);
return (path_ptr);
}
free(path_ptr);
path_token = strtok(NULL, ":");
}
free(env_paths);
}
i++;
}

return (NULL);
}
