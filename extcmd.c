#include "shell.h"
#include <unistd.h>
#include <sys/wait.h>

/**
 * execute_command - executes a command with its arguments
 * @args: array of strings representing the command and its arguments
 *
 * Return: 0 on success, 1 on failure
 */

int execute_command(char **args)
{
pid_t pid;
int status;

pid = fork();
if (pid == -1)
{
perror("fork");
return (1);
}
else if (pid == 0)
{
/* Child process */
if (execvp(args[0], args) == -1)
{
perror("execvp");
exit(1);
}
}
else
{
/* Parent process */
do {
waitpid(pid, &status, WUNTRACED);
} while (!WIFEXITED(status) && !WIFSIGNALED(status));
}

return (0);
}
