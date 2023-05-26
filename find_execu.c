 #include "shell.h"

/**
 * find_executable - A function that searches for the executable files.
 * @args: An array of tokens (tokenized input).
 * @argv: An array of arguments.
 * @env: An array of environment variables.
 * Return: -1 on failure.
 */
 
int find_executable(char **args, char **argv, char **env)
{
char *path = NULL;
char *path_token = NULL;
char full_path[1024];

path = get_env_var("PATH");
path_token = tokenize_string(path, ":");

while (path_token != NULL)
{
copy_string(full_path, path_token);
string_concatenate(full_path, "/");
string_concatenate(full_path, args[0]);

if (access(full_path, X_OK) == 0)
{
execve(full_path, args, env);
perror(argv[0]);
exit(EXIT_FAILURE);
}
path_token = tokenize_string(NULL, ":");
}
return (-1);
}
