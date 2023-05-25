#include "shell.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * execute_command - Execute the specified command.
 * @command_line: The command to execute.
 * @executable_name: The name of the executable.
 * Return: The status of the last process.
 */

int execute_command(char *command_line, char *executable_name)
{
pid_t pid;
char **arguments = NULL, **env = environ, *path;
int num_args, status = 0;

if (*command_line != '\0' && *command_line != '#')
{
command_line = remove_comment(command_line);
num_args = countArguments(command_line);
arguments = allocate_arguments(num_args, command_line);
path = find_full_path(arguments[0]);
if (path != NULL)
{
pid = fork();
if (pid == 0)
{
execve(path, arguments, env);
perror(arguments[0]);
}
else if (pid > 0)
waitpid(pid, &status, 0);
else
perror("fork");
}
else
{
write(STDERR_FILENO, executable_name, strlen(executable_name));
write(STDERR_FILENO, ": 1: ", 5);
write(STDERR_FILENO, arguments[0], strlen(arguments[0]));
write(STDERR_FILENO, ": not found\n", 12);
}
if (path != arguments[0])
free(path);
free_arguments(arguments);
}
return (status);
}

