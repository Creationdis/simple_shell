#include "shell.h"

/**
 * execute_command - A function that executes commands.
 * @command: An array of tokens.
 * @argv: A vector of arguments.
 * @env: An array of environment variables.
 * Return: Status.
 */

int execute_command(char **command, char **argv, char **env)
{
pid_t pid;
int status;

pid = fork();
if (pid == -1)
{
exit(EXIT_FAILURE);
}
if (pid == 0)
{
if (command[0][0] == '/')
{
execve(command[0], command, env);
perror("execve");
exit(EXIT_FAILURE);
}
else
{
find_executable(command, argv, env);
if (find_executable(command, argv, env) < 0)
{
perror(command[0]);
exit(EXIT_FAILURE);
}
}
}
else
{
wait(&status);
}
return (status);
}

